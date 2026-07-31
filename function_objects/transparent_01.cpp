#include <functional>

template<> 
struct std::less<void> {
    using is_transparent = void; // enables heterogeneous lookup

    template<class L, class R>
    constexpr auto operator()(L&& lhs, R&& rhs) const
        noexcept(noexcept(std::forward<L>(lhs) < std::forward<R>(rhs)))
        -> decltype(std::forward<L>(lhs) < std::forward<R>(rhs))
    {
        return std::forward<L>(lhs) < std::forward<R>(rhs);
    }
};
