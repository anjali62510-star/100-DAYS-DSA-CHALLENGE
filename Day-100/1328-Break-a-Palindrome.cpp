
class Solution {
public:
    string breakPalindrome(string palindrome) {
        int n = palindrome.length();

        // A single character cannot be broken
        if (n == 1) {
            return "";
        }

        // Check only the first half
        for (int i = 0; i < n / 2; i++) {

            // Replace the first non-'a' character
            if (palindrome[i] != 'a') {
                palindrome[i] = 'a';
                return palindrome;
            }
        }

        // If the first half contains only 'a',
        // change the last character to 'b'
        palindrome[n - 1] = 'b';

        return palindrome;
    }
};
