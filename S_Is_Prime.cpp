#include<iostream>
#include<math.h>

using namespace std;
int main(){
    int n;
    cin>>n;
    int i;
    for( i=2;i<=n-1;i++){
        if(n%i==0){
        break;
        }

    }
    if(i==n){
        cout<<"YES";

    }
    else cout<<"NO";
 
}