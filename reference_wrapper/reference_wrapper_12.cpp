#include <type_traits>
#include <utility>     // std::forward
#include <functional>  // std::invoke (C++17)

// A minimal educational reference_wrapper.
// - stores a T* (never owns)
// - copyable, assignable
// - get() returns T&
// - implicit conversion to T&
// - operator() forwards calls to the referred object (if callable)

template <class T>
class ReferenceWrapper {
    static_assert(!std::is_reference_v<T>,
        "T must not be a reference type (use T, not T&).");
public:
    using type = T;
    // Construct from T lvalue only.
    // This prevents binding to temporaries.
    constexpr ReferenceWrapper(T& obj) noexcept
        : mp(std::addressof(obj)) {
    }

    // Access the referred object.
    constexpr T& get() const noexcept 
    {
        return *mp;
    }

    // Implicit conversion to T& (like std::reference_wrapper).
    constexpr operator T& () const noexcept 
    {
        return get();
    }

    // If T is callable, allow calling through the wrapper.
    // Example: ReferenceWrapper<Functor> rw(f); rw(args...);
    template <class... Args>
    constexpr decltype(auto) operator()(Args&&... args) const
        noexcept(noexcept(std::invoke(get(), std::forward<Args>(args)...)))
    {
        return std::invoke(get(), std::forward<Args>(args)...);
    }

private:
    T* mp;
};

// Helper functions similar to std::ref/std::cref.
// Return wrappers by value.

template <class T>
constexpr ReferenceWrapper<T> fref(T& obj) noexcept 
{
    return ReferenceWrapper<T>(obj);
}

template <class T>
constexpr ReferenceWrapper<const T> fcref(const T& obj) noexcept 
{
    return ReferenceWrapper<const T>(obj);
}
