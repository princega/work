#include <stdio.h>
int main(){
    int num;
    float first;
    int last, sum,firstint;

    printf("Enter the number > ");
    scanf("%d", &num);

    first = num / 1000;
    firstint = first;

    last = num % 10;

    sum = first + last;
    printf("The First Number: %d\nThe Last Number: %d\n",firstint, last);
    printf("The sum is %d\n", sum);

    return 0;

}
