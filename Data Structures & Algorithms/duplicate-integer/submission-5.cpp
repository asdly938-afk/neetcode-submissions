class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int x;
        for(int i=0;i<nums.size();i++){
            x=nums[i];
            for(int j=i+1;j<nums.size();j++){
                if(x==nums[j])
                    return true;
            }
        }
        return false;
    }

};