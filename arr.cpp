#include <iostream>
using namespace std;

int main()
{
    int i;
    int arr[10]; //声明数组
    for (i = 0; i < 10; i++)
    {
        arr[i] = i + 2;
    }

    int j;
    for (j = 0; j < 10; j++)
    {
        cout << "当前i: " << arr[j] << endl;
    }
    return 0;
}