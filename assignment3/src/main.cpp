#include <iostream>
#include <string>
#include <vector>
#include <math.h>

#include "include/point2d.hpp"
#include "include/triangle.hpp"

using namespace std;
using namespace geometry;

int main(int argc, char ** argv)
{
    vector<Triangle> triangles;

    int N;
    cout << "Masukkan jumlah segitiga: ";
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        float x1, y1, z1, x2, y2, z2, x3, y3, z3;

        cout << "\nSegitiga ke-" << (i + 1) << endl;

        cout << "Titik 1 (x y z): ";
        cin >> x1 >> y1 >> z1;

        cout << "Titik 2 (x y z): ";
        cin >> x2 >> y2 >> z2;

        cout << "Titik 3 (x y z): ";
        cin >> x3 >> y3 >> z3;

        Point2D t1(x1, y1, z1);
        Point2D t2(x2, y2, z2);
        Point2D t3(x3, y3, z3);

        triangles.push_back(Triangle(t1, t2, t3));
    }

    cout << "\nHasil klasifikasi:" << endl;
    for (size_t i = 0; i < triangles.size(); i++)
    {
        cout << "Segitiga " << (i + 1) << ": ";
        triangles[i].TriangleType();
    }

    return 0;
}