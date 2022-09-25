#include<iostream>
using namespace std;
		//int main()
		class student
		{
		int age;
		float fees;
		public:
		void input()
		{
			cout<<"enter the age:";
			cin>>age;
			cout<<"enter the fees:";
			cin>>fees;
		}
		void display()
		{
			cout<<"my age is:"<<age;
			cout<<"fees"<<fees;
		}
		};
		int main()
		{
			student s1;
			s1.input();
			s1.display();
			return 0;
		}
