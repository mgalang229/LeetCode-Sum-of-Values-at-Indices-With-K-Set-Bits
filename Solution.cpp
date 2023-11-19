class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int sum = 0;
        for (int i = 0; i < (int) nums.size(); i++) {
            if (check(i, k)) {
                sum += nums[i];
            }
        }
        return sum;
    }
    
    bool check(int x, int k) {
        int cnt = 0;
        while (x > 0) {
            cnt += (x % 2);
            x /= 2;
        }
        return cnt == k;
    }
};
