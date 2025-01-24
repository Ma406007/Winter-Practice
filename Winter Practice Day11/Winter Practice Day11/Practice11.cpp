// 1.https://www.lanqiao.cn/problems/160/learning/?page=1&first_category_id=1&tags=%E5%8D%95%E4%BD%8D%E6%8D%A2%E7%AE%97,%E6%97%A5%E6%9C%9F%E9%97%AE%E9%A2%98,%E8%AF%AD%E6%B3%95&tag_relation=union

//#include <bits/stdc++.h>
//using namespace std;
//int main()
//{
//    char word[100];
//    scanf("%s", &word);
//    int yuan = 0, fu = 0;
//    int n = 0;
//    while (word[n] != '\0')
//    {
//        if (word[n] == 'a' || word[n] == 'e' || word[n] == 'i' || word[n] == 'o' || word[n] == 'u')
//        {
//            yuan++;
//        }
//        else
//        {
//            fu++;
//        }
//        n++;
//    }
//    printf("%d\n", yuan);
//    printf("%d", fu);
//    return 0;
//}

// 2.https://www.lanqiao.cn/problems/244/learning/?page=1&first_category_id=1&tags=%E5%8D%95%E4%BD%8D%E6%8D%A2%E7%AE%97,%E6%97%A5%E6%9C%9F%E9%97%AE%E9%A2%98,%E8%AF%AD%E6%B3%95&tag_relation=union

//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    char S[1000], T[1000];
//    int i, j, lens, lent, ans = 0;
//    scanf("%s", &S);
//    scanf("%s", &T);
//    lens = strlen(S);
//    lent = strlen(T);
//    for (i = 0, j = 0; j < lens && i < lent; j++)
//    {
//        if (T[i] == S[j])
//        {
//            ans++;
//            i++;
//        }
//    }
//    printf("%d", ans);
//    return 0;
//}

// 3.https://www.lanqiao.cn/problems/316/learning/?page=1&first_category_id=1&tags=%E5%8D%95%E4%BD%8D%E6%8D%A2%E7%AE%97,%E6%97%A5%E6%9C%9F%E9%97%AE%E9%A2%98,%E8%AF%AD%E6%B3%95&tag_relation=union

//#include <bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int n = 0;
//    cin >> n;
//    vector<int> arr;
//    for (int i = 0; i < n; i++)
//    {
//        int num;
//        cin >> num;
//        arr.push_back(num);
//    }
//    vector<int> ans;
//    int flag = 0;
//    for (int i = 0; i < arr.size(); i++)
//    {
//        if (arr[i] != 0)
//        {
//            ans.push_back(arr[i]);
//            flag++;
//        }
//    }
//    for (int i = flag; i < arr.size(); i++)
//    {
//        ans.push_back(0);
//    }
//    for (int i = 0; i < ans.size(); i++)
//    {
//        cout << ans[i] << ' ';
//    }
//    return 0;
//}

// 4.https://www.lanqiao.cn/problems/607/learning/?page=1&first_category_id=1&tags=%E5%8D%95%E4%BD%8D%E6%8D%A2%E7%AE%97,%E6%97%A5%E6%9C%9F%E9%97%AE%E9%A2%98,%E8%AF%AD%E6%B3%95&tag_relation=union

//#include <bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int i, L = 2019, D = 324;
//    for (i = 1; L != D; i++)
//    {
//        if (L > D)
//        {
//            L -= D;
//        }
//        else
//        {
//            D -= L;
//        }
//    }
//    cout << i << endl;
//    return 0;
//}

// 5.https://www.lanqiao.cn/problems/1452/learning/?page=1&first_category_id=1&tags=%E5%8D%95%E4%BD%8D%E6%8D%A2%E7%AE%97,%E6%97%A5%E6%9C%9F%E9%97%AE%E9%A2%98,%E8%AF%AD%E6%B3%95&tag_relation=union

