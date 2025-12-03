// https://thehuxley.com/problem/352

#include <stdio.h>

int mdc(int a, int b) {
    if (b == 0) {
        return a;
    }
    else {
        return mdc(b, a % b);
    }
}

int main() {
    int n, m;
    
    scanf("%d %d", &n, &m);
    if (n > m) {
        printf("%d\n", mdc(n, m));
    } else {
        printf("%d\n", mdc(m, n));
    }
    return 0;
}
