#include<iostream>
using namespace std;
class Complex
{
	int real,imaginary;
	public:
		void setData(int real, int imaginary)
		{
			this->real = real;
			this->imaginary = imaginary;
		}
		Complex sum(Complex c1, Complex c2)
		{
			Complex res;
			res.real = c1.real + c2.real;
			res.imaginary = c1.imaginary + c2.imaginary;
			return res;
		}
		void displayData()
		{
			cout<<"Real Value: "<<real<<endl;
			cout<<"Imaginary Value: "<<imaginary<<endl;
		}
};
int main()
{
	Complex c3,c4, res;
	int real, imaginary;
	cout<<"Enter first real and imaginary value of Complex Number: "<<endl;
	cin>>real>>imaginary;
	c3.setData(real, imaginary);
	cout<<"Enter second real and imaginary value of Complex Number: "<<endl;
	cin>>real>>imaginary;
	c4.setData(real, imaginary);
	res = res.sum(c3,c4);
	cout<<"Sum of Complex Numbers: "<<endl;
	res.displayData();	
}
