#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the string length: ";
	cin>>n;
	char a[n],b[n];
	cout<<"\nEnter the string: ";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"\nThe string is: ";
	for(int i=0;i<n;i++){
		cout<<a[i];
	}
	cout<<"\nThe copied string is: ";
	for(int i=0;i<n;i++){
		b[i]=a[i];
	}
	for(int i=0;i<n;i++){
		cout<<b[i];
	}
	return 0;
}
