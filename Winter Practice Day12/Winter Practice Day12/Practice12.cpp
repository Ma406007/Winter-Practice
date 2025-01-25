// 1.https://www.lanqiao.cn/problems/205/learning/?page=1&first_category_id=1&tags=%E5%86%92%E6%B3%A1%E6%8E%92%E5%BA%8F,%E6%8E%92%E5%BA%8F,%E5%BD%92%E5%B9%B6%E6%8E%92%E5%BA%8F,%E5%BF%AB%E9%80%9F%E6%8E%92%E5%BA%8F,%E6%A1%B6%E6%8E%92%E5%BA%8F&tag_relation=union

//#include <iostream>
//using namespace std;
//int main()
//{
//    int line, a, min = 100010, max = -100010;
//    int n, m;
//    int hx[10010] = { 0 };//记录数字出现次数
//    cin >> line;
//    while (line--)
//    {
//        while (cin >> a)
//        {
//            //记录最大值
//            if (a > max)
//            {
//                max = a;
//            }
//            //记录最小值
//            if (a < min)
//            {
//                min = a;
//            }
//            //出现次数加1
//            hx[a]++;
//        }
//    }
//    //遍历循环找出缺失和重复
//    for (int i = min; i <= max; i++)
//    {
//        if (hx[i] == 0)
//        {
//            m = i;
//        }
//        if (hx[i] > 1)
//        {
//            n = i;
//        }
//    }
//    cout << m << " " << n << endl;
//    return 0;
//}

// 2.https://www.lanqiao.cn/problems/94/learning/?page=1&first_category_id=1&tags=%E6%9E%9A%E4%B8%BE,%E6%A8%A1%E6%8B%9F,%E5%89%8D%E7%BC%80%E5%92%8C,%E5%B7%AE%E5%88%86,%E4%BA%8C%E5%88%86,%E8%BF%9B%E5%88%B6%E8%BD%AC%E6%8D%A2,%E8%B4%AA%E5%BF%83,%E4%BD%8D%E8%BF%90%E7%AE%97,%E5%8F%8C%E6%8C%87%E9%92%88&tag_relation=union

//#include <iostream>
//using namespace std;
//int a[101];
//int main()
//{
//    int N;
//    cin >> N;
//    for (int i = 1; i <= N; i++)
//    {
//        cin >> a[i];
//    }
//    int ans = 0;
//    for (int i = 1; i <= N; i++)
//    {
//        int num = 1;//计数
//        int res = 0;//拿到的票数
//        int pos = i;//当前位置
//        int flag[101] = { 0 };//判断卡片是否被拿走
//        int count = 0;//拿走的卡片数
//        while (1)
//        {
//            if (count == N || num == N + 1)//卡片全被拿走或计数超过N+1就退出循环
//            {
//                break;
//            }
//            if (flag[pos])//卡片被取走
//            {
//                pos++;
//                if (pos == N + 1)//如果越界要从头开始数
//                {
//                    pos = 1;
//                }
//            }
//            else//卡片没被取走,判断是否和num相等
//            {
//                if (num == a[pos])//相等就取走
//                {
//                    res += a[pos];//根据题目加上对应值
//                    flag[pos] = 1;//标记已被拿走
//                    num = 1;//卡片被拿走,到下一张开始就要重新计数
//                    count++;
//                    pos++;
//                    if (pos == N + 1)
//                    {
//                        pos = 1;
//                    }
//                }
//                else//不相等就继续
//                {
//                    num++;
//                    pos++;
//                    if (pos == N + 1)
//                    {
//                        pos = 1;
//                    }
//                }
//            }
//            if (res > ans)
//            {
//                ans = res;
//            }
//        }
//    }
//    cout << ans << endl;
//    return 0;
//}

// 2.https://www.lanqiao.cn/problems/99/learning/?page=1&first_category_id=1&tags=%E6%9E%9A%E4%B8%BE,%E6%A8%A1%E6%8B%9F,%E5%89%8D%E7%BC%80%E5%92%8C,%E5%B7%AE%E5%88%86,%E4%BA%8C%E5%88%86,%E8%BF%9B%E5%88%B6%E8%BD%AC%E6%8D%A2,%E8%B4%AA%E5%BF%83,%E4%BD%8D%E8%BF%90%E7%AE%97,%E5%8F%8C%E6%8C%87%E9%92%88&tag_relation=union

