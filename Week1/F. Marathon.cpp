#include<iostream>
using namespace std;
 
int main() {
    int t;
    cin >> t; // Read the number of test cases
 
    while (t--) { // Loop through each test case
        int a, b, c, d;
        cin >> a >> b >> c >> d;
 
        int count = 0;
 
        if (b > a)
            count++;
        if (c > a)
            count++;
        if (d > a)
            count++;
 
        cout << count << endl;
    }
 
    return 0;
}