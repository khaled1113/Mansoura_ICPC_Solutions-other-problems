#include <iostream>
#include <cmath> // Include the math library for sqrt function
using namespace std;

int main() {
    int n;
    cin>>n;
    bool isPrime = false;
    if(n==1){
        cout<<"NO";
        return 0;
    
    }
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            if(i==13) isPrime = true;
            
            }
            if(n/i==13) isPrime = true;

        }
        if(isPrime) cout<<"YES";
        else cout<<"NO";
        
    }
