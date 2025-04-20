// abc150 - abc150_d
// Language: C (gcc 12.2.0)
// https://atcoder.jp/contests/abc150/submissions/64167896

#include <stdio.h>
#include <stdlib.h>

// 最大公約数（GCD）を求める関数
int gcd(int a, int b) {
    while (b) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// 最小公倍数（LCM）を求める関数
long long lcm(long long a, long long b) {
    return (a / gcd(a, b)) * b; // 先に割ることでオーバーフローを防ぐ
}

int count_trailing_zeros(int x) {
    int count = 0;
    while (x % 2 == 0) {
        x /= 2;
        count++;
    }
    return count;
}

int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    
    int A[N];
    int B[N]; // B = A / 2
    int twos_count = -1;
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
        B[i] = A[i] / 2;
        
        // 2で割れる回数をチェック
        int count = count_trailing_zeros(A[i]);
        if (twos_count == -1) {
            twos_count = count;
        } else if (twos_count != count) {
            printf("0\n");
            return 0;
        }
    }
    
    // B の最小公倍数を求める
    long long T = B[0];
    for (int i = 1; i < N; i++) {
        T = lcm(T, B[i]);
        if (T > M) { // TがMを超える場合、答えは0
            printf("0\n");
            return 0;
        }
    }
    
    // 1 ≤ kT ≤ M の奇数 k の個数を求める
    long long max_k = M / T;
    printf("%lld\n", (max_k + 1) / 2); // 奇数のみ数える
    return 0;
}
