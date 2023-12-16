#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("enter the number:");
    int x;
    scanf("%d",&x);
    int i , prime_number,composite_number;
    for (i=2;i<=sqrt(x);i++) {if(x%i==0){composite_number=x;break;}
                              else if (x%i!=0){prime_number=x;}}
    if (composite_number==x){printf("%d is a composite number",x);}
    else if(prime_number==x){printf("%d is a prime number",x);}


    return 0;
}
