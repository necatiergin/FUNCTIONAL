#include <algorithm>
#include <functional>
#include <iostream>
#include <numeric>
#include <vector>

struct item {
    int price{};
};

int main() 
{
    std::vector<item> items{ {10}, {20}, {30} };

    auto price_of = std::mem_fn(&item::price);

    // Read: transform -> prices
    std::vector<int> prices;
    prices.resize(items.size());
    std::transform(items.begin(), items.end(), prices.begin(), price_of);

    // Sum prices
    int total = std::accumulate(prices.begin(), prices.end(), 0);
    std::cout << "total=" << total << '\n';

    // Write: increase each price by 5
    for (auto& it : items) {
        price_of(it) += 5;  // returns a reference to it.price
    }

    for (const auto& it : items) {
        std::cout << it.price << '\n';
    }
}
