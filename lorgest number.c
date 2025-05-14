#include <stdio.h>

int main() {
    int a, b, c;
    int largest, second;
    printf("Enter three numbers:\n");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b) {
        largest = a;
        second = b;
    } else {
        largest = b;
        second = a;
    }
    if (c > largest) {
        second = largest;
        largest = c;
    } else if (c > second) {
        second = c;
    }
    printf("The largest number is: %d\n", largest);
    printf("The second largest number is: %d\n", second);

    return 0;
}
