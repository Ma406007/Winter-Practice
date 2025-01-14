#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<set>
#include<unordered_map>

using namespace std;

// Sliding Window Algorithm
// leetcode
// 7 practices a day

// 1.https://leetcode.cn/problems/k-radius-subarray-averages/

//class Solution
//{
//public:
//    vector<int> getAverages(vector<int>& nums, int k)
//    {
//        vector<int> avg;
//        long long sum = 0;
//        for (int i = 0; i < nums.size(); i++)
//        {
//            avg.push_back(-1);
//            sum += nums[i];
//            if (i < 2 * k)
//            {
//                continue;
//            }
//            else
//            {
//                avg[i - k] = sum / (2 * k + 1);
//                sum -= nums[i - (2 * k)];
//            }
//        }
//        return avg;
//    }
//};

// 2.https://leetcode.cn/problems/minimum-recolors-to-get-k-consecutive-black-blocks/

//class Solution
//{
//public:
//    int minimumRecolors(string blocks, int k)
//    {
//        int n = blocks.size();
//        int ans = n;
//        int count = 0;
//        for (int i = 0; i < n; i++)
//        {
//            if (blocks[i] == 'W')
//            {
//                count++;
//            }
//            if (i < k - 1)
//            {
//                continue;
//            }
//            ans = min(ans, count);
//            if (blocks[i - k + 1] == 'W')
//            {
//                count--;
//            }
//        }
//        return ans;
//    }
//};

// 3.https://leetcode.cn/problems/grumpy-bookstore-owner/description/

//class Solution
//{
//public:
//    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes)
//    {
//        int n = customers.size();
//        int ans = 0;
//        for (int i = 0; i < n; i++)
//        {
//            if (grumpy[i] == 0)
//            {
//                ans += customers[i];
//                customers[i] = 0;
//            }
//        }
//        int cur = 0, max_cur = 0;
//        for (int i = 0; i < n; i++)
//        {
//            cur += customers[i];
//            if (i < minutes - 1)
//            {
//                continue;
//            }
//            max_cur = max(max_cur, cur);
//            cur -= customers[i - minutes + 1];
//        }
//        return ans + max_cur;
//    }
//};

// 4.https://leetcode.cn/problems/check-if-a-string-contains-all-binary-codes-of-size-k/description/

//class Solution
//{
//public:
//    bool hasAllCodes(string s, int k)
//    {
//        set<string> set;
//        string sum = "";
//        for (int i = 0; i < s.size(); ++i)
//        {
//            sum += s[i];
//            if (i < k - 1)
//            {
//                continue;
//            }
//            set.insert(sum);
//            sum.erase(sum.begin());
//        }
//        if (set.size() == pow(2, k))
//        {
//            return true;
//        }
//        else
//        {
//            return false;
//        }
//    }
//};

// 5.https://leetcode.cn/problems/maximum-sum-of-almost-unique-subarray/

//class Solution
//{
//public:
//    long long maxSum(vector<int>& nums, int m, int k)
//    {
//        unordered_map<long long, long long> count;
//        long long sum = 0, ans = 0;
//        int n = nums.size();
//        for (int i = 0; i < n; i++)
//        {
//            sum += nums[i];
//            count[nums[i]]++;
//            if (i < k - 1)
//            {
//                continue;
//            }
//            if (count.size() >= m)
//            {
//                ans = max(ans, sum);
//            }
//            int out = nums[i - k + 1];
//            sum -= out;
//            if (--count[out] == 0)
//            {
//                count.erase(out);
//            }
//        }
//        return ans;
//    }
//};

// 6.https://leetcode.cn/problems/maximum-sum-of-distinct-subarrays-with-length-k/

//class Solution
//{
//public:
//    long long maximumSubarraySum(vector<int>& nums, int k)
//    {
//        unordered_map<long long, long long> count;
//        long long sum = 0, ans = 0;
//        int n = nums.size();
//        for (int i = 0; i < n; i++)
//        {
//            sum += nums[i];
//            count[nums[i]]++;
//            if (i < k - 1)
//            {
//                continue;
//            }
//            if (count.size() == k)
//            {
//                ans = max(ans, sum);
//            }
//            int out = nums[i - k + 1];
//            sum -= out;
//            if (--count[out] == 0)
//            {
//                count.erase(out);
//            }
//        }
//        return ans;
//    }
//};

// leetcode daily practice
// 7.https://leetcode.cn/problems/minimum-operations-to-exceed-threshold-value-i/description/

//class Solution
//{
//public:
//    int minOperations(vector<int>& nums, int k)
//    {
//        int ans = 0;
//        for (int i = 0; i < nums.size(); i++)
//        {
//            if (nums[i] < k)
//            {
//                ans++;
//            }
//        }
//        return ans;
//    }
//};