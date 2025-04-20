// abs - arc065_a
// Language: C (gcc 12.2.0)
// https://atcoder.jp/contests/abs/submissions/58262702

//白昼夢，予め格納した指定の文字列を並び替えて入力した文字列を判定する
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool check_pattern(const char *S) {
    int len = strlen(S);
    while (len > 0) {
        if (len >= 7 && strncmp(&S[len - 7], "dreamer", 7) == 0) {
            len -= 7;  // "dreamer" にマッチしたので7文字進む
        } else if (len >= 6 && strncmp(&S[len - 6], "eraser", 6) == 0) {
            len -= 6;  // "eraser" にマッチしたので6文字進む
        } else if (len >= 5 && strncmp(&S[len - 5], "dream", 5) == 0) {
            len -= 5;  // "dream" にマッチしたので5文字進む
        } else if (len >= 5 && strncmp(&S[len - 5], "erase", 5) == 0) {
            len -= 5;  // "erase" にマッチしたので5文字進む
        } else {
            return false;  // どのパターンにもマッチしなかったらNO
        }
    }
    return true;  // すべてのパターンにマッチして文字列を処理できた場合YES
}

int main() {
    char S[100000];
    
    // 文字列Sを入力
    scanf("%s", S);
    
    // パターンマッチングをチェック
    if (check_pattern(S)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}