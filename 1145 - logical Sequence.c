
#include<stdio.h>
int main()
{
   int i,j,x,y,l,k;
   int m =1;

    scanf("%d %d",&x,&y);
    l = y/x;
    k = x;
    for(i=1;i<=l;i++){
      printf("%d ",m);
      for(j=m+1;j<=k;j++){
            printf(" %d",j);

        }
      printf("\n");
      m = m+x;
      k = k+x;

    }

 return 0;

}
