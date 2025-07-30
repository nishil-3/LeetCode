class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        /*
        isme kya hua, maximum and nikalna hai, max and hoga largest number ka hi ok 
        abh, largest number le liya and agar laregst number se chote kisi number se and karange toh maximum nhi nikal payange toh isliye humne wahi check kara agar maximum number hi repeat ho raha hai tabhi vo subarray hua varna nahi 
        */
    
        int n = nums.size();
        int maxi = *max_element(nums.begin(),nums.end());
        int cnt = 0;
        int total = 0;
        for (int i =0;i<n;i++)
        {
            if (nums[i]==maxi) 
            {
                cnt++;
                total = max(total,cnt);
            }
            else{
                cnt =0;
            }
        }
        return total ;
        
        
    }
};