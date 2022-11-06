#include <iostream>
using namespace std;


int foo(int m, int n)
{
    cout << "foo(" << m << "," << n << ")" << endl;
    if ((m != 0) && (n != 0))
    {
return foo(m-1 , foo(m, n/10));
    }
else {
   if (m == 0) {
            return n + 1;
} 
if (n == 0) {
            return foo(m - 1, 1);
} 
}

    }
int main (int arge, char** argv) {
   cout << foo (3,154);
return 0;  
}