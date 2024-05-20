#include<stdio.h>
#include<string.h>
int check(char *a,int i,int j){
    int checker = 1; //***(important part)
    for(int x=i; x<strlen(a); x++){
        if(a[x] == a[j]){
            checker++;
        }else{
            return 1;
        }
        if(checker == 7){
            return checker;
        }
        j++;
    }
    if(checker != 7){
        return 1;
    }
}
int main(){
    char a[101];
    scanf("%s",a);
    int no = 0;
    for(int i=0; i<strlen(a); i++){
        int j = i+1;
        if(a[i] == a[j]){
            int checker=check(a,i,j);
            if(checker == 7){
                printf("YES");
                no = 1;
                break;
            }else if(checker == 1){
                continue;
            }
        }
    }
    if(no == 0){
        printf("NO");
    }
}