/*algorithm:
create a fun with name pos_fun with two arguments in that first is the num which we want to shift and second pos that we vant to set
in the function take variable and asign like num with or and 1 left shift with pos
and return to main */

#include<stdio.h>
#include<string.h>
#include<math.h>

int pos_fun(int num,int pos)
 {//function for converter

	int value;//local var
	value = num |(1<<pos);//seting pos set that user want
     return value;//return to main




}
int posclr_fun(int num,int pos)
 {//function for converter

	int value;//local var
	value = num &(1<<pos);//seting pos clearthat user want
     return value;//return to main




}
int toggle(int num,int pos)
 {//function for converter

	int value;//local var
	num= num ^(1<<pos);//seting pos toggle that user want
     return num;//return to main




}
int main()//main fuction
{
	int num_=0;//var for num
	int pos_=0;//var for pos
printf("enter the num and pos : ");//message
	scanf("%d %d",&num_,&pos_);//input
int set,setclear,settoggle;//local var to store ouput from func
set =pos_fun(num_,pos_);//calling and storeing
	printf("the pos bit set is  :%d\n",set);//printing
	setclear =posclr_fun(num_,pos_);//calling and storeing
	printf("the pos bit clear is  :%d\n",setclear);//printing
	settoggle =toggle(num_,pos_);//calling and storeing
	printf("the pos bit toggle is  :%d\n",settoggle);//printing
	
	

}