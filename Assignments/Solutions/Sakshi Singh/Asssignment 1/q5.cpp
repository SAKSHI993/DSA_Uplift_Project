#include<iostream>
using namespace std;

int main(){
	int i,j,flag=1;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=i;j++)
		cout<<j;
		for(j=1;j<=4-i;j++)
		cout<<" ";
		for(j=1;j<=3-i;j++)
		cout<<" ";
		for(j=i;j>=1;j--){
			if(j==4)
			continue;
		cout<<j;}
		cout<<endl;
	}
	
	}



