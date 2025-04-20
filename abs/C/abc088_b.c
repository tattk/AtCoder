// abs - abc088_b
// Language: C (gcc 12.2.0)
// https://atcoder.jp/contests/abs/submissions/57793837

//N枚のカードをAliceとBobで交互に引いて，合計値の差を求める
#include <stdio.h>
#include <stdlib.h>

//比較関数(qsort用)
int compare(const void *a, const void *b){
  return *(int*)b - *(int*)a; //降順にソート
}

int main() {
    int N;
    int nums[100];
    int alice = 0, bob = 0;
    
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &nums[i]);
    }
    
    qsort(nums, N, sizeof(int),compare);
    
    for(int i = 0; i < N; i++){
      if(i % 2 == 0){
        alice += nums[i];
      }else{
        bob += nums[i];
      }
    }
    printf("%d",alice - bob);
    return 0;
}
