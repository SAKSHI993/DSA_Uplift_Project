#include<iostream>
using namespace std;
int calc(int a[],int n){
    int j,k,temp;
    for(j=0;j<n-1;j++){
        for(k=j+1;k<n;k++){
            if(a[k]<a[j])
           { temp=a[j];
            a[j]=a[k];
            a[k]=temp;}
        }
    }
    for(j=0;j<n;j++)
    cout<<a[j];
    return 0;

}
int main(){
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    cin>>a[i];
    calc(a,n);
    return 0;
}