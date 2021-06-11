#include<iostream>
using namespace std;

int main(){
	int i,j,flag=1;
	
	for(i=5;i>=1;i--){
		for(j=1;j<=flag;j++)
		cout<<" ";
		flag++;
		for(j=1;j<=i;j++)
		cout<<"*"<<" ";
		cout<<endl;
	}


}
