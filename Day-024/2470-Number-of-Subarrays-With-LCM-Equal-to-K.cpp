class Solution {
public:
    int subarrayLCM(vector<int>& nums, int k) {

        int n = nums.size();
        int ans = 0;

        for (int i = 0; i < n; i++) {

            long long currLCM = 1;

            for (int j = i; j < n; j++) {

                currLCM = lcm(currLCM, (long long)nums[j]);

                if (currLCM == k)
                    ans++;

                if (currLCM > k || k % currLCM != 0)
                    break;
            }
        }

        return ans;
    }
};