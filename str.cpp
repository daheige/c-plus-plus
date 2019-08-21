#include <iostream>
//c++ string类型
#include <string>

using namespace std;

int main()
{
    //c语言风格，定义字符数组，字符串定义
    char name[] = "daheige";
    cout << name << endl;

    string str = "fefe";

    cout << str << endl;
    cout << "str len: " << str.size() << endl;
    cout << str + "hello" << endl;

    //取地址操作 0x7ffcb13b8810
    // 每一个变量都有一个内存位置，每一个内存位置都定义了可使用连字号（&）运算符访问的地址
    // 它表示了在内存中的一个地址
    cout << &str << endl;

    int *m;
    int n = 12;
    m = &n;

    *m = 123;
    // 输出在指针变量中存储的地址
    cout << "m=" << m << endl; //是一个变量的地址

    //n的值发生了改变
    cout << n << endl;

    // 访问指针中地址的值
    cout << "Value of  *m variable: ";
    cout << *m << endl;

    return 0;
}