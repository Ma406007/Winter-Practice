#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

// Sliding Window Algorithm
// leetcode
// three practices a day



// 1.https://leetcode.cn/problems/maximum-number-of-vowels-in-a-substring-of-given-length/description/

//class Solution
//{
//public:
//    int maxVowels(string s, int k)
//    {
//        int ans = 0, count = 0;
//        for (int i = 0; i < s.size(); i++)
//        {
//            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
//            {
//                count++;
//            }
//            if (i < k - 1)
//            {
//                continue;
//            }
//            ans = max(ans, count);
//            if (s[i - k + 1] == 'a' || s[i - k + 1] == 'e' || s[i - k + 1] == 'i' || s[i - k + 1] == 'o' || s[i - k + 1] == 'u')
//            {
//                count--;
//            }
//        }
//        return ans;
//    }
//};

// 2.https://leetcode.cn/problems/maximum-average-subarray-i/

//class Solution
//{
//public:
//    double findMaxAverage(vector<int>& nums, int k)
//    {
//        double sum = 0;
//        for (int i = 0; i < k; i++)
//        {
//            sum += nums[i];
//        }
//        double maxsum = sum;
//        for (int i = k; i < nums.size(); i++)
//        {
//            sum -= nums[i - k];
//            sum += nums[i];
//            maxsum = max(maxsum, sum);
//        }
//        return maxsum / k;
//    }
//};

// 3.https://leetcode.cn/problems/number-of-sub-arrays-of-size-k-and-average-greater-than-or-equal-to-threshold/description/

//class Solution
//{
//public:
//    int numOfSubarrays(vector<int>& arr, int k, int threshold)
//    {
//        int count = 0;
//        double sum = 0;
//        for (int i = 0; i < k - 1; i++)
//        {
//            sum += arr[i];
//        }
//        for (int i = k - 1; i < arr.size(); i++)
//        {
//            sum += arr[i];
//            double avg = sum / k;
//            if (avg >= (double)threshold)
//            {
//                count++;
//            }
//            sum -= arr[i - k + 1];
//        }
//        return count;
//    }
//};

// leetcode daily practice
// 4.https://leetcode.cn/problems/number-of-ways-to-split-array/

//class Solution
//{
//public:
//    int waysToSplitArray(vector<int>& nums)
//    {
//        long long total = 0;
//        for (int i = 0; i < nums.size(); i++)
//        {
//            total += nums[i];
//        }
//        int ans = 0;
//        long long s = 0;
//        for (int i = 0; i + 1 < nums.size(); i++)
//        {
//            s += nums[i];
//            if (s * 2 >= total)
//            {
//                ans++;
//            }
//        }
//        return ans;
//    }
//};