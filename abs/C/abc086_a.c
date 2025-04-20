// abs - abc086_a
// Language: C (gcc 12.2.0)
// https://atcoder.jp/contests/abs/submissions/57209280

#include<stdio.h>
int main(){
    int a,b;
    
    scanf("%d %d",&a,&b);
    
    if(a*b%2==1)
        printf("Odd");
    else
        printf("Even");
}