 #include <stdio.h>
 int main(){
     char ch;
       printf("Enter any charecter\n");
       scanf("%c",&ch);
       if(ch>='0' && ch<='9'){
           printf("'%c'this is a not char\n",ch);}
           else{
               printf("'%c'this is a char\n",ch);
           }
           return 0;
           
 }