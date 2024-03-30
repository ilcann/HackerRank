#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a, int b, int c, int d);
int max(int a, int b);

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

int max_of_four(int a, int b, int c, int d) {
    int result;
    result = a;

    result = max(result, b);
    result = max(result, c);
    result = max(result, d);

    return result;
}

int max(int a, int b) {
    int result;
    result = a;

    if (result < b) result = b;

    return result;
}