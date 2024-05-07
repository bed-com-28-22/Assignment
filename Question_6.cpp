#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

// Function to count vowels in a string
int countVowels(const string& str) {
    int count = 0;
    for (char c : str) {
        if (tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u') {
            count++;
        }
    }
    return count;
}

// Function to count words in a string
int countWords(const string& str) {
    int count = 0;
    bool inWord = false;
    for (char c : str) {
        if (isalpha(c)) {
            if (!inWord) {
                count++;
                inWord = true;
            }
        } else {
            inWord = false;
        }
    }
    return count;
}

// Function to reverse a string
string reverse(const string& str) {
    string reversed = str;
    reverse(reversed.begin(), reversed.end());
    return reversed;
}

// Function to capitalize the second letter of each word in a string
string capitalizeSecondLetter(const string& str) {
    string result = str;
    bool capitalize = false;
    for (char& c : result) {
        if (isalpha(c)) {
            if (capitalize) {
                c = toupper(c);
                capitalize = false;
            } else {
                capitalize = true;
            }
        } else {
            capitalize = false;
        }
    }
    return result;
}

int main() {
    ifstream file("textfile.txt");
    if (!file) {
        cerr << "Unable to open file." << endl;
        return 1;
    }

    string read;
    getline(file, read);

    // Calculate and output number of vowels
    cout << "Number of vowels in the statement: " << countVowels(read) << endl;

    // Calculate and output number of words
    cout << "Number of words in the statement: " << countWords(read) << endl;

    // Output statement in reverse
    cout << "Statement in reverse: " << reverse(read) << endl;

    // Output statement with second letter capitalized
    cout << "Statement with second letter capitalized: " << capitalizeSecondLetter(read) << endl;

    file.close();
    return 0;
}
