class Solution {
public:
    int binary (vector<vector<int>>& items, int target)
    {
        int left = 0;
        int right = items.size()-1;
        int maxi = 0;
        while(left <= right)
        {
            int mid  = left+(right -left )/2;
            if (items[mid][0]<=target)
            {
                maxi = max(maxi,items[mid][1] );
                left = mid +1;
            }
            else {
                right = mid -1 ;
            }
        }
        return maxi ;
    }
    vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
        sort (items.begin(),items.end());
        int n = items.size();
        // prefix array 
        for (int i =1;i<n;i++)
        {
            items[i][1] = max(items[i-1][1], items[i][1]);
        }
        vector<int> ans ;
        for (int i =0;i<queries.size();i++)
        {
            int maxi = binary( items, queries[i]);
            ans.push_back(maxi);
        }
        return ans ;

        
    }
};