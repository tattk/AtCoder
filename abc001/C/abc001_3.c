// abc001 - abc001_3
// Language: C (gcc 12.2.0)
// https://atcoder.jp/contests/abc001/submissions/58799857

#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
  int x,y,a;
  double w;
  char z[4];
  
  scanf("%d %d",&x,&y);
  w = round(y/60.0 * 10) / 10.0;
  
  //風力条件分岐
  if(w>=0.0 && w<=0.2){a = 0;}
  else if(w>=0.3 && w<=1.5){a = 1;}
  else if(w>=1.6 && w<=3.3){a = 2;}
  else if(w>=3.4 && w<=5.4){a = 3;}
  else if(w>=5.5 && w<=7.9){a = 4;}
  else if(w>=8.0 && w<=10.7){a = 5;}
  else if(w>=10.8 && w<=13.8){a = 6;}
  else if(w>=13.9 && w<=17.1){a = 7;}
  else if(w>=17.2 && w<=20.7){a = 8;}
  else if(w>=20.8 && w<=24.4){a = 9;}
  else if(w>=24.5 && w<=28.4){a = 10;}
  else if(w>=28.5 && w<=32.6){a = 11;}
  else if(w>=32.7){a = 12;}
  
  //風向き条件分岐
  if(a == 0){strcpy(z,"C");}
  else if(x>=112.5 && x<337.5){strcpy(z,"NNE");}
  else if(x>=337.5 && x<562.5){strcpy(z,"NE");}
  else if(x>=562.5 && x<787.5){strcpy(z,"ENE");}
  else if(x>=787.5 && x<1012.5){strcpy(z,"E");}
  else if(x>=1012.5 && x<1237.5){strcpy(z,"ESE");}
  else if(x>=1237.5 && x<1462.5){strcpy(z,"SE");}
  else if(x>=1462.5 && x<1687.5){strcpy(z,"SSE");}
  else if(x>=1687.5 && x<1912.5){strcpy(z,"S");}
  else if(x>=1912.5 && x<2137.5){strcpy(z,"SSW");}
  else if(x>=2137.5 && x<2362.5){strcpy(z,"SW");}
  else if(x>=2362.5 && x<2587.5){strcpy(z,"WSW");}
  else if(x>=2587.5 && x<2812.5){strcpy(z,"W");}
  else if(x>=2812.5 && x<3037.5){strcpy(z,"WNW");}
  else if(x>=3037.5 && x<3262.5){strcpy(z,"NW");}
  else if(x>=3262.5 && x<3487.5){strcpy(z,"NNW");}
  else{strcpy(z,"N");}
  
printf("%s %d\n",z,a);
return 0;
}