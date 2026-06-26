#include <vector>
#include <unordered_set>

class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {

        std::unordered_set<int> st;

        for(int num : nums) {

            if(st.find(num) != st.end())
                return true;

            st.insert(num);
        }

        return false;
    }
};