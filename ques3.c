#include <stdio.h>
int main(){
    int km;
    long m, ft, in, cm;
    printf("Enter the distance between the two cities (in KM) > ");
    scanf("%d", &km);

    m = km * 1000;
    in = km * 39370;
    ft = km * 3281;
    cm = km * 100000;

    printf("The given distance (%d Kms) in meters is %ld.\n",km,m);
    printf("The given distance in inches is %ld\n", in);
    printf("%d Kms in Feet are %ld\n", km,ft);
    printf("%d Kms in Centi-meters are %ld\n",km, cm);

    return 0;
}
