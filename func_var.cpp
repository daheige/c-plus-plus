#include <iostream>
using namespace std;

//全局变量
int g;

// 在 C++ 中，有两种简单的定义常量的方式：

// 使用 #define 预处理器。
// 使用 const 关键字。
#define x 12;
#define LENGTH 10
#define WIDTH 5
#define NEWLINE '\n'

const int LENGTH2 = 10;

/**
 * 数据类型修饰符：

signed
unsigned
long
short
修饰符 signed、unsigned、long 和 short 可应用于整型，signed 和 unsigned 可应用于字符型，long 可应用于双精度型。

修饰符 signed 和 unsigned 也可以作为 long 或 short 修饰符的前缀。例如：unsigned long int。

C++ 允许使用速记符号来声明无符号短整数或无符号长整数。您可以不写 int，只写单词 unsigned、short 或 unsigned、long
int 是隐含的。例如，下面的两个语句都声明了无符号整型变量。

unsigned x;
unsigned int y;
限定符	含义
const	const 类型的对象在程序执行期间不能被修改改变。
volatile	修饰符 volatile 告诉编译器不需要优化volatile声明的变量，让程序可以直接从内存中读取变量。对于一般的变量编译器会对变量进行优化，将内存中的变量值放在寄存器中以加快读写效率。
restrict	由 restrict 修饰的指针是唯一一种访问它所指向的对象的方式。只有 C99 增加了新的类型限定符 restrict。

 */
int main()
{
    int a, b, c;
    a = 12;
    b = 20;
    c = a + b;
    g = a + b * 2;

    cout << c << endl; //打印并换行
    cout << g;         //打印g

    cout << 87 << endl;
    cout << 0213 << endl;
    cout << 0x4b << endl; //16进制
    cout << 30u << endl;
    cout << 30ul << endl;
    cout << x;
    cout << NEWLINE;
    cout << LENGTH;

    cout << LENGTH2 << NEWLINE; //-15536 50000

    short int i;          // 有符号短整数
    short unsigned int j; // 无符号短整数

    j = 50000;

    i = j;
    cout << i << " " << j;

    return 0;
}
/**
32
5287
139
75
30
30
 */