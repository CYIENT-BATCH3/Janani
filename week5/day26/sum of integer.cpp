#include<iostream>
using namespace std;
int main()
{
	int num,rem,sum=0;
	cout<<"entre an integer :"<<endl;
	cin>>num;
	if((num>999)&&(num<10000))
	{
	while(num)
	{
		rem=num%10;
		sum=sum+rem;
		num=num/10;

	}

	cout<<"the sum of digits:"<<sum<<endl;
}
	else
		cout<<"invalid input"<<endl;
}
