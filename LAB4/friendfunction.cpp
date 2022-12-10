#include<iostream>
using namespace std;
class Demo
{
	float len, bre;
	public:
		void setData(float len, float bre)
		{
			this->len = len;
			this->bre = bre;
		}
		friend void area(Demo);
};
void area(Demo d)
{
	float area = d.len * d.bre;
	cout<<"Area of Rectangle: "<<area;
}
int main()
{
	Demo d;
	float len, bre;
	cout<<"Enter length and breadth"<<endl;
	cin>>len>>bre;
	d.setData(len, bre);
	area(d);
}
