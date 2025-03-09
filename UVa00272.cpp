#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    char c;
    int chack=1;
    while (cin.get(c))
    {
        if(c=='"')
        {
            if (chack==1)
            {
                cout<<"``";
            }else{
                cout<<"''";
            }
            chack=++chack%2;
        }
        else
        {
            cout<<c;
        }
    }
    
    return 0;
}
