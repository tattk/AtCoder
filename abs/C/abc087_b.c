// abs - abc087_b
// Language: C (gcc 12.2.0)
// https://atcoder.jp/contests/abs/submissions/57256382

#include <stdio.h>

int main() {
    int a,b,c,X;
    int i,j,k;
    int n=0;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &X);
    
  for(i=0; i<=a; i++){
    for(j=0; j<=b; j++){
      for(k=0; k<=c; k++){
        if(500*i+100*j+50*k == X){
          n++;
        }
      }
    }
  }
printf("%d",n);

return 0;
}
