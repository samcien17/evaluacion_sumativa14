#include <stdio.h>
#include<stdlib.h>
int fun(int x, int n);

int main(){
   int x,n;
   printf("ingrese el valor de x:");
   scanf("%d",&x);
   printf("ingrese el valor de n:");
   scanf("%d",&n);
     int y=fun(x,n);
     printf("el valor de H%d cuando x=%d es igual a %d",n,x,y);
   return 0;

}

int fun(int x, int n){

if(n==0){
    return 1;
}

else if (n==1){
    return 2*x;
}

else if(n>1){
    return 2*x*fun(x,n - 1) - 2*(n-1)*fun(x,n-2);
}
}








