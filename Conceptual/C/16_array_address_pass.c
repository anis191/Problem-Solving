#include<stdio.h>
#include<string.h>
#include <stdbool.h>

void pass_array_string(int *arr, int n, char str[]){
    for (int i = 0; i < n; i++){
        *(arr+i) += 2;
    }
    bool flag = false;
    for (int i = 0; i < strlen(str); i++){
        if (i == 0){
            if (str[i] >= 'a' && str[i] <= 'z'){
                str[i] = str[i] - 32;
            }
        }
        if (str[i] == 32)
        {
            flag = true;
            continue;
        }
        if (flag == true)
        {
            if (str[i] >= 'a' && str[i] <= 'z')
            {
                str[i] = str[i] - 32;
            }
            flag = false;
        }
        
    }
    printf("str inside function: %s\n", str);
}

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    getchar();

    char str[100];
    fgets(str, 30, stdin);

    pass_array_string(arr, n, str);

    for (int i = 0; i < n; i++)
    {
        printf("arr[%d] is: %d\n", i, arr[i]);
    }
    
}