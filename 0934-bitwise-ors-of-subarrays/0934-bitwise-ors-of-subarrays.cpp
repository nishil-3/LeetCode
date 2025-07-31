class Solution {
public:

    int subarrayBitwiseORs(vector<int>& arr) {
        /*
        here i will use a set to store all the values , it will automatically store unique values and 
        */
        unordered_set <int> result_ors ;
        unordered_set <int> current_ors ;
        for(auto x: arr)
        {
            unordered_set<int> next_ors ;
            next_ors.insert(x);

            for(int y : current_ors)
            {
                next_ors.insert(x | y);
            }
            result_ors.insert( next_ors.begin(), next_ors.end());
        current_ors  = next_ors ;
        }
        return result_ors.size();
    }
};