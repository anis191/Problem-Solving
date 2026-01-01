#include<bits/stdc++.h>
using namespace std;
char* string_concat(char *a, char *b){
    char copy_a[2001],copy_b[1000];
    strcpy(copy_a,a);
    strcpy(copy_b,b);
    strcat(copy_a,copy_b);
    char *concated_str = new char[1000];
    strcpy(concated_str,copy_a);
    return concated_str;
}
int main(){
    char a[2001],b[1000];
    cin>>a;
    cin>>b;
    int length_a = strlen(a);
    int length_b = strlen(b);
    char * concated_str = string_concat(a,b);
    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;
    cout<<length_a<<" "<<length_b<<endl;
    cout<<concated_str<<endl;
    cout<<a<<" "<<b;
    delete[] concated_str;
    return 0;
}