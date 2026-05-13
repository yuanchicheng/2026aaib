#include <stdio.h>

int main()
{
    // 陣列初始化
    int a[10] = {11, 22, 33, 44, 55, 66, 77, 88, 99, 97};

    for (int i = 0; i < 10; i++)
        printf("%d ", a[i]);   // 印出陣列

    printf("\n");

    for (int i = 0; i < 10 - 1; i++) {   // 做回圈
        if (a[i] < a[i + 1]) {   // 如果前面小於後面
            int temp = a[i];     // 暫存
            a[i] = a[i + 1];
            a[i + 1] = temp;
        }
    }

    // 印出交換後結果
    for (int i = 0; i < 10; i++)
        printf("%d ", a[i]);   // 印出陣列

    printf("\n");   // 換行
}
