#include <stdio.h>
int main(){
int a, b, f, i;

  a = 0;
  b = 1;

  for (i = 1; i <= 10; ++i){
    if(i == 1){
      printf("%d \n", a);
    }else if(i == 2){
      printf("%d \n", b);
    }else{
      f = a + b;
      a = b;
      b = f;
            
      printf("%d \n",f);
    }
  }
  return 0;












}