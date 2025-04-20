// abc001 - abc001_2
// Language: C (gcc 12.2.0)
// https://atcoder.jp/contests/abc001/submissions/58544995

#include<stdio.h>

int main(){
  int m;
  
  scanf("%d",&m);
  
  if(m<100){
    printf("00\n");
  }
  else if(100<=m && m<=5000){
    if( m/100 < 10){
      printf("0%d\n",m/100);
    }else{
      printf("%d\n",m/100); 
    }
  }
  else if(6000<=m && m<=30000){
   printf("%d\n", m/1000+50);
  }
  else if(35000<=m && m<=70000){
   printf("%d\n",(m/1000-30)/5+80);
  }
  else{
   printf("89\n");
  }
return 0;
}