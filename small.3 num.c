#include<stdio.h>
#include<conio.h>
int main()
{

    int a,b,c;
    printf("enter three num:\n");
    scanf("%d,%d,%d",&a,&b,&c);
    if(a<b  && a<c)
    {
        printf("a is smallest");
    }
    else
     if(b<a  &&  b<c)
     {
         printf("b is smallest");
     }
     else
        printf("c is smallest");

    return 0;
}