//#include <bits/stdc++.h>
//using namespace std;
//int H[100000] = { 0 };
//int W[100000] = { 0 };
//int N, K;
//bool check(int x)
//{
//    int sum = 0;
//    for (int i = 0; i < N; i++)
//    {
//        sum += (H[i] / x) * (W[i] / x);
//    }
//    if (sum >= K)
//    {
//        return true;
//    }
//    return false;
//}
//
//int main()
//{
//    cin >> N >> K;
//    for (int i = 0; i < N; i++)
//    {
//        cin >> H[i] >> W[i];
//    }
//    int ans = 0;
//    int left = 0, right = 100000;
//    while (left <= right)
//    {
//        int mid = left + (right - left) / 2;
//        if (check(mid))
//        {
//            ans = max(ans, mid);
//            left = mid + 1;
//        }
//        else
//        {
//            right = mid - 1;
//        }
//    }
//    cout << ans << endl;
//    return 0;
//}

// 3.https://www.lanqiao.cn/problems/148/learning/?page=1&first_category_id=1&tags=%E6%9E%9A%E4%B8%BE,%E6%A8%A1%E6%8B%9F,%E5%89%8D%E7%BC%80%E5%92%8C,%E5%B7%AE%E5%88%86,%E4%BA%8C%E5%88%86,%E8%BF%9B%E5%88%B6%E8%BD%AC%E6%8D%A2,%E8%B4%AA%E5%BF%83,%E4%BD%8D%E8%BF%90%E7%AE%97,%E5%8F%8C%E6%8C%87%E9%92%88&tag_relation=union

//#include <iostream>
//using namespace std;
//int main()
//{
//    string word;
//    cin >> word;
//    int yuan = 0;
//    int fu = 0;
//    int flag = 0;
//    for (int i = 0; i < word.size(); i++)
//    {
//        if ((word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u') && (flag == 1))
//        {
//            yuan++;
//            flag = 0;
//        }
//        if ((word[i] != 'a' && word[i] != 'e' && word[i] != 'i' && word[i] != 'o' && word[i] != 'u') && (flag == 0))
//        {
//            fu++;
//            flag = 1;
//        }
//    }
//    if (fu + yuan == 4)
//    {
//        cout << "yes" << endl;
//    }
//    else
//    {
//        cout << "no" << endl;
//    }
//    return 0;
//}

// 4.https://www.lanqiao.cn/problems/146/learning/?page=1&first_category_id=1&tags=%E6%9E%9A%E4%B8%BE,%E6%A8%A1%E6%8B%9F,%E5%89%8D%E7%BC%80%E5%92%8C,%E5%B7%AE%E5%88%86,%E4%BA%8C%E5%88%86,%E8%BF%9B%E5%88%B6%E8%BD%AC%E6%8D%A2,%E8%B4%AA%E5%BF%83,%E4%BD%8D%E8%BF%90%E7%AE%97,%E5%8F%8C%E6%8C%87%E9%92%88&tag_relation=union

//#include <iostream>
//using namespace std;
//int b[1000];
//int main()
//{
//    int a[1000], n;
//    cin >> n;
//    for (int i = 0; i < n; i++)
//    {
//        cin >> a[i];
//    }
//    int num;
//    for (int i = 0; i < n - 2; i++)
//    {
//        for (int j = i + 1; j < n - 1; j++)
//        {
//            for (int k = j + 1; k < n; k++)
//            {
//                if (a[i] < a[j] && a[j] < a[k])
//                {
//                    b[j] = 1;
//                }
//            }
//        }
//    }
//    for (int i = 0; i < n; i++)
//    {
//        if (b[i] == 1)
//        {
//            num++;
//        }
//    }
//    cout << num << endl;
//    return 0;
//}

