// abs - abc081_b
// Language: C (gcc 12.2.0)
// https://atcoder.jp/contests/abs/submissions/57241150

#include <stdio.h>

int main() {
    int N, A;
    int min_operations = 1000;

    scanf("%d", &N);

    // 各整数に対して処理
    for (int i = 0; i < N; i++) {
        scanf("%d", &A);

        int operations = 0;
        // それぞれの数字を2で割り続ける
        while (A % 2 == 0 && A > 0) {
            A /= 2;
            operations++;
        }

        // 最小の操作回数を記録
        if (operations < min_operations) {
            min_operations = operations;
        }
    }

    // 結果を出力
    printf("%d\n", min_operations);

    return 0;
}
