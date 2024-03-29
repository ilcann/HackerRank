#include <stdio.h>

int sum(int *a, int *b);
int dif(int *a, int *b);
int abs(int a);
void update(int *a,int *b);

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

int sum(int *a, int *b) {
    return (*a)+(*b);
}
int dif(int *a, int *b) {
    return (*a)-(*b);
}
int abs(int a) {
    if (a < 0) return -a;
    return a;
}
void update(int *a, int *b) {
    int sumOfTwo;
    int absDif;
    
    sumOfTwo = sum(a,b);
    absDif = abs(dif(a,b));
    
    *a = sumOfTwo;
    *b = absDif;
}