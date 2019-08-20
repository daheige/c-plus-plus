#include <stdio.h>

//定义类型别名，创建一个新的类型
typedef int feet;

int main()
{
    bool a = false;
    char *name = (char *)"fefe";
    float b = 1.22;
    double c = 1.23;
    wchar_t *d = (wchar_t *)"fefefefe"; //宽字符型

    printf("name = %s b = %f c = %f\n", name, b, c);

    feet dis = 12;
    printf("%d", dis);

    //定义枚举
    enum color
    {
        red,
        green,
        blue
    } c;
    c = blue;
    printf("%d", c);
    return 0;
}