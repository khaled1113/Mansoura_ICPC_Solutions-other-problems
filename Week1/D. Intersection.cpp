#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int l1, r1;
    int l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;
    if (l2 > r1 || l1 > r2)
        cout << "-1";
    else {
        int l =max(l1,l2);
        int r =min(r1,r2);
        cout << l <<" "<<r;
    }
}
