// 1.https://www.luogu.com.cn/problem/P1428

//#include<iostream>
//using namespace std;
//int main()
//{
//    int n;
//    cin >> n;
//    int a[100], b[100] = { 0 };
//    for (int i = 0; i < n; i++)
//    {
//        cin >> a[i];
//    }
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = i; j >= 0; j--)
//        {
//            if (a[i] > a[j])
//            {
//                b[i]++;
//            }
//        }
//    }
//    for (int i = 0; i < n; i++)
//    {
//        cout << b[i] << ' ';
//    }
//    return 0;
//}

// 2.https://www.luogu.com.cn/problem/P1047

//#include<bits/stdc++.h>
//#define int long long
//using namespace std;
//int flag[114514];
//int ans;
//signed main()
//{
//	int l, m;
//	cin >> l >> m;
//	for (int i = 1; i <= m; i++)
//	{
//		int a, b;
//		cin >> a >> b;
//		for (int j = a; j <= b; j++)
//		{
//			flag[j] = 1;
//		}
//	}
//	for (int i = 0; i <= l; i++)
//	{
//		if (!flag[i])
//		{
//			ans++;
//		}
//	}
//	cout << ans;
//	return 0;
//}

// 3.https://www.luogu.com.cn/problem/P5728

//#include<iostream>
//using namespace std;
//int main()
//{
//	int Chinese[1000], Math[1000], English[1000], sum[1000];
//	int n, ans = 0;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> Chinese[i] >> Math[i] >> English[i];
//		sum[i] = Chinese[i] + Math[i] + English[i];
//	}
//	for (int i = 0; i < n - 1; i++)
//	{
//		for (int j = i + 1; j < n; j++)
//		{
//			if (abs(Chinese[i] - Chinese[j]) <= 5 && abs(Math[i] - Math[j]) <= 5 && abs(English[i] - English[j]) <= 5 && abs(sum[i] - sum[j]) <= 10)
//			{
//				ans++;
//			}
//		}
//	}
//	cout << ans << endl;
//}

// 4.https://www.luogu.com.cn/problem/P5729

//#include<bits/stdc++.h>
//using namespace std;
//bool judge[30][30][30] = { 0 };
//int w, x, h, q, a, b, c, d, e, f, ans = 0;
//int main()
//{
//    cin >> w >> x >> h >> q;
//    for (int i = 1; i <= q; ++i)
//    {
//        cin >> a >> b >> c >> d >> e >> f;
//        for (int j = a; j <= d; ++j)
//            for (int k = b; k <= e; ++k)
//                for (int l = c; l <= f; ++l)
//                    judge[j][k][l] = 1;
//    }
//    for (int i = 1; i <= w; ++i)
//        for (int j = 1; j <= x; ++j)
//            for (int k = 1; k <= h; ++k)
//                if (judge[i][j][k] == 0)
//                    ans++;
//    cout << ans << endl;
//    return 0;
//}

// 5.https://www.luogu.com.cn/problem/P2615

//#include <bits/stdc++.h>
//using namespace std;
//const int MAXN = 40;
//int a[MAXN][MAXN], n, x = 1, y = 0;
//int main()
//{
//	cin >> n;
//	y = n / 2 + 1;
//	for (int i = 1; i <= n * n; i++)
//	{
//		a[x][y] = i;
//		if ((x == 1 && y == n) || a[x - 1][y + 1]) x++;
//		else if (x == 1)
//		{
//			x = n;
//			y++;
//		}
//		else if (y == n)
//		{
//			x--;
//			y = 1;
//		}
//		else {
//			x--;
//			y++;
//		}
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++) cout << a[i][j] << ' ';
//		cout << endl;
//	}
//	return 0;
//}

// 6.https://www.luogu.com.cn/problem/P5730

