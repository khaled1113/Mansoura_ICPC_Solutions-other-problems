#include <iostream>
#include<vector>
using namespace std;
int main(){
    int q;
    cin>>q;
    int a[q];
    for(int i=0;i<q;i++)cin>>a[i];
    int n;
    cin>>n;
    while(n--){
        int sum=0;
        int l,r;
        cin>>l>>r;
        for(int i=l-1;i<=r-1;i++){
            sum=sum+a[i] ; 
        }
        cout<<sum<<endl;
        
    }
}