#include <functional>

template<class F, class... Args>
decltype(auto) call(F&& f, Args&&... args)
{
	return std::invoke(std::forward<F>(f), std::forward<Args>(args)...);
}
