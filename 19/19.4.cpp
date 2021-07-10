#include <chrono>
#include <iostream>
using namespace std;
using namespace std::chrono;
int main()
{
    // 获取开始时间点
    steady_clock::time_point start = steady_clock::now();
    // 执行业务流程
    cout << "print 1000 stars ...." << endl;
    for (int i = 0; i < 10000; ++i)
    {
        cout << "*";
    }
    cout << endl;
    // 获取结束时间点
    steady_clock::time_point last = steady_clock::now();
    // 计算差值
    auto dt = last - start;
    cout << "总共耗时: " << dt.count() << "纳秒" << endl;
}

