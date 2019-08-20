#include <iostream>
using namespace std;

//函数声明
int max(int, int);

int main()
{
    int x = max(1, 22);
    cout << "x=" << x << endl;

    return 0;
}

// 函数定义 return_type funcname(argv list)
int max(int a, int b)
{
    if (a > b)
    {
        return a;
    }

    return b;
}