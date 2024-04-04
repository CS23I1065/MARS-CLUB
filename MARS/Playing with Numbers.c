#include<stdio.h>
int primeornot(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n,i,j,k,l,flag=1,p1,p2,p3,p4;
    printf("ENTER THE NUMBER\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       for(j=0;j<n;j++)
       {
           for(k=0;k<n;k++)
           {
               for(l=0;l<n;l++)
               {
                   if(primeornot(i) && primeornot(j) && primeornot(k) && primeornot(l))
                   {
                       if(n==(i*j*k*l))
                       {
                           printf("%d %d %d %d",i,j,k,l);
                           return 0;
                       }
                   }
               }
           }
       }
    }

}
