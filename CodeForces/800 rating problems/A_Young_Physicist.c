#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n][3];
    for(int i=0; i<n; i++){
        for(int j=0; j<3; j++){
            scanf("%d",&a[i][j]);
        }
    }
    int checker = 0;
    for(int i=0; i<n; i++){
        int sum = 0;
        for(int j=0; j<3; j++){
            sum += a[i][j];
        }
        if(sum != 0){
            checker++;
            // break;
        }
    }
    if(checker != 0){
        printf("NO");
    }else{
        printf("YES");
    }
    return 0;
}
