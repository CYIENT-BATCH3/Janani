ENUM:
#include <stdio.h>

   enum week{Mon, Tue, Wed, Thur, Fri, Sat, Sun};
 
int main()
{
    enum week day;
    day = Mon;
    printf("%d",day);
    return 0;

}