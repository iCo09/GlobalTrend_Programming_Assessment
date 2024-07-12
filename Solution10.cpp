#include <iostream>
#include <cctype> // For isalpha() function
using namespace std;

bool containsOnlyAlphabets(const string& str) {
    for (char c : str) {
        // Check if the character is not an alphabet
        if (!isalpha(c)) {
            return false;
        }
    }
    return true; // All characters are alphabetic
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    // Check if the string contains only alphabetic characters
    if (containsOnlyAlphabets(input)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}
