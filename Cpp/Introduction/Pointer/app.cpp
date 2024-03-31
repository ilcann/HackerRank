#include <stdio.h>

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

int abs(int a) {
    if (a < 0) return -a;
    else return a;
}
void update(int *a,int *b) {
    int sum;
    int dif;

    sum = *a + *b;
    dif = *a - *b;

    *a = sum;
    *b = abs(dif);
}