#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,n,m,temp;
    cin>>m>>n;
    int a[m][n];
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        cin>>a[i][j];
    }
    
    for(i=1;i<=m;i++){
        for(j=1;j<=n/2;j++){
        {
          temp=a[i][j];
          a[i][j]=a[i][n-j+1];
          a[i][n-j+1]=temp;
        }
        }
    }
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        cout<<a[i][j]<<" ";
        cout<<endl;
    }
    cout<<endl;
}