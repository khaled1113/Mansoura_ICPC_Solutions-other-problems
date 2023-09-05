#include <iostream>

using namespace std;

bool is_prime(int x) {
    if (x <= 1) {
        return false;
    }
    for (int i = 2; i * i <= x; ++i) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    if (n < 13) {
        cout << "NO" << endl;
    } else {
        for (int num = 13; num <= n; num += 13) {
            if (is_prime(num)) {
                cout << "YES" << endl;
                return 0;
            }
        }
        cout << "NO" << endl;
    }

    return 0;
}
