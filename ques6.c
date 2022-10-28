//program to find largest and smallest number in four given numbers
#include <stdio.h>
int main(){
    int a, b, c, d;
    int great, small;
    printf("Enter the value of a > ");
    scanf("%d", &a);
    printf("Enter the value of b > ");
    scanf("%d", &b);
    printf("Enter the value of c > ");
    scanf("%d", &c);
    printf("Enter the value of d > ");
    scanf("%d", &d);

//checking the greatest number
    if (a > b && a > c && a > d)
        great = a;
    else if (b > a && b > c && b > d)
        great = b;
    else if (c > a && c > b && c > d)
        great = c;
    else {
        great = d;
    }

//checking the smallest number
    if (a < b && a < c && a < d)
        small = a;
    else if (b < a && b < c && b < d)
        small = b;
    else if (c < a && c < b && c < d)
        small = c;
    else {
        small = d;
    }

    printf("The largest number is %d.\n", great);
    printf("The smallest number is %d.\n", small);

    return 0;
}
