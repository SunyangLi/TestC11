// #include <iostream>
// using namespace std;

// template <typename T, typename U>
// // 返回类型后置语法
// auto add(T t, U u) -> decltype(t+u) 
// {
//     return t + u;
// }

// int main()
// {
//     int x = 520;
//     double y = 13.14;
//     // auto z = add<int, double>(x, y);
//     auto z = add(x, y);		// 简化之后的写法
//     cout << "z: " << z << endl;
//     return 0;
// }
#include <iostream>
using namespace std;

int& test(int &i)
{
    return i;
}

double test(double &d)
{
    d = d + 100;
    return d;
}
//decltype 用与函数重载特别有用
template <typename T>
// 返回类型后置语法
auto myFunc(T& t) -> decltype(test(t))
{
    return test(t);
}

int main()
{
    int x = 520;
    double y = 13.14;
    // auto z = myFunc<int>(x);
    auto z = myFunc(x);             // 简化之后的写法
    cout << "z: " << z << endl;

    // auto z = myFunc<double>(y);
    auto z1 = myFunc(y);            // 简化之后的写法
    cout << "z1: " << z1 << endl;
    return 0;
}





