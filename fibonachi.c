#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=0,y=1,next,n;
    printf("enter until where you do want to continue fibonachi:");
    scanf("%d",&n);
    int i;
    for (i=0;i<n;i++){if (i<=1){next=i;}
                      else {next=x+y;x=y;y=next;} printf("%d\t",next);}
    return 0;
}
