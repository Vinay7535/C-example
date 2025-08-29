#include <iostream>
using namespace std;
int main()
{
    float p = 1000;               // principal amount
    float r = 5;                  // rate of interest
    float t = 2;                  // time in years
    float si = (p * r * t) / 100; // calculating simple interest
    cout << "Simple Interest: " << si << endl;
}