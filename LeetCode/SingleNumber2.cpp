#include <vector>
using namespace std;

/*
 * Problem: Single Number II (LeetCode 137)
 * Given an integer array nums where every element appears exactly three times 
 * except for one, which appears exactly once. Find the single element and return it.
 * 
 * Solution Approach: Brute Force - Count Occurrences
 * For each element, count how many times it appears in the array.
 * Return the element that appears exactly once.
 * 
 * Algorithm Steps:
 * 1. For each element nums[i] in the array
 * 2. Count how many times nums[i] appears in the entire array
 * 3. If count equals 1, return nums[i] (this is our single element)
 * 4. Continue until we find the element that appears only once
 * 
 * Time Complexity: O(n²) - nested loops, for each element we scan the entire array
 * Space Complexity: O(1) - only using a counter variable
 * 
 * Note: More efficient solutions exist using bit manipulation (O(n) time)
 */
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // Iterate through each element in the array
        for(int i = 0; i < nums.size(); i++){
            // Count how many times nums[i] appears in the array
            int count = 0;
            
            // Search through the entire array to count occurrences of nums[i]
            for(int j = 0; j < nums.size(); j++){
                // If we find the same value, increment counter
                if(nums[i] == nums[j]){
                    count++;
                }
            }
            
            // If this element appears exactly once, it's our answer
            if(count == 1){
                return nums[i];
            }
            // If count == 3, this element appears three times (normal case)
            // Continue to next element
        }
        
        // This should never be reached if problem constraints are met
        // (there's always exactly one element that appears once)
        return -1;
    }
};

/*
 * Example walkthrough with nums = [2, 2, 3, 2]:
 * 
 * i=0, nums[0]=2:
 *   j=0: nums[0]==nums[0] (2==2), count=1
 *   j=1: nums[0]==nums[1] (2==2), count=2  
 *   j=2: nums[0]!=nums[2] (2!=3), count=2
 *   j=3: nums[0]==nums[3] (2==2), count=3
 *   count=3, continue to next i
 * 
 * i=1, nums[1]=2:
 *   (same as i=0, count will be 3, continue)
 * 
 * i=2, nums[2]=3:
 *   j=0: nums[2]!=nums[0] (3!=2), count=0
 *   j=1: nums[2]!=nums[1] (3!=2), count=0
 *   j=2: nums[2]==nums[2] (3==3), count=1
 *   j=3: nums[2]!=nums[3] (3!=2), count=1
 *   count=1, return nums[2]=3
 * 
 * Result: 3 (the single number that appears exactly once)
 * 
 * Alternative approaches for better efficiency:
 * 1. Hash Map: O(n) time, O(n) space - count frequencies
 * 2. Bit Manipulation: O(n) time, O(1) space - use ones and twos variables
 * 3. Mathematical: O(n) time, O(n) space - (3 * sum of unique) - sum of all
 */