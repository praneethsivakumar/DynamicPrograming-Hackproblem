#include <stdio.h>

typedef long long int64;

typedef struct {
    int64 a, b, c, d; 
} Matrix;
Matrix multiply(Matrix m1, Matrix m2) {
    Matrix res;
    res.a = m1.a * m2.a + m1.b * m2.c;
    res.b = m1.a * m2.b + m1.b * m2.d;
    res.c = m1.c * m2.a + m1.d * m2.c;
    res.d = m1.c * m2.b + m1.d * m2.d;
    return res;
}
Matrix power(Matrix base, long long n) {
    Matrix result = {1, 0, 0, 1}; 
    while (n > 0) {
        if (n % 2 == 1)
     result = multiply(result, base);
     base = multiply(base, base);
     n /= 2;
    }
    return result;
}
int main() {
    long long N;
    scanf("%lld", &N);

    if (N == 1) {
        printf("1\n");
        return 0;
    }
    if (N == 2) {
        printf("3\n");
        return 0;
    }
    Matrix T = {1, 2, 1, 0};
    Matrix TN = power(T, N - 2);
    long long FN = TN.a * 3 + TN.b * 1;

    printf("%lld\n", FN);

    return 0;
}
