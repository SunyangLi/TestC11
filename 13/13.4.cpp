template <typename T>
void f(T &&param)
{
}
template <typename T>
void f1(const T &&param)
{
}

// int main()
// {
//     f(10);
// int x = 10;
// f(x);
// f1(x);
//     return 0;
// }
int main()
{
    // int x = 520, y = 1314;
    // auto&& v1 = x;
    // auto&& v2 = 250;
    // decltype(x)&& v3 = y;   // error
    // cout << "v1: " << v1 << ", v2: " << v2 << endl;
    // return 0;
    int &&a1 = 5;
    auto &&bb = a1;
    auto &&bb1 = 5;

    int a2 = 5;
    int &a3 = a2;
    auto &&cc = a3;
    auto &&cc1 = a2;

    const int &s1 = 100;
    const int &&s2 = 100;
    auto &&dd = s1;
    auto &&ee = s2;  //常量右值引用


    const auto &&x = 5;   //const +auto+&& 只要式const+推导+&&,表示的就式右值引用，不是那种推导了
};
