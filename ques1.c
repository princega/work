#include <stdio.h>
int main(){
    int a, b, result, choice;
    printf("Enter the Value of a > ");
    scanf("%d", &a);
    printf("Enter the Value of b > ");
    scanf("%d", &b);
    printf("Enter your choice:\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Divison\n");
    printf(" >> ");
    scanf("%d", &choice);

    switch (choice){
        case 1: result = a + b;
            printf("The sum of a and b is %d\n", result);
            break;
        case 2: result = a - b;
            printf("The result of subtraction is %d\n", result);
            break;
        case 3: result = a * b;
            printf("The result of multiplication is %d\n", result);
            break;
        case 4: result = a / b;
            printf("The result of divison is %d\n", result);
            break;
    }
    return 0;
}
