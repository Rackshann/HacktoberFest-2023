#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to convert a number from base 10 to any base
vector<int> convertBase(int n, int base) {
    vector<int> digits;
    while (n > 0) {
        digits.push_back(n % base);
        n /= base;
    }
    reverse(digits.begin(), digits.end());
    return digits;
}

// Function to check if a number is a Kaprekar number in a specific base
bool isKaprekar(int n, int base) {
    vector<int> digits = convertBase(n, base);
    int square = n * n;
    vector<int> squareDigits = convertBase(square, base);

    // Check all possible splits of the square
    for (int i = 1; i < squareDigits.size(); i++) {
        int left = 0, right = 0;
        for (int j = 0; j < i; j++) {
            left = left * base + squareDigits[j];
        }
        for (int j = i; j < squareDigits.size(); j++) {
            right = right * base + squareDigits[j];
        }
        if (left + right == n) {
            return true;
        }
    }
    return false;
}

int main() {
    int n, base;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Enter the base: ";
    cin >> base;

    if (isKaprekar(n, base)) {
        cout << n << " is a Kaprekar number in base " << base << endl;
    } else {
        cout << n << " is not a Kaprekar number in base " << base << endl;
    }

    return 0;
}