// 5.https://www.lanqiao.cn/problems/136/learning/?page=1&first_category_id=1&tags=%E6%9E%9A%E4%B8%BE,%E6%A8%A1%E6%8B%9F,%E5%89%8D%E7%BC%80%E5%92%8C,%E5%B7%AE%E5%88%86,%E4%BA%8C%E5%88%86,%E8%BF%9B%E5%88%B6%E8%BD%AC%E6%8D%A2,%E8%B4%AA%E5%BF%83,%E4%BD%8D%E8%BF%90%E7%AE%97,%E5%8F%8C%E6%8C%87%E9%92%88&tag_relation=union

//#include<bits/stdc++.h>
//#define int long long
//using namespace std;
//string s1, s2; //个数+具体数字 
//int n;
//signed main()
//{
//    cin >> s1 >> n;
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < s1.size(); j++)
//        {
//            int sign = 1;
//            while (s1[j] == s1[j + 1])
//            {
//                sign++; //个数 
//                j++;
//            }
//            s2 += (to_string(sign) + s1[j]); //个数+具体数字  
//        }
//        s1 = s2;
//        s2.clear();
//    }
//    cout << s1 << endl;
//    return 0;
//}

// 6.https://www.lanqiao.cn/problems/133/learning/?page=1&first_category_id=1&tags=%E6%9E%9A%E4%B8%BE,%E6%A8%A1%E6%8B%9F,%E5%89%8D%E7%BC%80%E5%92%8C,%E5%B7%AE%E5%88%86,%E4%BA%8C%E5%88%86,%E8%BF%9B%E5%88%B6%E8%BD%AC%E6%8D%A2,%E8%B4%AA%E5%BF%83,%E4%BD%8D%E8%BF%90%E7%AE%97,%E5%8F%8C%E6%8C%87%E9%92%88&tag_relation=union

//#include<iostream>
//using namespace std;
//int main()
//{
//    int m, n;
//    cin >> m >> n;
//    int r = n + m - 1;//不难发现每行一共有r个字符,同时作为右边界
//    //如何发现的这个规律呢，可以看出，无论笔画宽度是几，第一行的第一组*的最后一个恰好在最后一行走到了最右下角，经过了n次变换，然后这个*前还有m-1个*，所以总共一行有n+m-1个字符
//    int l = 1;//左边界
//    for (int i = 1; i <= n; i++)//一共有n行，循环n遍
//    {
//        for (int j = 1; j <= n + m - 1; j++)//一共有n+m-1列，循环这么多遍
//        {
//            //判断是否在应该输出*的区间
//            if ((j >= l && j <= l + m - 1) || (j >= r - m + 1 && j <= r))
//            {
//                printf("*");//每一行两组*，第一组，第一个位置在l,第一组的最后一个在l+m-1
//            }
//            //同理，第二组的第一个*在r-m+1,最后一个*在r
//            else
//            {
//                printf(".");
//            }
//        }
//        cout << endl;
//        l++, r--;//每行第一组的第一个*在随着行数向下，而向右移动
//        //同理每行第二组*的最后一个在随着行向下，向左移，所以l++，r--
//    }
//    return 0;
//}

// 7.https://www.lanqiao.cn/problems/126/learning/?page=1&first_category_id=1&tags=%E6%9E%9A%E4%B8%BE,%E6%A8%A1%E6%8B%9F,%E5%89%8D%E7%BC%80%E5%92%8C,%E5%B7%AE%E5%88%86,%E4%BA%8C%E5%88%86,%E8%BF%9B%E5%88%B6%E8%BD%AC%E6%8D%A2,%E8%B4%AA%E5%BF%83,%E4%BD%8D%E8%BF%90%E7%AE%97,%E5%8F%8C%E6%8C%87%E9%92%88&tag_relation=union

//#include<iostream>
//#include<algorithm>
//using namespace std;
//int a[10005], ans, n;
//int main()
//{
//    //如果某个位置实际的数和正确的数不相等，则让这个数和它对应位置的数交换swap(a[i], a[a[i]])，
//    //直到这个位置的数和正确的数对应。
//    cin >> n;
//    for (int i = 1; i <= n; i++)
//    {
//        cin >> a[i];
//    }
//    for (int i = 1; i <= n; i++)
//    {
//        while (a[i] != i)
//        {
//            swap(a[i], a[a[i]]);
//            ++ans;
//        }
//    }
//    printf("%d", ans);
//    return 0;
//}