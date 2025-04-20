// abs - abc081_a
// Language: C (gcc 12.2.0)
// https://atcoder.jp/contests/abs/submissions/57210289

#include<stdio.h>

int main() {
    int s1 = 0, s2 = 0, s3 = 0;
    
    s1 = getchar() - '0';
    s2 = getchar() - '0';
    s3 = getchar() - '0';
    
    printf("%d\n", s1 + s2 + s3);

    return 0;
}