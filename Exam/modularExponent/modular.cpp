#include <iostream>
using namespace std;
long long modularExponentiation(long long a, long long k, long long m) {
    if (k == 0) {
        return 1; 
    }
    if (k == 1) {
        return a % m; 
    }

    if (k % 2 == 0) {
        long long half = modularExponentiation(a, k / 2, m);
        return (half * half) % m;
    } else {
        return (a * modularExponentiation(a, k - 1, m)) % m;
    }
}

int main() {
    long long a, k, m;
    cout << "Enter base (a), exponent (k), and modulus (m): ";
    cin >> a >> k >> m;

    long long result = modularExponentiation(a, k, m);
    cout << "Result of " << a << "^" << k << " mod " << m << " = " << result << endl;

    return 0;
}
