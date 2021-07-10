#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

void f()
{
    cout << "print 1000 stars ...." << endl;
    for (int i = 0; i < 1000; ++i)
    {
        cout << "*";
    }
    cout << endl;
}

int main()
{
    auto t1 = steady_clock::now();
    f();
    auto t2 = steady_clock::now();

    // 整数时长：要求 duration_cast
    auto int_ms = duration_cast<chrono::milliseconds>(t2 - t1);
    //auto int_ms=t2-t1;

    // 小数时长：不要求 duration_cast
    duration<double, ratio<1, 1000>> fp_ms = t2 - t1;

    cout << "f() took " << fp_ms.count() << " ms, "
        << "or " << int_ms.count() << " whole milliseconds\n";
}

