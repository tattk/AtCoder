// abc150 - abc150_c
// Language: C (gcc 12.2.0)
// https://atcoder.jp/contests/abc150/submissions/61683396

#include <stdio.h>
#include <stdlib.h>
int permutation_rank(int perm[], int N) {
    int rank = 1;
    int factor = 1;
    for (int i = N - 1; i >= 0; --i) {
        int smaller_count = 0;
        for (int j = i + 1; j < N; ++j) {
            if (perm[j] < perm[i]) { 
                smaller_count++;
            }
        }
        rank += smaller_count * factor;
        factor *= (N - i); //順列N!を計算
    }
    return rank;
}
int main() {
    int N;
    scanf("%d", &N);
    int P[N], Q[N];
    for (int i = 0; i < N; ++i) {
        scanf("%d", &P[i]);
    }
    for (int i = 0; i < N; ++i) {
        scanf("%d", &Q[i]);
    }
    int rank_P = permutation_rank(P, N);
    int rank_Q = permutation_rank(Q, N);
    int result = abs(rank_P - rank_Q);
    printf("%d\n", result);
    return 0;
}
