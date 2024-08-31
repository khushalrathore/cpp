#include <iostream>
#include <iomanip>

using namespace std;

class Point
{
private:
    int x;
    int y;

public:
    static int i; // Static member to count print calls

    Point(int x_axis, int y_axis) : x(x_axis), y(y_axis) {}

    int getX() const { return this->x; }

    int getY() const { return this->y; }

    void print() const
    {
        cout << ++i
             << ". (" + to_string(x) + ", " + to_string(y) + ")\n";
    }

    double operator-(const Point &obj) const
    {
        double distanceSq = pow((this->x - obj.x), 2) + pow((this->y - obj.y), 2);
        return sqrt(distanceSq);
    }
};

void printDistance(Point &P, Point &Q)
{
    cout << "\nDistance b/w these two points: "
         << fixed << setprecision(4) << P - Q << " units\n"
         << endl;
}

int Point::i = 0; // Initialize the static member

int main()
{
    Point P(1, 2), Q(2, 4);
    P.print();
    Q.print();
    printDistance(P, Q);
    // or simply
    // cout << P - Q << endl;

    return 0;
}
