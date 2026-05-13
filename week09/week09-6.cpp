#include <stdio.h>

int main()
{
    // 陣列初始化
    int a[10] = {11, 22, 33, 44, 55, 66, 77, 88, 97, 99};

    for (int i = 0; i < 10; i++)
        printf("%d ", a[i]);   // 印出陣列

    printf("\n");

    for (int k = 0; k < 10 - 1; k++) {   // Bubble Sort
        for (int i = 0; i < 10 - 1; i++) {   // 兩兩比較
            if (a[i] < a[i + 1]) {   // 前面小於後面
                int temp = a[i];     // 暫存
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
    }

    // 排序結果
    for (int i = 0; i < 10; i++)
        printf("%d ", a[i]);   // 印出陣列

    printf("\n");   // 換行
}
