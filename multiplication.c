#include <stdio.h>
int multi (int a, int b)
{
    int c=a*b;
    return c;
}
int main ()
{
int result=multi (5,10);
printf ("result is:%d", result);
return 0;
}
