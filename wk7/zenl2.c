#include <stdio.h>

int main (){
    int data[500],a=0;
    int index=0,mode[2][500],i,j,modeindex=0;
    //< input data >
    while (1){
        scanf("%d",&a);
        if(a<0) break;
        data[index] = a;
        if(index == 0){
            mode[0][modeindex] = data[0];
            mode[1][modeindex] = 1;
            modeindex++;
        }
        if(index!=0){
            for(j=0;j<modeindex;j++){
                printf("\tChecking data:%d with mode:%d\n",index,j);
                if(data[index]==mode[0][j]){
                    mode[1][j]++;
                    printf("found duplicated data\n");
                    //continue;
                    break;
                }
                else if(j == modeindex-1){
                    mode[0][modeindex] = data[index];
                    mode[1][modeindex] = 1;
                    modeindex++;
                    printf("No relevant data\n");
                    break;
                }
            }
        }
        index++;

    }

    //< for debugging >

    for(i=0;i<modeindex;i++){
        printf("%d ",mode[0][i]);
    }
    printf("\n");
    for(i=0;i<modeindex;i++){
        printf("%d ",mode[1][i]);
    }

    // <find max mode>
    int maxmode =0,maxmodeid,duplicate = 1;
    for(i=0;i<modeindex;i++){
        if(maxmode<mode[1][i]) {
            maxmode=mode[1][i];
            maxmodeid = i;
        }
    }
    for(i=0;i<modeindex;i++){
        if(maxmode!=mode[1][i]) {
            duplicate = 0;
            break;
        }
    }
    if(duplicate==0) printf("Mode is : %d\n",mode[0][maxmodeid]);
    else printf("no mode\n");
}
