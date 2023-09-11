#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;  // Input the size of the array

    vector<int> arr(n);  // Create a vector of integers with size n

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] <= 10) {
            cout << "A[" << i << "] = " << arr[i] << endl;
        }
    }

    return 0;
}
