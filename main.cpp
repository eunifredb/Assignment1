
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {\
        vector<int> arr(2);

          //0(n^2)
            for (int i=0; i<nums.size();i++){
                for (int j=i+1; j<nums.size();j++){
                    //if nums [i] and next to it = target then I have answer
                    if (nums[i] + nums[j] == target){
                        //have answer
                        arr[0] = i;//saving ndex, not number
                        arr[1] = j;//same as above, save index
                    }
                }
            }
                return arr;
    }
};
