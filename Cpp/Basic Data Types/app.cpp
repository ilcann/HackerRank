#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int num1;
    long num2;
    float num3;
    double num4;
    char ch1;
    
    scanf("%d %ld %c %f %lf", &num1, &num2, &ch1, &num3, &num4);
    printf("%d\n%ld\n%c\n%f\n%lf", num1, num2, ch1, num3, num4);
    
    return 0;
}