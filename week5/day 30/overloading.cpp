#include<iostream>
using namespace std;
#define pi 3.14
class result
{
public:
	void area(int r)
	{
		float s;
		s=pi*(r*r);
		cout<<"area of circle:"<<s<<endl;
	}
	void area(int l,int b)
		{
			float s;
			s=l*b;
			cout<<"\narea of rectangle:"<<s<<endl;
		}
	void area(int b,int h,double l)
			{
				float s;
				s=l*b*h;
				cout<<"\narea of triangle:"<<s<<endl;
			}
};
int main()
{
	result s1;
	s1.area(3);
	s1.area(3,5);
	s1.area(4,6,0.5);
	return 0;
}
