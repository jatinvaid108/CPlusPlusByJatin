#include <iostream>
using namespace std;

bool is_prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int num;
    cin >> num;
    int sum = 0;

    for (int i = 2; i < num; ++i) {
        if (!is_prime(i)) {
            sum += i;
        }
    }

    cout << "Sum of non-prime numbers up to " << num << ": " << sum << endl;
    return 0;
}





