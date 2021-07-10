#include <chrono>
#include <iostream>
using namespace std;

using Clock = chrono::high_resolution_clock;
using Ms = chrono::milliseconds;
using Sec = chrono::seconds;
template<class Duration>
using TimePoint = chrono::time_point<Clock, Duration>;

void print_ms(const TimePoint<Ms>& time_point)
{
    std::cout << time_point.time_since_epoch().count() << " ms\n";
}

int main()
{
    TimePoint<Sec> time_point_sec(Sec(6));
    // 无精度损失, 可以进行隐式类型转换
    TimePoint<Ms> time_point_ms(time_point_sec);
    print_ms(time_point_ms);    // 6000 ms

    time_point_ms = TimePoint<Ms>(Ms(6789));
    // error，会损失精度，不允许进行隐式的类型转换
    //TimePoint<Sec> sec(time_point_ms);

    // 显示类型转换,会损失精度。6789 truncated to 6000
    time_point_sec = std::chrono::time_point_cast<Sec>(time_point_ms);
    print_ms(time_point_sec); // 6000 ms
}
