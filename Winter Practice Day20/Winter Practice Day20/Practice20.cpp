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
//void change(int x)//�߾��ȳ˷�ģ��
//{
//	int g = 0;
//	for (int i = 100; i >= 0; i--)
//	{
//		a[i] = a[i] * x + g;
//		g = a[i] / 10;
//		a[i] = a[i] % 10;
//	}
//}
//void qh()//�߾��ȼӷ�ģ��
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
//bool check1(int x)//���λ�����Ż��㷨��ʡ�Բ���Ҫ���ֵ��жϣ�����ᳬʱ(��ż��λֱ�������ж�)
//{
//	if ((1000 <= x && x <= 9999) || (100000 <= x && x <= 999999)) 
//	{
//		return 0;
//	}
//	return 1;
//}
//bool check2(int x)//����Ƿ����
//{
//	int a[20], flag = 1;//���������£��࿪��
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
//bool check3(int x)//����Ƿ�Ϊ���� 
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
//	r = min(9999999, r);//�ٴ�������������ǻ�������
//	for (int i = l; i <= r; i = i + 2)//ö��ÿһ������
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
//		printf("%d\n", i);//printf���cout��ܶ� 
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
//int money, cost, mama, flag = 1, monthofdeath;//money�����ڽ�������Ǯ��cost�����ѵ�Ǯ��mama���������������100Ԫ��������flag=1������δ͸֧��monthofdeath���������·� 
//int main()
//{
//    for (int i = 1; i <= 12; i++)
//    {
//        money += 300;//ÿ���½�������Ǯ��������300 
//        cin >> cost;//��������µĻ��� 
//        money -= cost;//��������Ǯ��ȥ����µĻ�������ʣ���Ǯ 
//        if (money < 0)//��ʣ���ǮС��0, 
//        {
//            flag = 0;//���ĵ��£����Ѿ�͸֧ 
//            monthofdeath = i;//��������·� 
//            break;//��ֹѭ�� 
//        }
//        mama += money / 100;//ʣ���Ǯ����100��Ϊ�����������100Ԫ������ 
//        money %= 100;//��100ȥģʣ���Ǯ��Ϊ�µ��Ҵ��Ǯ         
//    }
//    if (flag == 1)//������δ���£�����ֵ���׻�û��͸֧ 
//    {
//        money += mama * 120;//ʣ���Ǯ 
//        cout << money;
//    }
//    else
//    {
//        cout << -monthofdeath;
//    }
//    return 0;
//}