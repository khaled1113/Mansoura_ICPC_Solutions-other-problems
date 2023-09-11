#include<iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int count=0;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int kth=arr[k-1];
    for(int i=0;i<n;i++){
        if(arr[i]>=kth&&arr[i]>0)count++;
    }
    cout<<count;
}
