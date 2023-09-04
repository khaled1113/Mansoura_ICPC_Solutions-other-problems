#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a,b,c;
        cin>>a>>b>>c;
        //find the max of a,b,c
        int maxi = max(a,max(b,c));
        int f=a+b+c-maxi;
        if(f==maxi){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }
}
//another way to sort 
/*
int arr[3]={a,b,c};
sort(arr,arr+3);
if(arr[0]+arr[1]==arr[2]){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
*/
