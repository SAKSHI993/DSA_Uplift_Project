#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sr,m,er,sc,ec,i,j;
    cin>>n>>m;
    int a[n][m];
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++)
        cin>>a[i][j];

    }
        sc=1,sr=1,ec=m,er=n;
    while(ec>sc&&er>sr){

    for(j=sc;j<=ec;j++)
    {
        cout<<a[sr][j];
    }
    sr++;
    for(i=sr;i<=er;i++){
        cout<<a[i][ec];
    }
    ec--;
    for(j=ec;j>=sc;j--){
        cout<<a[er][j];
    }
    er--;
    for(i=er;i>=sr;i--){
        cout<<a[i][sc];
        sc++;
    }}
    return 0;
}