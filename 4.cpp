#include <iostream>
using namespace std;

int sum(int n)
{
    int sum = 0;

    for (int i = n; i > 0; i /= 2)
    {

        for (int j = 1; j < n; j *= 2)
        {

            for (int k = 0; k < n; k += 2)
            {
                
                sum++;
            }
        }
    }
    return sum;
}

int main(void)
{
    int n = 10;
    cout << "the answer is"
         << "  " << sum(n);
}
