#include<iostream>
using namespace std;
class Temperature
{
	float T;
	public: 
		void setData(float temp)
		{
			T = temp;
		}
		void convertToCelcius()
		{
			cout<<"Equivalent Temperature in Celcius is "<< ((T-32)/1.8)<<endl;
		}
		void convertToFahrenheit()
		{
			cout<<"Equivalent Temperature in Fahrenheit is "<< ((T*1.8)+32)<< endl;
		}
};
int main()
{
	Temperature Temp;
	float value;
	cout<<"Enter temperature in Celcius: ";
	cin>>value;
	Temp.setData(value);
	Temp.convertToFahrenheit();
	cout<<endl<<"Enter temperature in Fahrenheit: ";
	cin>>value;
	Temp.setData(value);
	Temp.convertToCelcius();
}

