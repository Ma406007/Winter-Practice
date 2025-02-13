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
//    //�µ�һ�ָտ�ʼ������һ��û�д���
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

//�������C������Ŀ--ɨ����Ϸ

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
//    char er_dir[MAX_N] = { 0 };//�洢����
//    long n, m, i, cur = 0, a, s;
//    char er_occ[MAX_N][11] = { {0} };//�洢ְҵ
//    scanf("%ld%ld", &n, &m);
//    for (i = 0; i < n; ++i)
//    {
//        scanf("%ld%s", er_dir + i, er_occ[i]);
//    }
//    for (i = 0; i < m; ++i)
//    {
//        scanf("%ld%ld", &a, &s);//��ȡ���Һ�����
//        if (er_dir[cur] == a)//���⳯�������ڳ�����һ�µģ���֮��Ȼ
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
//	if (s1 == "0" && s2 == "0")//����
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
//		if (a3[i] != 0)//����ӵ�һ������0��Ԫ�ؿ�ʼ��ӡ
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
//int g[510][510], tot, f[510][510];//f����䵱��ʱ���� 
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
//		scanf("%d %d %d %d", &a, &b, &r, &opt);//����ķ������������һ�������Ե� 
//		if (opt == 0)//��i�е�j�� ��ɵ�����i�е�j�� ˳ʱ�� 
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
//		else//��i�е�j�� ��ɵ�i�е�����j�� ��ʱ�� 
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
//            a[i] = 0;//���������㡣
//        }
//        a[1] = 1;//������Ϊ1������Ϊ0����Ȼ��ô�˶���0��
//        int n, i, j, k, m;
//        int p = 1, jw = 0;//p����λ����jw�����λ��
//        cin >> n >> m;
//        for (i = 2; i <= n; i++)//����׳�
//        {
//            jw = 0;
//            for (j = 1; j <= p; j++)//�����p���൱�ڸ߾���*������ģ��������߾������ֵ��ַ����ĳ���
//            {
//                a[j] = a[j] * i + jw;//�߾���*������+��λ��
//                jw = a[j] / 10;//���ý�λ��
//                a[j] = a[j] % 10;
//            }
//            while (jw > 0)//������н�λ�������λ��
//            {
//                a[j] = jw % 10;
//                jw /= 10;
//                j++;
//            }
//            p = j - 1;
//        }
//        long long sum = 0;
//        for (i = p; i >= 1; i--)//����n!���м���ָ�����֡�
//        {
//            if (a[i] == m)
//                sum++;
//        }
//        cout << sum << endl;//�����
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
//	for (int i = 0; i < na; i++)//СA�ĳ�ȭ����
//	{
//		int a;
//		cin >> a;
//		Na.push_back(a);
//	}
//	for (int i = 0; i < nb; i++)//СB�ĳ�ȭ����
//	{
//		int b;
//		cin >> b;
//		Nb.push_back(b);
//	}
//	for (int i = 0; i < n; i++)//�Ծִ���
//	{
//		//��СAΪ��׼
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
////������ʼ��
//char mp[11][11]; //������ͼ
//int xa, ya, xb, yb;	//����������ʾũ���ţ��λ�ã� a Ϊũ�� b Ϊţ�� x Ϊ�У� yΪ�У�
//int lxa, lya, lxb, lyb; //����������ʾũ���ţ�ƶ����λ�ã��ƶ����ܲ�������
//int fa = 1, fb = 1; //����������ʾũ���ţ�ķ��� 1 Ϊ���� 2 Ϊ���� 3 Ϊ�ϡ� 4 Ϊ����
//int ans = 0; //����������ʾʱ�䣨��������
//
////ũ���ƶ�������
//void yda() {
//	//ƽ������
//	if (fa == 1) { //������Ϊ��ʱ
//		lxa = xa - 1; //�������ƶ����� 1 ��
//		lya = ya; //�в���
//	}
//	if (fa == 2) { //������Ϊ��ʱ
//		lxa = xa; //�в���
//		lya = ya + 1; //�������ƶ����� 1 ��
//	}
//	if (fa == 3) { //������Ϊ��ʱ
//		lxa = xa + 1; //�������ƶ����� 1 ��
//		lya = ya; //�в���
//	}
//	if (fa == 4) { //������Ϊ��ʱ
//		lxa = xa; //�в���
//		lya = ya - 1; //�������ƶ����� 1 ��
//	}
//	//�ж�����
//	if (lxa >= 1 && lya >= 1 && lya <= 10 && lxa <= 10 && mp[lxa][lya] == '.') { //���ƶ���λ���ڵ�ͼ����Ϊ�յ�
//		xa = lxa; //��λ��
//		ya = lya; //��λ��
//	}
//	else { //������ 
//		fa++; //����ת��
//		if (fa > 4) { //������ֵ��������
//			fa = 1; //��ر���
//		}
//	}
//}
//
////ţ�ƶ������� 
//void ydb() {
//	//ƽ����
//	if (fb == 1) { //������Ϊ��ʱ
//		lxb = xb - 1; //�������ƶ����� 1 ��
//		lyb = yb; //�в���
//	}
//	if (fb == 2) { //������Ϊ��ʱ
//		lxb = xb; //�в���
//		lyb = yb + 1; //�������ƶ����� 1 ��
//	}
//	if (fb == 3) { //������Ϊ��ʱ
//		lxb = xb + 1; //�������ƶ����� 1 ��
//		lyb = yb; //�в���
//	}
//	if (fb == 4) { //������Ϊ��ʱ
//		lxb = xb; //�в���
//		lyb = yb - 1; //�������ƶ����� 1 ��
//	}
//	//�ж�����
//	if (lxb >= 1 && lyb >= 1 && lyb <= 10 && lxb <= 10 && mp[lxb][lyb] == '.') { //���ƶ���λ���ڵ�ͼ����Ϊ�յ�
//		xb = lxb; //��λ��
//		yb = lyb; //��λ��
//	}
//	else { //������ 
//		fb++; //����ת��
//		if (fb > 4) { //������ֵ��������
//			fb = 1; //��ر���
//		}
//	}
//}
//
////�������� 
//int main() {
//	//��������
//	for (int i = 1; i <= 10; i++) { //������ά������
//		for (int j = 1; j <= 10; j++) { //������ά������
//			cin >> mp[i][j]; //����
//			if (mp[i][j] == 'F') { //������Ϊũ��λ��ʱ������洢��ũ���λ��
//				xa = i; //������
//				ya = j; //������
//				mp[i][j] = '.'; //Ϊ�жϷ��㣬�����Ϊ�յ�
//			}
//			if (mp[i][j] == 'C') { //������Ϊţλ��ʱ������洢��ţ��λ��
//				xb = i; //������
//				yb = j; //������
//				mp[i][j] = '.'; //Ϊ�жϷ��㣬�����Ϊ�յ�
//			}
//		}
//	}
//	//ģ������ 
//	while (1) {
//		yda(); //ũ���ƶ�
//		ydb(); //ţ�ƶ�
//		ans++; //ʱ������
//		if (ans > 10000) { //�˴�Ϊƭ�֣�������� 10000 ����û���غϣ����޷��غ�
//			cout << 0; //ֱ����� 0
//			return 0; //��������
//		}
//		if (xa == xb && ya == yb) { //����غϣ����о���ͬ��
//			cout << ans; //���ʱ��
//			return 0; //��������
//		}
//	}
//}

