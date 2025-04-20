// abc001 - abc001_4
// Language: C (gcc 12.2.0)
// https://atcoder.jp/contests/abc001/submissions/59200044

#include <stdio.h>

//データ型を構造体として定義，時刻をペアで格納できる
typedef struct {
    int start;
    int end;
} TimeInterval;

// 5分単位で開始時刻を切り捨て
int round_down(int time) {
    int minutes = time % 100;
    minutes = (minutes / 5) * 5;
    return (time / 100) * 100 + minutes;
}

// 5分単位で終了時刻を切り上げ
int round_up(int time) {
    int minutes = time % 100;
    minutes = ((minutes + 4) / 5) * 5;
    if (minutes == 60) {
        time = (time / 100 + 1) * 100;
    } else {
        time = (time / 100) * 100 + minutes;
    }
    return time;
}

// 時刻帯を統合して出力
void merge_intervals(TimeInterval intervals[], int n) {
    TimeInterval merged[n];
    int count = 0;

    merged[0] = intervals[0];
    for (int i = 1; i < n; i++) {
        if (intervals[i].start <= merged[count].end) {
            if (intervals[i].end > merged[count].end) {
                merged[count].end = intervals[i].end;
            }
        } else {
            count++;
            merged[count] = intervals[i];
        }
    }

    for (int i = 0; i <= count; i++) {
        printf("%04d-%04d\n", merged[i].start, merged[i].end);
    }
}

int main() {
    int n;
    scanf("%d", &n);

    TimeInterval intervals[n];
    for (int i = 0; i < n; i++) {
        int start, end;
        scanf("%d-%d", &start, &end);
        intervals[i].start = round_down(start);
        intervals[i].end = round_up(end);
    }

    // ソート処理 (挿入ソート)，開始時刻順に並べる
    for (int i = 1; i < n; i++) {
        TimeInterval key = intervals[i];
        int j = i - 1;
        while (j >= 0 && intervals[j].start > key.start) {
            intervals[j + 1] = intervals[j];
            j = j - 1;
        }
        intervals[j + 1] = key;
    }

    // 統合して出力
    merge_intervals(intervals, n);

    return 0;
}
