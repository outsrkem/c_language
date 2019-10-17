#include <stdio.h>
 // C 语言支持递归，即一个函数可以调用其自身
double factorial(unsigned int i)
{
   if(i <= 1)
   {
      return 500;
   }
   return i * factorial(i - 1);
}
int  main()
{
    int i = 15;
    printf("%d 的阶乘为 %f\n", i, factorial(i));
    return 0;
}