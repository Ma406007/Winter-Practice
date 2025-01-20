#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<unordered_map>
#include<unordered_set>
#include<string>

using namespace std;

// 1.https://leetcode.cn/problems/find-closest-number-to-zero/

//class Solution
//{
//public:
//    int findClosestNumber(vector<int>& nums)
//    {
//        int res = nums[0];// 已遍历元素中绝对值最小且数值最大的元素
//        int dis = abs(nums[0]);// 已遍历元素的最小绝对值
//        for (int num : nums)
//        {
//            if (abs(num) < dis)
//            {
//                dis = abs(num);
//                res = num;
//            }
//            else if (abs(num) == dis)
//            {
//                res = max(res, num);
//            }
//        }
//        return res;
//    }
//};

// 2.https://leetcode.cn/problems/consecutive-characters/

//class Solution
//{
//public:
//    int maxPower(string s)
//    {
//        int ans = 1;
//        int cnt = 1;
//        for (int i = 0; i < s.size() - 1; i++)
//        {
//            if (s[i] == s[i + 1])
//            {
//                cnt++;
//                ans = max(ans, cnt);
//            }
//            else
//            {
//                cnt = 1;
//            }
//        }
//        return ans;
//    }
//};

// 3.https://leetcode.cn/problems/longer-contiguous-segments-of-ones-than-zeros/

//class Solution
//{
//public:
//    bool checkZeroOnes(string s)
//    {
//        if (s.size() == 1)
//        {
//            return s[0] == '1' ? true : false;
//        }
//        int cnt1 = 1, cnt0 = 1;
//        int max1 = 0, max0 = 0;
//        for (int i = 0; i < s.size() - 1; i++)
//        {
//            if (s[i] == s[i + 1] && s[i] == '1')
//            {
//                cnt1++;
//                max1 = max(cnt1, max1);
//            }
//            else
//            {
//                cnt1 = 1;
//            }
//            if (s[i] == s[i + 1] && s[i] == '0')
//            {
//                cnt0++;
//                max0 = max(cnt0, max0);
//            }
//            else
//            {
//                cnt0 = 1;
//            }
//        }
//        return max1 > max0;
//    }
//};

// 4.https://leetcode.cn/problems/length-of-the-longest-alphabetical-continuous-substring/

//class Solution
//{
//public:
//    int longestContinuousSubstring(string s)
//    {
//        int ans = 1, cnt = 1;
//        for (int i = 1; i < s.length(); i++)
//        {
//            if (s[i - 1] + 1 == s[i])
//            {
//                ans = max(ans, ++cnt);
//            }
//            else
//            {
//                cnt = 1;
//            }
//        }
//        return ans;
//    }
//};

// 5.https://leetcode.cn/problems/delete-characters-to-make-fancy-string/

//class Solution
//{
//public:
//    string makeFancyString(string s)
//    {
//        string res;// 删除后的字符串
//        // 遍历 s 模拟删除过程
//        for (char ch : s)
//        {
//            int n = res.size();
//            if (n >= 2 && res[n - 1] == ch && res[n - 2] == ch)
//            {
//                // 如果 res 最后两个字符与当前字符均相等，则不添加
//                continue;
//            }
//            // 反之则添加
//            res.push_back(ch);
//        }
//        return res;
//    }
//};

// 6.https://leetcode.cn/problems/longest-continuous-increasing-subsequence/

//class Solution
//{
//public:
//    int findLengthOfLCIS(vector<int>& nums)
//    {
//        int cnt = 1, ans = 1;
//        for (int i = 0; i < nums.size() - 1; i++)
//        {
//            if (nums[i] < nums[i + 1])
//            {
//                cnt++;
//                ans = max(cnt, ans);
//            }
//            else
//            {
//                cnt = 1;
//            }
//        }
//        return ans;
//    }
//};

// 7.https://leetcode.cn/problems/longest-turbulent-subarray/

//class Solution
//{
//public:
//    int maxTurbulenceSize(vector<int>& arr)
//    {
//        int cnt = 1, ans = 1;
//        for (int i = 0; i < arr.size() - 1; i++)
//        {
//            if (arr[i] < arr[i + 1])
//            {
//                cnt++;
//                if (i != 0 && arr[i - 1] < arr[i])
//                {
//                    cnt = 2;
//                }
//                ans = max(cnt, ans);
//            }
//            else if (arr[i] > arr[i + 1])
//            {
//                cnt++;
//                if (i != 0 && arr[i - 1] > arr[i])
//                {
//                    cnt = 2;
//                }
//                ans = max(cnt, ans);
//            }
//            else
//            {
//                cnt = 1;
//            }
//        }
//        return ans;
//    }
//};

