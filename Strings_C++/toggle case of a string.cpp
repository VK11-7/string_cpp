#include<iostream>
#include<string.h>
using namespace std;
int main(){
	string s,s1="";
	cout<<"Enter the string in lowercase: ";
	cin>>s;
	for(int i=0;s[i]!='\0';i++){
		if(int(s[i])>=65 && int(s[i]<=92)){
		s1=s1+char(int(s[i])+32);}
		if(int(s[i])>=97 && int(s[i]<=124)){
			s1=s1+char(int(s[i])-32);
		}
	}
	cout<<"\nThe string in uppercase is: "<<s1;
	return 0;
}
