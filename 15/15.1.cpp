// #include <iostream>
// #include <memory>
// using namespace std;

// int main()
// {
//     // 使用智能指针管理一块 int 型的堆内存
//     shared_ptr<int> ptr1(new int(520));
//     cout << "ptr1管理的内存引用计数: " << ptr1.use_count() << endl;
//     // 使用智能指针管理一块字符数组对应的堆内存
//     shared_ptr<char> ptr2(new char[12]);
//     cout << "ptr2管理的内存引用计数: " << ptr2.use_count() << endl;
//     // 创建智能指针对象, 不管理任何内存
//     shared_ptr<int> ptr3;
//     cout << "ptr3管理的内存引用计数: " << ptr3.use_count() << endl;
//     // 创建智能指针对象, 初始化为空
//     shared_ptr<int> ptr4(nullptr);
//     cout << "ptr4管理的内存引用计数: " << ptr4.use_count() << endl;

//     int *p = new int;
//     shared_ptr<int> p1(p);
//     shared_ptr<int> p2(p); // error, 编译不会报错, 运行会出错

//     return 0;
// }
#include <iostream>
#include <memory>
using namespace std;

int main()
{
    // 使用智能指针管理一块 int 型的堆内存, 内部引用计数为 1
    
    shared_ptr<int> ptr1(new int(520));
    cout << "ptr1管理的内存引用计数: " << ptr1.use_count() << endl;
    //调用拷贝构造函数
    shared_ptr<int> ptr2(ptr1);
    cout << "ptr2管理的内存引用计数: " << ptr2.use_count() << endl;
    shared_ptr<int> ptr3 = ptr1;
    cout << "ptr3管理的内存引用计数: " << ptr3.use_count() << endl;
    //调用移动构造函数
    shared_ptr<int> ptr4(std::move(ptr1));
    cout << "ptr4管理的内存引用计数: " << ptr4.use_count() << endl;
    std::shared_ptr<int> ptr5 = std::move(ptr2);
    cout << "ptr5管理的内存引用计数: " << ptr5.use_count() << endl;

    return 0;
}


