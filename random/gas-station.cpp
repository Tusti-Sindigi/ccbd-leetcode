#include <vector>
using namespace std;

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) 
    {
        int start=0, total=0, curr=0;

        for(int i=0;i<gas.size();i++)
        {
            int available=gas[i]-cost[i];

            total+=available;
            curr+=available;

            if(curr<0)
            {
                start=i+1;
                curr=0;
            }
        }
        if(total>=0)
            return start;
        else 
            return -1;
    }
};