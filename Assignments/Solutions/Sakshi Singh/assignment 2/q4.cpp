#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
    int n,i,j,csum=0,maxsum=INT_MIN;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=0;i<n;i++){
        csum+=a[i];
        if(csum<0)
        csum=0;
        maxsum=max(maxsum,csum);
    }
    cout<<maxsum;
}