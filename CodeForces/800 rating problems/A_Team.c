#include<stdio.h>
int main(){
    int r,sure=0;
    scanf("%d",&r);
    int a[r][3];
    for(int i=0; i<r; i++){
        for(int j=0; j<3; j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0; i<r; i++){
        int checker = 0;
        //Petya-
        if(a[i][0] ==  1){
            checker++;
        }
        //Vasya-
        if(a[i][1] == 1){
            checker++;
        }
        //Tonya-
        if(a[i][2] == 1){
            checker++;
        }
        if(checker >= 2){
            sure++;
        }
    }
    printf("%d",sure);
    return 0;
}