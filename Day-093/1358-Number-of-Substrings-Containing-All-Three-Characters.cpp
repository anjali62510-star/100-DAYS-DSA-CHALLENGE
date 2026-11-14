
class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.length();

        int count[3] = {0, 0, 0};
        int left = 0;
        int ans = 0;

        for (int right = 0; right < n; right++) {

            // Increase frequency of current character
            count[s[right] - 'a']++;

            // Check if window contains a, b and c
            while (count[0] > 0 &&
                   count[1] > 0 &&
                   count[2] > 0) {

                // All extensions of this window are valid
                ans += n - right;

                // Shrink window from the left
                count[s[left] - 'a']--;
                left++;
            }
        }

        return ans;
    }
};
