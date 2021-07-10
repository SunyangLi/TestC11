#include <iostream>
#include <string>
using namespace std;

class Test
{
public:
    string text;
    static const int value = 110;
};

int main()
{
    int x = 99;
    const int &y = x;
    decltype(x) a = x;
    decltype(y) b = x;
    decltype(Test::value) c = 0;

    Test t;
    decltype(t.text) d = "hello, world";


//函数声明
int func_int();                 // 返回值为 int
int& func_int_r();              // 返回值为 int&
int&& func_int_rr();            // 返回值为 int&&

const int func_cint();          // 返回值为 const int
const int& func_cint_r();       // 返回值为 const int&
const int&& func_cint_rr();     // 返回值为 const int&&

const Test func_ctest();        // 返回值为 const Test

//decltype类型推导
int n = 100;
decltype(func_int()) a = 0;		
decltype(func_int_r()) b = n;	
decltype(func_int_rr()) c = 0;	
decltype(func_cint())  d = 0;	//这里有坑，返回值带不了const因为是右值
decltype(func_cint_r())  e = n;	
decltype(func_cint_rr()) f = 0;	
decltype(func_ctest()) g = Test();	




    return 0;
}


