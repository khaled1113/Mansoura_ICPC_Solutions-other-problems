#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
    int n; 
    cin>>n;
    int arr[n];
    int arr2[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    
    for(int i=0;i<n;i++)arr2[i]=arr[i];
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
      if(arr2[i]==arr[0]){
        cout<<arr[n-1]<<" ";
      }
      else if(arr2[i]==arr[n-1]){
        cout<<arr[0]<<" ";
      }
      else{
        cout<<arr2[i]<<" ";
      }
    }
    




}
