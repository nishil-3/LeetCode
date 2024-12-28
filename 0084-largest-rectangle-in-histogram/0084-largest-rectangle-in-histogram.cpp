class Solution {
    private :
    vector<int> findnse (vector<int> & arr)
    {
        int n = arr.size();
        stack<int> st ;
        vector<int> ans (n);
        for(int i =n-1;i>= 0;i--)
        {
            while (!st.empty () && arr[st.top()] >= arr[i])
            {
                st.pop();
            }
            if (st.empty() ) ans [i] = n;
            else{
                ans[i]= st.top();
            }
            st.push(i);
        }
        return ans ;

    }

      vector<int> findpse (vector<int> & arr)
    {
        int n = arr.size();
        stack<int> st ;
        vector<int> ans (n);
        for(int i =0;i<n;i++)
        {
            while (!st.empty () && arr[st.top()] >= arr[i])
            {
                st.pop();
            }
            if (st.empty()) ans [i] = -1;
            else{
                ans[i]= st.top();
            }
            st.push(i);
        }
        return ans ;
        
    }


public:

    int largestRectangleArea(vector<int>& heights) {
        vector<int> nse = findnse (heights);
        vector<int> pse = findpse (heights);

        int n =heights.size();
        int area ;
        int largestArea = 0;
        for(int i =0;i<n;i++)
        {
            area = heights[i] * (nse[i] - pse[i] -1) ;
            largestArea = max(largestArea, area);
        }
        return largestArea ;

        
    }
};