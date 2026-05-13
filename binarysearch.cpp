#include <iostream>
using namespace std;

int main()
{
    // Sorted arrays
    string names[5] = {"Ahmed", "Ali", "Mona", "Sara", "Zain"};
    int ages[5] = {20, 30, 25, 18, 40};

    string key;

    int low = 0;
    int high = 4;
    int mid;

    bool found = false;

    cout << "Enter name to search: ";
    cin >> key;

    // Binary Search
    while(low <= high)
    {
        mid = (low + high) / 2;

        if(names[mid] == key)
        {
            cout << key << " was found and is aged "
                 << ages[mid] << endl;

            found = true;
            break;
        }

        else if(key < names[mid])
        {
            high = mid - 1;
        }

        else
        {
            low = mid + 1;
        }
    }

    if(found == false)
    {
        cout << "Not Found";
    }

    return 0;
}
