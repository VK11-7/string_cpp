#include<iostream>
using namespace std;
int main(){
	string s;
	cout<<"Enter string: ";
	cin>>s;
	int f=0;
	int l=s.length();
	for(int i=0;i<l/2;i++){
		if(s[i]==s[l-i-1]){
			f=1;
		}
		else{
			f=0;
			break;
		}
	}
	if (f==1){
		cout<<"\nThe strings are palindrome!";
	}
	else{
		cout<<"\nThe strings are not palindrome!";
	}
	return 0;
}
