#include<iostream>
using namespace std;
inline float getArea(float rad)
{
	return (3.14*rad*rad);
}
inline float getArea(float len, float bre)
{
	return (len*bre);
}

int main()
{
	float areaOfRectangle = getArea(5,6);
	float areaOfCircle = getArea(9);
	cout<<"Area of circle = "<<areaOfCircle<<endl;
	cout<<"Area of rectangle = "<<areaOfRectangle<<endl;
}
