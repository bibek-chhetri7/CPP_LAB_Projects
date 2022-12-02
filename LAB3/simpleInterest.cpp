#include<iostream>
using namespace std;
class Amount
{
	public:
		float getSimpleInterest(float, float, float);
};

float Amount :: getSimpleInterest(float amt, float time, float rate=10)
{
	return (amt*time*rate)/100;
}

int main()
{
	Amount a;
	float cash, time;
	cout<<"Enter the amount and time"<<endl;
	cin>>cash>>time;
	float acquiredInterest=a.getSimpleInterest(cash,time);
	cout<<cash<<" has acquried "<<acquiredInterest<<" Interest"<<endl;
}

