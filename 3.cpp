#include <iostream>
using namespace std;


int sum (int n){
int sum = 0;
for (int i = 0; i < n; i++)
{
   
        for (int j = 0; j < i; j *= 2)
        {
           
                sum++;
                
                   
                 return sum;  
                
            }
             
        } 
    

    int main (void){
        int n=10;
        cout<<"the answer is"<< "  " <<sum(n);
    }
