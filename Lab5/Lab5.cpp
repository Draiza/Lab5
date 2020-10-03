#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    //1
    double x1, y1, x2, y2, l;
    cin >> x1 >> y1 >> x2 >> y2;
    l = sqrt(pow((x1 - x2),2) + pow((y1 - y2),2));
    cout << "L = " << l << endl;

    //2
    int a, b, c, ab, bc, s;
    cin >> a >> b >> c;
    ab = abs(b - a);
    bc = abs(c - b);
    s = ab + bc;
    cout << ab << " " << bc << " " << s << endl;;

    //3
    cin >> a >> b >> c;
    ab = abs(c - a);
    bc = abs(b - c);
    s = ab * bc;
    cout << s << endl;

    //4
    int p;
    cin >> x1 >> y1 >> x2 >> y2;
    s = abs(x1 - x2) * abs(y1 - y2);
    p = 2 * (abs(x1 - x2) + abs(y1 - y2));
    cout << s << " " << p << endl;

    //5
    double x3, y3, a1, b1, c1, s1, p1;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    a1 = sqrt(pow((x2 - x1),2) + pow((y2 - y1),2));
    b1 = sqrt(pow((x3 - x2),2) + pow((y3 - y2),2));
    c1 = sqrt(pow((x3 - x1),2) + pow((y3 - y1),2));
    p1 = a1 + b1 + c1;
    s1 = sqrt(p1 / 2 * (p1 / 2 - a1) * (p1 / 2 - b1) * (p1 / 2 - c1));
    cout << s1 << " " << p1 << endl;
}

