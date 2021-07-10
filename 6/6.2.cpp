#include <iostream>
#include <string>
using namespace std;

// template <typename R = int, typename N>
// R func(N arg)
// {
//     return arg;
// }

// int main()
// {
//     auto ret1 = func(520);
//     cout << "return value-1: " << ret1 << endl;

//     auto ret2 = func<double>(52.134);
//     cout << "return value-2: " << ret2 << endl;

//     auto ret3 = func<int>(52.134);
//     cout << "return value-3: " << ret3 << endl;

//     auto ret4 = func<char, int>(100.0);
//     cout << "return value-4: " << ret4 << endl;

//     return 0;
// }

#include <iostream>
#include <string>
using namespace std;

// 函数模板定义  函数moan也可以指定默认的类型
template <typename T=int, typename U = char>
void func(T arg1 = 100, U arg2 = 100)
{
    cout << "arg1: " << arg1 << ", arg2: " << arg2 << endl;
}

int main()
{
    // 模板函数调用
    func('a');
    func(97, 'a');
     func();    //编译报错
    return 0;
}





