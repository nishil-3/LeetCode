class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        int carry = 1;
        reverse(digits.begin(),digits.end());
        

        for (int i = 0;i<n;i++) {
            
                int sum = digits[i] + carry;
                carry = sum / 10;
                digits[i] = (sum % 10);
                // return digits;
               
        
            if (carry == 0)  break;

     
               
            while (digits[i] == 0 && carry != 0) {
                i++;
                if(i<n)
                {
                int sum = digits[i] + carry;
                carry = sum / 10;
                digits[i] = sum % 10;
                }
                else{
                digits.insert(digits.end(), 1);
                // break;
                  reverse(digits.begin(),digits.end());
        return digits;
                }
        
            }
        }
        reverse(digits.begin(),digits.end());
        return digits;
            }
    
};