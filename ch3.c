#include <stdio.h>
#include <stdlib.h>


int factorial (int x){
if (x==1)
return 1;

else
return x*factorial(x-1);


}

int countdown (int y){
printf("%d\n",y);
if (y>0)

    countdown(y-1);

}

int main (){
int n=3;
printf("the factorial =%d \n",factorial(n));
countdown(n);
}