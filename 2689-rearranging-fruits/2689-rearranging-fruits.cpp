class Solution {
    #define ll long long 
public:

    long long minCost(vector<int>& basket1, vector<int>& basket2) {
        /*
        ek hashmap lenge and 2o ki freq daal denge usme 
        1st mei plus karange 
        2 mei minus 
        agar negative hai toh nahi ho payega
        positive freq hai toh ho jayegi 
        */
        map<int,int> balance;
        int mini = INT_MAX;
        int n = basket1.size();
        for(int i =0;i<n;i++)
        {
            balance[basket1[i]]++;
            balance[basket2[i]]--;
            mini = min({mini,basket1[i],basket2[i]});
        }
        vector<int> transfer ;
        for(auto & [val,bal] : balance)
        {
            if (bal&1) return -1;
            for(int i =0;i<abs(bal)/2;i++)
            {
                transfer.push_back(val);
            }
        }
        ll cost = 0;
        for(int i =0;i<transfer.size()/2;++i)
        {
            cost+=min({2*mini, transfer[i]});
        }
        return cost ;
    }
};