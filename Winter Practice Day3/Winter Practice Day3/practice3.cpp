#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<unordered_map>
#include<unordered_set>
#include<string>

using namespace std;

// Sliding Window Algorithm
// leetcode
// 7 practices a day

// 1.https://leetcode.cn/problems/maximum-points-you-can-obtain-from-cards/description/

//class Solutio
//{
//public:
//    int maxScore(vector<int>& cardPoints, int k)
//    {
//        int s = accumulate(cardPoints.begin(), cardPoints.begin() + k, 0);
//        int ans = s;
//        for (int i = 1; i <= k; i++)
//        {
//            s += cardPoints[cardPoints.size() - i] - cardPoints[k - i];
//            ans = max(ans, s);
//        }
//        return ans;
//    }
//};

// 2.https://leetcode.cn/problems/defuse-the-bomb/

//class Solution
//{
//public:
//    vector<int> decrypt(vector<int>& code, int k)
//    {
//        vector<int> ans(code.size());
//        if (k == 0)
//        {
//            return ans;
//        }
//        int r = k > 0 ? k + 1 : code.size();
//        k = abs(k);
//        int s = accumulate(code.begin() + r - k, code.begin() + r, 0);
//        for (int i = 0; i < code.size(); i++)
//        {
//            ans[i] = s;
//            s += code[r % code.size()] - code[(r - k) % code.size()];
//            r++;
//        }
//        return ans;
//    }
//};

// 3.https://leetcode.cn/problems/maximum-number-of-occurrences-of-a-substring/

//class Solution
//{
//public:
//    int maxFreq(string s, int maxLetters, int minSize, int maxSize)
//    {
//        int n = s.size();
//        unordered_map<string, int> occ;
//        int ans = 0;
//        for (int i = 0; i < n - minSize + 1; i++)
//        {
//            string cur = s.substr(i, minSize);
//            unordered_set<char> exist(cur.begin(), cur.end());
//            if (exist.size() <= maxLetters)
//            {
//                occ[cur]++;
//                ans = max(ans, occ[cur]);
//            }
//        }
//        return ans;
//    }
//};

// 4.https://leetcode.cn/problems/minimum-swaps-to-group-all-1s-together-ii/description/

//class Solution
//{
//public:
//    int minSwaps(vector<int>& nums)
//    {
//        int n = nums.size();
//        int sum = 0, count = 0;
//        int ans = INT_MAX;
//        for (int i = 0; i < n; i++)
//        {
//            if (nums[i] == 1)
//            {
//                count++;
//            }
//        }
//        for (int i = 0; i < count; i++)
//        {
//            sum += nums[i];
//        }
//        ans = min(ans, count - sum);
//        for (int i = 1; i < n; i++)
//        {
//            sum += nums[(i + count - 1) % n] - nums[i - 1];
//            ans = min(ans, count - sum);
//        }
//        return ans;
//    }
//};

// 5.https://leetcode.cn/problems/find-the-k-beauty-of-a-number/

//class Solution
//{
//public:
//    int divisorSubstrings(int num, int k)
//    {
//        string s = to_string(num);// num十进制表示字符串
//        int n = s.size();
//        int res = 0;
//        for (int i = 0; i <= n - k; ++i)
//        {
//            // 枚举所有长度为k的子串
//            int tmp = stoi(s.substr(i, k));
//            if (tmp && num % tmp == 0)
//            {
//                ++res;
//            }
//        }
//        return res;
//    }
//};

// 6.https://leetcode.cn/problems/minimum-difference-between-highest-and-lowest-of-k-scores/description/

//class Solution
//{
//public:
//    int minimumDifference(vector<int>& nums, int k)
//    {
//        int n = nums.size();
//        sort(nums.begin(), nums.end());
//        int ans = INT_MAX;
//        for (int i = 0; i + k - 1 < n; ++i)
//        {
//            ans = min(ans, nums[i + k - 1] - nums[i]);
//        }
//        return ans;
//    }
//};