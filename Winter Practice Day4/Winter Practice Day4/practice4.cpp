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

// 1.https://leetcode.cn/problems/longest-substring-without-repeating-characters/

//class Solution {
//public:
//    int lengthOfLongestSubstring(string s)
//    {
//        int n = s.length(), ans = 0, left = 0;
//        unordered_set<char> window;// ά�����±� left ���±� right ���ַ�
//        for (int right = 0; right < n; right++)
//        {
//            char c = s[right];
//            // ����������Ѿ����� c����ô�ټ���һ�� c �ᵼ�´��������ظ�Ԫ��
//            // ����Ҫ�ڼ��� c ֮ǰ�����Ƴ������ڵ� c
//            while (window.count(c))// �������� c
//            { 
//                window.erase(s[left]);
//                left++;// ��С����
//            }
//            window.insert(c);// ���� c
//            ans = max(ans, right - left + 1);// ���´��ڳ������ֵ
//        }
//        return ans;
//    }
//};

// 2.https://leetcode.cn/problems/maximum-length-substring-with-two-occurrences/

//class Solution
//{
//public:
//    int maximumLengthSubstring(string s)
//    {
//        int n = s.size();
//        int ans = 0, left = 0;
//        int window[26]{};
//        for (int right = 0; right < n; right++)
//        {
//            int ch = s[right] - 'a';
//            window[ch]++;
//            while (window[ch] > 2)
//            {
//                window[s[left] - 'a']--;
//                left++;
//            }
//            ans = max(ans, right - left + 1);
//        }
//        return ans;
//    }
//};

// 3.https://leetcode.cn/problems/longest-subarray-of-1s-after-deleting-one-element/

//class Solution
//{
//public:
//    int longestSubarray(vector<int>& nums)
//    {
//        int n = nums.size();
//        int left = 0;
//        int count = 0;
//        int ans = 0;
//        for (int right = 0; right < n; right++)
//        {
//            count += nums[right] == 0;
//            while (count > 1)
//            {
//                count -= nums[left] == 0;
//                left++;
//            }
//            ans = max(ans, right - left + 1);
//        }
//        return ans - 1;
//    }
//};

// 4.https://leetcode.cn/problems/get-equal-substrings-within-budget/

//class Solution
//{
//public:
//    int equalSubstring(string s, string t, int maxCost)
//    {
//        int n = s.size();
//        vector<int> cost(n, 0);
//        for (int i = 0; i < n; i++)
//        {
//            cost[i] = abs(s[i] - t[i]);
//        }
//        int left = 0, ans = 0;
//        int count = 0;
//        for (int right = 0; right < n; right++)
//        {
//            count += cost[right];
//            while (count > maxCost)
//            {
//                count -= cost[left];
//                left++;
//            }
//            ans = max(ans, right - left + 1);
//        }
//        return ans;
//    }
//};

// 5.https://leetcode.cn/problems/find-the-longest-semi-repetitive-substring/

//class Solution
//{
//public:
//    int longestSemiRepetitiveSubstring(string s)
//    {
//        int n = s.size();
//        int ans = 1;
//        int left = 0;
//        int count = 0;
//        for (int right = 1; right < n; right++)
//        {
//            if (s[right] == s[right - 1])
//            {
//                count++;
//            }
//            while (count == 2)
//            {
//                if (s[left] == s[left + 1])
//                {
//                    count--;
//                }
//                left++;
//            }
//            ans = max(ans, right - left + 1);
//        }
//        return ans;
//    }
//};

// 6.https://leetcode.cn/problems/fruit-into-baskets/

//class Solution
//{
//public:
//    int totalFruit(vector<int>& fruits)
//    {
//        const int k = 2;
//        unordered_map<int, int> window;
//        int n = fruits.size();
//        int count = 0, ans = 0;
//        int left = 0;
//        for (int right = 0; right < n; right++)
//        {
//            window[fruits[right]]++;
//            while (window.size() > k)
//            {
//                window[fruits[left]]--;
//                if (window[fruits[left]] == 0)
//                {
//                    window.erase(fruits[left]);
//                }
//                left++;
//            }
//            ans = max(ans, right - left + 1);
//        }
//        return ans;
//    }
//};