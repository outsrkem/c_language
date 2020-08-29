#include <stdio.h>
#include <math.h>
#include <time.h>

#define BOOL int
#define TRUE 1
#define FALSE 0
BOOL flag = TRUE;
/**
 * 求100以内的素数。
 * 编译命令：指定c99标准，指定sqrt函数库位置
 * gcc -std=c99 libraryNum.c -lm
 * @return
 */
int main(void) {
    int i,j;
    for (i = 2; i <= 1000000; i++) {
        for (j = 2; j < sqrt(i); j++) {
            if (i % j == 0) {
                flag = FALSE;
                break;
            }
        }

        if (flag) {
            printf("%d\n", i);
        }
        flag = TRUE;

    }

    return 0;
}
