RADIUS GARDEN
#include <stdio.h>

const pi = 3.141;
int main()
{
    float area, radius;
    printf("enter:");
    scanf("%f",&radius);
    area= pi *radius*radius;
    printf("the area to be covered is %4f",area);
    return 0;
}