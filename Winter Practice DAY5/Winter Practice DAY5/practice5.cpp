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

// 1.https://leetcode.cn/problems/reverse-string/

//class Solution
//{
//public:
//    void reverseString(vector<char>& s)
//    {
//        reverse(s.begin(), s.end());
//    }
//};

// 2.https://leetcode.cn/problems/valid-palindrome/

//class Solution 
//{
//public:
//    bool isPalindrome(string s)
//    {
//        string tmp;
//        for (auto c : s)
//        {
//            if (islower(c) || isdigit(c))
//            {
//                tmp += c;
//            }
//            else if (isupper(c))
//            {
//                tmp += (c + 32);
//            }
//        }
//        int i = 0, j = tmp.size() - 1;
//        while (i < j)
//        {
//            if (tmp[i] != tmp[j])
//            {
//                return false;
//            }
//            i++;
//            j--;
//        }
//        return true;
//    }
//};

// 3.https://leetcode.cn/problems/minimum-length-of-string-after-deleting-similar-ends/

//class Solution
//{
//public:
//    int minimumLength(string s)
//    {
//        int n = s.size();
//        int left = 0, right = n - 1;
//        while (left < right && s[left] == s[right])
//        {
//            char tmp = s[left];
//            while (left <= right && s[left] == tmp)
//            {
//                left++;
//            }
//            while (left <= right && s[right] == tmp)
//            {
//                right--;
//            }
//        }
//        return right - left + 1;
//    }
//};

// 4.https://leetcode.cn/problems/watering-plants-ii/

//class Solution
//{
//public:
//    int minimumRefill(vector<int>& plants, int capacityA, int capacityB)
//    {
//        int n = plants.size();
//        int alice = 0, bob = n - 1;
//        int waterA = capacityA, waterB = capacityB;
//        int count = 0;
//        while (alice <= bob)
//        {
//            if (alice == bob)
//            {
//                if (waterA >= waterB)
//                {
//                    if (waterA - plants[alice] < 0)
//                    {
//                        count++;
//                    }
//                }
//                else
//                {
//                    if (waterB - plants[bob] < 0)
//                    {
//                        count++;
//                    }
//                }
//                break;
//            }
//            if (waterA >= plants[alice])
//            {
//                waterA -= plants[alice];
//                alice++;
//            }
//            else
//            {
//                waterA = capacityA;
//                count++;
//                waterA -= plants[alice];
//                alice++;
//            }
//            if (waterB >= plants[bob])
//            {
//                waterB -= plants[bob];
//                bob--;
//            }
//            else
//            {
//                waterB = capacityB;
//                count++;
//                waterB -= plants[bob];
//                bob--;
//            }
//        }
//        return count;
//    }
//};

// 5.https://leetcode.cn/problems/squares-of-a-sorted-array/

//class Solution
//{
//public:
//    vector<int> sortedSquares(vector<int>& nums)
//    {
//        vector<int> ans;
//        for (int i = 0; i < nums.size(); i++)
//        {
//            ans.push_back(pow(nums[i], 2));
//        }
//        sort(ans.begin(), ans.end());
//        return ans;
//    }
//};

// 6.https://leetcode.cn/problems/find-k-closest-elements/

//class Solution
//{
//public:
//    vector<int> findClosestElements(vector<int>& arr, int k, int x)
//    {
//        int n = arr.size();
//        int left = 0, right = n - 1;
//        for (int i = n - k; i > 0; i--)
//        {
//            if (x - arr[left] <= arr[right] - x)
//            {
//                right--;
//            }
//            else
//            {
//                left++;
//            }
//        }
//        return vector<int>(arr.begin() + left, arr.begin() + left + k);
//    }
//};

// 7.https://leetcode.cn/problems/two-sum-ii-input-array-is-sorted

//class Solution
//{
//public:
//    vector<int> twoSum(vector<int>& numbers, int target)
//    {
//        int left = 0, right = numbers.size() - 1;
//        while (left < right)
//        {
//            int sum = numbers[left] + numbers[right];
//            if (sum == target)
//            {
//                return { left + 1,right + 1 };
//            }
//            if (sum > target)
//            {
//                right--;
//            }
//            if (sum < target)
//            {
//                left++;
//            }
//        }
//        return { -1,-1 };
//    }
//};