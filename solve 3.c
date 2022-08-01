#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    {
        if( a<b && a>c || a>b && a<c)
            printf("The middle number is : %d",a);

            else if ( b<a && b>c || b>a && b<c )
            printf("The middle number is : %d",b);

        else
            printf("The middle number is : %d ",c);

    }
       getch();

}

