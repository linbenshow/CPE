#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    int n,L,ls[50],count;
    while (cin>>n)
    {
        for(int a=0;a<n;a++)
        {
            count=0;
            cin>>L;
            for(int i=0;i<L;i++)
            {
                cin>>ls[i];
            }
            for (int i = --L; i; i--)
            {
                for(int j=0;j<i;j++)
                {
                    if (ls[j]>ls[j+1])
                    {
                        swap(ls[j],ls[j+1]);
                        count++;
                    }
                    
                }
            }
            printf("Optimal train swapping takes %d swaps.\n",count);
            
        }
    }
    
    return 0;
}
