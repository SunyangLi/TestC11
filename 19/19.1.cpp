#include <chrono>
#include <iostream>
int main()
{
    std::chrono::milliseconds ms{3};         // 3 毫秒
    std::chrono::microseconds us = 2*ms;     // 6000 微秒
    // 时间间隔周期为 1/30 秒
    std::chrono::duration<double, std::ratio<1, 30>> hz(3.5);
 
    std::cout <<  "3 ms duration has " << ms.count() << " ticks\n"
              <<  "6000 us duration has " << us.count() << " ticks\n"
              <<  "3.5 hz duration has " << hz.count() << " ticks\n";       
}