//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	char a[10000];
//	string ans[10];
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> a[i];
//		if (a[i] == '1')
//		{
//
//			ans[1] += "..X.";
//			ans[2] += "..X.";
//			ans[3] += "..X.";
//			ans[4] += "..X.";
//			ans[5] += "..X.";
//		}
//		if (a[i] == '2')
//		{
//			ans[1] += "XXX.";
//			ans[2] += "..X.";
//			ans[3] += "XXX.";
//			ans[4] += "X...";
//			ans[5] += "XXX.";
//		}
//		if (a[i] == '3')
//		{
//			ans[1] += "XXX.";
//			ans[2] += "..X.";
//			ans[3] += "XXX.";
//			ans[4] += "..X.";
//			ans[5] += "XXX.";
//		}
//		if (a[i] == '4')
//		{
//			ans[1] += "X.X.";
//			ans[2] += "X.X.";
//			ans[3] += "XXX.";
//			ans[4] += "..X.";
//			ans[5] += "..X.";
//		}
//		if (a[i] == '5')
//		{
//			ans[1] += "XXX.";
//			ans[2] += "X...";
//			ans[3] += "XXX.";
//			ans[4] += "..X.";
//			ans[5] += "XXX.";
//		}
//		if (a[i] == '6')
//		{
//			ans[1] += "XXX.";
//			ans[2] += "X...";
//			ans[3] += "XXX.";
//			ans[4] += "X.X.";
//			ans[5] += "XXX.";
//		}
//		if (a[i] == '7')
//		{
//			ans[1] += "XXX.";
//			ans[2] += "..X.";
//			ans[3] += "..X.";
//			ans[4] += "..X.";
//			ans[5] += "..X.";
//		}
//		if (a[i] == '8')
//		{
//			ans[1] += "XXX.";
//			ans[2] += "X.X.";
//			ans[3] += "XXX.";
//			ans[4] += "X.X.";
//			ans[5] += "XXX.";
//		}
//		if (a[i] == '9')
//		{
//			ans[1] += "XXX.";
//			ans[2] += "X.X.";
//			ans[3] += "XXX.";
//			ans[4] += "..X.";
//			ans[5] += "XXX.";
//		}
//		if (a[i] == '0')
//		{
//			ans[1] += "XXX.";
//			ans[2] += "X.X.";
//			ans[3] += "X.X.";
//			ans[4] += "X.X.";
//			ans[5] += "XXX.";
//		}
//	}
//	for (int i = 1; i <= 5; i++)
//	{
//		ans[i] = ans[i].substr(0, ans[i].length() - 1);
//		cout << ans[i] << endl;
//	}
//	return 0;
//}

// 7.https://www.luogu.com.cn/problem/P2141

//#include <iostream>
//using namespace std;
//
//const int N = 105, M = 2e4 + 5;
//
//int a[N];
//bool f[M];
//
//int main()
//{
//    int n;
//    cin >> n;
//    for (int i = 1; i <= n; i++)
//    {
//        cin >> a[i];
//        f[a[i]] = true;
//    }
//    int ans = 0;
//    for (int i = 1; i <= n; i++)
//        for (int j = i + 1; j <= n; j++)
//            if (f[a[i] + a[j]])
//            {
//                ans++;
//                f[a[i] + a[j]] = false;
//            }
//    cout << ans;
//    return 0;
//}

// 8.https://www.luogu.com.cn/problem/P1161

//#include<bits/stdc++.h>
//using namespace std;
//int a[2000001], n;
//double x, y;
//int main()
//{
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> x >> y;
//		for (double j = 1; j <= y; ++j)
//		{
//			if (a[int(j * x)] == 0) a[int(j * x)] = 1;
//			else a[int(j * x)] = 0;
//		}
//	}
//	for (int i = 1;; i++)
//	{
//		if (a[i] == 1)
//		{
//			cout << i;
//			break;
//		}
//	}
//	return 0;
//}

// 9.https://www.luogu.com.cn/problem/P5732

//#include<cstdio>
//int a[21][21];
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//		a[i][1] = a[i][i] = 1;//赋初值
//	for (int i = 1; i <= n; i++)
//		for (int j = 2; j < i; j++)//因为a[i][1]、a[i][i]已经赋值过了，所以循环是2~n-1
//			a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= i; j++)
//			printf("%d ", a[i][j]);
//		printf("\n");
//	}
//}

// 10.https://www.luogu.com.cn/problem/P1789

