class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
     int total_cost=0;
    int total_fuel=0;
    int i=0;
    int n=gas.size();
        for(i=0;i<n;i++)
        {
            total_cost+=cost[i];
            total_fuel+=gas[i];
        }
        if(total_cost>total_fuel)
            return -1;
        int start=0;
         total_fuel=0;
        for(i=0;i<n;i++)
        {
            
            total_fuel+=gas[i]-cost[i];
            if(total_fuel<0)
            {
                start=i+1;
                total_fuel=0;
            }
        }
        return start;
    }
};