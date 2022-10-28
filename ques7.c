#include <stdio.h>
int main(){
    int year;
    printf("Enter the year (in YYYY format) > ");
    scanf("%d", &year);
    // For normal years (ex. 1998)
    if (year%4 == 0 && year%100 != 0)
        printf("The given year is a Leap year.\n");
    // For years ending with 00 (ex.4000)
    else if (year%400 == 0 && year%100 == 0)
        printf("The given year is a Leap year.\n");
    else{
        printf("The given year is not a Leap year.\n");
    }
    return 0;
}