//#include <bits/stdc++.h> 
//using namespace std;
//int n, m, k, a, b, ans;
//int s[5005][5005];
//bool pd(int x, int y)//判断是否越界
//{ 
//    if (x < 1 || y < 1 || x > n || y > n) return 0;
//    return 1;
//}
//int main()
//{
//    scanf("%d%d%d", &n, &m, &k);//读入 
//    for (int i = 1; i <= m + k; i++)//由于计算火把和萤石的步骤很像，所以合并了 
//    {
//        scanf("%d%d", &a, &b);//读入坐标 
//        for (int x = -2; x <= 2; x++)
//            for (int y = -2; y <= 2; y++)//枚举5*5的方阵(通过计算距离) 
//                if ((i > m || abs(x) + abs(y) <= 2) && pd(x + a, b + y))
//                    //如果是萤石(i > m)或者x与y的坐标差的和不超过2(想一想为什么)并且没有越界
//                    //没有越界就标记 
//                    s[x + a][b + y]++;
//    }
//    for (int i = 1; i <= n; i++)
//        for (int j = 1; j <= n; j++)
//            ans += s[i][j] == 0;//枚举每一个方格，看看是不是==0(即没有亮光) 
//    printf("%d\n", ans);//输出结果 
//    return 0;
//}

// 11.https://www.luogu.com.cn/problem/P1319

//#include<iostream>
//using namespace std;
//int main()
//{
//    int n;
//    cin >> n;
//    //矩阵长宽
//    int Map[n * n + 10];
//    //设置一个登记用的数组，其实n*n就够了，+10是为了防爆
//    int Full;//输入要用的
//    bool Key = false;
//    //判断当前输入的是1的数量还是0的数量，初始为0
//    int p = 0;
//    //已经登记到第几个数，类似于指针
//    while (cin >> Full)//持续输入
//    {
//        int i;
//        for (i = p; i < p + Full; i++)
//            Map[i] = Key;//把这一块区域登记为Key，就是0或1
//        p = i;
//        Key = !Key;
//    }
//    p = 0;
//    //指针归零，下面要开始从头开始输入
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < n; j++)
//        {
//            cout << Map[p];
//            p++;
//            //输出
//        }
//        cout << endl;
//        /*按格式输出*/
//    }
//}

// 12.https://www.luogu.com.cn/problem/P1320

//#include <bits/stdc++.h>
//using namespace std;
//
//char a, b = '0';//注意了：一定是赋值为'0'；
//int n, ans[1000001], zz = 1;//zz是指针的意思，用来存储第几位
//
//int main()
//{
//    while (cin >> a)
//    {
//        n++;
//        if (a == b)
//            ans[zz]++;
//        else
//            ans[++zz]++,
//            b = a;
//    }
//    cout << sqrt(n);
//    for (int i = 1; i <= zz; i++)
//        cout << " " << ans[i];
//}

// 13.https://www.luogu.com.cn/problem/P1205

//#include<cstdio>
//#include<cstring>
//#include<algorithm>
//using namespace std;
//const int maxn = 12;
//int n;
//class Matrix
//{
//public:
//    int a[maxn][maxn];
//    void in() { for (int i = 0; i < n; i++)for (int j = 0; j < n; j++)scanf(" %c", a[i] + j); }
//    Matrix rotate()
//    {
//        Matrix ans;
//        for (int i = 0; i < n; i++)for (int j = 0; j < n; j++)ans.a[i][j] = a[n - j - 1][i];
//        return ans;
//    }
//    Matrix reflex()
//    {
//        Matrix ans;
//        for (int i = 0; i < n; i++)for (int j = 0; j < n; j++)ans.a[i][j] = a[i][n - j - 1];
//        return ans;
//    }
//    bool operator==(Matrix b)//判断两个矩阵是否相等
//    {
//        for (int i = 0; i < n; i++)for (int j = 0; j < n; j++)
//            if (a[i][j] != b.a[i][j])return false;
//        return true;
//    }
//}from, to, mid;
//int main()
//{
//    scanf("%d", &n);
//    from.in(); to.in();
//    mid = from;
//    for (int i = 1; i <= 3; i++)
//    {
//        mid = mid.rotate();
//        if (mid == to) { printf("%d\n", i); return 0; }
//    }
//    mid = from.reflex();
//    if (mid == to) { printf("4\n"); return 0; }
//    for (int i = 1; i <= 3; i++)
//    {
//        mid = mid.rotate();
//        if (mid == to) { printf("5\n"); return 0; }
//    }
//    if (from == to) { printf("6\n"); return 0; }
//    printf("7\n");//这些数字的顺序很重要
//    return 0;
//}