#include <stdio.h>
 // C ����֧�ֵݹ飬��һ���������Ե���������
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
    printf("%d �Ľ׳�Ϊ %f\n", i, factorial(i));
    return 0;
}