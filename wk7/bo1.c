#include<stdio.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>
int mode(int a[],int n) {
   int maxValue = 0, maxCount = 0, i, j;
   for(i=0;i<500;i++)
   {
   for (i = 0; i < n; ++i) {
      int count = 0;

      for (j = 0; j < n; ++j) {
         if (a[j] == a[i])
         ++count;
      }

      if (count > maxCount) {
         maxCount = count;
         maxValue = a[i];
      }
   }
 }
   return maxValue;
}
int main()
{
int a[500],n,i;

  scanf("%d %d",&a,&n);
  if(a<=100||a>=1)
  {printf("Mode = %d ", mode(a,n));}
  else
  {printf("FATALERROR");
  break;}

}
