#include <iostream>
using namespace std;
void test1()
{
    auto x = 3.14; // x 是浮点型 double
    auto y = 520;  // y 是整形 int
    auto z = 'a';  // z 是字符型 char
    // auto nb;            // error，变量必须要初始化
    // auto double nbl;    // 语法错误, 不能修改数据类型
}
// int func(auto a, auto b)	// error
// {
//     cout << "a: " << a <<", b: " << b << endl;
// }
class Test
{
    //auto v1 = 0;                    // error
    //static auto v2 = 0;             // error,类的静态非常量成员不允许在类内部直接初始化
    static const auto v3 = 10; // ok
};

int func1()
{
    int array[] = {1, 2, 3, 4, 5}; // 定义数组
    auto t1 = array;               // ok, t1被推导为 int* 类型
    // auto t2[] = array;          // error, auto无法定义数组
    // auto t3[] = {1,2,3,4,5};;   // error, auto无法定义数组
    return 1;
}

// #include <iostream>
// #include <string>
// using namespace std;

// class T1
// {
// public:
//     static int get()
//     {
//         return 10;
//     }
// };

// class T2
// {
// public:
//     static string get()
//     {
//         return "hello, world";
//     }
// };

// template <class A>
// void func(void)
// {
//     auto val = A::get();
//     cout << "val: " << val << endl;
// }

// int main()
// {
//     func<T1>();
//     func<T2>();
//     return 0;
// }

#include <iostream>
#include <string>
using namespace std;

class T1
{
public:
    static int get()
    {
        return 0;
    }
};

class T2
{
public:
    static string get()
    {
        return "hello, world";
    }
};

template <class A, typename B> // 添加了模板参数 B
void func(void)
{
    B val = A::get();
    cout << "val: " << val << endl;
}
int test2()
{
    func<T1, int>();    // 手动指定返回值类型 -> int
    func<T2, string>(); // 手动指定返回值类型 -> string
    return 0;
}
void test3()
{
    int a = 10;
    decltype(a) b = 99;               // b -> int
    decltype(a + 3.14) c = 52.13;     // c -> double
    decltype(a + b * c) d = 520.1314; // d -> double
}

int main()
{
    test3();
}
