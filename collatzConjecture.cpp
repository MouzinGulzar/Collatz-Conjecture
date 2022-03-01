#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
    
int main()
{
    long double num;

    cout << "Enter a number: ";
    cin >> num;

    unsigned long int orgNum = num;

    vector<int> values;

    int steps = 0;

    while (num > 1)
    {
        // double fmod(num, 2) == 0
        if(fmod(num, 2) == 0)
        {
            num /= 2;
            values.push_back(num);
            steps++;
        }
        else
        {
            num = (3 * num) + 1;
            values.push_back(num);
            steps++;
        }
    }
    
    cout << endl;
    cout << "Total "<< steps << " steps:"<< endl
    << orgNum << " ";
    for (auto element: values)
    {
        cout << element << " ";
    }
    
    
    return 0;
}