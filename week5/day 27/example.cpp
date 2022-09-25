#include<iostream>
using namespace std;
		//int main()
		class Myclass
		{
		public:   //public access specifer
	int x;     //public attribute
		private:   //private access specifier
	int y;    //private attribute
		};
		int main()
		{
			Myclass myobj;
			myobj.x=25;   //allowed(public)
			//myobj.y=50;  //not allowed(private)
			cout<<myobj.x;
			return 0;
		}
