#include<iostream>
#include<vector>
using namespace std;

class NumArray {
public:
    NumArray(vector<int>& nums) {
        vector<int>ps(nums);
        cout<< nums.size();
    }
    
    int sumRange(int left, int right) {
        
    }
};

int main(){
    vector<int> num = {1,2,3,4,5};
    NumArray NumArray(num);
    
}