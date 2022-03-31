class Solution {
public:
        vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>temp;
        unordered_map<int,int>s;
       for(int i = 0; i < nums.size(); i++){
            if(s.find(target - nums[i]) != s.end()){
                temp.push_back(s[target- nums[i]]);
                temp.push_back(i);
                break;
            }
            s[nums[i]] = i;
        }
        return temp;
    }
        
    
};