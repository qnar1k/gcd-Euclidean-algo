#include <iostream>
using namespace std;

int gcd(int n1, int n2) {
    while (n2 != 0) {
        int remainder = n1 % n2;
        n1 = n2;
        n2 = remainder;
    }
    return n1;
}

int main() {
    int a, b;
    cout << "Enter the numbers: ";
    cin >> a >> b;

    int result = gcd(a, b);
    cout << "gcd of " << a << " and " << b << " is: " << result << endl;

    return 0;
}
