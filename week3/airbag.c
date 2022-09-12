//
ALGORITHM:
1.it have 3 sensor PR-PC-PL each sensor have 50 samples.
2.each sensor send data for every 1ms.
3.microcontroller collect the data for every 5ms.
4,sensor<0x05to>0xF5 it means noise or else noise less
5.in data mpre than 0x55 it means airbag is deployed.
//
#include<stdio.h>
static int d=0;//declaring global variable
int fun_data(int *f_p_data);//function prototype
int main()
{
                                        int rev=0;//declaring variable
                                        setbuf(stdout,NULL);
                                        int pr[50],pl[50],pc[50],f_p_data[50];//declaring arrays
                                        //int choice1=0x05,choice2=0xF5;

//loop for assigning elements to array
                                        for(int i=0;i<50;i++)
                                                    {
                                                    pr[i]=i+0x55;
                                                    }
                                        printf("pr time stamp                  pr_data\n");
    for(int i=0;i<50;i++)
        {
                                        printf("pr[%d]    %x\n",i,pr[i]);
        }
//loop for assigning elements to pl array
    for(int i=0;i<50;i++)
                                                    {
                                                    pl[i]=i+0x55;
                                                    }
                                        printf("pl time stamp                  pl_data\n");
       for(int i=0;i<50;i++)
           {
                                        printf("pl[%d]    %x\n",i,pl[i]);
           }
//loop for assigning elements to pc array
       for(int i=0;i<50;i++)
                                                    {
         pc[i]=i+0x55;

                                                    }
                                        printf("pc time stamp                  pc_data\n");
             for(int i=0;i<50;i++)
                 {
                                        printf("pc[%d]    %x\n",i,pc[i]);
                 }


             int choice1=0x05,choice2=0xF5;//declaring variable
             int i=0,j=0;//declaring variable
                                         while(m<50)//loop for storing elements in f_p_data
                                         {

                                              for(i=m;i<50;i=i+5)
                                              {
                                                                             if((pr[i]>choice1)&&(pr[i]<choice2))//checking for noise
                                                                     {

                                                          f_p_data[d]=pr[i];//storing pr[i] in f_p_data
   
                                                                break;//break from the loop
                                                                    }
                                              }
                                             for(j=i+5;j<50;j=j+5)
                                              {
                                                                             if((pc[j]>choice1)&&(pc[j]<choice2))//checking for noise
                                                                {
                                                                          f_p_data[d]=pc[j];

                                                                      break;//break from the loop
                                                                 }
                                               }
                                             for(m=j+5;m<50;m=m+5)
                                              {
                                                              if((pl[m]>choice1)&&(pl[m]<choice2))//checking for noise
                                                               {

                                                                              f_p_data[d]=pl[m];//storing pl[m] in f_p_data

                                                                                break;//break from the loop
                                                               }
                                                                            }
                                             d++;//incrementning f_p_data index
                                         }
                                         printf("\n f_p array \n");
              for(int i=0;i<d;i++)
              {
                                        printf("f_pdata[%d] %x\n",i,f_p_data[i]);//printning the elements in f_p_data
                                             }
rev=fun_data(&f_p_data);//calling function

if(rev==5)//if the rev is 5 air bag  will work
{
                                        printf("\nair bag working");
                                        }
else
                                        printf("\nno need to worry");
}
int fun_data(int *f_p_data)//defining function
{
                                        int count=0,threshold=0x55;//declaring variables
for(int i=0;i<d;i++)
{
                                        if(f_p_data[i]>threshold)//cecking f_p_data greater than threshold
                                        {

                                             count++;
                                            if(count==5)//check if count is 5 or not
                                             {
                                             break;//break from loop
                                            }
                                            
                                        }
    else
        count=0;//if the neighbouring elements are not same changing count to 0
    }
return count;//returning count
}
