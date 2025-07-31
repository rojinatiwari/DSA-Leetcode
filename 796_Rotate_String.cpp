// Given two strings s and goal, return true if and only if s can become goal after some number of shifts on s.

// A shift on s consists of moving the leftmost character of s to the rightmost position.

// For example, if s = "abcde", then it will be "bcdea" after one shift.
 

// Example 1:

// Input: s = "abcde", goal = "cdeab"
// Output: true
// Example 2:

// Input: s = "abcde", goal = "abced"
// Output: false
 

// Constraints:

// 1 <= s.length, goal.length <= 100
// s and goal consist of lowercase English letters.

//solution:
class Solution {
public:
    bool rotateString(string s, string goal) {
        int str1 = s.length();
        int str2 = goal.length();

        if(str1 != str2){
            return false;
        }

        for(int count = 1; count <= str2; count++) {
            rotate(begin(s), begin(s)+1, end(s));

            if(s == goal)
            return true;
        }
        return false;
    }
};
 
//Not the best approach using this approach (Brute Force) Time Complexty: O(n^2) 
// can be used solved using the concatenation + substring  Time Complexity: O(n)
//bool rotateString(string s, string goal) {
    return s.length() == goal.length() && (s + s).find(goal) != string::npos;
}