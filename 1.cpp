#include <iostream>
using namespace std;

int sum(int n)
{
    int sum = 0;

    for (int i = 0; i < 2 * n; i++)
    {

        for (int j = 0; j < i / 2; j++)
        {

            for (int k = 0; k < j; k++)
            {

                sum++;
            }
        }
    }
    return sum;
}
int main(void)
{
    int n = 5;
    cout << sum(n);
}
