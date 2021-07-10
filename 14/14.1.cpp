#include<iostream>
using namespace std;
class Test
{
public:
    Test(){}
    
};
Test x;
int main()
{
    Test t;
    //decltype(x) && v1 = t;          // error
    decltype(x) && v2 = move(t);    // ok
    return 0;
}


