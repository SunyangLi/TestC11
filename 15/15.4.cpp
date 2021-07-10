#include <iostream>
#include <string>
#include <memory>
#include<cstring>
using namespace std;

int main()
{
    int len = 128;
    shared_ptr<char> ptr(new char[len]);
    // 得到指针的原始地址
    char* add = ptr.get();
    memset(add, 0, len);
    strcpy(add, "我是要成为海贼王的男人!!!");
    cout << "string: " << add << endl;
    
    shared_ptr<int> p(new int);
    *p = 100;
    cout << *p.get() << "  " << *p << endl;
    
    return 0;
}

