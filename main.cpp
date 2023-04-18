
#include <iostream>
#include <cmath>
using namespace std;

double calculate_equation(int n) {
    if (n == 0) {
        return 0;
    }
    double result = calculate_equation(n - 1) + (pow(n, 2) + 1) / (n + 3.0);
    return result;
}
int main() {
    int n;
    cout << "Enter a value for n: ";
    cin >> n;
    double result = calculate_equation(n);
    cout << "The result is: " << result << endl;
    return 0;
}