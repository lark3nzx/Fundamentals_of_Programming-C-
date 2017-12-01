#include<stdio.h>
main(){
  int n,row,i,star;
  scanf("%d",&n);
  for(row=1;row<=n;row++){
    if(row==1||row==n){
      for(i=1;i<=n;i++){
    printf("*");
      }
    }
    else { for(star=1;star<=n;star++){
        if(star==n-row+1)
          printf("*");
        else printf(" ");
       }
    }

    printf("\n");
  }
}
