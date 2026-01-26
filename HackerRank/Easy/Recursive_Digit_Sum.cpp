#include<iostream>
#include<vector>
#include<algorithm>
#include<sstream>
using namespace std;

int digit_sum(long long n){
    if(n <= 9) return n;
    long long sum = 0;
    while(n > 0){
        sum += n % 10;
        n /= 10;
    }
    return digit_sum(sum);
}

int main(){
    string num; cin >> num;
    long long n;
    stringstream ss(num);
    ss >> n;
    int k; cin >> k;
    long long sum = 0;
    // while(n > 0){
        // sum += n % 10;
        // n /= 10;
    // }
    for(char c : num) sum += c - '0';
    sum *= k;
    // n = sum * k;
    int r = digit_sum(sum);
    cout << r;
}