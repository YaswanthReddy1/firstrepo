#include<iostream>
using namespace std;
class complex{
	private :
		int real,img;
		public:
			complex()
			{
				real=0;
				img=0;
			}
			complex (int a, int b)
			{
				real=a;
				img=b;
			}
			complex operator+= (complex);
			void display()
			{
				cout<<"real part ="<<real<<"img part="<<img;
			}
};
complex complex::operator+=(complex c2)
{
	//complex temp;
	real+=c2.real;
	img+=c2.img;

}
int main()
{
	complex c1(12,52);
	complex c2(2,5);
	complex c3;
	c1+=c2;
	c1.display();
	return 0;
}
