#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a,b,c,d;
    while(n--){
            cin>>a>>b>>c>>d;

    int count=0;
    if (b>a)count++;
    if (c>a)count++;
    if (d>a)count++;
    cout<<count<<endl;
    }
}