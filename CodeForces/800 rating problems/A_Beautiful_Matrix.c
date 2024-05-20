#include<stdio.h>
#include<math.h>
int main(){
    int moves = 0;
    int a[5][5];
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            scanf("%d",&a[i][j]);
        }
    }
    int position_i=0,position_j=0;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if(a[i][j] == 1){
                position_i=i;
                position_j=j;
                break;
            }
        }
    }
    moves += abs(position_i-2);
    moves += abs(position_j-2);
    printf("%d",moves);
    return 0;
}