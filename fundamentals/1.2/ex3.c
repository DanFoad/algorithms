#include <stdio.h>

struct fraction {
    int numerator;
    int denominator;
};

int gcd(int u, int v) {
    int t;
    while (u > 0) {
        if (u < v) {
            t = u;
            u = v;
            v = t;
        }
        u = u - v;
    }
    return v;
}

int main(void) {
    int x, y;
    struct fraction f;
    while (scanf("%d %d", &x, &y) != EOF) {
        f.numerator = x;
        f.denominator = y;
        if (x > 0 && y > 0) {
            int cf = gcd(x,y);
            f.numerator = f.numerator / cf;
            f.denominator = f.denominator / cf;
            printf("%d/%d reduced is %d/%d\r\n", x, y, f.numerator, f.denominator);
        }
    }
}
