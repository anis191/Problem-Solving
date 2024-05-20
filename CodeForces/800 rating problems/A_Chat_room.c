#include<stdio.h>
#include<string.h>
int hello(char *a, int size, int i){
    char temp[6];
    int q=0,h=0,e=0,l=0,o=0,yes=0;
    for(int p=i; p<size; p++){
        if(a[p] == 'h'){
            h++;
            if(h == 1){
                temp[q] = 'h';
                q++;
            }else{
                continue;
            }
        }else if(a[p] == 'e'){
            e++;
            if(e == 1){
                temp[q] = 'e';
                q++;
            }else{
                continue;
            }
        }else if(a[p] == 'l'){
            l++;
            if(l <= 2){
                temp[q] = 'l';
                q++;
            }else{
                continue;
            }
        }else if(a[p] == 'o'){
            o++;
            if(o == 1){
                temp[q] = 'o';
                q++;
            }else{
                continue;
            }
        }else{
            continue;
        }
    }
    temp[q] = '\0';
    if(strcmp(temp,"hello") == 0){
        yes++;
        return yes;
    }else{
        return 0;
    }
}
int main(){
    char a[101];
    scanf("%s",a);
    int size = strlen(a);
    int no=0;
    for(int i=0; i<size; i++){
        if(a[i] == 'h'){
            int yes = hello(a,size,i);
            if(yes == 1){
                printf("YES");
                no++;
                break;
            }else{
                continue;
            }
        }
    }
    if(no == 0){
        printf("NO");
    }
    return 0;
}