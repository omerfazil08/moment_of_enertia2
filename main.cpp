#include <iostream>
using namespace std;
int main() {
 double r, M;

 cout << "Enter the radius (r): ";
 cin >> r;
 cout << "Enter the mass (M): ";
 cin >> M;

 double ICM;
 ICM = 0.5 * M * r * r;
 cout << "The moment of inertia about the Y-axis, passing its center of mass (ICM) is: " << ICM <<
endl;
}
