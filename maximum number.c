#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("enter some numbers then press 0 to stop :");
    int x,max_number=0 ;
    while (x!=0) {scanf("%d",&x);if (x>max_number){max_number=x;}}
    printf("the maximum number is : %d",max_number);
    return 0;
}
