#include<iostream>
#include<string>
#include <cctype>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    for (int i = 0; i < n; i++) {
        if (isupper(s[i])) {
            cout << "is upper";
        } else if (islower(s[i])) {
            cout << "is lower";
        } else if (isdigit(s[i])) {
            cout << "is digit";
        }
        
        cout << endl;
    }

    return 0;
}
