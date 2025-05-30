#include <vector>
using namespace std;

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> result;
        for(int i=0; i<nums.size(); i++){
            bool isRepeated = false;
            for(int j=0; j<nums.size(); j++){
                if(i != j && nums[i] == nums[j]){
                    isRepeated = true;
                    break;
                }
            }
            if(!isRepeated){
                result.push_back(nums[i]);
            }
        }
        return result;
    }
};