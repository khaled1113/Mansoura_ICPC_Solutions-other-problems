/*#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int num ;
    cin>>num;
    if(num == 1){
        cout<<0<<endl;
        return 0;
    }
    if(num == 2){
        cout<<1;
        return 0;
    }
    int a = 0, b = 1;
    
    // Here we are printing 0th and 1st terms
    
    
    int nextTerm;
    
    // printing the rest of the terms here
    vector<int> v;
    for(int i = 2; i < num; i++){
        nextTerm = a + b;
        a = b;
        b = nextTerm;
        v.push_back(nextTerm);
        
        
    }
    //want to print the last elment of the vector
    cout<<v[v.size()-1]<<endl;

    return 0;
}
*/
#include<iostream>
#include<vector>
using namespace std;

vector<long long> memo(51, -1);

long long fib(int n) {
    if (memo[n] != -1) {
        return memo[n];
    }
    if (n == 1) return 0;
    if (n == 2) return 1;
    memo[n] = fib(n - 1) + fib(n - 2);
    return memo[n];
}

int main() {
    int n;
    cin >> n;
    cout << fib(n) << endl;
    return 0;
}
