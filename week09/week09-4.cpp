#include <stdio.h>

int main()
{
    int a = 99, b = 34;   // 設定 a 與 b 的值
    printf("交換前 a: %d b: %d\n", a, b);

    int temp = a;   // 用 temp 暫存 a 的值
    a = b;          // 把 b 放進 a
    b = temp;       // 把原本 a 的值放進 b

    printf("交換後 a: %d b: %d\n", a, b);
}
