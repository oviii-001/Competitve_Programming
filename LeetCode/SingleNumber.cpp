#include <iostream>
#include <vector>
using namespace std;

/*
 * Problem: Single Number (LeetCode 136)
 * Given a non-empty array of integers nums, every element appears twice except for one.
 * Find that single one.
 * 
 * Solution Approach: XOR (Exclusive OR) Operation
 * Key Properties of XOR:
 * 1. a ^ a = 0 (any number XOR with itself equals 0)
 * 2. a ^ 0 = a (any number XOR with 0 equals the number itself)
 * 3. XOR is commutative and associative (order doesn't matter)
 * 
 * Example: [2, 2, 1]
 * single = 0
 * single = 0 ^ 2 = 2
 * single = 2 ^ 2 = 0 (duplicate cancels out)
 * single = 0 ^ 1 = 1 (the unique number remains)
 * 
 * Time Complexity: O(n) - single pass through the array
 * Space Complexity: O(1) - only using one variable
 */
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // Initialize result variable to 0
        // XOR with 0 doesn't change the value (identity property)
        int single = 0;
        
        // Iterate through each number in the array
        for(int num : nums){
            // XOR current number with our running result
            // Duplicates will cancel out due to a ^ a = 0
            // The unique number will remain because 0 ^ unique = unique
            single ^= num;
        }
        
        // Return the single number that didn't have a duplicate
        return single;
    }
};

/*
 * Step-by-step example with nums = [4, 1, 2, 1, 2]:
 * 
 * Initial: single = 0 (binary: 000)
 * Step 1: single = 0 ^ 4 = 4 (binary: 000 ^ 100 = 100)
 * Step 2: single = 4 ^ 1 = 5 (binary: 100 ^ 001 = 101)
 * Step 3: single = 5 ^ 2 = 7 (binary: 101 ^ 010 = 111)
 * Step 4: single = 7 ^ 1 = 6 (binary: 111 ^ 001 = 110)
 * Step 5: single = 6 ^ 2 = 4 (binary: 110 ^ 010 = 100)
 * 
 * Result: 4 (the single number that appears only once)
 * 
 * Why this works:
 * - All duplicate pairs cancel each other out when XOR-ed
 * - Only the single number remains in the final result
 * - This is the most efficient solution for this problem
 */