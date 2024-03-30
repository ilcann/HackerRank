#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a, b;
    string str[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    cin >> a >> b;
    
    for (int n = a; n <= b; n++) {
        if (n<=9) cout << str[n];
        else if (n%2 == 0) cout << "even";
        else cout << "odd";
    }
    
    return 0;
}