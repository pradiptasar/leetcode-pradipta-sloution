class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        // Strategy 1: Buy entirely individually
        long long costIndividual = 1LL * need1 * cost1 + 1LL * need2 * cost2;
        
        // Strategy 2: Buy ONLY combo items to satisfy the maximum need
        long long costAllCombo = 1LL * max(need1, need2) * costBoth;
        
        // Strategy 3: Buy combo items for the overlap, then buy the rest individually
        long long overlap = min(need1, need2);
        long long costMixed = overlap * costBoth 
                            + 1LL * (need1 - overlap) * cost1 
                            + 1LL * (need2 - overlap) * cost2;
        
        // Return the minimum of all three strategies
        return min({costIndividual, costAllCombo, costMixed});
    }
};