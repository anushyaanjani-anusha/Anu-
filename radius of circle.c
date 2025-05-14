#include <stdio.h>
# define PI 3.1416
int main(){
    float radius, area;
    printf("enter the radius of the circle:");
    scanf ("%f", &radius);
    area=PI* radius *radius;
    printf("the area of circle=%. 2f\n", area);
    return 0;
}
