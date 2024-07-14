#include<bits/stdc++.h>
using namespace std;

int maxdiff(const vector<int> &nums) {
    if (nums.size() < 2) {
        cout << "Array must contain at least two elements." << endl;
        return 0; 
    }

    int minElement = INT_MAX;
    int maxElement = INT_MIN;

    for (int num : nums) {
        if (num < minElement) {
            minElement = num;
        }
        if (num > maxElement) {
            maxElement = num;
        }
    }

    return maxElement - minElement;
}

int main() {
    vector<int> nums = {1, 2, 9, 4, 5, 0, 7, 6, 3, 8};

    int result = maxdiff(nums);
    cout << "The maximum difference between any two elements is " << result << endl;

    return 0;
}
