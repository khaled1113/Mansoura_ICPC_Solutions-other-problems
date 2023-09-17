#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    vector<int> elements(n);

    for (int i = 0; i < n; ++i) {
        cin >> elements[i];
    }

    for (int j = 0; j < q; ++j) {
        int l, r, x;
        cin >> l >> r >> x;
        int count = 0;

        for (int i = l - 1; i < r; ++i) {
            if (elements[i] == x) {
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}
