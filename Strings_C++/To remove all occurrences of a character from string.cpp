#include<iostream>
using namespace std;
int main(){
	int f=0;
	string s;
	cout<<"Enter string: ";
	cin>>s;
	char c;
	cout<<"\nEnter character all whose occurance you want to remove: ";
	cin>>c;
	cout<<"\nRemoving all the occurence of "<<c<<" we get the string as: ";
	for(int i=0;s[i]!='\0';i++){
		if(s[i]!=c){
			cout<<s[i];
		}
}
return 0;
}
