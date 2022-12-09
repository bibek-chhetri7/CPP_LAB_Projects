#include<iostream>
using namespace std;
class Demo2;
class Demo1
{
	int fn;
	public:
		void setData(int fn)
		{
			this->fn = fn;
		}
		friend void showMax(Demo1, Demo2);
};
class Demo2
{
	int sn;
	public:
		void setData(int sn)
		{
			this->sn = sn;
		}
		friend void showMax(Demo1,Demo2);
};
void showMax(Demo1 d1, Demo2 d2)
{
	int max;
	if(d1.fn > d2.sn)
	{
		max = d1.fn;
	}
	else
	{
		max = d2.sn;
	}
	cout<<"Greatest Number: "<<max<<endl;
}
int main()
{
	Demo1 d1;
	Demo2 d2;
	d1.setData(8);
	d2.setData(10);
	showMax(d1,d2);
}
