#include <iostream>
#include <stdio.h>

using namespace std;
int main(void)
{
    int a = INT32_MAX;
    int b = 10;
    //cout << ((a+b) < a) << endl;
    if (a+b < a)
        printf("溢出\n");
    else
        printf("合法\n");
    cout << a+b << endl;
    cout << b << endl;
    //printf("%d\n", a);
    //printf("%d\n", a+b);

    return 0;
}