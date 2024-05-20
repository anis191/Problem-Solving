#include<stdio.h>
int main(){
    int y;
    scanf("%d",&y);
    int year[4];
    int r = 0;
    int temp = y+1;
    int ans = 0;
    //for(int i=temp; i<=9000; i++)
    int i = temp;
    while(1){
        temp = i;
        for(int j=0; j<4; j++){
            r = temp % 10;
            year[j] = r;
            temp = temp / 10;
        }
        int checker = 0;
        for(int k=0; k<3; k++){
            for(int j=k+1; j<4; j++){
                if(year[k] == year[j]){
                    checker++;
                    break;
                }else{
                    continue;
                }
            }
        }
        if(checker != 0){
            i++;
            // temp++;
            continue;
        }else{
            ans = i;
            break;
        }
    }
    printf("%d",ans);
    return 0;
}