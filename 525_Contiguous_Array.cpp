// Given a binary array nums, return the maximum length of a contiguous subarray with an equal number of 0 and 1.

 

// Example 1:

// Input: nums = [0,1]
// Output: 2
// Explanation: [0, 1] is the longest contiguous subarray with an equal number of 0 and 1.
// Example 2:

// Input: nums = [0,1,0]
// Output: 2
// Explanation: [0, 1] (or [1, 0]) is a longest contiguous subarray with equal number of 0 and 1.
// Example 3:

// Input: nums = [0,1,1,1,1,1,0,0,0]
// Output: 6
// Explanation: [1,1,1,0,0,0] is the longest contiguous subarray with equal number of 0 and 1.
 

// Constraints:

// 1 <= nums.length <= 105
// nums[i] is either 0 or 1.

//solution
class Solution {
public:
    int findMaxLength(vector<int>& nums)
     { int currSum = 0, res = 0, n= nums.size();
     map<int,int>currSumMap;
     currSumMap[0]=-1;
     for(int i=0;i<n;i++){
        if(nums[i]==0){
            currSum--;
        }else{
            currSum++;
        }
        if(currSumMap.find(currSum)!=currSumMap.end())
        {
            res=max(res,i-currSumMap[currSum]);
        }else{
            currSumMap[currSum]=i;
        }
     }
    
        
        return res;
    }
};