// 1.https://www.luogu.com.cn/problem/P2433#submit

//#include<bits/stdc++.h>
//using namespace std;
//int n;
//int main() {
//	cin >> n;
//	switch (n) {
//	case 1: {
//		cout << "I love Luogu!" << endl;
//		break;
//	}
//	case 2: {
//		cout << 2 + 4 << " " << 10 - 2 - 4 << endl;
//		break;
//	}
//	case 3: {
//		int a = 14 / 4;
//		cout << a << endl;
//		cout << a * 4 << endl;
//		cout << 14 - a * 4 << endl;
//		break;
//	}
//	case 4: {
//		cout << 500.0 / 3 << endl;
//		break;
//	}
//	case 5: {
//		cout << (260 + 220) / (12 + 20) << endl;
//		break;
//	}
//	case 6: {
//		double a = 6, b = 9;
//		double c = sqrt(a * a + b * b);
//		cout << c << endl;
//		break;
//	}
//	case 7: {
//		int a = 100;
//		a += 10;
//		cout << a << endl;
//		a -= 20;
//		cout << a << endl;
//		a = 0;
//		cout << a << endl;
//		break;
//	}
//	case 8: {
//		int r = 5;
//		double pi = 3.141593;
//		cout << 2 * pi * r << endl;
//		cout << r * r * pi << endl;
//		cout << 4.0 / 3 * pi * r * r * r << endl;
//		break;
//	}
//	case 9: {
//		cout << (((1 + 1) * 2 + 1) * 2 + 1) * 2 << endl;
//		break;
//	}
//	case 10: {
//		cout << 9 << endl;
//		break;
//	}
//	case 11: {
//		cout << 100.0 / (8 - 5) << endl;
//		break;
//	}
//	case 12: {
//		cout << 'M' - 'A' + 1 << endl;
//		cout << char('A' - 1 + 18) << endl;
//		break;
//	}
//	case 13: {
//		int r1 = 4, r2 = 10;
//		double pi = 3.141593;
//		double v = 4.0 / 3 * pi * r1 * r1 * r1 + 4.0 / 3 * pi * r2 * r2 * r2;
//		v = pow(v, 1.0 / 3);
//		printf("%.0lf\n", v);
//		break;
//	}
//	case 14: {
//		cout << 50 << endl;
//		break;
//	}
//	}
//	return 0;
//}

// 2.https://www.luogu.com.cn/problem/P1909#submit

//#include <iostream>
//#include <cmath>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//    int n, a1, b1, a2, b2, a3, b3;
//    cin >> n >> a1 >> b1 >> a2 >> b2 >> a3 >> b3;
//    int a = ceil(1.0 * n / a1) * b1;
//    int b = ceil(1.0 * n / a2) * b2;
//    int c = ceil(1.0 * n / a3) * b3;
//    cout << min({ a, b, c });
//    return 0;
//}

// 3.https://www.luogu.com.cn/problem/P5717#submit

//#include <cstdio>
//#include <algorithm>
//using namespace std;
//
//int a, b, c;
//
//int main() {
//	scanf("%d%d%d", &a, &b, &c);
//	int d[4] = { 0, a, b, c };
//	sort(d + 1, d + 4);
//	if (d[1] + d[2] <= d[3]) {
//		printf("Not triangle\n");
//		return 0;
//	}
//	if (d[1] * d[1] + d[2] * d[2] == d[3] * d[3])	printf("Right triangle\n");
//	else if (d[1] * d[1] + d[2] * d[2] > d[3] * d[3])	printf("Acute triangle\n");
//	else if (d[1] * d[1] + d[2] * d[2] < d[3] * d[3])	printf("Obtuse triangle\n");
//	if (a == b || b == c || a == c)	printf("Isosceles triangle\n");
//	if (a == b && b == c)	printf("Equilateral triangle\n");
//	return 0;
//}

// 4.https://www.luogu.com.cn/problem/P1888#submit

//#include<bits/stdc++.h>    //���ܿ� 
//using namespace std;
//int main()
//{
//    int a[4];    //���������洢������������    
//    for (int i = 0; i < 3; i++)    //��Ϊ�ǹ����� һ��ֻ�������� ����ѭ������������������ 
//    {
//        cin >> a[i];    //����������һ������ 
//    }
//    sort(a, a + 3);    //����������С�������� ��ʱa[0]������Сֱ�Ǳ� a[2]Ϊб��
//    cout << a[0] / __gcd(a[0], a[2]) << '/' << a[2] / __gcd(a[0], a[2]);      //��ΪҪԼ�� ������gcd(a[0],a[2]��ȡa[0]��a[2]�����Լ��
//    // a[0]/���Լ����ֵ��a[2]/���Լ���ı�ֵ����Լ�ֺ�Ľ�� 
//    return 0;
//}

// 5.https://www.luogu.com.cn/problem/P1055

//#include<cstring>
//#include<iostream>
//using namespace std;
//string s;
//int main() {
//	cin >> s;//string����ֻ�ܹ���cin����
//	int tell = s.at(0) - 48 + (s.at(2) - 48) * 2 + (s.at(3) - 48) * 3 + (s.at(4) - 48) * 4 + (s.at(6) - 48) * 5 + (s.at(7) - 48) * 6 + (s.at(8) - 48) * 7 + (s.at(9) - 48) * 8 + (s.at(10) - 48) * 9;//�õ�Ӧ�õõ���ֵ����Ϊat���ص���һ���ַ�������˵Ҫ��ȥ'0'��48�����������⣬�õ������ʽ
//	char right = tell % 11 + 48;//��ȷ�����һλ��ֵ
//	if (right > '9')	right = 'X';//��Ϊmodule 11 ֮����ܻ���10����������õ�'X'
//	if (right == s.at(12))	cout << "Right";//�����ȣ��Ǿ�����ȷ��
//	else//����
//	{
//		for (int i = 0; i <= 11; ++i)	cout << s.at(i);//��0~10���ǰ����ַ�
//		cout << right;//Ȼ�������ȷ�����һλ
//	}
//	return 0;
//}