#include <iostream>
using namespace std;

class Test
{
public:
    Test(int) {}

private:
    Test(const Test &) = delete;
};

int main(void)
{
    Test t1(520);
    //Test t2 = 520; //拷贝构造被声明成私有的，禁止拷贝
    Test t3 = {520};
    Test t4{520};
    int a1 = {1314};
    int a2{1314};
    int arr1[] = {1, 2, 3};
    int arr2[]{1, 2, 3};

    int *p = new int{520};
    double b = double{52.134};
    int *array = new int[3]{1, 2, 3};

    return 0;
}
