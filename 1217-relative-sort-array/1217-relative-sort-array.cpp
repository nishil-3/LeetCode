class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int, int> m;
        for(int i = 0; i < arr1.size(); i++) m[arr1[i]]++;
        int a = 0;
        for(int i = 0; i < arr2.size(); i++){
            while(m[arr2[i]]--){
                arr1[a++] = arr2[i];
            }
        }
        for(auto it : m){
            if(it.second > 0){
                while(it.second--) arr1[a++] = it.first; 
            }
        }
        return arr1;
    }
};