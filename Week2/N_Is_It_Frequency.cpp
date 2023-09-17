#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=1;i<=m;i++){
        // how many times does i occur in a? usig algrithm library
        int count = count(a,a+n,i);
        cout<<count<<endl;
       

}
}