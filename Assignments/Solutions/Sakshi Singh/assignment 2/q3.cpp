#include <bits/stdc++.h>
using namespace std;
int i;
void rotateone(int arr[],int n){
int temp=arr[n-1];
for (i=n-1;i>0;i--){
arr[i]=arr[i-1];
}
arr[0] = temp;
}
void rotate(int arr[],int d,int n){
for (i=0;i<d;i++)
rotateone(arr,n);     
}
int main(){
int n,i;
cin>>n;
int arr[n];
for(i=0;i<n;i++){
	cin>>arr[i];
}   
int d=1;
rotate(arr, d, n);
for(i=0;i<n;i++){
cout<<arr[i]<<" ";    
}
}