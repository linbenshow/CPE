#include <iostream>
using namespace std;

int check(int n){
    int len=1;
    while (n!=1){
        if(n%2==1){
            n=3*n+1;
        }else {
            n/=2;
        }
        len++;
    }

    return len;
}

int main(int argc, char const *argv[]) {
    int i,j,Highlen=0;
    while(cin >> i >> j){
        if(j<i){
            swap(i,j);
        }
        for(int a=i,now;a<=j;a++){
            now=check(a);
            if(now>Highlen){
                Highlen=now;
            }
        }
        printf("%d %d %d\n",i,j,Highlen);
    }

    return 0;
}
