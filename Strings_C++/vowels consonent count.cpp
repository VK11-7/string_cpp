#include<iostream>
using namespace std;
int main(){
	string s;
	int v=0,c=0;
	cout<<"Enter string: ";
	cin>>s;
	for(int i=0;s[i]!='\0';i++){
		if((s[i]>=65 && s[i]<=92) || (s[i]>=97 && s[i]<=124)){
		
		if(s[i]=='a'||s[i]=='A'||s[i]=='e'||s[i]=='E'||s[i]=='i'||s[i]=='I'||s[i]=='o'||s[i]=='O'||s[i]=='u'||s[i]=='U'){
			v+=1;
		}
		else{
			c+=1;
		}
	}}
	cout<<"\nVowels count: "<<v<<" Consonents count: "<<c;
	return 0;
}
