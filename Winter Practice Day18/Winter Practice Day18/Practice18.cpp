// 1.https://www.luogu.com.cn/problem/B2005#submit

//#include<iostream>
//#include<string>
//
//using namespace std;
//
//int main()
//{
//    string s1 = "  1  ";
//    string s2 = " 111 ";
//    string s3 = "11111";
//    char ch;
//    cin >> ch;
//    s1[2] = ch;
//    s2[1] = ch, s2[2] = ch, s2[3] = ch;
//    s3[0] = ch, s3[1] = ch, s3[2] = ch, s3[3] = ch, s3[4] = ch;
//    cout << s1 << endl;
//    cout << s2 << endl;
//    cout << s3 << endl;
//    return 0;
//}

// 2.https://www.luogu.com.cn/problem/P5707#submit

//#include<bits/stdc++.h>
//using namespace std;
//double s, v, m;
//int n, a, t, b;
//int main()
//{
//	cin >> s >> v;
//	n = 8 * 60 + 24 * 60;//�����ܹ��ķ�����
//	t = ceil(s / v) + 10;//ceil()����Ҫ������ȡ��������C++�߼�������ȡ����������ʱ���١�
//	n = n - t;//�ó�ʣ�µ�ʱ�䡣
//	if (n >= 24 * 60) n -= 24 * 60;//�ж��Ƿ���ǰһ�졣
//	b = n % 60;//�ó������֡�
//	a = n / 60;//�ó�����ʱ
//	if (a < 10)//�����ж��Ƿ�0
//	{
//		if (b < 10) cout << "0" << a << ":0" << b;
//		else cout << "0" << a << ":" << b;
//	}
//	else
//	{
//		if (b < 10) cout << a << ":0" << b;
//		else cout << a << ":" << b;
//	}
//	return 0;
//}