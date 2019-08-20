//引入数学运算库,可以省略后缀.h
//一般来说.h是c语言头文件标识
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main()
{
    int i = abs(-12);
    cout << "i=" << i << endl;
    cout << "sin(2) = " << sin(2) << endl;

    int m, n;
    //设置种子因子
    srand((unsigned)time(NULL));

    for (m = 0; m < 10; m++)
    {
        n = rand();
        cout << "rnd = " << n << endl;
    }

    return 0;
}

/**
 * $ ./a.out 
i=12
sin(2) = 0.909297
rnd = 1652490620
rnd = 886151538
rnd = 636551328
rnd = 347249675
rnd = 1177558834
rnd = 492724361
rnd = 1461820884
rnd = 1285777540
rnd = 1899712932
rnd = 1816631696
 */