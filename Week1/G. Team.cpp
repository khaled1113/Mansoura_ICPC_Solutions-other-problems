#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n][3];
    int counter=0;
    for(int i=0;i<n;i++){
        int e=0;
        cin>>arr[i][0]>>arr[i][1]>>arr[i][2];
        if(arr[i][0])e++;
        if(arr[i][1])e++;
        if(arr[i][2])e++;
        if(e>=2)counter++;
 
        
 
 
    }
    cout<<counter;
 
 
 
    
}