#include<bits/stdc++.h>
using namespace std;

int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;      
    }
    
    return sum;
}

int main() {
    int number = 12345;
    cout << "Sum of digits of " << number << " is " << sumOfDigits(number) << endl;
    return 0;
}
