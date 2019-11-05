#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5];
    int dob=1;
    int b;
    int max=0;

     for (int i = 0;i < 5; i++)
     {
        printf("a[%d]=",i);
        scanf("%d", & a[i]);
     }
     for (int i = 0;i < 5; i++)
    {
        if(a[i] > 0)
        dob=a[i]*dob;
    }
     printf("dobutok:%d ",dob );
     for (int i=0;i<5; i++)
     {
        if(a[i]>max)
        max=a[i];
     }
     printf("b=" );
     scanf("%d", &b);
     if(b==0)
        printf("max= %d", max);
     if(b!=0)
         for (int i=0;i<5; i++)
         {
            if(a[i]>0)
            printf("num%d: %d", i, a[i] );
         }
    return 0;
}
