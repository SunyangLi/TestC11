#include <iostream>
#include <memory>
#include<functional>
using namespace std;
// 删除器
/*
1.shared_ptr包含一个 原本指针 和 引用计数。 这个指针就是你例子里的&p. 而引用计数，计算这个shared_ptr还被多少人使用，为0的时候，调用删除器。
2.删除器这个东西，如果用户不定义，也会有个默认的删除器。比如 [](void* ptr){delete ptr}
其他的使用场景，比如如果ptr不是指向个object，而是一个object的数组。那么构造shared_ptr时候就得自己传入shared_ptr(ptr, [](void*){delete [] ptr})

作者：尤不二
链接：https://www.zhihu.com/question/31200599/answer/51519796
来源：知乎
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
*/
// // 通过构造函数初始化对象
// unique_ptr<int> ptr1(new int(10));
// // error, 不允许将一个unique_ptr赋值给另一个unique_ptr
// unique_ptr<int> ptr2 = ptr1;

unique_ptr<int> func()
{
    return unique_ptr<int>(new int(520));
}
shared_ptr<int> ptr1(new int(10), [](int*p) {delete p; });	// ok
//unique_ptr<int> ptr1(new int(10), [](int*p) {delete p; });	// error

int main()
{
    using func_ptr = void(*)(int*);
    //unique_ptr<int, func_ptr> ptr1(new int(10), [](int*p) {delete p; });
    unique_ptr<int,function<void(int*)>> ptr1(new int(10),[](int*p) {delete p; });

    return 0;
}




// int main()
// {
//     // 通过构造函数初始化
//     unique_ptr<int> ptr1(new int(10));
//     // 通过转移所有权的方式初始化
//     unique_ptr<int> ptr2 = move(ptr1);
//     unique_ptr<int> ptr3 = func();
    
//     int *ptr5=new int(3);
//     shared_ptr<int> ptr4(ptr5);
//     cout<<ptr4.use_count()<<endl;

//     return 0;
// }






