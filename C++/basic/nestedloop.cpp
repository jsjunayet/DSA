#include <iostream>
using namespace std;

int main() {
    int n = 3; // টেবিলের সাইজ

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << i * j << "\t"; // গুণফল প্রিন্ট করে
        }
        cout << endl;
    }

    return 0;
}
