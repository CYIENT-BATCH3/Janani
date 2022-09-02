CAR MANUFACTURE:
#include <stdio.h>

int main() {
    int p[60];
    int i,plant,n=20;
    int vin1=186;
    int vin2=300;
    int vin3=400;
    printf("entre the plant:");
    scanf("%d",&plant);
    
    if(plant==1)
    {
        for(i=0;i<20;i++)
        {
            p[i]=vin1;
            vin1++;
        }
    }
    if(plant==2)
    {
        for(i=0;i<20;i++)
        {
            p[i]=vin2;
            vin2++;
        }
    }
    if(plant==3)
    {
        for(i=0;i<20;i++)
        {
            p[i]=vin3;
            vin3++;
        }
    }
    for(i=0;i<20;i++)
    {
        printf("VIN of vehicle manufacure at EC=1CYLE10PZYELO9%d\n",p[i]);
    
    }
    
    
    return 0;
}