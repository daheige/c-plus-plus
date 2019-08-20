#include <iostream>

static int count = 10; /* 全局变量 */

void hello(void);

int main()
{
    while (count--)
    {
        hello();
    }

    return 0;
}

void hello(void)
{
    static int i = 4; //局部静态变量
    i++;
    std::cout << "变量i是" << i;
    std::cout << ",变量count:" << count << std::endl;
}

/**
 * $ ./a.out 
变量i是5,变量count:9
变量i是6,变量count:8
变量i是7,变量count:7
变量i是8,变量count:6
变量i是9,变量count:5
变量i是10,变量count:4
变量i是11,变量count:3
变量i是12,变量count:2
变量i是13,变量count:1
变量i是14,变量count:0
 */