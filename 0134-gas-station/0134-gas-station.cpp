class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size();
         int total_gas = 0, total_cost = 0;
         int tank = 0, start_index = 0;

         for(int i =0;i<n;i++)
         {
            total_cost += cost[i];
            total_gas +=gas[i];
         }
         if (total_gas < total_cost) return -1;
         for (int i =0;i<n;i++)
         {
            tank += gas[i] - cost[i];
            if (tank < 0)
            {
                start_index = i+1;
                tank = 0;
            }
         }
         return start_index;

        
    }
};