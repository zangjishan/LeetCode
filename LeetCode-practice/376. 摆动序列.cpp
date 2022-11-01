//2023.06.09
class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        if (nums.size() < 1) return nums.size();
        int curdiff = 0;
        int prediff = 0;
        int result = 1;
        for (int i = 0; i < nums.size() - 1; i++) {
            curdiff = nums[i + 1] - nums[i];
            if ((prediff <= 0 && curdiff > 0) || (prediff >= 0 && curdiff < 0)) {
                result++;
                prediff = curdiff;
            }
        }
        return result;
    }
};