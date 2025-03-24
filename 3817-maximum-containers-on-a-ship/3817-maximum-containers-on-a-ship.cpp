class Solution {
public:
    int maxContainers(int n, int w, int maxWeight) {
        int deck = n*n;
        if (deck*w <= maxWeight) return deck;
        return maxWeight/w;
        
        
    }
};