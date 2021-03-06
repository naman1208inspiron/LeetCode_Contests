class Solution {
public:
    int minMaxGame(vector<int>& nums) {
        int n= nums.size();
        if(n==1) return nums[0];
        
        vector<int>temp;
        for(int i=0; i<n-1; i+=2){
            if(i%4==0) temp.push_back(min(nums[i], nums[i+1]));
            else temp.push_back(max(nums[i], nums[i+1]));
        }
        int res= minMaxGame(temp);
        return res;
    }
};
//``````````iterative``````````````
class Solution {
public:
    int minMaxGame(vector<int>& nums) {
        int n= nums.size();
        while(n!=1){
            int k=0;
            for(int i=0; i<n/2; i++){
                if(k%2==0) nums[k]= min(nums[2*i], nums[2*i+1;
                else nums[k]= max(nums[2*i], nums[2*i+1]);
                k++;
            }
            n/=2;
        }
        return nums[0];
    }
};
