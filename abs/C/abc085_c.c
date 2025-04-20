// abs - abc085_c
// Language: C (gcc 12.2.0)
// https://atcoder.jp/contests/abs/submissions/58062877

//お年玉袋のお札はそれぞれ何枚ずつ？
#include <stdio.h>

int main() {
    int N,Y;
    int x,y,z;
    int flag = 0;
    
    scanf("%d %d",&N,&Y);
    
  for(x=0; x<=N; x++){
    for(y=0; y<=N-x; y++){
      z = N - x - y;
      if(10000*x+5000*y+1000*z == Y){
        printf("%d %d %d\n",x,y,z);
        flag = 1;
        break;
      }
    }
    if(flag) break;
  }
  if(flag == 0){
    printf("%d %d %d",-1,-1,-1);
  }
  
return 0;
}