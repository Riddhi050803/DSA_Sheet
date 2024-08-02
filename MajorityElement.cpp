class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int cnt = 0;
        int cnt1 = 0;
        int ele ;
        int n = nums.size();
        for(int i = 0;i<n;i++){
            if(cnt==0){
                cnt++;
                ele = nums[i];
            }
            else if(nums[i]==ele){
                cnt++;
            }
            else{
                cnt--;
            }
        }
        for(int i = 0;i<n;i++){
            if(ele == nums[i]){
                cnt1++;
            }
        }
        if(cnt1>=(n/2)){
            return ele;
        }
        return -1;
    }
};