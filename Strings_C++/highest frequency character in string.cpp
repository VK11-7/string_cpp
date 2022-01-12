#include<iostream>
using namespace std;
int main()
{
	string s;
	int k=0;
	char g;
	cout<<"Enter the string: ";
	cin>>s;
	int n=s.length();
	char a[n];
	for(int i=0;s[i]!='\0';i++){
		a[i]=s[i];
	}
	for(int i=0;i<n;i++){
		if((a[i]>=65 && a[i]<=92) || (a[i]>=97 && a[i]<=124)){
			for(int j=0;j<n-i-1;j++){
				if(a[j]>a[j+1]){
					char temp;
   					temp=a[j];
   					a[j]=a[j+1] ;
   					a[j+1]=temp;
				}
			}
		}
	}
	
	for(int i=0;i<n;i++){
		int v=0;
		char y;
		y=a[i];
		for(int j=0;j<n;j++){
			if(y==a[j]){
			 v+=1;	
			}
		}
	if(v>k){
		k=v;
		g=y;
	}	
	}
	cout<<"\nThe highest frequency character in the string is: "<<g<<" with a frequency: "<<k;
	
	return 0;
}
