#include<iostream>
using namespace std;
int main()
{
	double v_num,temp;
	int i,fact=1;
	cout<<"enter a number:"<<endl;
	cin>>v_num;
	temp=v_num;
	for(i=1;i<=v_num;i++)
	{
		fact=fact*i;
	}
	cout<<"factorial of"<<fact<<"="<<fact<<endl;
}
