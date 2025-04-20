// abs - abc083_b
// Language: C (gcc 12.2.0)
// https://atcoder.jp/contests/abs/submissions/57682089

//1以上N以下の整数のうち各桁の和がA以上B以下であるものの総和
#include <stdio.h>

// 数字の各桁の和を計算する関数
int sum_of_digits(int num) {
    int sum=0;
    while (num > 0){
      sum += num % 10; //1の位を加算
      num /= 10; //桁を一つ上げる
    }
    return sum;
}

int main() {
  int N,a,b;
  int total_sum = 0;
  
    //入力
    scanf("%d %d %d",&N, &a, &b);
    
    //1からNまでの数をチェック
    for(int i =1; i <= N; i++){
      int digit_sum = sum_of_digits(i); //iの各桁の和を計算
      //各桁の和がA以上B以下の場合，その数に合計を加える
      if(digit_sum >= a && digit_sum <= b){
        total_sum +=i;
      }
    }
    
  printf("%d\n",total_sum);
  return 0;
}
