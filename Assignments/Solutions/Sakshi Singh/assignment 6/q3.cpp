#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,i,flag=0;
    cin>>n>>k;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        if(a[i]==k)
        {
            cout<<"1";
            flag++;
            break;
        }
    }
   
    if(flag==0)
    cout<<"0";
}