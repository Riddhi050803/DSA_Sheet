class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int leftSum = 0;
        int rightSum = 0;
        int maxSum = 0;
        int rindex = cardPoints.size()-1;
        for(int i = 0;i<k;i++){
            leftSum +=cardPoints[i];
           
        }
         maxSum =leftSum;
        for(int i = k-1;i>=0;i--){
            leftSum = leftSum-cardPoints[i];
            rightSum +=cardPoints[rindex];
            rindex--;
            maxSum = max(maxSum,leftSum+rightSum);
        }
        return maxSum;
    }
};