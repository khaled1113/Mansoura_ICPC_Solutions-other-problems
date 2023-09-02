#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    int m=max(n1,max(n2,n3));
    if(m<=n1+n2+n3-m)cout<<"0";
    else{
        cout<<abs((n1+n2+n3-m)-(m+1));

    }
}