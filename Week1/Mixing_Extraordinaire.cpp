#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        long long arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        long long sum = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                sum = sum + abs(arr[i] * arr[j]); // Use abs() to ensure the output is positive
            }
        }
        cout << sum << endl;
    }
    return 0;
}
