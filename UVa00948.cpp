#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    long long int fib[10000]={1,2},N,ls[501],count;
    for(int i=2;i<10000;i++)
    {
        fib[i]=fib[i-1]+fib[i-2];
    }
    cin>>N;
    for(int i=0;i<N;i++)
        cin>>ls[i];
    for(int i=0;i<N;i++)
    {
        cout<<ls[i]<<" = ";
        for(int j=0;ls[i]>=fib[j];j++)
        {
            count=j;
        }
        for (int j = count; j >= 0; j--)
        {
            if (ls[i]>=fib[j])
            {
                cout<<"1";
                ls[i]=ls[i]-fib[j];
            }
            else
            {
                cout<<"0";
            }  
        }
        cout<<" (fib)"<<endl;    
    }

    return 0;
}