//#include <stdio.h>
//#include <stdlib.h>
//
//int main(int argc, char* argv[])
//{
//	long long n;
//	scanf("%lld", &n);
//	n /= 1000;
//	int ss = n % 60;
//	n /= 60;
//	int mm = n % 60;
//	n /= 60;
//	int hh = n % 24;
//	printf("%02d:%02d:%02d", hh, mm, ss);
//	// 请在此输入您的代码
//	return 0;
//}

// 6.https://www.lanqiao.cn/problems/1935/learning/?page=1&first_category_id=1&tags=%E5%8D%95%E4%BD%8D%E6%8D%A2%E7%AE%97,%E6%97%A5%E6%9C%9F%E9%97%AE%E9%A2%98,%E8%AF%AD%E6%B3%95&tag_relation=union

//#include <iostream>
//using namespace std;
//bool is_loop_year(int year)
//{
//    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//    {
//        return true;
//    }
//    else
//    {
//        return false;
//    }
//}
//int main()
//{
//    int month_loop[13] = { 0,31,29,31,30,31,30,31,31,30,31,30,31 };
//    int month_not_loop[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//    int y, m, d;
//
//    while (1)
//    {
//        int cnt = 0;
//        cin >> y >> m >> d;
//        if (y == 0 && m == 0 && d == 0) break;
//        else {
//            if (is_loop_year(y))
//            {
//                for (int i = 0; i < m; i++)
//                {
//                    cnt += month_loop[i];
//                }
//            }
//            else
//            {
//                for (int i = 0; i < m; i++)
//                {
//                    cnt += month_not_loop[i];
//                }
//            }
//        }
//        cout << cnt + d << endl;
//    }
//    return 0;
//}

// 7.https://www.lanqiao.cn/problems/2266/learning/?page=1&first_category_id=1&tags=%E5%8D%95%E4%BD%8D%E6%8D%A2%E7%AE%97,%E6%97%A5%E6%9C%9F%E9%97%AE%E9%A2%98,%E8%AF%AD%E6%B3%95&tag_relation=union

//#include <iostream>
//using namespace std;
//#include<string>
//int main()
//{
//    string s;
//    cin >> s;
//    int num = s.length();
//    for (int i = 0; i < num; i++)
//    {
//        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
//            s[i] -= 32;
//    }
//    cout << s;
//    return 0;
//}

// 8.https://www.lanqiao.cn/problems/2271/learning/?page=1&first_category_id=1&tags=%E5%8D%95%E4%BD%8D%E6%8D%A2%E7%AE%97,%E6%97%A5%E6%9C%9F%E9%97%AE%E9%A2%98,%E8%AF%AD%E6%B3%95&tag_relation=union

//#include <stdio.h>
//#include <stdlib.h>
//
//int main(int argc, char* argv[])
//{
//    int moth[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//    int sum = 0;
//    int w = 6;
//
//    for (int i = 0; i < 12; i++)
//    {
//        for (int day = 1; day <= moth[i]; day++)
//        {
//            if (w == 6 || w == 0 || day == 1 || day == 11 || day == 21 || day == 31)
//            {
//                sum++;
//            }
//            w = (w + 1) % 7;
//        }
//    }
//
//    printf("%d\n", sum);
//    return 0;
//}

// 9.https://www.lanqiao.cn/problems/4156/learning/?page=1&first_category_id=1&tags=%E5%8D%95%E4%BD%8D%E6%8D%A2%E7%AE%97,%E6%97%A5%E6%9C%9F%E9%97%AE%E9%A2%98,%E8%AF%AD%E6%B3%95&tag_relation=union

//#include <bits/stdc++.h>
//using namespace std;
//int main()
//{
//    // 红->蓝:0 蓝->绿:1 绿->红:2
//    int n = 0;
//    int hash[3] = { 0 };
//    cin >> n;
//    for (int i = 0; i < n; i++)
//    {
//        int color = 0;
//        cin >> color;
//        hash[color]++;
//    }
//    int red = hash[1] * 2 + hash[2];
//    int blue = hash[2] * 2 + hash[0];
//    int green = hash[0] * 2 + hash[1];
//    cout << min(red, min(blue, green)) << endl;
//    return 0;
//}

