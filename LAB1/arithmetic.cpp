#include<iostream>
using namespace std;
class Arithmetic
{
	int fn;
	int sn;
	public:
		void setData(int f, int s)
		{
			fn =f;
			sn =s;
		}
		void displayAdd()
		{
			cout<<"Sum= "<<fn+sn<<endl;
		}
		void displaySub()
		{
			cout<<"Difference= "<<fn-sn<<endl;
		}
		void displayProd()
		{
			cout<<"Product= "<<fn*sn<<endl;
		}
		void displayDiv()
		{
			cout<<"Quotient= "<<fn/sn<<endl;
		}
};
int main()
{
	Arithmetic a1,a2;
	a1.setData(60,6);
	a2.setData(10,2);
	cout<<"Result from a1"<<endl;
	a1.displayAdd();
	a1.displaySub();
	a1.displayProd();
	a1.displayDiv();
	cout<<"Result from a2"<<endl;
	a2.displayAdd();
	a2.displaySub();
	a2.displayProd();
	a2.displayDiv();
	
}
