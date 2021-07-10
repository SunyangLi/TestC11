#include <iostream>
using namespace std;

template<typename T>
void printValue(T& t)
{
    cout << "l-value: " << t << endl;
}

template<typename T>
void printValue(T&& t)
{
    cout << "r-value: " << t << endl;
}

template<typename T>
void testForward(T && v)
{
    printValue(v);
    printValue(move(v));
    printValue(forward<T>(v));
    cout << endl;
}

int main()
{
    testForward(520);
    int num = 1314;
    testForward(num);
    testForward(forward<int>(num));
    testForward(forward<int&>(num));
    testForward(forward<int&&>(num));

    return 0;
}
/*
testForward(520); 函数的形参为未定引用类型 T&&，实参为右值，初始化后被推导为一个右值引用
printValue(v); 已命名的右值 v，编译器会视为左值处理，实参为左值
printValue(move(v)); 已命名的右值编译器会视为左值处理，通过 move 又将其转换为右值，实参为右值
printValue(forward<T>(v));forward 的模板参数为右值引用，最终得到一个右值，实参为 ``右值`
testForward(num); 函数的形参为未定引用类型 T&&，实参为左值，初始化后被推导为一个左值引用
printValue(v); 实参为左值
printValue(move(v)); 通过 move 将左值转换为右值，实参为右值
printValue(forward<T>(v));forward 的模板参数为左值引用，最终得到一个左值引用，实参为左值
testForward(forward<int>(num));forward 的模板类型为 int，最终会得到一个右值，函数的形参为未定引用类型 T&& 被右值初始化后得到一个右值引用类型
printValue(v); 已命名的右值 v，编译器会视为左值处理，实参为左值
printValue(move(v)); 已命名的右值编译器会视为左值处理，通过 move 又将其转换为右值，实参为右值
printValue(forward<T>(v));forward 的模板参数为右值引用，最终得到一个右值，实参为右值
testForward(forward<int&>(num));forward 的模板类型为 int&，最终会得到一个左值，函数的形参为未定引用类型 T&& 被左值初始化后得到一个左值引用类型
printValue(v); 实参为左值
printValue(move(v)); 通过 move 将左值转换为右值，实参为右值
printValue(forward<T>(v));forward 的模板参数为左值引用，最终得到一个左值，实参为左值
testForward(forward<int&&>(num));forward 的模板类型为 int&&，最终会得到一个右值，函数的形参为未定引用类型 T&& 被右值初始化后得到一个右值引用类型
printValue(v); 已命名的右值 v，编译器会视为左值处理，实参为左值
printValue(move(v)); 已命名的右值编译器会视为左值处理，通过 move 又将其转换为右值，实参为右值
printValue(forward<T>(v));forward 的模板参数为右值引用，最终得到一个右值，实参为右值


作者: 苏丙榅
链接: https://subingwen.cn/cpp/move-forward/#2-forward
来源: 爱编程的大丙
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
*/


