#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    int arrSize;
    cin >> arrSize;
    
    int arr[arrSize];
    for(int i = 0; i<arrSize; i++) {
        cin >> arr[i];
    }
    for (int i = arrSize-1; i>-1; i--) {
        cout << arr[i] << " ";
    }
    
    return 0;
}