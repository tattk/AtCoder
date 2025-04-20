// abs - arc089_a
// Language: C (gcc 12.2.0)
// https://atcoder.jp/contests/abs/submissions/58426448

//2d traveling
#include<stdio.h>
#include<stdlib.h>

int main(){
  int n,x_prev=0,y_prev=0,t_prev=0;
  scanf("%d",&n);
  
  for(int i=1; i <= n; i++){
    int x,y,t;
    scanf("%d %d %d",&t,&x,&y);
    
    int z = abs(x-x_prev) + abs(y-y_prev);
    int tz = t - t_prev;
    
    if(  z > tz || tz%2 != z%2){
      printf("No");
      return 0;
    }
    x_prev = x;
    y_prev = y;
    t_prev = t;
  }
  printf("Yes");
  return 0;
}