// 10.https://www.lanqiao.cn/problems/4880/learning/?page=1&first_category_id=1&tags=%E5%8D%95%E4%BD%8D%E6%8D%A2%E7%AE%97,%E6%97%A5%E6%9C%9F%E9%97%AE%E9%A2%98,%E8%AF%AD%E6%B3%95&tag_relation=union

//#include <iostream>
//using namespace std;
//int main()
//{
//    int T;
//    cin >> T;
//    for (int i; i < T; i++)
//    {
//        int a, b;
//        cin >> a >> b;
//        if (a > b)
//        {
//            cout << "BRIDGE" << endl;
//        }
//        else if (a < b)
//        {
//            cout << "YI" << endl;
//        }
//        else
//        {
//            cout << "ANY" << endl;
//        }
//    }
//    return 0;
//}

// 11.https://www.lanqiao.cn/problems/4881/learning/?page=1&first_category_id=1&tags=%E5%8D%95%E4%BD%8D%E6%8D%A2%E7%AE%97,%E6%97%A5%E6%9C%9F%E9%97%AE%E9%A2%98,%E8%AF%AD%E6%B3%95&tag_relation=union

//#include <iostream>
//using namespace std;
//int main()
//{
//    int T, x1, y1, x2, y2;
//    cin >> T;
//    while (T--)
//    {
//        cin >> x1 >> y1 >> x2 >> y2;
//        if (x1 == x2 && y1 == y2)
//        {
//            cout << '0' << endl;
//        }
//        else if ((x1 + y1 + x2 + y2) % 2 == 0)
//        {
//            cout << '2' << endl;
//        }
//        else
//        {
//            cout << '1' << endl;
//        }
//    }
//    return 0;
//}

// 12.https://www.lanqiao.cn/problems/4882/learning/?page=1&first_category_id=1&tags=%E5%8D%95%E4%BD%8D%E6%8D%A2%E7%AE%97,%E6%97%A5%E6%9C%9F%E9%97%AE%E9%A2%98,%E8%AF%AD%E6%B3%95&tag_relation=union

//#include <bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int N, D;
//    cin >> N >> D;
//    int dangerous = 0, safe = 0, minday;
//    for (int i = 0; i < N; i++)
//    {
//        int a;
//        cin >> a;
//        if (a >= 80 || a <= 9)
//        {
//            dangerous++;
//        }
//        else
//        {
//            safe++;
//        }
//    }
//    minday += dangerous % D == 0 ? dangerous / D : dangerous / D + 1;
//    minday += safe % D == 0 ? safe / D : safe / D + 1;
//    cout << minday << endl;
//    return 0;
//}

// 13.https://www.lanqiao.cn/problems/4883/learning/?page=1&first_category_id=1&tags=%E5%8D%95%E4%BD%8D%E6%8D%A2%E7%AE%97,%E6%97%A5%E6%9C%9F%E9%97%AE%E9%A2%98,%E8%AF%AD%E6%B3%95&tag_relation=union

//#include <iostream>
//using namespace std;
//int main()
//{
//	// 请在此输入您的代码
//	int D, C;//配送费和优惠券的价格
//	cin >> D >> C;
//	int A1, A2, A3;//第1天三道菜的价格
//	cin >> A1 >> A2 >> A3;
//	int B1, B2, B3;//第2天三道菜的价格
//	cin >> B1 >> B2 >> B3;
//	int use, unuse;//使用优惠券和没使用优惠券的价格
//	int d;//两天实际配送费
//
//	if (A1 + A2 + A3 > 150 && B1 + B2 + B3 > 150) d = 0;
//	else if (A1 + A2 + A3 <= 150 && B1 + B2 + B3 <= 150) d = 2 * D;
//	else d = D;
//
//	use = A1 + A2 + A3 + B1 + B2 + B3 + C + d;
//	unuse = A1 + A2 + A3 + B1 + B2 + B3 + 2 * D;
//
//	if (use < unuse) cout << "YES" << endl;
//	else cout << "NO" << endl;
//	return 0;
//}

