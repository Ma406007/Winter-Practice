// 1.https://www.luogu.com.cn/problem/P2241

//#include<iostream>
//using namespace std;
//long long n, m, a, b, c, d;
//int main()
//{
//    cin >> n >> m;
//    a = m; b = n; c = m * n;
//    while (a != 0 && b != 0) {
//        a--; b--; c += a * b;
//    }
//    d = (m + 1) * (n + 1) * m * n / 4 - c;
//    cout << c << " " << d;
//}

// 2.https://www.luogu.com.cn/problem/P2089

//#include<iostream>  
//using namespace std;
//int main()
//{
//    int a, b, c, d, e, f, g, h, i, j, in, x = 0;
//    cin >> in;
//    for (a = 1; a <= 3; a++)
//    {
//        for (b = 1; b <= 3; b++)
//        {
//            for (c = 1; c <= 3; c++)
//            {
//                for (d = 1; d <= 3; d++)
//                {
//                    for (e = 1; e <= 3; e++)
//                    {
//                        for (f = 1; f <= 3; f++)
//                        {
//                            for (g = 1; g <= 3; g++)
//                            {
//                                for (h = 1; h <= 3; h++)
//                                {
//                                    for (i = 1; i <= 3; i++)
//                                    {
//                                        for (j = 1; j <= 3; j++)
//                                        {
//                                            if (a + b + c + d + e + f + g + h + i + j == in)
//                                            {
//                                                x++;
//                                            }
//                                        }
//                                    }
//                                }
//                            }
//                        }
//                    }
//                }
//            }
//        }
//    }
//    cout << x << endl;
//    for (a = 1; a <= 3; a++)
//    {
//        for (b = 1; b <= 3; b++)
//        {
//            for (c = 1; c <= 3; c++)
//            {
//                for (d = 1; d <= 3; d++)
//                {
//                    for (e = 1; e <= 3; e++)
//                    {
//                        for (f = 1; f <= 3; f++)
//                        {
//                            for (g = 1; g <= 3; g++)
//                            {
//                                for (h = 1; h <= 3; h++)
//                                {
//                                    for (i = 1; i <= 3; i++)
//                                    {
//                                        for (j = 1; j <= 3; j++)
//                                        {
//                                            if (a + b + c + d + e + f + g + h + i + j == in)
//                                            {
//                                                cout << a << " ";
//                                                cout << b << " ";
//                                                cout << c << " ";
//                                                cout << d << " ";
//                                                cout << e << " ";
//                                                cout << f << " ";
//                                                cout << g << " ";
//                                                cout << h << " ";
//                                                cout << i << " ";
//                                                cout << j << endl;
//                                            }
//                                        }
//                                    }
//                                }
//                            }
//                        }
//                    }
//                }
//            }
//        }
//    }
//    return 0;
//}