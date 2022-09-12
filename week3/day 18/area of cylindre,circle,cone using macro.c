#include <stdio.h>
#define pi 3.142
int main() {
    // Write C code here
    int rad_circle,rad_cone,rad_cyl,len_cone,height_cyl;
    float area_circle,area_cone,area_cylinder;
    
    printf("enter the radius of circle:");
    scanf("%d",&rad_circle);
    
    area_circle=pi*rad_circle*rad_circle;
    
    
    printf("enter the radius and length of cone:");
    scanf("%d %d",&rad_cone,&len_cone);
    
    
    area_cone=pi*rad_cone*rad_cone+pi*rad_cone*len_cone;
    
   
    
    printf("enter the radius and height of cylinder:");
    scanf("%d %d",&rad_cyl,height_cyl);
    
    area_cylinder=2*pi*rad_cyl*height_cyl+2*pi*rad_cyl*rad_cyl;
    
    
    printf("area of circle=%f\narea of cone=%f\narea of cylinder=%f",area_circle,area_cone,area_cylinder);
    return 0;
}
