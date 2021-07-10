#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(void)
{
    map<int, string> m{
        {1, "lucy"},{2, "lily"},{3, "tom"}
    };

    // 基于范围的for循环方式
    for (auto& it : m)
    {
        cout << "id: " << it.first << ", name: " << it.second << endl;
    }

    // 普通的for循环方式
    for (auto it = m.begin(); it != m.end(); ++it)
    {
        cout << "id: " << it->first << ", name: " << it->second << endl;
    }

    return 0;
}
