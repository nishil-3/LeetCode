class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n =arr.size();
        int per =ceil (n * 25)/100;
        
        map<int,int> mpp;
        for(int i =0;i<n;i++)
        {
            if (mpp[arr[i]]>= per)
            {
                return arr[i];
            }
            mpp[arr[i]]++;

        }
        return 1 ;

        
    }
};