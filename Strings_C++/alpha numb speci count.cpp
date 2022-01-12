#include<iostream>
using namespace std;
int main()
{
	int a=0,n=0,s=0;
	string s1;
	cout<<"Enter your string: ";
	cin>>s1;
	for(int i=0;s1[i]!='\0';i++){
		if((s1[i]>=65 && s1[i]<=92) || (s1[i]>=97 && s1[i]<=124)){
			a+=1;
		}
		else if(s1[i]=='1' || s1[i]=='2' || s1[i]=='3' || s1[i]=='4' || s1[i]=='5' || s1[i]=='6' || s1[i]=='7' || s1[i]=='8' || s1[i]=='9' || s1[i]=='0'){
			n+=1;
		}
		else{
			s+=1;
		}
	}	
	cout<<"\nAlphabet count: "<<a<<" Number cout: "<<n<<" Special character count: "<<s;
	return 0;
}
