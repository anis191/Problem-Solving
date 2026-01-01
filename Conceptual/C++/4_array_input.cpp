#include <iostream>
#include <limits>
using namespace std;

int main(){
    int arr[100];
    char str[100];

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    getchar();
    // cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cin.getline(str, 10);
    
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << str;
}