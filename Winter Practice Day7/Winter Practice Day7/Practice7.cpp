#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<unordered_map>
#include<unordered_set>
#include<string>

using namespace std;

// 1.https://leetcode.cn/problems/apply-operations-to-an-array/

//class Solution
//{
//public:
//    vector<int> applyOperations(vector<int>& nums)
//    {
//        for (int i = 0, j = 0; i < nums.size(); i++)
//        {
//            if (i + 1 < nums.size() && nums[i] == nums[i + 1])
//            {
//                nums[i] *= 2;
//                nums[i + 1] = 0;
//            }
//            if (nums[i] != 0)
//            {
//                swap(nums[i], nums[j]);
//                j++;
//            }
//        }
//        return nums;
//    }
//};

// 2.https://leetcode.cn/problems/minimum-common-value/

//class Solution
//{
//public:
//    int getCommon(vector<int>& nums1, vector<int>& nums2)
//    {
//        int i = 0, j = 0;
//        while (i < nums1.size() && j < nums2.size())
//        {
//            if (nums1[i] == nums2[j])
//            {
//                return nums1[i];
//            }
//            else if (nums1[i] < nums2[j])
//            {
//                i++;
//            }
//            else
//            {
//                j++;
//            }
//        }
//        return -1;
//    }
//};

// 3.https://leetcode.cn/problems/find-the-distance-value-between-two-arrays/

//class Solution
//{
//public:
//    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d)
//    {
//        sort(arr1.begin(), arr1.end());
//        sort(arr2.begin(), arr2.end());
//        int ans = 0, j = 0;
//        for (int x : arr1)
//        {
//            while (j < arr2.size() && arr2[j] < x - d)
//            {
//                j++;
//            }
//            if (j == arr2.size() || arr2[j] > x + d)
//            {
//                ans++;
//            }
//        }
//        return ans;
//    }
//};

// 4.https://leetcode.cn/problems/is-subsequence/

//class Solution
//{
//public:
//    bool isSubsequence(string s, string t)
//    {
//        int n = s.length(), m = t.length();
//        int i = 0, j = 0;
//        while (i < n && j < m)
//        {
//            if (s[i] == t[j])
//            {
//                i++;
//            }
//            j++;
//        }
//        return i == n;
//    }
//};

// 5.https://leetcode.cn/problems/append-characters-to-string-to-make-subsequence/

//class Solution
//{
//public:
//    int appendCharacters(string s, string t)
//    {
//        int ans = 0;
//        int i = 0, j = 0;
//        while (i < s.size() && j < t.size())
//        {
//            if (s[i] == t[j])
//            {
//                i++;
//                j++;
//            }
//            else
//            {
//                i++;
//            }
//        }
//        return t.size() - j;
//    }
//};