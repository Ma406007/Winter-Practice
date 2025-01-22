#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<unordered_map>
#include<unordered_set>
#include<string>

using namespace std;

// take a rest ...

// 1.https://leetcode.cn/problems/find-the-difference/?envType=study-plan-v2&envId=programming-skills

//class Solution
//{
//public:
//    char findTheDifference(string s, string t)
//    {
//        char hash[27] = { 0 };
//        for (auto c : s)
//        {
//            hash[c - 'a']++;
//        }
//        for (auto c : t)
//        {
//            hash[c - 'a']--;
//        }
//        char ch = 0;
//        for (int i = 0; i < 27; i++)
//        {
//            if (hash[i] == -1)
//            {
//                ch = i + 'a';
//            }
//        }
//        return ch;
//    }
//};