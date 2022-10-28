#include <stdio.h>
int main(){
    float first, second, third, fourth;
    int sum, num, firstint, secondint, thirdint , fourthint, last;
    printf("Enter your number > ");
    scanf("%d", &num);

    first = num / 10000;
    firstint = first;

    second = num / 1000;
    secondint = second;
    secondint = secondint%10;

    third = num / 100;
    thirdint = third;
    thirdint = thirdint%10;

    fourth = num / 10;
    fourthint = fourth;
    fourthint = fourthint%10;

    last = num % 10;
    sum = firstint+secondint+thirdint+fourthint+last;

    printf("The sum of %d, %d, %d, %d, %d is %d.\n",firstint, secondint, thirdint, fourthint, last, sum);

    return 0;

}
