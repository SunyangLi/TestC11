// #include <list>
// using namespace std;

// template <class T>
// class Container
// {
// public:
//     void func(T& c)
//     {
//         for (m_it = c.begin(); m_it != c.end(); ++m_it)
//         {
//             cout << *m_it << " ";
//         }
//         cout << endl;
//     }
// private:
//     ??? m_it;  // 这里不能确定迭代器类型
// };

// int main()
// {
//     const list<int> lst;
//     Container<const list<int>> obj;
//     obj.func(lst);
//     return 0;
// }
#include <list>
#include <iostream>
using namespace std;

template <class T>
class Container
{
public:
    void func(T& c)
    {
        for (m_it = c.begin(); m_it != c.end(); ++m_it)
        {
            cout << *m_it << " ";
        }
        cout << endl;
    }
private:
    decltype(T().begin()) m_it;  // 这里不能确定迭代器类型
};

int main()
{
    const list<int> lst{ 1,2,3,4,5,6,7,8,9 };
    Container<const list<int>> obj;
    obj.func(lst);
    return 0;
}





