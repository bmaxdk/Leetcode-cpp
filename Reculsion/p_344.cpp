/*
344. Reverse String

https://leetcode.com/problems/reverse-string/

Write a function that reverses a string. The input string is given as an array of characters s.

You must do this by modifying the input array in-place with O(1) extra memory.

 

Example 1:

Input: s = ["h","e","l","l","o"]
Output: ["o","l","l","e","h"]
Example 2:

Input: s = ["H","a","n","n","a","h"]
Output: ["h","a","n","n","a","H"]

*/


// recursion
class Solution {
public:
    void reverseString(vector<char>& s) {
        compute(s, 0, s.size()-1);
    }
    
    void compute(vector<char>& v, int i, int j){
        if (i<j){
            swap(v[i],v[j]);
            compute(v, ++i, --j);
        }
    }
    
};



// class Solution {
// public:
//     void reverseString(vector<char>& s) {
//         for(int i=0; i<s.size()/2; i++){
//             swap(s[i], s[s.size()-i-1]);
//         }
//     }
// };