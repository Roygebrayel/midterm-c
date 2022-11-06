#include <iostream>
using namespace std;

void smallest(int a[], int n, int smallest1, int smallest2) {
    if (n >= 2) {
        if (a[n - 1] < smallest1) {
            smallest2 = smallest1;
            smallest1 = a[n - 1];
        }
        if (a[n - 1] < smallest2 && a[n - 1] != smallest1) {
            smallest2 = a[n - 1];
        }
        return smallest(a, n - 1, smallest1, smallest2);
    }
    cout << "The first smallest is " << smallest1 << " the 2nd smallest is  " << smallest2 << endl;
}
int main()
{
    int a[8] = { 4,7,5,2,78,-9,5,3 };
    smallest(a, 8, a[0], a[0]);


}

/
/
/
/
/
/
/
/
/


#include <iostream>
using namespace std;


int nbOfOccurance(int n, int digit) {
    int res = 0;
    if (n >1) {
        res = nbOfOccurance(n / 10, digit);
        if (n % 10 == digit)
            res++;
        return res;
    }
    return 0;
}

int main() {
    cout << nbOfOccurance(789611, 1);
}

/
/
/
/
/
/
/
/

#include <iostream>
using namespace std;
int maxMin(int a[], int n, int max, int min)
{
    int res = 0;
    if (n > 0)
    {

        if (a[n - 1] > max)
            max = a[n - 1];
        if (a[n - 1] < min)
            min = a[n - 1];
        return maxMin(a, n - 1, max, min);
    }

    res = max - min;
    return res;
}

int main()
{
    int a[4] = {34, 2, 6, 7};
    cout << maxMin(a, 4, a[0], a[0]);
}
