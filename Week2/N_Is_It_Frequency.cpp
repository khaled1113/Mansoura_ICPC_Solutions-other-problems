#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> A(N);
    vector<int> count(M + 1, 0); // Initialize a count array to store the count of each number from 1 to M

    for (int i = 0; i < N; i++) {
        cin >> A[i];
        count[A[i]]++; // Increment the count for the corresponding number
    }

    for (int i = 1; i <= M; i++) {
        cout << count[i] << endl; // Print the count for each number from 1 to M
    }

    return 0;
}
