#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //find the lowest number and its position
    int lowest=arr[0];
    int pos=0;
    for(int i=0;i<n;i++){
        if(arr[i]<lowest){
            lowest=arr[i];
            pos=i;
        }
    }
    cout<<lowest<<" "<<pos+1;

}