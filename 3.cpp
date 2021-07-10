#include <iostream>
using namespace std;
void func(const int num) //区分常量和只读量
{
    const int count = 24; //这个是常量
    //int array[num];            // error，num是一个只读变量，不是常量
    int array1[count]; // ok，count是一个常量

    int a1 = 520;
    int a2 = 250;
    const int &b = a1;
    //b = a2;                         // error
    a1 = 1314;
    cout << "b: " << b << endl; // 输出结果为1314
}
void f()
{
}
void test1()
{
    //const int m = f();   // 不是常量表达式，m的值只有在运行时才会获取。
    const int i = 520;   // 是一个常量表达式
    const int j = i + 1; // 是一个常量表达式

    constexpr int l = 520;   // 是一个常量表达式
    constexpr int n = l + 1; // 是一个常量表达式
}

// 此处的constexpr修饰是无效的
// constexpr struct Test
// {
//     int id;
//     int num;
// };

struct Test
{
    int id;
    int num;
};
void test2()
{
    constexpr Test t{1, 2}; //结构体常量一定是对象才可以
    constexpr int id = t.id;
    constexpr int num = t.num;
    // error，不能修改常量
    //t.num += 100;
    cout << "id: " << id << ", num: " << num << endl;
}

//error，不是常量表达式函数
// constexpr void func1()
// {
//     int a = 100;
//     cout << "a: " << a << endl;
// }

// error，不是常量表达式函数 但可以执行
constexpr int func2()
{
    int a = 100;
    return a;
}






constexpr int func3();   //使用constexpr 前面必须声明定义都有 
constexpr int func3()
{
    constexpr int a = 100;
    return a;
}

// error
constexpr int func5()
{
    constexpr int a = 100;
    constexpr int b = 10;
    for (int i = 0; i < b; ++i)
    {
        cout << "i: " << i << endl;
    }
    return a + b;
}

// ok
constexpr int func6()
{
    using mytype = int;
    constexpr mytype a = 100;
    constexpr mytype b = 10;
    constexpr mytype c = a * b;
    return c - (a + b);
}



class Test1
{
public:
    constexpr int func()
    {
        constexpr int var = 100;
        return 5 * var;
    }
};



// struct Person {
//     const char* name;
//     int age;
// };

// // 定义函数模板
// template<typename T>
// constexpr T dispaly(T t) {
//     return t;
// }

// int main()
// {
//     struct Person p { "luffy", 19 };
//     //普通函数
//     struct Person ret = dispaly(p);
//     cout << "luffy's name: " << ret.name << ", age: " << ret.age << endl;

//     //常量表达式函数
//     constexpr int ret1 = dispaly(250);
//     cout << ret1 << endl;

//     constexpr struct Person p1 { "luffy", 19 };
//     constexpr struct Person p2 = dispaly(p1);
//     cout << "luffy's name: " << p2.name << ", age: " << p2.age << endl;
//     return 0;
// }

//constexpr  的构造函数只能用初始化列表附初值
struct Person {
    constexpr Person(const char* p, int age) :name(p), age(age)
    {
    }
    const char* name;
    int age;
};

int main()
{
    constexpr struct Person p1("luffy", 19);
    cout << "luffy's name: " << p1.name << ", age: " << p1.age << endl;
    return 0;
}