// 14.https://www.lanqiao.cn/problems/4884/learning/?page=1&first_category_id=1&tags=%E5%8D%95%E4%BD%8D%E6%8D%A2%E7%AE%97,%E6%97%A5%E6%9C%9F%E9%97%AE%E9%A2%98,%E8%AF%AD%E6%B3%95&tag_relation=union

//#include <iostream>
//using namespace std;
//int main()
//{
//    int T, t[4];
//    cin >> T;
//    int cnt = 0, i, j;
//    while (T != 0)
//    {
//        for (i = 0; i < 4; i++)
//        {
//            cin >> t[i];
//        }
//        for (i = 0; i < 3; i++)
//        {
//            for (j = i + 1; j < 4; j++)
//            {
//                if (t[i] == t[j])
//                {
//                    cnt++;
//                }
//            }
//        }
//        if (cnt == 6)
//        {
//            cout << "0" << endl;
//        }
//        else if (cnt == 3)
//        {
//            cout << "1" << endl;
//        }
//        else 
//        {
//            cout << "2" << endl;
//        }
//        cnt = 0;
//        T--;
//    }
//    return 0;
//}

// 15.https://www.lanqiao.cn/problems/4977/learning/?page=2&first_category_id=1&tags=%E5%8D%95%E4%BD%8D%E6%8D%A2%E7%AE%97,%E6%97%A5%E6%9C%9F%E9%97%AE%E9%A2%98,%E8%AF%AD%E6%B3%95&tag_relation=union

//#include <iostream>
//using namespace std;
//int main()
//{
//    int T = 0;
//    cin >> T;
//    for (int i = 0; i < T; i++) {
//        string lyric;
//        cin >> lyric;
//        for (int j = 0; j < lyric.length(); j++)
//        {
//            lyric[j] = (lyric[j] == 'a' || lyric[j] == 'e' || lyric[j] == 'i' || lyric[j] == 'o' || lyric[j] == 'u') ? lyric[j] -= 32 : lyric[j];
//        }
//        cout << lyric << endl;
//    }
//    return 0;
//}

// 16.https://www.lanqiao.cn/problems/4991/learning/?page=2&first_category_id=1&tags=%E5%8D%95%E4%BD%8D%E6%8D%A2%E7%AE%97,%E6%97%A5%E6%9C%9F%E9%97%AE%E9%A2%98,%E8%AF%AD%E6%B3%95&tag_relation=union

//#include <iostream>
//using namespace std;
//int main()
//{
//    int T;
//    cin >> T;
//    for (int i = 0; i < T; i++)
//    {
//        int X, Y;
//        cin >> X >> Y;
//        if (X % Y == 0)
//        {
//            cout << X / Y << endl;
//        }
//        else
//        {
//            cout << X / Y + X % Y << endl;
//        }
//    }
//    return 0;
//}

// 17.https://www.lanqiao.cn/problems/5480/learning/?page=2&first_category_id=1&tags=%E5%8D%95%E4%BD%8D%E6%8D%A2%E7%AE%97,%E6%97%A5%E6%9C%9F%E9%97%AE%E9%A2%98,%E8%AF%AD%E6%B3%95&tag_relation=union

//#include <iostream>
//using namespace std;
//int main()
//{
//    int n;
//    cin >> n;
//    int sum = 0;
//    for (int i = n - 1; i > 0; i--)
//    {
//        sum += i * 2;
//    }
//    cout << sum << endl;
//    return 0;
//}

// 18.https://www.lanqiao.cn/problems/8045/learning/?page=3&first_category_id=1&tags=%E5%8D%95%E4%BD%8D%E6%8D%A2%E7%AE%97,%E6%97%A5%E6%9C%9F%E9%97%AE%E9%A2%98,%E8%AF%AD%E6%B3%95&tag_relation=union

