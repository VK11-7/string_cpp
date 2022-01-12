#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int l=0,l1=0,k=0;
	string s,s1;
	cout<<"Enter string 1: ";
	cin>>s;
	cout<<"\nEnter string 2: ";
	cin>>s1;
	for(int i=0;s[i]!='\0';i++){
		l+=1;
	}
	for(int i=0;s1[i]!='\0';i++){
		l1+=1;
	}
	if(l==l1){
		for(int i=0;i<l;i++){
		if(s[i]==s1[i]){
			k=1;
		}
		else{
			cout<<"\nThe strings don't match!";
			k=0;
			break;
		}}
	}
	else{
		k=0;
	}
	if(k==1){
		cout<<"\nThe strings match!'";
	}
	else{
		cout<<"\nThe strings don't match!'";
	}
	return 0;
}
