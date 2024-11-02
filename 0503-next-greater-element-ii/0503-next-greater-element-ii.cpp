class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
           int n = nums.size(); // size of array
        
        // To store the next greater elements
        vector<int> ans(n, -1);
        
        for(int i=0; i < n; i++) {
            
            // Get the current element
            int currEle = nums[i];
             
            /* Nested loop to get the 
            next greater element */
            for(int j=1; j < n; j++) {
                
                // Getting the hypothetical index
                int ind = (j+i) % n;
                
                // If the next greater element is found
                if(nums[ind] > currEle) {
                    
                    // Store the next greater element
                    ans[i] = nums[ind];
                    
                    // Break from the loop
                    break;
                }    
            }
        }
       
        // Return the answer
        return ans;
    }
};