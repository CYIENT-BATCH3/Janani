//static 
#include <stdio.h>

int main() {
    int a[3][3]={{'0','1'},{'1','0'},{'2','2'}}; //dimension array syntax
    int r,cl;
    for(int i=0;i<2;i++)
    {
        puts("\n");
        for(int k=0;k<2;k++)
        {
            printf("%d\t",a[i][k]);
        }
    }
    return 0;
}