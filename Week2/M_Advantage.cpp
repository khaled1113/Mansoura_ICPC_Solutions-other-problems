#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        int b[n];
        copy(a,a+n,b);
        sort(b,b+n);
        for(int i=0;i<n;i++){
            int sum=0;  
            if(a[i]!=b[n-1]){
                sum=a[i]-b[n-1];  
            }
            else{
                sum=a[i]-b[n-2];
            }
            cout<<sum<<" ";

        }
        cout<<endl;

    }

}