#include<bits/stdc++.h>
using namespace std;
void fillPrefixSum (int arr [], int n, int prefixSum []) {
    prefixSum [0] = arr [0];
    for (int i = 1; i < n; i++)
        prefixSum [i] = prefixSum [i - 1] + arr [i];
}
int main(){
    int n;
    cin>>n; 
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    int prefixSum[n];
    fillPrefixSum(arr,n,prefixSum);
    int q;
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
        if(l==1)cout<<prefixSum[r-1]<<endl;
        else cout<<prefixSum[r-1]-prefixSum[l-2]<<endl;
    }

}
