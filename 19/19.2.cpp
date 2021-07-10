// #include <iostream>
// #include <chrono>
// using namespace std;

// int main()
// {
//     chrono::minutes t1(10);
//     chrono::seconds t2(60);
//     chrono::seconds t3 = t1 - t2;
//     cout << t3.count() << " second" << endl;
// }
#include <iostream>
#include <chrono>
using namespace std;

int main()
{
    chrono::duration<double, ratio<9, 7>> d1(3);
    chrono::duration<double, ratio<6, 5>> d2(1);
    // d1 和 d2 统一之后的时钟周期
    chrono::duration<double, ratio<3, 35>> d3 = d1 - d2;
     cout << d3.count() << " second" << endl;
}


