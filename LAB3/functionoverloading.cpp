#include<iostream>
using namespace std;
class Shape
{
	public: 
		float getArea(float);
		float getArea(float, float);
};

float Shape :: getArea(float rad)
{
	return(3.14*rad*rad);
}
float Shape :: getArea(float len, float bre)
{
	return(len*bre);
}

int main()
{
	Shape rectangle, circle;
	float areaofRect, areaofCirc, r, l, b;
	cout<<"Enter the radius of circle"<<endl;
	cin>>r;
	cout<<"Enter the length and breadth of rectangle"<<endl;
	cin>>l>>b;
	areaofRect = rectangle.getArea(l,b);
	areaofCirc = circle.getArea(r);
	cout<<"Area of rectangle "<<areaofRect<<endl;
	cout<<"Area of circle "<<areaofCirc;
}
