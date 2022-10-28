#include <stdio.h>
int main(){
    float a;
    int b, right;
    printf("Enter the number in float > ");
    scanf("%f", &a);

    b = a;
    right = b%10;
    printf("The right most digit: %d\n", right);
    return 0;

}
