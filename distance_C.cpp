#include <iostream>
using namespace std;
class Distance {
private:
    int meters;
    int centimeters;
public:
    Distance(int m) {
        meters = m;
        centimeters = 0;
    }
    Distance(int m, int cm) {
        meters = m;
        centimeters = cm;
    }
    Distance addDistance(Distance d) {
        int totalMeters = meters + d.meters;
        int totalCentimeters = centimeters + d.centimeters;
        totalMeters += totalCentimeters / 100;
        totalCentimeters = totalCentimeters % 100;
        return Distance(totalMeters, totalCentimeters);
    }
    void display() {
        cout << "Distance = " << meters << " meters "
             << centimeters << " centimeters" << endl;
    }
};
int main() {
    Distance d1(3);
    Distance d2(2, 75);
    Distance d3 = d1.addDistance(d2);
    d1.display();
    d2.display();
    d3.display();
    return 0;
}