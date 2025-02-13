// 1.https://www.luogu.com.cn/problem/P1042

//#include<iostream>
//#include<cmath>
//using namespace std;
//
//char str[100010];
//int cnt = 0;
//
//void show(int n)
//{
//    int a = 0, b = 0;
//    for (int i = 0; i < cnt; i++)
//    {
//        if (str[i] == 'W') a++;
//        if (str[i] == 'L') b++;
//        if ((a >= n || b >= n) && abs(a - b) >= 2)
//        {
//            cout << a << ":" << b << endl;
//            a = b = 0;
//        }
//    }
//    //新的一轮刚开始，或上一局没有打完
//    cout << a << ":" << b << endl;
//}
//
//int main()
//{
//    char ch;
//    while (cin >> ch && ch != 'E')
//    {
//        if (ch == 'W' || ch == 'L')
//        {
//            str[cnt++] = ch;
//        }
//    }
//    show(11);
//    cout << endl;
//    show(21);
//}

// 2.https://www.luogu.com.cn/problem/P2670

//此题详见C语言项目--扫雷游戏

//#include <bits/stdc++.h>
//using namespace std;
//
//int dx[8] = { 0, 0, 1, 1, 1, -1, -1, -1 }, dy[8] = { -1, 1, -1, 0, 1, -1, 0, 1 }, n, m, ans = 0;
//char mp[101][101];
//
//int main() {
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= m; j++) cin >> mp[i][j];
//	}
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= m; j++) {
//			if (mp[i][j] == '*') cout << '*';
//			else {
//				for (int k = 0; k < 8; k++) {
//					int x = i + dx[k], y = j + dy[k];
//					if (x >= 1 && x <= n && y >= 1 && y <= m && mp[x][y] == '*') ans++;
//				}
//				cout << ans;
//				ans = 0;
//			}
//		}
//		cout << endl;
//	}
//	return 0;
//}

// 3.https://www.luogu.com.cn/problem/P1563

//#include <stdio.h>
//
//#define MAX_N 100000
//#define MAX_M 100000
//
//int main()
//{
//    char er_dir[MAX_N] = { 0 };//存储朝向
//    long n, m, i, cur = 0, a, s;
//    char er_occ[MAX_N][11] = { {0} };//存储职业
//    scanf("%ld%ld", &n, &m);
//    for (i = 0; i < n; ++i)
//    {
//        scanf("%ld%s", er_dir + i, er_occ[i]);
//    }
//    for (i = 0; i < m; ++i)
//    {
//        scanf("%ld%ld", &a, &s);//获取左右和序数
//        if (er_dir[cur] == a)//向外朝左与向内朝右是一致的，反之亦然
//        {
//            s *= -1;
//        }
//        cur = (cur + n + s) % n;
//    }
//    printf("%s", er_occ[cur]);
//    return 0;
//}

// 4.https://www.luogu.com.cn/problem/P1601

//#include<iostream>
//#include<string>
//#include<algorithm>
//using namespace std;
//
//int main()
//{
//	int a1[210] = { 0 }, a2[210] = { 0 }, a3[210] = { 0 };
//	string s1, s2;
//	cin >> s1 >> s2;
//	if (s1 == "0" && s2 == "0")//特判
//	{
//		cout << 0;
//		return 0;
//	}
//	for (int i = 0; i < s1.size(); i++)
//	{
//		a1[s1.size() - i - 1] = s1[i] - '0';
//	}
//	for (int i = 0; i < s2.size(); i++)
//	{
//		a2[s2.size() - i - 1] = s2[i] - '0';
//	}
//	for (int i = 0; i < max(s1.size(), s2.size()); i++)
//	{
//		a3[i] = a1[i] + a2[i];
//	}
//	for (int i = 0; i < max(s1.size(), s2.size()); i++)
//	{
//		if (a3[i] >= 10)
//		{
//			a3[i + 1] += a3[i] / 10;
//			a3[i] %= 10;
//		}
//	}
//	for (int i = 209; i >= 0; i--)
//	{
//		if (a3[i] != 0)//逆序从第一个不是0的元素开始打印
//		{
//			for (int j = i; j >= 0; j--)
//			{
//				cout << a3[j];
//			}
//			break;
//		}
//	}
//	return 0;
//}

// 5.https://www.luogu.com.cn/problem/P1303

//#include<iostream>
//#include<cstring>
//#include<cstdio>
//#include<algorithm>
//using namespace std;
//char a1[10001], b1[10001];
//int a[10001], b[10001], i, x, len, j, c[10001];
//int main()
//{
//	cin >> a1 >> b1;
//	int lena = strlen(a1);
//	int lenb = strlen(b1);
//	for (i = 1; i <= lena; i++)
//	{
//		a[i] = a1[lena - i] - '0';
//	}
//	for (i = 1; i <= lenb; i++)
//	{
//		b[i] = b1[lenb - i] - '0';
//	}
//	for (i = 1; i <= lenb; i++)
//	{
//		for (j = 1; j <= lena; j++)
//		{
//			c[i + j - 1] += a[j] * b[i];
//		}
//	}
//	for (i = 1; i < lena + lenb; i++)
//	{
//		if (c[i] > 9)
//		{
//			c[i + 1] += c[i] / 10;
//			c[i] %= 10;
//		}
//	}
//	len = lena + lenb;
//	while (c[len] == 0 && len > 1)
//	{
//		len--;
//	}
//	for (i = len; i >= 1; i--)
//	{
//		cout << c[i];
//	}
//	return 0;
//}

// 6.https://www.luogu.com.cn/problem/P4924

//#include<bits/stdc++.h>
//using namespace std;
//int g[510][510], tot, f[510][510];//f数组充当临时数组 
//int main()
//{
//	int n, m;
//	scanf("%d %d", &n, &m);
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			g[i][j] = ++tot;
//		}
//	}
//	for (int i = 1; i <= m; i++)
//	{
//		int a, b, r, opt;
//		scanf("%d %d %d %d", &a, &b, &r, &opt);//下面的分析都是针对那一块矩阵而言的 
//		if (opt == 0)//第i行第j个 变成倒数第i列第j个 顺时针 
//		{
//			for (int i = a - r; i <= a + r; i++)
//			{
//				for (int j = b - r; j <= b + r; j++)
//				{
//					f[a - b + j][a + b - i] = g[i][j];
//				}
//			}
//			for (int i = a - r; i <= a + r; i++)
//			{
//				for (int j = b - r; j <= b + r; j++)
//				{
//					g[i][j] = f[i][j];
//				}
//			}
//		}
//		else//第i行第j个 变成第i列倒数第j个 逆时针 
//		{
//			for (int i = a - r; i <= a + r; i++)
//			{
//				for (int j = b - r; j <= b + r; j++)
//				{
//					f[a + b - j][b - a + i] = g[i][j];
//				}
//			}
//			for (int i = a - r; i <= a + r; i++)
//			{
//				for (int j = b - r; j <= b + r; j++)
//				{
//					g[i][j] = f[i][j];
//				}
//			}
//		}
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			printf("%d ", g[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

// 7.https://www.luogu.com.cn/problem/P1591

//#include<cstdio>
//#include<iostream>
//#include<algorithm>
//#include<cstring>
//#include<cmath>
//using namespace std;
//int a[5000];
//int main()
//{
//    int t;
//    cin >> t;
//    while (t--)
//    {
//        for (int i = 1; i <= 1001; i++)
//        {
//            a[i] = 0;//将数组清零。
//        }
//        a[1] = 1;//必须设为1。不能为0，不然怎么乘都是0。
//        int n, i, j, k, m;
//        int p = 1, jw = 0;//p代表位数，jw代表进位。
//        cin >> n >> m;
//        for (i = 2; i <= n; i++)//计算阶乘
//        {
//            jw = 0;
//            for (j = 1; j <= p; j++)//这里的p就相当于高精度*单精度模板中输入高精度数字的字符串的长度
//            {
//                a[j] = a[j] * i + jw;//高精度*单精度+进位。
//                jw = a[j] / 10;//设置进位。
//                a[j] = a[j] % 10;
//            }
//            while (jw > 0)//如果还有进位，处理进位。
//            {
//                a[j] = jw % 10;
//                jw /= 10;
//                j++;
//            }
//            p = j - 1;
//        }
//        long long sum = 0;
//        for (i = p; i >= 1; i--)//搜索n!里有几个指定数字。
//        {
//            if (a[i] == m)
//                sum++;
//        }
//        cout << sum << endl;//输出。
//    }
//    return 0;
//}

// 8.https://www.luogu.com.cn/problem/P1328

//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//int main()
//{
//	int n, na, nb;
//	int count_a = 0, count_b = 0;
//	vector<int> Na, Nb;
//	cin >> n >> na >> nb;
//	for (int i = 0; i < na; i++)//小A的出拳周期
//	{
//		int a;
//		cin >> a;
//		Na.push_back(a);
//	}
//	for (int i = 0; i < nb; i++)//小B的出拳周期
//	{
//		int b;
//		cin >> b;
//		Nb.push_back(b);
//	}
//	for (int i = 0; i < n; i++)//对局次数
//	{
//		//以小A为基准
//		if (Na[i % Na.size()] == 0)
//		{
//			if (Nb[i % Nb.size()] == 0)
//			{
//				continue;
//			}
//			else if (Nb[i % Nb.size()] == 1)
//			{
//				count_b++;
//			}
//			else if (Nb[i % Nb.size()] == 2)
//			{
//				count_a++;
//			}
//			else if (Nb[i % Nb.size()] == 3)
//			{
//				count_a++;
//			}
//			else if (Nb[i % Nb.size()] == 4)
//			{
//				count_b++;
//			}
//		}
//		else if (Na[i % Na.size()] == 1)
//		{
//			if (Nb[i % Nb.size()] == 0)
//			{
//				count_a++;
//			}
//			else if (Nb[i % Nb.size()] == 1)
//			{
//				continue;
//			}
//			else if (Nb[i % Nb.size()] == 2)
//			{
//				count_b++;
//			}
//			else if (Nb[i % Nb.size()] == 3)
//			{
//				count_a++;
//			}
//			else if (Nb[i % Nb.size()] == 4)
//			{
//				count_b++;
//			}
//		}
//		else if (Na[i % Na.size()] == 2)
//		{
//			if (Nb[i % Nb.size()] == 0)
//			{
//				count_b++;
//			}
//			else if (Nb[i % Nb.size()] == 1)
//			{
//				count_a++;
//			}
//			else if (Nb[i % Nb.size()] == 2)
//			{
//				continue;
//			}
//			else if (Nb[i % Nb.size()] == 3)
//			{
//				count_b++;
//			}
//			else if (Nb[i % Nb.size()] == 4)
//			{
//				count_a++;
//			}
//		}
//		else if (Na[i % Na.size()] == 3)
//		{
//			if (Nb[i % Nb.size()] == 0)
//			{
//				count_b++;
//			}
//			else if (Nb[i % Nb.size()] == 1)
//			{
//				count_b++;
//			}
//			else if (Nb[i % Nb.size()] == 2)
//			{
//				count_a++;
//			}
//			else if (Nb[i % Nb.size()] == 3)
//			{
//				continue;
//			}
//			else if (Nb[i % Nb.size()] == 4)
//			{
//				count_a++;
//			}
//		}
//		else if (Na[i % Na.size()] == 4)
//		{
//			if (Nb[i % Nb.size()] == 0)
//			{
//				count_a++;
//			}
//			else if (Nb[i % Nb.size()] == 1)
//			{
//				count_a++;
//			}
//			else if (Nb[i % Nb.size()] == 2)
//			{
//				count_b++;
//			}
//			else if (Nb[i % Nb.size()] == 3)
//			{
//				count_b++;
//			}
//			else if (Nb[i % Nb.size()] == 4)
//			{
//				continue;
//			}
//		}
//	}
//	cout << count_a << ' ' << count_b << endl;
//	return 0;
//}

// 9.https://www.luogu.com.cn/problem/P1518

//#include <bits/stdc++.h> 
//using namespace std;
//
////基本初始：
//char mp[11][11]; //创建地图
//int xa, ya, xb, yb;	//创建变量表示农夫和牛的位置（ a 为农夫， b 为牛， x 为行， y为列）
//int lxa, lya, lxb, lyb; //创建变量表示农夫和牛移动后的位置（移动可能不成立）
//int fa = 1, fb = 1; //创建变量表示农夫和牛的方向（ 1 为北、 2 为东、 3 为南、 4 为西）
//int ans = 0; //创建变量表示时间（输出结果）
//
////农夫移动函数：
//void yda() {
//	//平移区：
//	if (fa == 1) { //当方向为北时
//		lxa = xa - 1; //行向上移动（减 1 ）
//		lya = ya; //列不动
//	}
//	if (fa == 2) { //当方向为东时
//		lxa = xa; //行不动
//		lya = ya + 1; //列向右移动（加 1 ）
//	}
//	if (fa == 3) { //当方向为南时
//		lxa = xa + 1; //行向下移动（加 1 ）
//		lya = ya; //列不动
//	}
//	if (fa == 4) { //当方向为西时
//		lxa = xa; //行不动
//		lya = ya - 1; //列向左移动（减 1 ）
//	}
//	//判定区：
//	if (lxa >= 1 && lya >= 1 && lya <= 10 && lxa <= 10 && mp[lxa][lya] == '.') { //当移动后位置在地图内且为空地
//		xa = lxa; //行位置
//		ya = lya; //列位置
//	}
//	else { //不成立 
//		fa++; //方向转变
//		if (fa > 4) { //当方向值大于西侧
//			fa = 1; //变回北侧
//		}
//	}
//}
//
////牛移动函数： 
//void ydb() {
//	//平移区
//	if (fb == 1) { //当方向为北时
//		lxb = xb - 1; //行向上移动（减 1 ）
//		lyb = yb; //列不动
//	}
//	if (fb == 2) { //当方向为东时
//		lxb = xb; //行不动
//		lyb = yb + 1; //列向右移动（加 1 ）
//	}
//	if (fb == 3) { //当方向为南时
//		lxb = xb + 1; //行向下移动（加 1 ）
//		lyb = yb; //列不动
//	}
//	if (fb == 4) { //当方向为西时
//		lxb = xb; //行不动
//		lyb = yb - 1; //列向左移动（减 1 ）
//	}
//	//判定区：
//	if (lxb >= 1 && lyb >= 1 && lyb <= 10 && lxb <= 10 && mp[lxb][lyb] == '.') { //当移动后位置在地图内且为空地
//		xb = lxb; //行位置
//		yb = lyb; //列位置
//	}
//	else { //不成立 
//		fb++; //方向转变
//		if (fb > 4) { //当方向值大于西侧
//			fb = 1; //变回北侧
//		}
//	}
//}
//
////主函数： 
//int main() {
//	//输入区：
//	for (int i = 1; i <= 10; i++) { //基本二维输入行
//		for (int j = 1; j <= 10; j++) { //基本二维输入列
//			cin >> mp[i][j]; //输入
//			if (mp[i][j] == 'F') { //当输入为农夫位置时，将其存储至农夫的位置
//				xa = i; //储存行
//				ya = j; //储存列
//				mp[i][j] = '.'; //为判断方便，将其变为空地
//			}
//			if (mp[i][j] == 'C') { //当输入为牛位置时，将其存储至牛的位置
//				xb = i; //储存行
//				yb = j; //储存列
//				mp[i][j] = '.'; //为判断方便，将其变为空地
//			}
//		}
//	}
//	//模拟区： 
//	while (1) {
//		yda(); //农夫移动
//		ydb(); //牛移动
//		ans++; //时间增加
//		if (ans > 10000) { //此处为骗分，如果大于 10000 还是没有重合，即无法重合
//			cout << 0; //直接输出 0
//			return 0; //结束程序
//		}
//		if (xa == xb && ya == yb) { //如果重合（行列均相同）
//			cout << ans; //输出时间
//			return 0; //结束程序
//		}
//	}
//}

// 10.https://www.luogu.com.cn/problem/P1098

//#include<bits/stdc++.h>//万能头文件
//using namespace std;
//int main() {
//	int p1, p2, p3;
//	cin >> p1 >> p2 >> p3;
//	char a[1005];
//	cin >> a;
//	int n = strlen(a);
//	for (int i = 0; i < n; i++) {
//		if (((a[i - 1] >= 'a' && a[i - 1] <= 'z' && a[i + 1] >= 'a' && a[i + 1] <= 'z') || (a[i - 1] >= '0' && a[i - 1] <= '9' && a[i + 1] >= '0' && a[i + 1] <= '9')) && a[i] == '-') {//操作1，注意||和&&的优先级，所以要加括号，作者没有加括号得了60pts
//			if (a[i + 1] == a[i - 1] + 1) continue;//操作5
//			if (a[i + 1] <= a[i - 1]) {//操作5
//				cout << '-';
//				continue;
//			}
//			//大模拟
//			if (p1 == 1) {
//				if (p2 == 1) {
//					if (p3 == 1) {
//						for (char j = a[i - 1] + 1; j < a[i + 1]; j++) cout << j;//注意是char，不是int
//					}
//					else if (p3 == 2) {
//						for (char j = a[i + 1] - 1; j > a[i - 1]; j--) cout << j;
//					}
//				}
//				else if (p2 != 1) {
//					if (p3 == 1) {
//						for (char j = a[i - 1] + 1; j < a[i + 1]; j++)//次数*距离
//							for (int k = 1; k <= p2; k++) cout << j;
//					}
//					else if (p3 == 2) {
//						for (char j = a[i + 1] - 1; j > a[i - 1]; j--)
//							for (int k = 1; k <= p2; k++) cout << j;
//					}
//				}
//			}
//			else if (p1 == 2) {
//				if (p2 == 1) {
//					if (p3 == 1) {
//						for (char j = a[i - 1] + 1; j < a[i + 1]; j++) cout << (char)(j - 32);
//					}
//					else if (p3 == 2) {
//						for (char j = a[i + 1] - 1; j > a[i - 1]; j--) cout << (char)(j - 32);
//					}
//				}
//				else {
//					if (p3 == 1) {
//						for (char j = a[i - 1] + 1; j < a[i + 1]; j++)
//							for (int k = 1; k <= p2; k++)
//								if (j >= 'a' && j <= 'z') cout << (char)(j - 32);
//								else cout << j;
//					}
//					else if (p3 == 2) {
//						for (char j = a[i + 1] - 1; j > a[i - 1]; j--)
//							for (int k = 1; k <= p2; k++)
//								if (j >= 'a' && j <= 'z') cout << (char)(j - 32);//要分情况讨论，作者没有这个得了70pts
//								else cout << j;
//					}
//				}
//			}
//			else if (p1 == 3) {
//				if (p2 == 1) {
//					if (p3 == 1) {
//						for (char j = a[i - 1] + 1; j < a[i + 1]; j++) cout << '*';//要循环判断距离，作者没有这个得到了80pts
//					}
//					else if (p3 == 2) {
//						for (char j = a[i - 1] + 1; j < a[i + 1]; j++) cout << '*';
//					}
//				}
//				else {
//					if (p3 == 1) {
//						for (int k = 1; k <= p2 * (a[i + 1] - a[i - 1] - 1); k++) cout << '*';
//					}
//					else if (p3 == 2) {
//						for (int k = 1; k <= p2 * (a[i + 1] - a[i - 1] - 1); k++) cout << '*';//一定是减1，不是+1，作者没有这个得到90pts
//					}
//				}
//			}
//		}
//		else cout << a[i];
//	}
//	return 0;//好习惯
//}

