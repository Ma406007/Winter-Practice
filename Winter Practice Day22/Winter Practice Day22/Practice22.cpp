// 1.https://www.luogu.com.cn/problem/P5736

//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<cmath>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	vector<int> nums;
//	for (int i = 0; i < n; i++)
//	{
//		int tmp;
//		cin >> tmp;
//		nums.push_back(tmp);
//	}
//	for (int i = 0; i < nums.size(); i++)
//	{
//		int count = 0;
//		for (int j = 2; j < nums[i]; j++)
//		{
//			if (nums[i] % j == 0)
//			{
//				count++;
//			}
//		}
//		if (count >= 1)
//		{
//			continue;
//		}
//		else
//		{
//			if (nums[i] != 1)//1要特判
//			{
//				cout << nums[i] << ' ';
//			}
//		}
//	}
//	return 0;
//}

// 2.https://www.luogu.com.cn/problem/P5738

//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//using namespace std;
//int i, n, m, j, sum, b;
//int a[110];
//int main()
//{
//    double f = 0, anw = 0, max = 0;
//    cin >> n >> m;
//    b = m - 2;
//    for (i = 1; i <= n; i++)
//    {
//        for (j = 1; j <= m; j++) std::cin >> a[j];
//        sort(a + 1, a + 1 + m);
//        for (sum = 2; sum < m; sum++) anw += a[sum];
//        f = anw / b;//平均
//        if (f > max) max = f;//替换
//        f = 0; anw = 0;//重新赋值
//    }
//    printf("%.2f", max);
//    return 0;
//}

// 3.https://www.luogu.com.cn/problem/P2415

//研究 1 2 3 4
//子集[] [1] [2] [3] [4] [1 2] [1 3] [1 4] [2 3] [2 4] [3 4] [1 2 3] [1 2 4] [1 3 4] [2 3 4] [1 2 3 4]
//1*8+2*8+3*8+4*8=(1+2+3+4)*2^(4-1) 
//发现规律 输入元素和*2^(n-1) 
//#include <stdio.h>
//int main() {
//    long long ans = 0;
//    int n = 0, i, a;
//    while (scanf("%d", &a) != EOF)
//        ans += a, n++;
//    for (i = 1; i < n; i++)
//        ans *= 2;
//    printf("%lld", ans);
//    return 0;
//}

// 4.https://www.luogu.com.cn/problem/P1304

//#include<stdio.h>
//int a[10001];
//int ss(int n)//判断是不是质数的函数
//{
//    int i;
//    for (i = 2; i < n; i++)
//    {
//        if (n % i == 0) return 1;//出现能整除的情况，说明此数不是质数，返回跳出函数
//    }
//    return 0;//如果成功从循环中出来，返回0，说明此数是质数
//}
//void num(int n)//此函数就是整道题的重点了，用来判断输出
//{
//    printf("%d=", n);
//    int i;
//    for (i = 2; i < n; i++)//穷举加数
//    {
//        if (ss(i) == 0 && ss(n - i) == 0)//判断两个加数是否为质数 
//        {
//            printf("%d+%d\n", i, n - i); break;
//        }//题目输出第一个加数最小的情况，那就发现成立的情况就及时跳出
//    }
//}
//int main()//主函数只要穷举4~n之间的数就行了
//{
//    int i, n;
//    scanf("%d", &n)；
//        for (i = 4; i <= n; i += 2)
//        {
//            num(i);//调用
//        }
//    return 0;
//}

// 5.https://www.luogu.com.cn/problem/P5741

//#include<iostream>
//using namespace std;
//struct eee {
//	int yuwen, shuxue, yingyu, zf;
//	string s;
//};
//int n;
//eee a[1001];
//int main() {
//	scanf("%d", &n);
//	for (int i = 1; i <= n; ++i)
//	{
//		cin >> a[i].s >> a[i].yuwen >> a[i].shuxue >> a[i].yingyu;
//		a[i].zf = a[i].yuwen + a[i].shuxue + a[i].yingyu;
//	}
//	for (int i = 1; i < n; ++i)
//		for (int j = i + 1; j <= n; ++j)
//		{
//			if (a[i].s > a[j].s)
//			{
//				swap(a[i].s, a[j].s);
//				swap(a[i].yuwen, a[j].yuwen);
//				swap(a[i].shuxue, a[j].shuxue);
//				swap(a[i].yingyu, a[j].yingyu);
//			}
//		}
//	for (int i = 1; i < n; ++i)
//		for (int j = i + 1; j <= n; ++j)
//		{
//			if (abs(a[i].yuwen - a[j].yuwen) <= 5 && abs(a[i].shuxue - a[j].shuxue) <= 5 && abs(a[i].yingyu - a[j].yingyu) <= 5 && abs(a[i].zf - a[j].zf) <= 10)
//			{
//				cout << a[i].s << " " << a[j].s << endl;
//			}
//		}
//	return 0;
//}

// 6.https://www.luogu.com.cn/problem/P5740

//#include<cstdio>
//#include<iostream>
//using namespace std;
//string name[1005];
//int cg[1005], mg[1005], eg[1005];
//int main() {
//    int n, max = -999999, t;//t为最厉害的学生编号，max没有大作用只是一个触发器
//    scanf("%d", &n);
//    for (int a = 0; a < n; a++)cin >> name[a] >> cg[a] >> mg[a] >> eg[a];//输入学生数据
//    for (int b = 0; b < n; b++) 
//   {
//        if (cg[b] + mg[b] + eg[b] > max)
//        {
//            max = cg[b] + mg[b] + eg[b];//条件成立更新最高分
//            t = b;//更新编号以便查找
//        }
//    }
//    cout << name[t] << " " << cg[t] << " " << mg[t] << " " << eg[t];
//    return 0;
//}

// 7.https://www.luogu.com.cn/problem/P5461

//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//using namespace std;
//int n, a[(1 << 11) + 5];//用位运算加快一下速度
//int main()
//{
//    ios::sync_with_stdio(false);//加快输入输出
//    cin >> n;
//    n = 1 << n;//先变为2^n
//    a[n] = 1;//特殊处理第一列的最后一项
//    for (int i = 1; i <= n; i++)
//    {
//        for (int j = 1; j <= n; j++)
//        {
//            if (j != n)cout << a[j] << " ";//去除行末的空格
//            else cout << a[j];
//            a[j] = (a[j] + a[j + 1]) % 2;//重点：上面的数字就是a[j]，右边的数字就是a[j+1]，注意要取模
//        }
//        cout << endl;//换行
//    }
//    return 0;
//}