// 1.https://www.lanqiao.cn/problems/220/learning/?page=3&first_category_id=1&tags=%E6%9E%9A%E4%B8%BE,%E6%A8%A1%E6%8B%9F,%E5%89%8D%E7%BC%80%E5%92%8C,%E5%B7%AE%E5%88%86,%E4%BA%8C%E5%88%86,%E8%BF%9B%E5%88%B6%E8%BD%AC%E6%8D%A2,%E8%B4%AA%E5%BF%83,%E4%BD%8D%E8%BF%90%E7%AE%97,%E5%8F%8C%E6%8C%87%E9%92%88&tag_relation=union

//#include<stdio.h>
//#define MAX 100
////上左下右
//int dx[4] = { -1,0,1,0 };
//int dy[4] = { 0,-1,0,1 };
//int main()
//{
//    int m, n;
//    int arr[MAX][MAX];
//    scanf("%d %d", &m, &n);
//    for (int i = 0; i < m; i++)
//    {
//        for (int j = 0; j < n; j++)
//        {
//            scanf("%d ", &arr[i][j]);
//        }
//    }
//    int x, y, k;
//    char c;
//    scanf("%d %d %c %d", &x, &y, &c, &k);
//    int direction;
//    if (c == 'U')//上
//    {
//        direction = 0;
//    }
//    else if (c == 'D')//下
//    {
//        direction = 2;
//    }
//    else if (c == 'L')//左
//    {
//        direction = 1;
//    }
//    else//右
//    {
//        direction = 3;
//    }
//    while (k--)
//    {
//        if (arr[x][y] == 0)//白格
//        {
//            direction = (direction + 1) % 4;//左转
//            arr[x][y] = 1;
//        }
//        else//黑格
//        {
//            direction = (direction + 3) % 4;//右转
//            arr[x][y] = 0;
//        }
//        x += dx[direction];
//        y += dy[direction];
//    }
//    printf("%d %d", x, y);
//    return 0;
//}

// 2.https://www.lanqiao.cn/problems/277/learning/?page=3&first_category_id=1&tags=%E6%9E%9A%E4%B8%BE,%E6%A8%A1%E6%8B%9F,%E5%89%8D%E7%BC%80%E5%92%8C,%E5%B7%AE%E5%88%86,%E4%BA%8C%E5%88%86,%E8%BF%9B%E5%88%B6%E8%BD%AC%E6%8D%A2,%E8%B4%AA%E5%BF%83,%E4%BD%8D%E8%BF%90%E7%AE%97,%E5%8F%8C%E6%8C%87%E9%92%88&tag_relation=union

//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int n;
//    cin >> n;
//    while (n--)
//    {
//        string str;
//        cin >> str;
//        int sum[6] = { 0 };
//        int a[6] = { 0 };
//        for (int i = 0; i < str.size(); i++)
//        {
//            sum[i % 6] += str[i];
//        }
//        for (int i = 0; i < 6; i++)
//        {
//            while (1)
//            {
//                while (sum[i])
//                {
//                    a[i] += sum[i] % 10;
//                    sum[i] /= 10;
//                }
//                if (a[i] > 9)
//                {
//                    sum[i] = a[i];
//                    a[i] = 0;
//                }
//                else break;
//            }
//            cout << a[i];
//        }
//        cout << '\n';
//    }
//    return 0;
//}

// 3.https://www.lanqiao.cn/problems/279/learning/?page=3&first_category_id=1&tags=%E6%9E%9A%E4%B8%BE,%E6%A8%A1%E6%8B%9F,%E5%89%8D%E7%BC%80%E5%92%8C,%E5%B7%AE%E5%88%86,%E4%BA%8C%E5%88%86,%E8%BF%9B%E5%88%B6%E8%BD%AC%E6%8D%A2,%E8%B4%AA%E5%BF%83,%E4%BD%8D%E8%BF%90%E7%AE%97,%E5%8F%8C%E6%8C%87%E9%92%88&tag_relation=union

