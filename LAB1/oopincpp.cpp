#include<iostream>
using namespace std;
class Rectangle
{
	int len;
	int bre;
	public:
		void setData(int l, int b)
	   	{
	   		len = l;
	   		bre = b;
		}
		int getArea()
		{
			return (len*bre);
		}
};
int main()
{
	Rectangle r1;
	int area, l,b;
	cout<<"Enter length and breadth of rectangle"<<endl;
	cin>>l>>b;
	r1.setData(l,b);
	area=r1.getArea();
	cout<<"Area of rectangle= "<<area;
}
