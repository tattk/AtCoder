// abs - abc085_b
// Language: C (gcc 12.2.0)
// https://atcoder.jp/contests/abs/submissions/57946779

//鏡餅何段つめる？
#include <stdio.h>
#include <stdlib.h>

//比較関数(qsort用)
int compare(const void *a, const void *b){
  return *(int*)a - *(int*)b; //昇順にソート
}

int main() {
    int N;
    int nums[100];
    int count = 1;
    
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &nums[i]);
    }
    
    qsort(nums, N, sizeof(int),compare);
    
    for(int i = 0; i < N; i++){
      if(nums[i+1] > nums[i]){
        count ++;
      }
    }
    
    printf("%d",count);
    return 0;
}
