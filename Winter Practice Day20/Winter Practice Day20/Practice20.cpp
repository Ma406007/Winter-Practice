// 1.https://www.luogu.com.cn/problem/P5721#submit

//#include<iostream>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	int count = 1;
//	while (n)
//	{
//		for (int i = 1; i <= n; i++, count++)
//		{
//			if (count < 10)
//			{
//				cout << 0 << count;
//			}
//			else
//			{
//				cout << count;
//			}
//		}
//		cout << endl;
//		n--;
//	}
//	return 0;
//}

// 2.https://www.luogu.com.cn/record/202354918

//#include<iostream>
//#include<cstdio>
//using namespace std;
//int n, a[101] = { 0 }, s[101] = { 0 };
//void change(int x)//高精度乘法模板
//{
//	int g = 0;
//	for (int i = 100; i >= 0; i--)
//	{
//		a[i] = a[i] * x + g;
//		g = a[i] / 10;
//		a[i] = a[i] % 10;
//	}
//}
//void qh()//高精度加法模板
//{
//	int g = 0;
//	for (int i = 100; i >= 0; i--)
//	{
//		s[i] = s[i] + a[i] + g;
//		g = s[i] / 10;
//		s[i] = s[i] % 10;
//	}
//}
//void sc()
//{
//	int w;
//	for (int i = 0; i <= 100; i++)
//	{
//		if (s[i] != 0)
//		{
//			w = i;
//			break;
//		}
//	}
//	for (int i = w; i <= 100; i++)
//		printf("%d", s[i]);
//}
//int main()
//{
//	scanf("%d", &n);
//	s[100] = a[100] = 1;
//	for (int i = 2; i <= n; i++)
//	{
//		change(i);
//		qh();
//	}
//	sc();
//	return 0;
//}

// 3.https://www.luogu.com.cn/problem/P1980

//#include<iostream>
//using namespace std;
//int main()
//{
//    int n, x, count = 0;
//    cin >> n >> x;
//    for (int i = 1; i <= n; i++)
//    {
//        int tmp = i;
//        while (tmp)
//        {
//            if (tmp % 10 == x)
//            {
//                count++;
//            }
//            tmp /= 10;
//        }
//    }
//    cout << count << endl;
//    return 0;
//}

// 4.https://www.luogu.com.cn/problem/P5723

//#include<iostream>
//using namespace std;
//int main()
//{
//	int n, sum = 0, num = 0;
//	cin >> n;
//	for (int i = 2; i <= n; i++)
//	{
//		int count = 0;
//		for (int j = 1; j <= i; j++)
//		{
//			if (i % j == 0)
//			{
//				count++;
//			}
//		}
//		if (count == 2)
//		{
//			num+=i;
//			if (num > n)
//			{
//				break;
//			}
//			sum++;
//			cout << i << endl;
//		}
//	}
//	cout << sum << endl;
//	return 0;
//}

// 5.https://www.luogu.com.cn/problem/P1217#submit

//#include<iostream>
//using namespace std;
//int l, r;
//bool check1(int x)//检查位数，优化算法，省略不必要数字的判断，否则会超时(即偶数位直接跳过判断)
//{
//	if ((1000 <= x && x <= 9999) || (100000 <= x && x <= 999999)) 
//	{
//		return 0;
//	}
//	return 1;
//}
//bool check2(int x)//检查是否回文
//{
//	int a[20], flag = 1;//反正开得下，多开点
//	while (x > 0)
//	{
//		a[flag] = x % 10;
//		x /= 10;
//		flag++;
//	}
//	for (int i = 1; i <= flag / 2; i++)
//	{
//		if (a[i] != a[flag - i])
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//bool check3(int x)//检查是否为质数 
//{
//	if (x == 2)
//	{
//		return 1;
//	}
//	for (int i = 2; i <= sqrt(x); i++)
//	{
//		if (x % i == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	scanf("%d %d", &l, &r);
//	if (l == 2)
//	{
//		printf("2\n");
//	}
//	if (l % 2 == 0)
//	{
//		l++;
//	}
//	r = min(9999999, r);//再大的数都不可能是回文质数
//	for (int i = l; i <= r; i = i + 2)//枚举每一个奇数
//	{
//		if (check1(i) == 0)
//		{
//			continue;
//		}
//		if (check2(i) == 0)
//		{
//			continue;
//		}
//		if (check3(i) == 0)
//		{
//			continue;
//		}
//		printf("%d\n", i);//printf会比cout快很多 
//	}
//	return 0;
//}

// 6.https://www.luogu.com.cn/problem/P1075

//#include<iostream>
//using namespace std;
//int main() {
//    int n;
//    cin >> n;
//    for (int i = 2; i <= n; i++)
//    {
//        if (n % i == 0)
//        {
//            cout << n / i;
//            break;
//        }
//    }
//    return 0;
//}

// 7.https://www.luogu.com.cn/problem/P4956#submit

//#include<iostream>
//using namespace std;
//int main()
//{
//	int x, k = 1, n;
//	cin >> n;
//	while (1)
//	{
//		for (x = 100; x >= 1; x--)
//			if ((7 * x + 21 * k) * 52 == n)
//			{
//				cout << x << endl;
//				cout << k;
//				return 0;
//			}
//		k++;
//	}
//	return 0;
//}

// 8.https://www.luogu.com.cn/problem/P1089#submit

//#include<iostream>
//using namespace std;
//int money, cost, mama, flag = 1, monthofdeath;//money代表在津津手里的钱，cost代表花费的钱，mama代表在妈妈手里的100元的张数，flag=1代表尚未透支，monthofdeath代表死亡月份 
//int main()
//{
//    for (int i = 1; i <= 12; i++)
//    {
//        money += 300;//每个月津津手里的钱都会增加300 
//        cin >> cost;//输入这个月的花销 
//        money -= cost;//津津手里的钱减去这个月的花销等于剩余的钱 
//        if (money < 0)//若剩余的钱小于0, 
//        {
//            flag = 0;//旗帜倒下，即已经透支 
//            monthofdeath = i;//输出死亡月份 
//            break;//终止循环 
//        }
//        mama += money / 100;//剩余的钱整除100即为在妈妈手里的100元的张数 
//        money %= 100;//用100去模剩余的钱即为月底幸存的钱         
//    }
//    if (flag == 1)//若旗帜未倒下，即坚持到年底还没有透支 
//    {
//        money += mama * 120;//剩余的钱 
//        cout << money;
//    }
//    else
//    {
//        cout << -monthofdeath;
//    }
//    return 0;
//}