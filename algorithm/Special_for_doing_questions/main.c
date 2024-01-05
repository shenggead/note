#include "stdio.h"
int main(){
    int L,M,arr[100][2],max =  0,min = 0;
    scanf("%d%d",&L,&M);
    for(int i = 0; i < M;i++){
        scanf("%d%d",&arr[i][0],&arr[i][1]);
    }
    for (int i = 0; i < M; ++i) {
        min = arr[i][0]  < min ? arr[i][0] : min;
    }
    for (int i = 0; i < M; ++i) {
        max = arr[i][1]  > max? arr[i][1] : max;
    }
    printf("%d",L - (max - min));
    return 0;
}