#include <iostream>
using namespace std;

int sumOfDigits(int n, int& depth) {
    // Умова закінчення рекурсії
    if (n == 0) {
        return 0;
    }
    // Рекурентний виклик функції для обчислення суми цифр
    depth++;
    return n % 10 + sumOfDigits(n / 10, depth);
}

int main() {
    int number;
    cout << "n: ";
    cin >> number;

    int depth = 0;
    int result = sumOfDigits(number, depth);

    cout << "Sum " << number << " = " << result << endl;
    cout << "depth: " << depth << endl;

    return 0;
}
