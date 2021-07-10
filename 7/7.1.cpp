#include <iostream>
#include <functional>
#include <map>
using namespace std;

template <typename T>
struct MapCopy
{
    typedef map<int, T> type;	// error, 语法错误
};

template <typename T>
using mymap = map<int, T>;


// template <typename T>
// // 定义外敷类
// struct MyMap
// {
//     typedef map<int, T> type;
// };

// int main(void)
// {
//     MyMap<string>::type m;
//     m.insert(make_pair(1, "luffy"));
//     m.insert(make_pair(2, "ace"));

//     MyMap<int>::type m1;
//     m1.insert(1, 100);
//     m1.insert(2, 200);

//     return 0;
// }

#include <iostream>
#include <functional>
#include <map>
using namespace std;

template <typename T>
using mymap = map<int, T>;

int main(void)
{
    // map的value指定为string类型
    mymap<string> m;
    m.insert(make_pair(1, "luffy"));
    m.insert(make_pair(2, "ace"));

    // map的value指定为int类型
    mymap<int> m1;
    m1.insert(1, 100);
    m1.insert(2, 200);

    return 0;
}