//#include <iostream>
//using namespace std;
//int main()
//{
//    int n;
//    cin >> n;
//    while (n--)
//    {
//        string x;
//        cin >> x;
//        int sum = 0;
//        char a = x[0], b = x[1], c = x[2], d = x[3];
//        if ((a == b - 1 && a == c - 2 && a == d - 3) || (a == b + 1 && a == c + 2 && a == d + 3))
//        {
//            sum += 5;
//        }
//        if (a == b && b == c && c == d)
//        {
//            sum += 6;
//        }
//        else if ((a == b && b == c) || (b == c && c == d))
//        {
//            sum += 3;
//        }
//        if (a == b && b == c && c == d)
//        {
//            sum += 2;
//        }
//        else if ((a == c && b == d) || (a == b && c == d))
//        {
//            sum += 1;
//        }
//        if (a == '6' || a == '8' || a == '9')
//        {
//            sum += 1;
//        }
//        if (b == '6' || b == '8' || b == '9')
//        {
//            sum += 1;
//        }
//        if (c == '6' || c == '8' || c == '9')
//        {
//            sum += 1;
//        }
//        if (d == '6' || d == '8' || d == '9')
//        {
//            sum += 1;
//        }
//        cout << sum << endl;
//    }
//    return 0;
//}

// 4.https://www.lanqiao.cn/problems/282/learning/?page=3&first_category_id=1&tags=%E6%9E%9A%E4%B8%BE,%E6%A8%A1%E6%8B%9F,%E5%89%8D%E7%BC%80%E5%92%8C,%E5%B7%AE%E5%88%86,%E4%BA%8C%E5%88%86,%E8%BF%9B%E5%88%B6%E8%BD%AC%E6%8D%A2,%E8%B4%AA%E5%BF%83,%E4%BD%8D%E8%BF%90%E7%AE%97,%E5%8F%8C%E6%8C%87%E9%92%88&tag_relation=union

//#include<bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//    int n;
//    cin >> n;
//    while (n--)
//    {
//        int a, b;
//        char x, y;
//        cin >> x >> a >> y >> b;
//        if (b < 26)
//        {
//            char c = 'A' + b - 1;
//            cout << c << a << endl;
//        }
//        else
//        {
//            char c = 'A' + b / 26 - 1;
//            char d = 'A' + b % 26 - 1;
//            cout << c << d << a << endl;
//
//        }
//    }
//    return 0;
//}

// 5.https://www.lanqiao.cn/problems/285/learning/?page=3&first_category_id=1&tags=%E6%9E%9A%E4%B8%BE,%E6%A8%A1%E6%8B%9F,%E5%89%8D%E7%BC%80%E5%92%8C,%E5%B7%AE%E5%88%86,%E4%BA%8C%E5%88%86,%E8%BF%9B%E5%88%B6%E8%BD%AC%E6%8D%A2,%E8%B4%AA%E5%BF%83,%E4%BD%8D%E8%BF%90%E7%AE%97,%E5%8F%8C%E6%8C%87%E9%92%88&tag_relation=union

//#include <stdio.h>
//
//int main()
//{
//    int n;
//    int a[25][25] = { 0 };
//    scanf("%d", &n);
//    int i = 0, j = 0, k = 1;
//    a[0][0] = 1;
//    while (k < n * (n + 1) / 2)//每行都少一个数字，n+n-1+n-2+...+1，用求和公式
//    {
//        while (j < n - 1 && a[i][j + 1] == 0)//右
//        {
//            a[i][++j] = ++k;
//        }
//        while (j >= 0 && i < n - 1 && a[i + 1][j - 1] == 0)//下左
//        {
//            a[++i][--j] = ++k;
//        }
//        while (i >= 0 && a[i - 1][j] == 0)//上
//        {
//            a[--i][j] = ++k;
//        }
//    }
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < n - i; j++)
//        {
//            printf("%d ", a[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}

