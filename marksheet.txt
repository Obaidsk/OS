 #include <stdio.h>
int main (){
    int BEEE,Maths,Eng ,Avg, per;
    printf("Enter the marks\n");
    scanf("%d%d%d", &BEEE,&Maths,&Eng);
    Avg=(BEEE+ Maths+ Eng)/3;
    printf("The avg :%d\n",Avg);
    per=(BEEE+Maths+Eng)*100/300;
    printf("The percentage :%d\n",per);
     
     if(per>90 ){
         printf("A+\n");
     }
     else if (per > 80) {
             printf("A+\n");
     }
     else { printf( "B\n");
     }
}