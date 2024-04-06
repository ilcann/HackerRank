#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    unsigned int N, S, P, Q;
    cin >> N >> S >> P >> Q;

    unsigned int unqCount = 0, upperLimit = (1U << 31), prev, current;
    vector<bool> isUniq(upperLimit);
    
    current = S % upperLimit;
    isUniq[current] = true;
    unqCount++;
    prev = current;

    for (int i = 1; i < N; i++)
    {
        current = (static_cast<unsigned long long>(prev) * P + Q) % upperLimit;
        if (isUniq[current] == false)
        {
            unqCount++;
            isUniq[current] = true;
        }
        prev = current;
    }
    
    cout << unqCount << endl;

    return 0;
}
