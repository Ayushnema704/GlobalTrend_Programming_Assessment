#include<bits/stdc++.h>
using namespace std;
int facto(int fact, int n){
    if (n < 1)
    {
        cout << fact << endl;
        return 0;
    }
    facto(fact * n, n - 1);
}

int main(){
    int n=5;
    facto(1,n);
    return 0;
}