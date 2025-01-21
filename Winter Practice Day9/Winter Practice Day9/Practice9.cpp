#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<unordered_map>
#include<unordered_set>
#include<string>

using namespace std;

// 1.https://leetcode.cn/problems/find-first-and-last-position-of-element-in-sorted-array/

//class Solution
//{
//public:
//    int binarySearch(vector<int>& nums, int target, bool lower)
//    {
//        int left = 0, right = nums.size() - 1, ans = nums.size();
//        while (left <= right)
//        {
//            int mid = left + (right - left) / 2;
//            if (nums[mid] > target || (lower && nums[mid] >= target))
//            {
//                right = mid - 1;
//                ans = mid;
//            }
//            else
//            {
//                left = mid + 1;
//            }
//        }
//        return ans;
//    }
//
//    vector<int> searchRange(vector<int>& nums, int target)
//    {
//        int leftIndex = binarySearch(nums, target, true);
//        int rightIndex = binarySearch(nums, target, false) - 1;
//        if (leftIndex <= rightIndex && rightIndex < nums.size() && nums[leftIndex] == target)
//        {
//            return vector<int>{leftIndex, rightIndex};
//        }
//        return vector<int>{-1, -1};
//    }
//};

//class Solution
//{
//public:
//    vector<int> searchRange(vector<int>& nums, int target)
//    {
//        int left = 0, right = nums.size() - 1;
//        int first = -1, last = -1;
//        // 找第一个等于target的位置
//        while (left <= right)
//        {
//            int mid = left + (right - left) / 2;
//            if (nums[mid] == target)
//            {
//                first = mid;
//                right = mid - 1;// 重点
//            }
//            else if (nums[mid] > target)
//            {
//                right = mid - 1;
//            }
//            else
//            {
//                left = mid + 1;
//            }
//        }
//        // 找最后一个等于target的位置
//        left = 0, right = nums.size() - 1;
//        while (left <= right)
//        {
//            int mid = left + (right - left) / 2;
//            if (nums[mid] == target)
//            {
//                last = mid;
//                left = mid + 1;// 重点
//            }
//            else if (nums[mid] > target)
//            {
//                right = mid - 1;
//            }
//            else
//            {
//                left = mid + 1;
//            }
//        }
//        return vector<int>{first, last};
//    }
//};

// 2.https://leetcode.cn/problems/search-insert-position/

//class Solution
//{
//public:
//    int searchInsert(vector<int>& nums, int target)
//    {
//        int left = 0, right = nums.size() - 1;
//        while (left <= right)
//        {
//            int mid = left + (right - left) / 2;
//            if (nums[mid] >= target)
//            {
//                right = mid - 1;
//            }
//            else
//            {
//                left = mid + 1;
//            }
//        }
//        return left;
//    }
//};

// 3.https://leetcode.cn/problems/binary-search/

//class Solution
//{
//public:
//    int search(vector<int>& nums, int target)
//    {
//        int left = 0, right = nums.size() - 1;
//        while (left <= right)
//        {
//            int mid = left + (right - left) / 2;
//            if (nums[mid] > target)
//            {
//                right = mid - 1;
//            }
//            else if (nums[mid] < target)
//            {
//                left = mid + 1;
//            }
//            else
//            {
//                return mid;
//            }
//        }
//        return -1;
//    }
//};

// 3.https://leetcode.cn/problems/find-smallest-letter-greater-than-target/

//class Solution
//{
//public:
//    char nextGreatestLetter(vector<char>& letters, char target)
//    {
//        int left = 0, right = letters.size() - 1;
//        while (left <= right)
//        {
//            int mid = left + (right - left) / 2;
//            if (letters[mid] > target)
//            {
//                right = mid - 1;
//            }
//            else
//            {
//                left = mid + 1;
//            }
//        }
//        if (left == letters.size())
//        {
//            return letters[0];
//        }
//        return letters[left];
//    }
//};

// 4.https://leetcode.cn/problems/maximum-count-of-positive-integer-and-negative-integer/

//class Solution
//{
//public:
//    int maximumCount(vector<int>& nums)
//    {
//        int neg = ranges::lower_bound(nums, 0) - nums.begin();
//        int pos = nums.end() - ranges::upper_bound(nums, 0);
//        return max(neg, pos);
//    }
//};

// 5.https://leetcode.cn/problems/successful-pairs-of-spells-and-potions/

//class Solution
//{
//public:
//    int lower_bound(vector<int>& nums, long long target)
//    {
//        int left = 0, right = nums.size() - 1;
//        while (left <= right)
//        {
//            int mid = left + (right - left) / 2;
//            if (nums[mid] < target)
//            {
//                left = mid + 1;
//            }
//            else
//            {
//                right = mid - 1;
//            }
//        }
//        return left;
//    }
//
//    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success)
//    {
//        sort(potions.begin(), potions.end());
//        int n = spells.size(), m = potions.size();
//        vector<int> ans(n);
//        for (int i = 0; i < n; i++)
//        {
//            long long t;
//            if (success % spells[i] == 0)
//            {
//                t = success / spells[i];
//            }
//            else
//            {
//                t = success / spells[i] + 1;
//            }
//            ans[i] = m - lower_bound(potions, t);
//        }
//        return ans;
//    }
//};

//class Solution
// {
//public:
//    vector<int> answerQueries(vector<int>& nums, vector<int>& queries)
// {
//        int n = nums.size(), m = queries.size();
//        sort(nums.begin(), nums.end());
//        vector<int> f(n + 1);
//        // 计算前缀和并存放到f数组里
//        for (int i = 0; i < n; i++)
//		  {
//            f[i + 1] = f[i] + nums[i];
//        }
//        vector<int> answer(m);
//        for (int i = 0; i < m; i++)
//		  {
//            // 遍历 queries，假设当前查询值为 q，使用二分查找获取满足 f[i]>q 的最小的 i，那么和小于等于 q 的最长子序列长度为 i−1。
//            answer[i] = upper_bound(f.begin(), f.end(), queries[i]) - f.begin() - 1;
//        }
//        return answer;
//    }
//};