// 1.https://www.lanqiao.cn/problems/357/learning/?page=5&first_category_id=1&tags=%E6%9E%9A%E4%B8%BE,%E6%A8%A1%E6%8B%9F,%E5%89%8D%E7%BC%80%E5%92%8C,%E5%B7%AE%E5%88%86,%E4%BA%8C%E5%88%86,%E8%BF%9B%E5%88%B6%E8%BD%AC%E6%8D%A2,%E8%B4%AA%E5%BF%83,%E4%BD%8D%E8%BF%90%E7%AE%97,%E5%8F%8C%E6%8C%87%E9%92%88&tag_relation=union

//#include <stdio.h>
//int main()
//{
//    int k, sum = 0;
//    scanf("%d", &k);//k是天数
//    int i, j;
//    for (i = 1;; i++)
//    {
//        if (k == 0)
//        {
//            break;//考虑特殊情况（其实这里没有也可以）
//        }
//        for (j = 0; j < i; j++)
//        {//核心算法
//            sum += i;
//            k--;//没加一次天数减一
//            if (k == 0)break;//加完就退出
//        }
//    }
//    printf("%d", sum);
//    return 0;
//}

// 2.https://www.lanqiao.cn/problems/377/learning/?page=5&first_category_id=1&tags=%E6%9E%9A%E4%B8%BE,%E6%A8%A1%E6%8B%9F,%E5%89%8D%E7%BC%80%E5%92%8C,%E5%B7%AE%E5%88%86,%E4%BA%8C%E5%88%86,%E8%BF%9B%E5%88%B6%E8%BD%AC%E6%8D%A2,%E8%B4%AA%E5%BF%83,%E4%BD%8D%E8%BF%90%E7%AE%97,%E5%8F%8C%E6%8C%87%E9%92%88&tag_relation=union

//#include <bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int n, sum = 0;
//    char x;
//    cin >> n >> x;
//    int a[n];
//    for (int i = 1; i <= n; i++)
//    {
//        string a = to_string(i);
//        sum += count(a.begin(), a.end(), x);
//    }
//    cout << sum;
//    return 0;
//}

// 3.