//#include <stdio.h>
//#include <stdlib.h>
//int Sum(int n)
//{
//    int sum = 0;
//    for (int i = 2; i * i <= n; i++)
//    {
//        while (n % i == 0)
//        {
//            sum += i;
//            n /= i;
//        }
//    }
//    if (n > 1)
//        sum += n;
//    return sum;
//}
//int gcd(int a, int b)
//{
//    while (a % b)
//    {
//        int t = a % b;
//        a = b;
//        b = t;
//    }
//    return b;
//}
//int lcm(int x, int n)
//{
//    return (x * n) / gcd(x, n);
//}
//int main(int argc, char* argv[])
//{
//    int T, n, num;
//    scanf("%d", &T);
//    for (int i = 0; i < T; i++)
//    {
//        scanf("%d %d", &n, &num);
//        int x = Sum(n);
//        if (lcm(x, n) == num)
//            printf("YES\n");
//        else
//            printf("NO\n");
//    }
//    return 0;
//}

// 19.https://www.lanqiao.cn/problems/8482/learning/?page=3&first_category_id=1&tags=%E5%8D%95%E4%BD%8D%E6%8D%A2%E7%AE%97,%E6%97%A5%E6%9C%9F%E9%97%AE%E9%A2%98,%E8%AF%AD%E6%B3%95&tag_relation=union

//#include <stdio.h>
//#include <stdlib.h>
//
//int main(int argc, char* argv[])
//{
//    int init[1000][100];//创建内部数组（不显示，只参与计算）
//    int show[1000][100] = { 0 };//创建显示数组（不参与计算，只显示）
//    int N = 0;
//    int i = 0;
//    int j = 0;
//    int n = 0;
//    int a = 0;
//    scanf("%d", &N);//录入行数（行数=列数）
//    for (i = 0; i < N; i++)
//    {
//        for (j = 0; j < N; j++)
//        {
//            scanf("%d", &init[i][j]);//录入数组
//            if (show[i][j] != 1)//显示数组不为1则此行此列未参与过消除，此时录入数据
//            {
//                show[i][j] = init[i][j];
//            }
//            a = 1;
//            n = 0;
//            while (a <= init[i][j])//统计计算数组在二进制存储时有几个1
//            {
//                if ((a & init[i][j]) == a)
//                    n++;
//                a <<= 1;//a左移移位代表乘2
//                if (n > 1)
//                    break;
//            }
//            if (n == 1)//只有一个1代表是2的整数次方，此时消除显示数组，使其为1
//            {
//                for (a = 0; a < N; a++)
//                {
//                    show[i][a] = 1;
//                }
//                for (a = 0; a < N; a++)
//                {
//                    show[a][j] = 1;
//                }
//            }
//        }
//    }
//    for (i = 0; i < N; i++)//打印
//    {
//        for (j = 0; j < N; j++)
//        {
//            printf("%d ", show[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}

// 20.https://www.lanqiao.cn/problems/8631/learning/?page=3&first_category_id=1&tags=%E5%8D%95%E4%BD%8D%E6%8D%A2%E7%AE%97,%E6%97%A5%E6%9C%9F%E9%97%AE%E9%A2%98,%E8%AF%AD%E6%B3%95&tag_relation=union

//#include <stdio.h>
//#include <stdlib.h>
//double fib(int n)
//{
//    if (n == 1)
//        return 2;
//    if (n == 2)
//        return 3;
//    return (fib(n - 1) + fib(n - 2));
//}
//int main(int argc, char* argv[])
//{
//    double sum = 0;
//    int n;
//    scanf("%d", &n);
//    for (int i = 1; i <= n; i++)
//    {
//        sum += (fib(i) / fib(i + 1));
//    }
//    printf("%.5f", sum);
//    return 0;
//}

// 21.https://www.lanqiao.cn/problems/10472/learning/?page=3&first_category_id=1&tags=%E5%8D%95%E4%BD%8D%E6%8D%A2%E7%AE%97,%E6%97%A5%E6%9C%9F%E9%97%AE%E9%A2%98,%E8%AF%AD%E6%B3%95&tag_relation=union

