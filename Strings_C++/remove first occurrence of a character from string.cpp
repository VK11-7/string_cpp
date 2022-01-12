#include<iostream>
using namespace std;
int main(){
	int f=0;
	string s;
	cout<<"Enter string: ";
	cin>>s;
	char c;
	cout<<"\nEnter character whose first occurance you want to remove: ";
	cin>>c;
	int k;
	for(int i=0;s[i]!='\0';i++){
		if(s[i]==c){
			k=i;
			f=1;
			break;
		}
		else{
			f=0;
		}
	}
	if(f==1){
		cout<<"\nFirst occurence of "<<c<<" is at "<<k<<" index.";
		cout<<"\nRemoving the first occurence of "<<c<<" we get the string as: ";
		for(int i=0;i<s.length();i++){
			if(i!=k){
				cout<<s[i];
			}
		}
	}
	else{
		cout<<"Character not found!";
	}
	return 0;
}
