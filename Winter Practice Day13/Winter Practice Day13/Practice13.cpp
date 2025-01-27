// 1.https://www.lanqiao.cn/problems/103/learning/?page=1&first_category_id=1&tags=%E6%9E%9A%E4%B8%BE,%E6%A8%A1%E6%8B%9F,%E5%89%8D%E7%BC%80%E5%92%8C,%E5%B7%AE%E5%88%86,%E4%BA%8C%E5%88%86,%E8%BF%9B%E5%88%B6%E8%BD%AC%E6%8D%A2,%E8%B4%AA%E5%BF%83,%E4%BD%8D%E8%BF%90%E7%AE%97,%E5%8F%8C%E6%8C%87%E9%92%88&tag_relation=union

//#include <iostream>
//using namespace std;
//
//int month[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//
//int main()
//{
//    int a, b, c;
//    scanf("%d/%d/%d", &a, &b, &c);
//    for (int y = 1960; y <= 2059; ++y)
//    {
//        if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
//        {
//            month[2] = 29;
//        }
//        else
//        {
//            month[2] = 28;
//        }
//        for (int m = 1; m <= 12; ++m) 
//        {
//            for (int d = 1; d <= month[m]; ++d) 
//            {
//                if ((y % 100 == a && m == b && d == c) || (m == a && d == b && y % 100 == c) || (d == a && m == b && y % 100 == c)) 
//                {
//                    printf("%d-%02d-%02d\n", y, m, d);
//                }
//            }
//        }
//    }
//    return 0;
//}

// 2.https://www.lanqiao.cn/problems/156/learning/?page=2&first_category_id=1&tags=%E6%9E%9A%E4%B8%BE,%E6%A8%A1%E6%8B%9F,%E5%89%8D%E7%BC%80%E5%92%8C,%E5%B7%AE%E5%88%86,%E4%BA%8C%E5%88%86,%E8%BF%9B%E5%88%B6%E8%BD%AC%E6%8D%A2,%E8%B4%AA%E5%BF%83,%E4%BD%8D%E8%BF%90%E7%AE%97,%E5%8F%8C%E6%8C%87%E9%92%88&tag_relation=union

//#include <iostream>
//using namespace std;
//int matrix[1001][1001];
//int main()
//{
//    int n, m, x, y;
//    cin >> n >> m;
//    cin >> x >> y;
//    int num = 1;
//    int u = 0, d = n - 1, l = 0, r = m - 1;
//    while (num <= n * m)
//    {
//        for (int i = l; i <= r; i++)
//        {
//            matrix[u][i] = num++;
//        }
//        u++;
//        for (int i = u; i <= d; i++)
//        {
//            matrix[i][r] = num++;
//        }
//        r--;
//        for (int i = r; i >= l; i--)
//        {
//            matrix[d][i] = num++;
//        }
//        d--;
//        for (int i = d; i >= u; i--)
//        {
//            matrix[i][l] = num++;
//        }
//        l++;
//    }
//    cout << matrix[x - 1][y - 1] << endl;
//    return 0;
//}

// 3.https://www.lanqiao.cn/problems/181/learning/?page=2&first_category_id=1&tags=%E6%9E%9A%E4%B8%BE,%E6%A8%A1%E6%8B%9F,%E5%89%8D%E7%BC%80%E5%92%8C,%E5%B7%AE%E5%88%86,%E4%BA%8C%E5%88%86,%E8%BF%9B%E5%88%B6%E8%BD%AC%E6%8D%A2,%E8%B4%AA%E5%BF%83,%E4%BD%8D%E8%BF%90%E7%AE%97,%E5%8F%8C%E6%8C%87%E9%92%88&tag_relation=union

//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//    string s;
//    cin >> s;
//    int i;
//    string S = s;
//    do
//    {
//        int sum = 0;
//        for (i = 0; i < S.length(); i++)
//        {
//            sum += S[i] - '0';
//        }
//        S = to_string(sum);
//    } while (S.length() != 1);
//    cout << S;
//    return 0;
//}

// 4.https://www.lanqiao.cn/problems/184/learning/?page=2&first_category_id=1&tags=%E6%9E%9A%E4%B8%BE,%E6%A8%A1%E6%8B%9F,%E5%89%8D%E7%BC%80%E5%92%8C,%E5%B7%AE%E5%88%86,%E4%BA%8C%E5%88%86,%E8%BF%9B%E5%88%B6%E8%BD%AC%E6%8D%A2,%E8%B4%AA%E5%BF%83,%E4%BD%8D%E8%BF%90%E7%AE%97,%E5%8F%8C%E6%8C%87%E9%92%88&tag_relation=union

//#include <iostream>
//#include <cstdio>
//#include <set>
//#include <vector>
//#include <cstring>
//
//using namespace std;
//
//int N, M, T;
//
//vector<int> v[100005];
//int a[100005], vis[100005];
//set<int> se;
//
//int main()
//{
//    scanf("%d%d%d", &N, &M, &T);
//    for (int i = 1; i <= M; i++)
//    {
//        int ts, id;
//        scanf("%d%d", &ts, &id);
//        v[ts].push_back(id);
//    }
//    for (int i = 1; i <= T; i++)
//    {
//        for (int id : v[i])
//        {
//            a[id] += 2, vis[id] = 1;
//        }
//        for (int id = 1; id <= N; id++)
//        {
//            if (!vis[id])
//            {
//                a[id] = max(0, a[id] - 1);
//            }
//            if (a[id] > 5)
//            {
//                se.insert(id);
//            }
//            else if (a[id] <= 3)
//            {
//                se.erase(id);
//            }
//        }
//        memset(vis, 0, sizeof(vis));
//    }
//
//    printf("%d", se.size());
//    return 0;
//}