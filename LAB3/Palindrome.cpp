#include<iostream>
using namespace std;
class Palindrome
{
	public: 
		bool isPalindrome(int num)
		{
			int ext, sum=0,temp=num;
			while(temp!=0)
			{
				ext = temp %10;
				sum  = (sum*10)+ext;
				temp /= 10;
			}
			if(sum == num)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
};
int main()
{
	Palindrome p;
	int num;
	bool pal;
	cout<<"Enter the number"<<endl;
	cin>>num;
	pal = p.isPalindrome(num);
	if(pal)
	{
		cout<<"It is palindrome";
	}
	else
	{
		cout<<"It is not palindrome";
	}
}

