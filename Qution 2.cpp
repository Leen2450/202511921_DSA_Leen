#include <iostream>
using namespace std;


float addNumbers(float a, float b, float c, float d)
{
    return a + b + c + d;
}

int main()
{
    float n1, n2, n3, n4;

    cout << "Enter 4 float numbers: ";
    cin >> n1 >> n2 >> n3 >> n4;

    float sum = addNumbers(n1, n2, n3, n4);


    cout << "Sum = " << sum << endl;

    return 0;
}
