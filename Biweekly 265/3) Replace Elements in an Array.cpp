class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& op) {
        unordered_map<int, int> mp;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]= i;
        }
        for(int i=0; i<op.size(); i++){
            int index= mp[op[i][0]];
            int final= op[i][1];
            
            mp.erase(op[i][0]);
            
            nums[index] = final;
            mp[final]= index;
        }
        return nums;
    }
};
