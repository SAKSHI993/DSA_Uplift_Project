#include<iostream>
using namespace std;
int fac(int p){
    int flag=1;
    for(int i=1;i<=p;i++){
        flag=flag*i;
    }
    return flag;


}
int fact(int a, int b){
    int num1=fac(a)/(fac(b)*fac(a-b));
    
}
int main(){
    int n,j,k;
    cin>>n;
    for(j=0;j<=n;j++){
        for(k=0;k<=j;k++){
       int  num=fact(j,k);
        cout<<num;}
        cout<<endl;
    }

}