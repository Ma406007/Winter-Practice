// 1.https://www.lanqiao.cn/problems/205/learning/?page=1&first_category_id=1&tags=%E5%86%92%E6%B3%A1%E6%8E%92%E5%BA%8F,%E6%8E%92%E5%BA%8F,%E5%BD%92%E5%B9%B6%E6%8E%92%E5%BA%8F,%E5%BF%AB%E9%80%9F%E6%8E%92%E5%BA%8F,%E6%A1%B6%E6%8E%92%E5%BA%8F&tag_relation=union

//#include <iostream>
//using namespace std;
//int main()
//{
//    int line, a, min = 100010, max = -100010;
//    int n, m;
//    int hx[10010] = { 0 };//��¼���ֳ��ִ���
//    cin >> line;
//    while (line--)
//    {
//        while (cin >> a)
//        {
//            //��¼���ֵ
//            if (a > max)
//            {
//                max = a;
//            }
//            //��¼��Сֵ
//            if (a < min)
//            {
//                min = a;
//            }
//            //���ִ�����1
//            hx[a]++;
//        }
//    }
//    //����ѭ���ҳ�ȱʧ���ظ�
//    for (int i = min; i <= max; i++)
//    {
//        if (hx[i] == 0)
//        {
//            m = i;
//        }
//        if (hx[i] > 1)
//        {
//            n = i;
//        }
//    }
//    cout << m << " " << n << endl;
//    return 0;
//}

// 2.https://www.lanqiao.cn/problems/94/learning/?page=1&first_category_id=1&tags=%E6%9E%9A%E4%B8%BE,%E6%A8%A1%E6%8B%9F,%E5%89%8D%E7%BC%80%E5%92%8C,%E5%B7%AE%E5%88%86,%E4%BA%8C%E5%88%86,%E8%BF%9B%E5%88%B6%E8%BD%AC%E6%8D%A2,%E8%B4%AA%E5%BF%83,%E4%BD%8D%E8%BF%90%E7%AE%97,%E5%8F%8C%E6%8C%87%E9%92%88&tag_relation=union

//#include <iostream>
//using namespace std;
//int a[101];
//int main()
//{
//    int N;
//    cin >> N;
//    for (int i = 1; i <= N; i++)
//    {
//        cin >> a[i];
//    }
//    int ans = 0;
//    for (int i = 1; i <= N; i++)
//    {
//        int num = 1;//����
//        int res = 0;//�õ���Ʊ��
//        int pos = i;//��ǰλ��
//        int flag[101] = { 0 };//�жϿ�Ƭ�Ƿ�����
//        int count = 0;//���ߵĿ�Ƭ��
//        while (1)
//        {
//            if (count == N || num == N + 1)//��Ƭȫ�����߻��������N+1���˳�ѭ��
//            {
//                break;
//            }
//            if (flag[pos])//��Ƭ��ȡ��
//            {
//                pos++;
//                if (pos == N + 1)//���Խ��Ҫ��ͷ��ʼ��
//                {
//                    pos = 1;
//                }
//            }
//            else//��Ƭû��ȡ��,�ж��Ƿ��num���
//            {
//                if (num == a[pos])//��Ⱦ�ȡ��
//                {
//                    res += a[pos];//������Ŀ���϶�Ӧֵ
//                    flag[pos] = 1;//����ѱ�����
//                    num = 1;//��Ƭ������,����һ�ſ�ʼ��Ҫ���¼���
//                    count++;
//                    pos++;
//                    if (pos == N + 1)
//                    {
//                        pos = 1;
//                    }
//                }
//                else//����Ⱦͼ���
//                {
//                    num++;
//                    pos++;
//                    if (pos == N + 1)
//                    {
//                        pos = 1;
//                    }
//                }
//            }
//            if (res > ans)
//            {
//                ans = res;
//            }
//        }
//    }
//    cout << ans << endl;
//    return 0;
//}

// 2.https://www.lanqiao.cn/problems/99/learning/?page=1&first_category_id=1&tags=%E6%9E%9A%E4%B8%BE,%E6%A8%A1%E6%8B%9F,%E5%89%8D%E7%BC%80%E5%92%8C,%E5%B7%AE%E5%88%86,%E4%BA%8C%E5%88%86,%E8%BF%9B%E5%88%B6%E8%BD%AC%E6%8D%A2,%E8%B4%AA%E5%BF%83,%E4%BD%8D%E8%BF%90%E7%AE%97,%E5%8F%8C%E6%8C%87%E9%92%88&tag_relation=union

