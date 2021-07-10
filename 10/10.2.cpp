// #include <iostream>
// #include <set>
// using namespace std;

// int main(void)
// {
//     set<int> st{ 1,2,3,4,5,6 };
//     for (auto &item : st) 
//     {
//         cout << item++ << endl;		// error, 不能给常量赋值
//     }
//     return 0;
// }


#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(void)
{
    map<int, string> m{
        {1, "lucy"},{2, "lily"},{3, "tom"}
    };

    for (auto& item : m)
    {
        // item.first 是一个常量
        item.second+='a';
        cout << "id: " << item.first << ", name: " << item.second << endl;  // error
    }

    return 0;
}





