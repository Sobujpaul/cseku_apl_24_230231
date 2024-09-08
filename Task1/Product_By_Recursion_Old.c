#include<stdio.h>
int RP(int a,int b);
int main(){

int x=RP(1,10);

printf("%d",x);

//return 0;
}
int RP(int a,int b)
{
  if(a==b+1)
  {
   return 1;
  }
  else
    return a*RP(a+1,b);

}

