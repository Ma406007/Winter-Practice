// 1.https://www.luogu.com.cn/problem/P1059

//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<set>
//using namespace std;
//int main()
//{
//	int n, count = 0;
//	set<int> nums;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		int num;
//		cin >> num;
//		nums.insert(num);
//	}
//	for (auto it = nums.begin(); it != nums.end(); it++)
//	{
//		if (*it)
//		{
//			count++;
//		}
//	}
//	cout << count << endl;
//	for (auto it = nums.begin(); it != nums.end(); it++)
//	{
//		cout << *it << ' ';
//	}
//	return 0;
//}

// 2.https://www.luogu.com.cn/problem/P1923

//#include<bits/stdc++.h>
//using namespace std;
//int x[5000005], k;
//void qsort(int l, int r)
//{
//	int i = l, j = r, mid = x[(l + r) / 2];
//	do
//	{
//		while (x[j] > mid)
//			j--;
//		while (x[i] < mid)
//			i++;
//		if (i <= j)
//		{
//			swap(x[i], x[j]);
//			i++;
//			j--;
//		}
//	} while (i <= j);
//	//快排后数组被划分为三块： l<=j<=i<=r
//	if (k <= j) qsort(l, j);//在左区间只需要搜左区间
//	else if (i <= k) qsort(i, r);//在右区间只需要搜右区间
//	else //如果在中间区间直接输出
//	{
//		printf("%d", x[j + 1]);
//		exit(0);
//	}
//}
//int main()
//{
//	int n;
//	scanf("%d%d", &n, &k);
//	for (int i = 0; i < n; i++)
//		scanf("%d", &x[i]);
//	qsort(0, n - 1);
//}

//#include<bits/stdc++.h>
//using namespace std;
//int x[5000005], k;
//int main()
//{
//	int n;
//	scanf("%d%d", &n, &k);
//	for (int i = 0; i < n; i++)
//		scanf("%d", &x[i]);
//	nth_element(x, x + k, x + n);//简短又高效
//	printf("%d", x[k]);
//}

// 3.https://www.luogu.com.cn/problem/P1068

//#include<bits/stdc++.h>
//using namespace std;
//int i, n, m, f, k[5001], s[5001], sub[5001];
//bool cmp(int a, int b) {
//    if (s[a] == s[b])return k[a] < k[b];
//    return s[a] > s[b];
//}
//int main() {
//    cin >> n >> m;
//    for (i = 1; i <= n; i++)cin >> k[sub[i] = i] >> s[i];
//    sort(sub + 1, sub + n + 1, cmp);
//    f = s[sub[int(m * 1.5)]];
//    for (i = 1; s[sub[i]] >= f; i++);
//    cout << f << " " << i - 1 << endl;
//    for (i = 1; s[sub[i]] >= f; i++)cout << k[sub[i]] << " " << s[sub[i]] << endl;
//}

// 4.https://www.luogu.com.cn/problem/P1012

//#include<iostream>
//#include<algorithm>
//#include<cstring>
//using namespace std;
//bool cmp(string a, string b) {
//	return a + b > b + a;
//}
//
//int main() {
//	int n;
//	cin >> n;
//	string a[n];
//	for (int i = 0; i < n; i++) cin >> a[i];
//	sort(a, a + n, cmp);
//	for (int i = 0; i < n; i++) {
//		cout << a[i];
//	}
//	cout << endl;
//	return 0;
//}