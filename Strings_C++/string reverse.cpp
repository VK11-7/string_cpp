#include<iostream>
#include<string.h>
using namespace std;
int main(){
	string s;
	cout<<"Enter string length: ";
	cin>>s;
	int l=s.length();
	cout<<"\nThe reverse of the string is: ";
	for(int i=l;i>=0;i--){
		cout<<s[i];
	}
	return 0;
}
