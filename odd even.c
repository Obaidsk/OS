#include <stdio.h>
 int main(){
     int a;
     printf("Enter any number\n");
     scanf("%d",&a);
     if ( a %2==0){
         printf("%d is a even number\n",a);
     }else  {
         printf("%d is a odd number\n",a);
     } 
 }