#include<iostream>
#include<string>
using namespace std;
void test1()
{
    // string str = "D:\hello\world\test.text";//在g++ 變一下會報錯原因是轉移
    // cout << str << endl;
    string str1 = "D:\\hello\\world\\test.text";
    cout << str1 << endl;
    string str2 = R"(D:\hello\world\test.text)";
    cout << str2 << endl;
    cout<<"tetttttttt"<<endl;

}
void test2()
{
      string str = "<html>\
        <head>\
        <title>\
        海贼王\
        </title>\
        </head>\
        <body>\
        <p>\
        我是要成为海贼王的男人!!!\
        </p>\
        </body>\
        </html>";
    cout << str << endl;
}

void test3()
{
    string str = R"(<html>
        <head>
        <title>
        海贼王
        </title>
        </head>
        <body>
        <p>
        我是要成为海贼王的男人!!!
        </p>
        </body>
        </html>)";
    cout << str << endl;



}



int main()
{
    test3();

    return 0;
}

