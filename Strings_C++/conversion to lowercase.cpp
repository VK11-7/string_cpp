#include<iostream>
#include<string.h>
using namespace std;
int main(){
	string s,s1="";
	cout<<"Enter the string in uppercase: ";
	cin>>s;
	for(int i=0;s[i]!='\0';i++){
		s1=s1+char(int(s[i])+32);
	}
	cout<<"\nThe string in lowercase is: "<<s1;
	return 0;
}