//#include <bits/stdc++.h>
//using namespace std;
//int H[100000] = { 0 };
//int W[100000] = { 0 };
//int N, K;
//bool check(int x)
//{
//    int sum = 0;
//    for (int i = 0; i < N; i++)
//    {
//        sum += (H[i] / x) * (W[i] / x);
//    }
//    if (sum >= K)
//    {
//        return true;
//    }
//    return false;
//}
//
//int main()
//{
//    cin >> N >> K;
//    for (int i = 0; i < N; i++)
//    {
//        cin >> H[i] >> W[i];
//    }
//    int ans = 0;
//    int left = 0, right = 100000;
//    while (left <= right)
//    {
//        int mid = left + (right - left) / 2;
//        if (check(mid))
//        {
//            ans = max(ans, mid);
//            left = mid + 1;
//        }
//        else
//        {
//            right = mid - 1;
//        }
//    }
//    cout << ans << endl;
//    return 0;
//}

// 3.https://www.lanqiao.cn/problems/148/learning/?page=1&first_category_id=1&tags=%E6%9E%9A%E4%B8%BE,%E6%A8%A1%E6%8B%9F,%E5%89%8D%E7%BC%80%E5%92%8C,%E5%B7%AE%E5%88%86,%E4%BA%8C%E5%88%86,%E8%BF%9B%E5%88%B6%E8%BD%AC%E6%8D%A2,%E8%B4%AA%E5%BF%83,%E4%BD%8D%E8%BF%90%E7%AE%97,%E5%8F%8C%E6%8C%87%E9%92%88&tag_relation=union

//#include <iostream>
//using namespace std;
//int main()
//{
//    string word;
//    cin >> word;
//    int yuan = 0;
//    int fu = 0;
//    int flag = 0;
//    for (int i = 0; i < word.size(); i++)
//    {
//        if ((word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u') && (flag == 1))
//        {
//            yuan++;
//            flag = 0;
//        }
//        if ((word[i] != 'a' && word[i] != 'e' && word[i] != 'i' && word[i] != 'o' && word[i] != 'u') && (flag == 0))
//        {
//            fu++;
//            flag = 1;
//        }
//    }
//    if (fu + yuan == 4)
//    {
//        cout << "yes" << endl;
//    }
//    else
//    {
//        cout << "no" << endl;
//    }
//    return 0;
//}

// 4.https://www.lanqiao.cn/problems/146/learning/?page=1&first_category_id=1&tags=%E6%9E%9A%E4%B8%BE,%E6%A8%A1%E6%8B%9F,%E5%89%8D%E7%BC%80%E5%92%8C,%E5%B7%AE%E5%88%86,%E4%BA%8C%E5%88%86,%E8%BF%9B%E5%88%B6%E8%BD%AC%E6%8D%A2,%E8%B4%AA%E5%BF%83,%E4%BD%8D%E8%BF%90%E7%AE%97,%E5%8F%8C%E6%8C%87%E9%92%88&tag_relation=union

//#include <iostream>
//using namespace std;
//int b[1000];
//int main()
//{
//    int a[1000], n;
//    cin >> n;
//    for (int i = 0; i < n; i++)
//    {
//        cin >> a[i];
//    }
//    int num;
//    for (int i = 0; i < n - 2; i++)
//    {
//        for (int j = i + 1; j < n - 1; j++)
//        {
//            for (int k = j + 1; k < n; k++)
//            {
//                if (a[i] < a[j] && a[j] < a[k])
//                {
//                    b[j] = 1;
//                }
//            }
//        }
//    }
//    for (int i = 0; i < n; i++)
//    {
//        if (b[i] == 1)
//        {
//            num++;
//        }
//    }
//    cout << num << endl;
//    return 0;
//}

// 5.https://www.lanqiao.cn/problems/136/learning/?page=1&first_category_id=1&tags=%E6%9E%9A%E4%B8%BE,%E6%A8%A1%E6%8B%9F,%E5%89%8D%E7%BC%80%E5%92%8C,%E5%B7%AE%E5%88%86,%E4%BA%8C%E5%88%86,%E8%BF%9B%E5%88%B6%E8%BD%AC%E6%8D%A2,%E8%B4%AA%E5%BF%83,%E4%BD%8D%E8%BF%90%E7%AE%97,%E5%8F%8C%E6%8C%87%E9%92%88&tag_relation=union

