#include <iostream>
using namespace std;

void func(char *p)
{
    cout << "void func(char *p)" << endl;
}

void func(int p)
{
    cout << "void func(int p)" << endl;
}
void test1()
{
    func(nullptr);   // 想要调用重载函数 void func(char *p)  在g++出问题
    func(250); // 想要调用重载函数 void func(int p)
}
void test2()
{
    int *ptr1 = nullptr;
    char *ptr2 = nullptr;
    double *ptr3 = nullptr;
    func(nullptr);  //使用NULL报错
    func(250);
}

int main()
{
    test1();

    return 0;
}
