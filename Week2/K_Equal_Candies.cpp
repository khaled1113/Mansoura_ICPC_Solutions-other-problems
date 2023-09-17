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
        for(int i=0;i<n;i++){cin>>a[i];}
        sort(a,a+n);
        int min =a[0];
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=a[i]-min;
        }

            cout<<sum<<endl;
        
    }
}
