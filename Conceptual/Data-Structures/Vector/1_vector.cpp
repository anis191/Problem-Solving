#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    cout << "First element: " << v[0] << endl;
    cout << "Last element: " << v.back() << endl;

    cout << "Vector elements: ";
    for (size_t i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    v.pop_back();

    cout << "Size after pop: " << v.size() << endl;

    return 0;
}