// 10.https://www.luogu.com.cn/problem/P1098

//#include<bits/stdc++.h>//����ͷ�ļ�
//using namespace std;
//int main() {
//	int p1, p2, p3;
//	cin >> p1 >> p2 >> p3;
//	char a[1005];
//	cin >> a;
//	int n = strlen(a);
//	for (int i = 0; i < n; i++) {
//		if (((a[i - 1] >= 'a' && a[i - 1] <= 'z' && a[i + 1] >= 'a' && a[i + 1] <= 'z') || (a[i - 1] >= '0' && a[i - 1] <= '9' && a[i + 1] >= '0' && a[i + 1] <= '9')) && a[i] == '-') {//����1��ע��||��&&�����ȼ�������Ҫ�����ţ�����û�м����ŵ���60pts
//			if (a[i + 1] == a[i - 1] + 1) continue;//����5
//			if (a[i + 1] <= a[i - 1]) {//����5
//				cout << '-';
//				continue;
//			}
//			//��ģ��
//			if (p1 == 1) {
//				if (p2 == 1) {
//					if (p3 == 1) {
//						for (char j = a[i - 1] + 1; j < a[i + 1]; j++) cout << j;//ע����char������int
//					}
//					else if (p3 == 2) {
//						for (char j = a[i + 1] - 1; j > a[i - 1]; j--) cout << j;
//					}
//				}
//				else if (p2 != 1) {
//					if (p3 == 1) {
//						for (char j = a[i - 1] + 1; j < a[i + 1]; j++)//����*����
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
//								if (j >= 'a' && j <= 'z') cout << (char)(j - 32);//Ҫ��������ۣ�����û���������70pts
//								else cout << j;
//					}
//				}
//			}
//			else if (p1 == 3) {
//				if (p2 == 1) {
//					if (p3 == 1) {
//						for (char j = a[i - 1] + 1; j < a[i + 1]; j++) cout << '*';//Ҫѭ���жϾ��룬����û������õ���80pts
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
//						for (int k = 1; k <= p2 * (a[i + 1] - a[i - 1] - 1); k++) cout << '*';//һ���Ǽ�1������+1������û������õ�90pts
//					}
//				}
//			}
//		}
//		else cout << a[i];
//	}
//	return 0;//��ϰ��
//}

