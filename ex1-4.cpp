#include <iostream>
using namespace std;

int fct(int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (j % i  == 0)
        {
            sum++;
        }

        }

        
    }

    return sum;
}

int main(void)
{
    int w = 16;
    cout<<"test"<<fct(w);
    return 0;
}