//Program to perform check palindrome number
#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter Number to check palindrome:";
    cin>>n;
    int temp=n;
    int sum=0,rem;
    while(n!=0)
    {
        rem=n%10;
        sum=(sum*10)+rem;
        n/=10;
    }
    if(temp==sum)
    cout<<"Number is palindrome";
    else
    cout<<"Number is not palindrome";

    return 0;
}
