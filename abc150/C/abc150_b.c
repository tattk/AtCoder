// abc150 - abc150_b
// Language: C (gcc 12.2.0)
// https://atcoder.jp/contests/abc150/submissions/59335283

#include<stdio.h>
#include<string.h>

int main(){
  int n,i=0;
  char s[51];

  scanf("%d",&n);
  scanf("%s",s);

  for(int j=0; j <= n - 3; j++) {
    if(strncmp(&s[j],"ABC",3)==0){
      i++;
    }
  }
  printf("%d",i);
  return 0;
}
