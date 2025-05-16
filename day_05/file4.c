#include <stdio.h>

int main(){
    // fibonacci serices

    // m-1
    int a=1,b=1,c=10;
    for(int i=1;i<=10;i++){
        if (i==1||i==2) printf("%d \n",a);
        else{
            c=a+b;
            a=b;
            b=c;
            printf("%d \n",c);}
        }

    // m-2
    int x;
    scanf("%d",&x);
    int a=1,b=1,c=0;
    if (i==1||i==2) printf("%d \n",a);
    else{
        for(int i=1;i<=10;i++){
            c=a+b;
            a=b;
            b=c;
            }printf("%d \n",c);
        }
    return 0;
}









    /*int x scanf("%d",&x)*/