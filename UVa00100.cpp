#include <iostream>
using namespace std;

int check(int n){//建立規則
    int len=1;
    while (n!=1){//條件為1則離開
        if(n%2==1){//確認奇數
            n=3*n+1;
        }else {
            n/=2;
        }
        len++;
    }

    return len;
}

int main(int argc, char const *argv[]) {
    int i,j,Highlen;
    while(cin>>i>>j){
        Highlen=0;
        int m=i,k=j;
        if(j<i){//因為沒有規定i<j故要先確認正確
            swap(i,j);
        }
        for(int a=i,now;a<=j;a++){
            now=check(a);
            if(now>Highlen){//更新最高數字
                Highlen=now;
            }
        }
        cout<<m<<" "<<k<<" "<<Highlen<<endl;
    }

    return 0;
}
