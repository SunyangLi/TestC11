#include <iostream>
#include <vector>
using namespace std;

class Test
{
public:
    int num;
};

int main() {
    const Test obj;
    //带有括号的表达式
    decltype(obj.num) a = 0;
    decltype((obj.num)) b = a;
    //加法表达式
    int n = 0, m = 0;
    decltype(n + m) c = 0;
    decltype(n = n + m) d = n;
    return 0;
}


