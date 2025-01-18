#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<unordered_map>
#include<unordered_set>
#include<string>

using namespace std;

// two pointers
// leetcode
// 7 practices a day

// 1.https://leetcode.cn/problems/sum-of-square-numbers/

//class Solution
//{
//public:
//    bool judgeSquareSum(int c)
//    {
//        long left = 0;
//        long right = (int)sqrt(c);
//        while (left <= right)
//        {
//            long sum = left * left + right * right;
//            if (sum == c)
//            {
//                return true;
//            }
//            else if (sum > c)
//            {
//                right--;
//            }
//            else
//            {
//                left++;
//            }
//        }
//        return false;
//    }
//};

// 2.https://leetcode.cn/problems/count-pairs-whose-sum-is-less-than-target/

//class Solution
//{
//public:
//    int countPairs(vector<int>& nums, int target)
//    {
//        int left = 0, right = nums.size() - 1;
//        int ans = 0;
//        sort(nums.begin(), nums.end());
//        while (left < right)
//        {
//            if (nums[left] + nums[right] < target)
//            {
//                ans += right - left;
//                left++;
//            }
//            else
//            {
//                right--;
//            }
//        }
//        return ans;
//    }
//};

// 3.https://leetcode.cn/problems/4xy4Wx/description/

//class Solution
//{
//public:
//    int purchasePlans(vector<int>& nums, int target)
//    {
//        int left = 0, right = nums.size() - 1;
//        long long ans = 0, mod = 1000000007;
//        sort(nums.begin(), nums.end());
//        while (left < right)
//        {
//            if (nums[left] + nums[right] <= target)
//            {
//                ans += right - left;
//                left++;
//            }
//            else
//            {
//                right--;
//            }
//        }
//        return ans % mod;
//    }
//};

// 4.https://leetcode.cn/problems/valid-triangle-number/

//class Solution
//{
//public:
//    int triangleNumber(vector<int>& nums)
//    {
//        sort(nums.begin(), nums.end());
//        int ans = 0;
//        for (int i = nums.size() - 1; i >= 2; i--)
//        {
//            int left = 0, right = i - 1;
//            while (left < right)
//            {
//                if (nums[left] + nums[right] > nums[i])
//                {
//                    ans += right - left;
//                    right--;
//                }
//                else
//                {
//                    left++;
//                }
//            }
//        }
//        return ans;
//    }
//};

// 5.https://leetcode.cn/problems/remove-element/

//class Solution
//{
//public:
//    int removeElement(vector<int>& nums, int val)
//    {
//        int dst = 0, src = 0;
//        while (src < nums.size())
//        {
//            if (nums[src] == val)
//            {
//                src++;
//            }
//            else
//            {
//                nums[dst++] = nums[src++];
//            }
//        }
//        return dst;
//    }
//};

// 6.https://leetcode.cn/problems/sort-array-by-parity/

//class Solution
//{
//public:
//    vector<int> sortArrayByParity(vector<int>& nums)
//    {
//        vector<int> ans;
//        for (int i = 0; i < nums.size(); i++)
//        {
//            if (nums[i] % 2 == 0)
//            {
//                ans.push_back(nums[i]);
//            }
//        }
//        for (int i = 0; i < nums.size(); i++)
//        {
//            if (nums[i] % 2)
//            {
//                ans.push_back(nums[i]);
//            }
//        }
//        return ans;
//    }
//};

// 7.https://leetcode.cn/problems/sort-array-by-parity-ii/

//class Solution
//{
//public:
//    vector<int> sortArrayByParityII(vector<int>& nums)
//    {
//        int n = nums.size();
//        int j = 1;
//        for (int i = 0; i < n; i += 2)
//        {
//            if (nums[i] % 2 == 1)
//            {
//                while (nums[j] % 2 == 1)
//                {
//                    j += 2;
//                }
//                swap(nums[i], nums[j]);
//            }
//        }
//        return nums;
//    }
//};