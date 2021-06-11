#include<iostream>
using namespace std;

int main(){
	int i,j,flag=2;
	for(i=1;i<=3;i++){
		for(j=1;j<=flag;j++)
		cout<<" ";
		flag--;
		for(j=1;j<=i;j++)
		cout<<"*"<<" ";
		cout<<endl;
	}
	flag=1;
	for(i=2;i>=1;i--){
		for(j=1;j<=flag;j++)
		cout<<" ";
		flag++;
		for(j=1;j<=i;j++)
		cout<<"*"<<" ";
		cout<<endl;
	}

}
