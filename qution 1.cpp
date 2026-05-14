#include <iostream>
using namespace std;


void congratulate(string name)
{
    cout << "Congratulations " << name << "!" << endl;
}

int main()
{
    string userName;

    cout << "Enter your name: ";
    cin >> userName;

    congratulate(userName);

    return 0;
}
