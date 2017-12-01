
#include<stdio.h>
#include<stdlib.h>
#define count 10000000
void main()
{int i,apple=20,pineapple=47,water=92,temp,mul=0,sum=0;
  printf("Buy menu\n");
printf("select\n[0]apple %dusd\n[1]pineapple %dusd\n[2]water %dusd\n",apple,pineapple,water);

  for (mul = 0; mul < count;mul++)
  {
  scanf("%d",&temp);
   if(0>temp>2)printf("RETYPE\n");break;
  switch(temp)
 {case 0: if(temp==0){sum+=20;mul=mul+1;if(mul%10==0){sum=sum-(sum*0.1);printf("discount 10%!!\n");}
    printf("that will be %dusd run :%dx\n",sum,mul);}
  case 1: if(temp==1){sum+=47;mul=mul+1;if(mul%10==0){sum=sum-(sum*0.1);printf("discount 10%!!\n");}
    printf("that will be %dusd run :%dx\n",sum,mul);}
  case 2: if(temp==2){sum+=92;mul=mul+1;if(mul%10==0){sum=sum-(sum*0.1);printf("discount 10%!!\n");}
    printf("that will be %dusd run :%dx\n",sum,mul);}
 }
 continue;
  }


}
