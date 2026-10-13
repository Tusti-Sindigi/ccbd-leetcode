#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) 
    {
        int mid=ceil((nums.size()-1)/2);
        long long sum=0;

        for(int i=0;i<nums.size();i++)
            nums[i]=abs(nums[i]);

        sort(nums.begin(), nums.end(), greater<long long>());

        for(int i=0;i<=mid;i++)
            sum+=nums[i]*nums[i];

        for(int i=mid+1;i<nums.size();i++)
            sum-=nums[i]*nums[i];

        return sum;
    }
};