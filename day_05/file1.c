#include <stdio.h>
int main(){

    //q1
    int x;
    scanf("%d",&x);
    int ans=0;
    while (x>0)
    {
        int r=x%10;
        ans=ans*10+r; 
        x=x/10; 
    }
    printf("%d \n",ans);

    return 0;
}