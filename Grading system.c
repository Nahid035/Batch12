#include <stdio.h>
int main ()
{
    int a;

    printf("Enter the number\n");
    scanf("%d",&a);
    if (a>=80 && a<=100 ){
        printf("A+");
    }
    else if(a>=70 && a<=79){
        printf("A");
    }
    else if(a>=60 && a<=69){
        printf("A-");
    }

    else if(a>=50 && a<=59){
        printf("B");
    }

    else if(a>=40 && a<=49){
        printf("C");
    }

    else if(a>=33 && a<=39){
        printf("D");
    }
    else
        printf("F");

    return 0;
}
