// test.cpp
#include <iostream>
#include <vector>
using namespace std;

// template <typename T>
// class Base
// {
// public:
//     void traversal(T& t)
//     {
//         auto it = t.begin();
//         for (; it != t.end(); ++it)
//         {
//             cout << *it << " ";
//         }
//         cout << endl;
//     }
// };


// int main()
// {
//     vector<int> v{ 1,2,3,4,5,6,7,8,9 };
//     Base<vector<int>> b;
//     b.traversal(v);

//     return 0;
// }

#include <iostream>
using namespace std;

template <typename T=int>	// C++98/03不支持这种写法, C++11中支持这种写法
void func(T t)
{
    cout << "current value: " << t << endl;
}

int main()
{
    func(100);
    return 0;
}





