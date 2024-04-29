#include <iostream>
#include <string>
using namespace std;

void removeSpaces(string &str) {
    // Iterate through each character in the string
    for (int i = 0; i < str.length(); ++i) {
        // If current character is a space, remove it
        if (str[i] == ' ') {
            str.erase(i, 1); // Erase 1 character at index i
            --i; // Decrement i to account for the removed character
        }
    }
}

int main() {
    string input;
    cout << "Enter a string with spaces: ";
    getline(cin, input);
    
    removeSpaces(input);
    
    cout << "String after removing spaces: " << input << endl;

    return 0;
}
