#include<iostream>
using namespace std;
int main(){
	int c=1;
	string s;
	cout<<"Enter string: ";
	getline(cin,s);
	for(int i=0;s[i]!='\0';i++){
		if(s[i]=='\ ')
			c+=1;
	}
	cout<<"\nWord count in the string: "<<c;
	return 0;
}
