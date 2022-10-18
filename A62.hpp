#include <iomanip>
#include <iostream>
using namespace std;

// complete two functions
double nthpowerp(int n)
{
//find the nth power of result
    double result = 1;
        for(int i = 0; i < n; i++) {
                result = result * 2;
        }
        return result;
}
double nthpowern(int n)
{
// find nth power of result
    double result = 1;
        for(int i = 0; i > n; i--) {
                result = result/2;
        }
        return result;
}
void printout(double result)
{
// output results
    cout << "The result is " << setw(10) << fixed << setprecision(5) << result << endl;
} 