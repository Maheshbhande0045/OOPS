#include<iostream>
using namespace std;
int main(){
    int sum=0;
    for (int i = 0; i <= 50; i++)
    {
        if (i%2==0)
        {
              sum=sum+i;
        }
        
    }
    cout<<"Sum of even numbers between 1 to 50 = " << sum;
    
}