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
	for(i=1;i<=n/2;i++){
		for(j=1;j<=n;j++){
         
		 temp=a[i][j];
		 a[i][j]=a[n-i+1][n-j+1];
		 a[n-i+1][n-j+1]=temp;
		 
        /* else {
			 temp=a[i][j];
			 a[i][j]=a[j][i];
			 a[j][i]=temp;
		 }*/
		}
	}
	cout<<endl;
	for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        cout<<a[i][j]<<" ";
		cout<<endl;
    }
}