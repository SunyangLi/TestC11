#include <iostream>
using namespace std;

void printValue(int &i)
{
    cout << "l-value: " << i << endl;
}

void printValue(int &&i)
{
    cout << "r-value: " << i << endl;
}

void forward(int &&k)
{
    printValue(k);
}

int main()
{
    int i = 520;
    printValue(i);
    printValue(1314);
    forward(250);

    return 0;
};


