#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string s;
	cout<<"Enter the string: ";
	cin>>s;
	int l;
	for (int i=0;s[i]!='\0';i++)
	{
		l+=1;
	}
	cout<<"\nThe length of the string is: "<<l;
	return 0;
}
