//wap to print n natural numbers
#include<iostream>
using namespace std;
int main()
{
	int min,max,i_ref;
	cout<<"entre the min and max numbers:";
	cin>>min>>max;
	i_ref=min;
	do
	{
		cout<<i_ref<<" ";
		i_ref++;
	}while(i_ref<=max);
}