//#include<bits/stdc++.h>
//#define int long long
//using namespace std;
//string s1, s2; //����+�������� 
//int n;
//signed main()
//{
//    cin >> s1 >> n;
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < s1.size(); j++)
//        {
//            int sign = 1;
//            while (s1[j] == s1[j + 1])
//            {
//                sign++; //���� 
//                j++;
//            }
//            s2 += (to_string(sign) + s1[j]); //����+��������  
//        }
//        s1 = s2;
//        s2.clear();
//    }
//    cout << s1 << endl;
//    return 0;
//}

// 6.https://www.lanqiao.cn/problems/133/learning/?page=1&first_category_id=1&tags=%E6%9E%9A%E4%B8%BE,%E6%A8%A1%E6%8B%9F,%E5%89%8D%E7%BC%80%E5%92%8C,%E5%B7%AE%E5%88%86,%E4%BA%8C%E5%88%86,%E8%BF%9B%E5%88%B6%E8%BD%AC%E6%8D%A2,%E8%B4%AA%E5%BF%83,%E4%BD%8D%E8%BF%90%E7%AE%97,%E5%8F%8C%E6%8C%87%E9%92%88&tag_relation=union

//#include<iostream>
//using namespace std;
//int main()
//{
//    int m, n;
//    cin >> m >> n;
//    int r = n + m - 1;//���ѷ���ÿ��һ����r���ַ�,ͬʱ��Ϊ�ұ߽�
//    //��η��ֵ���������أ����Կ��������۱ʻ�����Ǽ�����һ�еĵ�һ��*�����һ��ǡ�������һ���ߵ��������½ǣ�������n�α任��Ȼ�����*ǰ����m-1��*�������ܹ�һ����n+m-1���ַ�
//    int l = 1;//��߽�
//    for (int i = 1; i <= n; i++)//һ����n�У�ѭ��n��
//    {
//        for (int j = 1; j <= n + m - 1; j++)//һ����n+m-1�У�ѭ����ô���
//        {
//            //�ж��Ƿ���Ӧ�����*������
//            if ((j >= l && j <= l + m - 1) || (j >= r - m + 1 && j <= r))
//            {
//                printf("*");//ÿһ������*����һ�飬��һ��λ����l,��һ������һ����l+m-1
//            }
//            //ͬ���ڶ���ĵ�һ��*��r-m+1,���һ��*��r
//            else
//            {
//                printf(".");
//            }
//        }
//        cout << endl;
//        l++, r--;//ÿ�е�һ��ĵ�һ��*�������������£��������ƶ�
//        //ͬ��ÿ�еڶ���*�����һ�������������£������ƣ�����l++��r--
//    }
//    return 0;
//}

// 7.https://www.lanqiao.cn/problems/126/learning/?page=1&first_category_id=1&tags=%E6%9E%9A%E4%B8%BE,%E6%A8%A1%E6%8B%9F,%E5%89%8D%E7%BC%80%E5%92%8C,%E5%B7%AE%E5%88%86,%E4%BA%8C%E5%88%86,%E8%BF%9B%E5%88%B6%E8%BD%AC%E6%8D%A2,%E8%B4%AA%E5%BF%83,%E4%BD%8D%E8%BF%90%E7%AE%97,%E5%8F%8C%E6%8C%87%E9%92%88&tag_relation=union

//#include<iostream>
//#include<algorithm>
//using namespace std;
//int a[10005], ans, n;
//int main()
//{
//    //���ĳ��λ��ʵ�ʵ�������ȷ��������ȣ����������������Ӧλ�õ�������swap(a[i], a[a[i]])��
//    //ֱ�����λ�õ�������ȷ������Ӧ��
//    cin >> n;
//    for (int i = 1; i <= n; i++)
//    {
//        cin >> a[i];
//    }
//    for (int i = 1; i <= n; i++)
//    {
//        while (a[i] != i)
//        {
//            swap(a[i], a[a[i]]);
//            ++ans;
//        }
//    }
//    printf("%d", ans);
//    return 0;
//}