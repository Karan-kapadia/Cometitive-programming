class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result;
        int max = *max_element(candies.begin(), candies.end());
        for(int i=0; i<candies.size(); i++){
            int temp = candies[i] + extraCandies;
            if(temp >= max)
                result.push_back(true);
            else
                result.push_back(false);
        }
        return result;
    }
};