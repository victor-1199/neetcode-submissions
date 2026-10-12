class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // Map to store character as the key and its latest index as the value
        unordered_map<char, int> hmap;

        // Stores the maximum length of a substring with all unique characters
        int maxL = 0;

        // i = right pointer (window end), j = left pointer (window start)
        int i = 0, j = 0;

        // Expand the right side of the window by iterating through each character
        for (i = 0; i < s.size(); ++i) 
        {
            // Case 1: Character is not in our current valid window
            if (hmap.find(s[i]) == hmap.end()) 
            {
                // Record the character and its current position
                hmap[s[i]] = i;
            }
            // Case 2: Duplicate character detected inside the current window
            else 
            {
                // Calculate and record the length of the valid window before this duplicate (from j to i - 1)
                maxL = max(maxL, i - j);

                // Evict all characters that fall outside the new window from the map
                for (int k = j; k < hmap[s[i]]; ++k) 
                {
                    // Remove each evicted character from the map so they don't trigger false duplicate checks later
                    hmap.erase(s[k]);
                }

                // Slide the start of the window (j) to one position past the old duplicate
                j = hmap[s[i]] + 1;

                // Update the duplicate character's recorded position to its new index i
                hmap[s[i]] = i;
            }
        }

        // Account for the final window in case the string ends with a valid unique sequence
        maxL = max(maxL, i - j);

        // Return the overall longest length found
        return maxL;
    }
};