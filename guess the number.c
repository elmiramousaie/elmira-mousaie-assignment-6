#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=687 , y;
    printf("guess which number i have?");
    while(x!=y){scanf("%d",&y);if (x==y){printf("you are right\t");break;}
                               else if (x>y){printf("higher\t");}
                               else if(x<y){printf("lower\t");}}
    return 0;
}
