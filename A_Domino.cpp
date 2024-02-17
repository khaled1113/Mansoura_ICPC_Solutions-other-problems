#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sum_upper = 0, sum_lower = 0;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        sum_upper += x;
        sum_lower += y;
    }
    if (sum_upper % 2 == 0 && sum_lower % 2 == 0) {
        cout << "0\n";
    } else if (sum_upper % 2 == 1 && sum_lower % 2 == 1) {
        for (int i = 0; i < n; i++) {
            int x, y;
            cin >> x >> y;
            if (x % 2 == 1 && y % 2 == 0) {
                cout << "1\n";
                return 0;
            } else if (x % 2 == 0 && y % 2 == 1) {
                cout << "1\n";
                return 0;
            }
        }
        cout << "-1\n";
    } else {
        cout << "-1\n";
    }
    return 0;
}
