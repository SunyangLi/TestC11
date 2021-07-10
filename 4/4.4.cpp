#include <iostream>
using namespace std;
// R->返回值类型, T->参数1类型, U->参数2类型
template <typename R, typename T, typename U>
R add(T t, U u)
{
    return t + u;
}

int main()
{
    int x = 520;
    double y = 13.14;
    // auto z = add<decltype(x + y), int, double>(x, y);
    auto z = add<decltype(x + y)>(x, y);	// 简化之后的写法
    cout << "z: " << z << endl;
    return 0;
}


