#include<iostream>
using namespace std;
class Student
{
	private:
		char name[50];
		int english, math, science;
		float total;
		float getTotal()
		{
			return (english+math+science);
		}
		float getPercentage()
		{
			return ((getTotal()/300)*100);
		}
	public:
		void setData();
		void displayData();
};

void Student :: setData()
{
	cout<<"Enter your name: "<<endl;
	cin>>name;
	cout<<"Enter your marks in english math and science"<<endl;
	cin>>english>>math>>science;
}
void Student :: displayData()
{
 	cout<<"Name: "<<name<<endl;
 	cout<<"Total: "<<getTotal()<<endl;
 	cout<<"Percentage: "<<getPercentage()<<endl;
}

int main()
{
	Student s;
	s.setData();
	s.displayData();
}
