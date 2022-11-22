#include<iostream>
#include<math.h>
using namespace std;
void getRoots(int,int,int);
class Quadratic
{
	int a,b,c;
	public:
		void setData(int a1,int b1, int c1)
		{
			a= a1;
			b = b1;
			c = c1;
		}
		void displayData()
		{
			getRoots(a,b,c);
		}
};
void getRoots(int a, int b, int c)
{
	int determinant, roots[2];
	determinant = ((b*b)-4*a*c);
	if(determinant >=0)
	{
		roots[0] = ((-b + sqrt(determinant))/2*a);
		roots[1] = ((-b - sqrt(determinant))/2*a);
		cout<<"The real roots are "<<roots[0]<<" and "<<roots[1];
	}
	else
	{
		cout<<"The roots are imaginary";
	}
}
int main()
{
	int a,b,c, roots[2];
	Quadratic Q;
	cout<<"Enter the value of a,b,c"<<endl;
	cin>>a>>b>>c;
	Q.setData(a,b,c);
	Q.displayData();
}