//#include <bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int T;
//    cin >> T;
//    for (int i = 0; i < T; i++)
//    {
//        long long X, Y;
//        string S;
//        cin >> X >> S >> Y;
//        if (S == "MB")
//        {
//            X *= 1024 * 1024;
//        }
//        if (S == "KB")
//        {
//            X *= 1024;
//        }
//        cout << X / Y << endl;
//    }
//    return 0;
//}

// 22.https://www.lanqiao.cn/problems/16955/learning/?page=3&first_category_id=1&tags=%E5%8D%95%E4%BD%8D%E6%8D%A2%E7%AE%97,%E6%97%A5%E6%9C%9F%E9%97%AE%E9%A2%98,%E8%AF%AD%E6%B3%95&tag_relation=union

//#include <iostream>
//using namespace std;
//int main()
//{
//    int date[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//    int ans = 1, today = 1;
//    for (int i = 1901; i <= 2000; i++) {
//        if ((i % 4 != 0) || ((i % 100 == 0) && (i % 400 != 0))) date[1] = 28;
//        else date[1] = 29;
//
//        for (int j = 0; j < 12; j++) {
//            today = (today + date[j]) % 7;
//            if (today == 1) ans++;
//        }
//    }
//    cout << ans;
//    return 0;
//}

// 23.https://www.lanqiao.cn/problems/17113/learning/?page=3&first_category_id=1&tags=%E5%8D%95%E4%BD%8D%E6%8D%A2%E7%AE%97,%E6%97%A5%E6%9C%9F%E9%97%AE%E9%A2%98,%E8%AF%AD%E6%B3%95&tag_relation=union

//#include <iostream>
//using namespace std;
//int main()
//{
//    int sum = (31 + 31 + 31 + 30) * 5;
//    int zhou = 3;
//    int a[8] = { 28,31,30,31,30,31,31,30 };
//    for (int i = 0; i < 8; i++)
//    {
//        int m = a[i];
//        for (int j = 1; j <= m; j++) {
//            if (zhou % 7 == 1 || j == 1 || j / 10 == 1 || j % 10 == 1) {
//                sum += 5;
//            }
//            else {
//                sum++;
//            }
//            zhou++;
//        }
//    }
//    cout << sum << endl;
//    return 0;
//}

// 24.https://www.lanqiao.cn/problems/18420/learning/?page=4&first_category_id=1&tags=%E5%8D%95%E4%BD%8D%E6%8D%A2%E7%AE%97,%E6%97%A5%E6%9C%9F%E9%97%AE%E9%A2%98,%E8%AF%AD%E6%B3%95&tag_relation=union

//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int n, m;
//    cin >> n >> m;
//    int i = 0, sum = 0;
//    // 计算等差数列的和，直到超过m
//    while (true)
//    {
//        sum = (n + 1) * i + n * (n + 1) / 2;
//        if (sum > m)
//        {
//            break;
//        }
//        i++;
//    }
//    // 由于i多增加了1，所以需要减去1
//    i--;
//    // 计算小蓝能拿到的糖果数
//    int maxCandies = 2 * i + n; // 小蓝在一轮中拿的糖果数是2i，加上下一轮开始的n
//    cout << maxCandies << endl;
//    return 0;
//}

// 25.https://www.lanqiao.cn/problems/20088/learning/?page=5&first_category_id=1&tags=%E5%8D%95%E4%BD%8D%E6%8D%A2%E7%AE%97,%E6%97%A5%E6%9C%9F%E9%97%AE%E9%A2%98,%E8%AF%AD%E6%B3%95&tag_relation=union

//#include <iostream>
//using namespace std;
//
//int main() {
//    long long a, b, c;
//    cin >> a >> b >> c;
//    long long ub = (c - 1) / b;
//    long long cnt = ub;
//    for (long long i = 1; i * i <= a; i++)
//    {
//        if (a % i == 0)
//        {
//            cnt -= (c - i) % b == 0 && (c - i) / b >= 1;
//            if (i * i != a)
//            {
//                cnt -= (c - a / i) % b == 0 && (c - a / i) / b >= 1;
//            }
//        }
//    }
//    cout << cnt << '\n';
//    return 0;
//}