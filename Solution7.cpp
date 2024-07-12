//Sum of the digits of a number
#include <iostream>
using namespace std;

int sumOfDigits(int number) {
    int sum = 0;
    while (number != 0) {
        sum += number % 10; // Add the last digit to sum
        number /= 10;       // Remove the last digit
    }
    return sum;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    
    // Handle negative numbers by taking the absolute value
    if (number < 0) {
        number = abs(number);
    }

    int result = sumOfDigits(number);
    cout << "The sum of the digits is: " << result << endl;

    return 0;
}
