// q3 Armstrong number
// notes
#include <stdio.h>

int main(){   
    int x;
    scanf("%d",&x);
    int y=x;
    int count=0;
    while (x>0)           //-> to find the number count
    {
        x=x/10;
        count++;
    }  
    x=y;
    int sum=0;
    for(int j=1;j<=count;j++){
        int r=x%10;
        int prod=1;
        for(int i=1;i<=count;i++){            // to multiplie the numbers
            prod=prod*r;
        }
        sum+=prod;
        x/10;                       // to remove the last number for next illaration
    }
    if (y==sum) printf("Armstrong number");              // checking for the answer
    else printf("Not a Armstrong number");

    return 0;
}
