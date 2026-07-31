// transparent function object

#include <set>
#include <string>
#include <cstdlib>
#include <utility>
#include "nutility.h"    // see the header

class Employee {
public:
    Employee(int id, std::string name) : m_id(id), m_name(std::move(name)) {}
    [[nodiscard]] int get_id() const { return m_id; }
    [[nodiscard]] std::string get_name() const { return m_name; }
private:
    int m_id;
    std::string m_name;
};

[[nodiscard]] bool operator<(Employee const& lhs, Employee const& rhs)
{
    return lhs.get_id() < rhs.get_id();
}

[[nodiscard]] bool operator<(int id, const Employee& e)
{
    return id < e.get_id();
}

[[nodiscard]] bool operator<(const Employee& e, int id)
{
    return e.get_id() < id;
}

int main()
{
    std::set<Employee, std::less<>> myset;

    rfill(myset, 10, [] {return Employee{ rand(), random_name() }; });
    myset.insert(Employee{ 45, "necati" });

    if (auto iter = myset.find(45); iter != myset.end()) {
        std::cout << "found : " << iter->get_id() << ' ' << iter->get_name() << '\n';
    }
    else {
        std::cout << "not found\n";
    }

}
