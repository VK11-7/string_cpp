#include<iostream>
using namespace std;
int main(){
	string s;
	int p=0;
	cout<<"Enter string: ";
	cin>>s;
	char c;
	cout<<"\nEnter character whose occurance you want to find: ";
	cin>>c;
	int k;
	cout<<"\nThe occurence of the character is at the index: ";
	for(int i=0;s[i]!='\0';i++){
		if(s[i]==c){
			cout<<i<<" ";
			p+=1;
		}
	}
	cout<<"\nThe occurence count of the character: "<<p;
	return 0;
}
