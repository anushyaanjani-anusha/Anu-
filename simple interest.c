#include <stdio.h>
int y, p, r, output;
int main() {
    printf("enter the year \n");
    scanf ("%d", &y);
    printf("enter the amount \n");
    scanf ("%d", p);
    printf ("enter the rate of interest \n");
    scanf("%d", &r);
    output=(p*y*r)/100;
    printf("the simple interest is %d", output);
}
