#include<iostream>
using namespace std;
int main(){
	int f=0;
	string s;
	cout<<"Enter string: ";
	cin>>s;
	char c,d;
	cout<<"\nEnter character all whose occurance you want to replace: ";
	cin>>c;
	cout<<"\nEnter character which you want to replace with: ";
	cin>>d;
	cout<<"\nReplacing all the occurence of "<<c<<" we get the string as: ";
	for(int i=0;s[i]!='\0';i++){
		if(s[i]==c){
			cout<<d;
		}
		else{
			cout<<s[i];
		}
}
return 0;
}
