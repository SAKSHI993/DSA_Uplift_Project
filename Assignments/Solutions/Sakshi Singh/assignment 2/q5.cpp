#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i,j;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
		if(a[i]==a[j])
		{cout<<a[i];
		break;}
		}
	}
    
}