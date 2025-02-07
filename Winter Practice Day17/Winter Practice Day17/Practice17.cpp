// 1.https://www.lanqiao.cn/problems/269/learning/?page=3&first_category_id=1&tags=%E4%BA%8C%E5%88%86,%E6%80%9D%E7%BB%B4,%E6%A8%A1%E6%8B%9F,%E6%9E%9A%E4%B8%BE&tag_relation=union

//#include<iostream>
//#include<algorithm>
//#include<string>
//using namespace std;
//int main()
//{
//    string str, strx;
//    cin >> str;
//    strx = str;
//    sort(str.begin(), str.end());
//    int ans = 0;
//    do {
//        if (strx == str)
//        {
//            break;
//        }
//        ans++;
//    } while (next_permutation(str.begin(), str.end()));
//    cout << ans << endl;
//    return 0;
//}

// 2.https://www.lanqiao.cn/problems/314/learning/?page=4&first_category_id=1&tags=%E4%BA%8C%E5%88%86,%E6%80%9D%E7%BB%B4,%E6%A8%A1%E6%8B%9F,%E6%9E%9A%E4%B8%BE&tag_relation=union

//#include <bits/stdc++.h>
//using namespace std;
//int main()
//{
//    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
//    string s;
//    cin >> s;
//    int k;
//    cin >> k;
//    int n = s.size(), l = 0;
//    int maxlen = 0;
//    unordered_map<char, int> mp;
//    for (int r = 0; r < n; r++)
//    {
//        mp[s[r]]++;
//        while (mp.size() > k)
//        {
//            mp[s[l]]--;
//            if (mp[s[l]] == 0)
//            {
//                mp.erase(s[l]);//Çå³ý¼ü
//            }
//            l++;
//        }
//        maxlen = max(maxlen, r - l + 1);
//    }
//    cout << maxlen;
//    return 0;
//}

// 3.https://www.lanqiao.cn/problems/407/learning/?page=6&first_category_id=1&tags=%E4%BA%8C%E5%88%86,%E6%80%9D%E7%BB%B4,%E6%A8%A1%E6%8B%9F,%E6%9E%9A%E4%B8%BE&tag_relation=union

//#include<iostream>
//#include<string>
//#include<algorithm>
//using namespace std;
//int main()
//{
//    int L, R, time = 0;
//    scanf("%d %d", &L, &R);
//    for (int i = L; i <= R; i++)
//    {
//        string s = to_string(i);
//        time += count(s.begin(), s.end(), '2');
//    }
//    cout << time << endl;
//}