class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int , int> seen;
        int index=0;
        for(int num:nums){
            int complement = target - num;
            if(seen.find(complement)!=seen.end()){
                return
                {seen[complement],index};

            }
                seen[num]=index;
                index++;
            
        }
        

      return {};  
    }
};