#include"includes.h"

const int INF = 1e9;

using namespace std;

// struct Point {
//     double X, Y;
//
// };
//
// struct Circle {
//     Point C;
//     double R;
// };
//
// double dist(const Point& a, const Point& b)
//{
//     return sqrt(pow(a.X - b.X, 2) + pow(a.Y - b.Y, 2));
// }
//
// bool is_inside(const Circle& c, const Point& p)
//{
//     return dist(c.C, p) <= c.R;
// }
//
// Point get_circle_center(double bx, double by,
//     double cx, double cy)
//{
//     double B = bx * bx + by * by;
//     double C = cx * cx + cy * cy;
//     double D = bx * cy - by * cx;
//     return { (cy * B - by * C) / (2 * D),
//              (bx * C - cx * B) / (2 * D) };
// }
//
// Circle circle_from(const Point& A, const Point& B,
//     const Point& C)
//{
//     Point I = get_circle_center(B.X - A.X, B.Y - A.Y,
//         C.X - A.X, C.Y - A.Y);
//     I.X += A.X;
//     I.Y += A.Y;
//     return { I, dist(I, A) };
// }
//
// Circle circle_from(const Point& A, const Point& B)
//{
//     Point C = { (A.X + B.X) / 2.0, (A.Y + B.Y) / 2.0 };
//
//     return { C, dist(A, B) / 2.0 };
// }
//
// bool is_valid_circle(const Circle& c, const vector<Point>& P)
//{
//
//     for (const Point& p : P)
//         if (!is_inside(c, p))
//             return false;
//     return true;
// }
//
//
//
// Circle minimum_enclosing_circle(const vector<Point>& P)
//{
//     int n = (int)P.size();
//
//     if (n == 0)
//         return { { 0, 0 }, 0 };
//     if (n == 1)
//         return { P[0], 0 };
//
//     Circle mec = { { 0, 0 }, INF };
//
//     for (int i = 0; i < n; i++) {
//         for (int j = i + 1; j < n; j++) {
//
//             Circle tmp = circle_from(P[i], P[j]);
//
//             if (tmp.R < mec.R && is_valid_circle(tmp, P))
//                 mec = tmp;
//         }
//     }
//
//     for (int i = 0; i < n; i++) {
//         for (int j = i + 1; j < n; j++) {
//             for (int k = j + 1; k < n; k++) {
//
//                 Circle tmp = circle_from(P[i], P[j], P[k]);
//
//                 if (tmp.R < mec.R && is_valid_circle(tmp, P))
//                     mec = tmp;
//             }
//         }
//     }
//     return mec;
// }
// int cnt = 0;
//
//
// int fib(int n) {
//     if (n == 1 || n == 2) {
//         return 1;
//     }
//     cnt++;
//     return fib(n - 1) + fib(n - 2);
// }
//
//
//
// class Human {
// public:
//
//     int age;
//     string name;
//     int weight;
// };
//
// class CoffeGrinder
//{
// private:
//
//     bool CheckVoltage()
//     {
//         return true;
//     }
//
// public:
//     void Start()
//     {
//         bool VoltageIsNormal = CheckVoltage();
//
//         if (VoltageIsNormal)
//         {
//             cout << "vjoohhh";
//         }
//         else
//         {
//             cout << "beep";
//         }
//     }
// };
//
//
// class Point
//{
// private:
//     int x;
//     int y;
//
// public:
//
//     Point()
//     {
//         x = 0;
//         y = 0;
//     }
//
//
//     /*Point(int valuex, int valuey)
//     {
//         x = valuex;
//         y = valuey;
//     }*/
//
//     int GetX()
//     {
//         return x;
//     }
//     int Gety()
//     {
//         return y;
//     }
//     void Setx(int valuex)
//     {
//         x = valuex;
//     }
//     void Sety(int valuey)
//     {
//         y = valuey;
//     }
//     void print()
//     {
//         cout << x << ' ' << y;
//     }
// };

double foo(double x)
{
    if (x < 0)
    {
        return std::abs(x);
    }
    if (x == 0)
    {
        return 0;
    }
    if (x > 0)
    {
        return x - 2;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    setlocale(LC_ALL, "ru");
    int a, b, n;
    cin >> n;
    for (int i = 1; i * i <= n; ++i)
    {
        cout << i * i << endl;
    }
    cin >> a >> b;
    for (int i = 1; i * i * i < b; ++i)
    {
        if (i * i * i > a)
        {
            cout << i * i * i << endl;
        }
    }

    for (double i = -5; i <= 5; i += 0.5)
    {
        cout << foo(i) << endl;
    }
}