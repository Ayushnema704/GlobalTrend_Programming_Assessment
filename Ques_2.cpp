#include<bits/stdc++.h>
using namespace std;

int lenoflongstring(const string &s){
    unordered_set<char>charSet;
    int left = 0;
    int maxlen = 0;
    for (int right = 0; right < s.size();right++) {
        while (charSet.find(s[right]) != charSet.end()) {
            charSet.erase(s[left]);
            left++;
        }
        charSet.insert(s[right]);
        maxlen = max(maxlen, right - left + 1);
    }

    return maxlen;
}

int main() {
    string s = "abcdabcdefbb";
    cout << "The length of the longest substring without repeating characters is " << lenoflongstring(s) << endl;
    return 0;
}
