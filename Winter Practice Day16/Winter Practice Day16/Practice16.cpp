// 1.https://www.lanqiao.cn/problems/20109/learning/?page=45&first_category_id=1&tags=%E6%9E%9A%E4%B8%BE,%E6%A8%A1%E6%8B%9F,%E5%8F%8C%E6%8C%87%E9%92%88&tag_relation=union

//#include <bits/stdc++.h>
//using namespace std;
//const int maxn = 1e6 + 2;
//int n, arr[maxn], cnt[maxn];
//int main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> arr[i];
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		cnt[arr[i]]++;
//	}
//	int sum = 0;
//	for (int i = 1; i <= maxn; i++)
//	{
//		for (int j = 1; j <= cnt[i]; j++)
//		{
//			if (cnt[j] >= i)
//			{
//				sum++;
//			}
//		}
//	}
//	cout << sum;
//	return 0;
//}

// 2.https://www.lanqiao.cn/problems/20104/learning/?page=45&first_category_id=1&tags=%E6%9E%9A%E4%B8%BE,%E6%A8%A1%E6%8B%9F,%E5%8F%8C%E6%8C%87%E9%92%88&tag_relation=union

//#include <bits/stdc++.h>
//using namespace std;
//int main()
//{
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);
//    int n;
//    cin >> n;
//    int a[n + 1];
//    for (int i = 1; i <= n; i++)
//    {
//        cin >> a[i];
//    }
//    int ans = n;
//    for (int i = n; i >= 1; i--)
//    {
//        if (a[i] == ans)
//        {
//            ans--;
//        }
//    }
//    cout << ans << "\n";
//    return 0;
//}

// 3.https://www.lanqiao.cn/problems/19845/learning/?page=44&first_category_id=1&tags=%E6%9E%9A%E4%B8%BE,%E6%A8%A1%E6%8B%9F,%E5%8F%8C%E6%8C%87%E9%92%88&tag_relation=union

//#include <bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int n;
//    cin >> n;
//    int sum = 0;
//    while (n--)
//    {
//        int flag = 1;
//        string phone;
//        cin >> phone;
//        for (int i = 0; i < phone.size(); i++)
//        {
//            if (phone[i] != phone[0])
//            {
//                flag = 0;
//                break;
//            }
//        }
//        if (flag)
//        {
//            sum++;
//        }
//    }
//    cout << sum << endl;
//    return 0;
//}

// 4.https://www.lanqiao.cn/problems/19860/learning/?page=44&first_category_id=1&tags=%E6%9E%9A%E4%B8%BE,%E6%A8%A1%E6%8B%9F,%E5%8F%8C%E6%8C%87%E9%92%88&tag_relation=union

//#include <bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int m; cin >> m;
//    while (m--)
//    {
//        int n, cnt = 0;
//        cin >> n;
//        while (n)
//        {
//            n /= 2, cnt++;
//        }
//        cout << (long long)pow(2, cnt) - 1 << endl;
//    }
//    return 0;
//}
