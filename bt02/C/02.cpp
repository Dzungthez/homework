#include <iostream>
#include <math.h>
#include <cstring>
#include <algorithm>
#include <vector>
using namespace std;
vector<string> ones = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
vector<string> teens = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
vector<string> tens = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
vector<string> thousands = {"", "thousand", "million"};

string convertThreeDigitNumber(int number) {
    string result;

    if (number >= 100) {
        result += ones[number / 100] + " hundred ";
        number %= 100;
    }

    if (number >= 10 && number <= 19) {
        result += teens[number - 10] + " ";
    } else if (number >= 20 || number == 0) {
        result += tens[number / 10] + " ";
        number %= 10;
    }

    if (number >= 1 && number <= 9) {
        result += ones[number] + " ";
    }

    return result;
}

string numberToEnglish(long long number) {
    if (number == 0) {
        return "zero";
    } else if (number < 0) {
        return "negative " + numberToEnglish(-number);
    }

    vector<int> groups;
    while (number > 0) {
        groups.push_back(number % 1000);
        number /= 1000;
    }

    string result;
    for (int i = groups.size() - 1; i >= 0; i--) {
        if (groups[i] == 0) {
            continue;
        }

        result += convertThreeDigitNumber(groups[i]);
        result += thousands[i] + " ";
    }

    return result;
}

int main() {
    long long number;
    cout << "Enter a number: ";
    cin >> number;

    cout << numberToEnglish(number) << endl;

    return 0;
}