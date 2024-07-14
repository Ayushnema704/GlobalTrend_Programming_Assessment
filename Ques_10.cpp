#include<bits/stdc++.h>
using namespace std;

bool containsOnlyAlphabetic(const string &str) {
    for (char c : str) {
        if (!isalpha(c)) {
            return false;
        }
    }
    return true;
}

int main() {
    string str1 = "HelloWorld";
    string str2 = "HelloWorld123";
    cout<<boolalpha;
    cout << "String '" << str1 << "' contains only alphabetic characters: " << containsOnlyAlphabetic(str1) <<endl;
    cout << "String '" << str2 << "' contains only alphabetic characters: " << containsOnlyAlphabetic(str2) <<endl;

    return 0;
}
