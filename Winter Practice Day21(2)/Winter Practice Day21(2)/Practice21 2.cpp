// 1.https://www.luogu.com.cn/problem/P1308

//#include <bits/stdc++.h>
//using namespace std;
//typedef long long LL;
//int main()
//{
//	string c, s;
//	cin >> c;
//	getchar();
//	getline(cin, s);
//	c = ' ' + c + ' ';
//	s = ' ' + s + ' ';
//	for (int i = 0; c[i]; i++)
//	{
//		c[i] = toupper(c[i]);
//	}
//	for (int i = 0; s[i]; i++)
//	{
//		s[i] = toupper(s[i]);
//	}
//	int pos = s.find(c);
//	int t = pos;
//	if (pos == -1)
//	{
//		cout << -1;
//		return 0;
//	}
//	int cnt = 0;
//	while (pos != -1)
//	{
//		cnt++;
//		pos = s.find(c, pos + 1);
//	}
//	cout << cnt << ' ' << t << endl;
//	return 0;
//}

// 2.https://www.luogu.com.cn/problem/P1553

//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    string s;
//    char p = 0;//�ŷ��� 
//    int cnt = 0;
//    cin >> s;
//    for (int i = 0; i < s.size(); i++)
//    {
//        if (s[i] >= '0' && s[i] <= '9') cnt++;//��¼��һ��������
//        else    //�������ţ���¼������ 
//        {
//            p = s[i];
//            break;
//        }
//    }
//    int x = cnt;//���µ�һ����ĩ��һ����λ�ã�Ҳ���Ƿ��ŵ�λ�ã�����Ƿ�����С����Ҫ�� 
//    cnt--;
//    while (s[cnt] == '0' && cnt > 0) cnt--;//ȥ������ǰ��0�� 
//    for (int i = cnt; i >= 0; i--)//�����һ���� 
//        cout << s[i];
//    if (p == 0) return 0;//�޷���return 0 
//    else
//        if (p == '%') { cout << p; return 0; }
//        else cout << p;//�������� 
//    int m = s.size() - 1;
//    while (s[x + 1] == '0' && x < m - 1) x++;//ȥ��ĩβ0 
//    while (s[m] == '0' && m > x + 1) m--; //ȥ������ǰ��0
//    for (int i = m; i > x; i--)//����ڶ����� 
//        cout << s[i];
//    return 0;
//}

// 3.https://www.luogu.com.cn/problem/P1603

//#include<iostream>
//#include<cstdio>
//#include<cstring>
//#include<algorithm>
//#include<map>
//using namespace std;
//map<string, int>q;
//const int mx = 66;
//int top;
//int st[mx];
//string s;
//int main()
//{
//
//    q["one"] = 1; q["two"] = 2; q["three"] = 3; q["four"] = 4; q["five"] = 5; q["six"] = 6; q["seven"] = 7; q["eight"] = 8; q["nine"] = 9; q["ten"] = 10;
//    q["eleven"] = 11; q["twelve"] = 12; q["thirteen"] = 13; q["fourteen"] = 14; q["fifteen"] = 15; q["sixteen"] = 16; q["seventeen"] = 17; q["eighteen"] = 18; q["nineteen"] = 19; q["twenty"] = 20;
//    q["a"] = 1; q["both"] = 2; q["another"] = 1; q["first"] = 1; q["second"] = 2; q["third"] = 3;
//    //���
//    for (int i = 1; i <= 6; i++)
//    {
//        cin >> s;
//        if (q[s]) {//������Թ�������
//            int k = q[s] * q[s] % 100;
//            if (k == 0)continue;//Ҫ��Ϊ0��û�б�Ҫ����
//            st[++top] = k;
//        }
//    }
//    sort(st + 1, st + top + 1);//��С������
//    cout << st[1];
//    for (int i = 2; i <= top; i++)
//    {
//        if (st[i] < 10)cout << 0;//������ֻ����10��
//        cout << st[i];
//    }
//    return 0;
//}

// 4.https://www.luogu.com.cn/problem/P1598

//#include <iostream>
//#include <cstdio>
//#include <cstring>
//#include <algorithm>
//#include <cmath>
//#include <cstdlib>
//using namespace std;
//char c;
//int t[26], i, j, maxx;
//int main() {
//    while (~scanf("%c", &c))
//        if (c >= 'A' && c <= 'Z')
//            t[c - 'A']++;
//    for (i = 0; i <= 25; i++)
//        if (t[i] > maxx)
//            maxx = t[i];
//    for (i = maxx; i >= 1; i--) {
//        for (j = 0; j <= 25; j++)
//            if (t[j] == i)cout << "* ", t[j]--;
//            else cout << "  ";
//        cout << endl;
//    }
//    for (i = 0; i < 26; i++)
//        cout << (char)(i + 'A') << " ";
//    return 0;
//}