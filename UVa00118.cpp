#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{
    char to[4]= {'N','E','S','W'};//順序為從北往順時間方向編號
    char go[3]= {'L','R','F'};
    int togo[4][2]= {{0,1},{1,0},{0,-1},{-1,0}};
    int nogo[1000][2];
    int x,y,nx,ny,Mx,My,nt;//now(x,y),next(x,y),MAX(x,y),now_to
    char nextgo[1000],setto;
    bool check;
    cin>>Mx>>My;
    while(cin>>x>>y>>setto)
    {
        check=true;
        for (int i = 0; i < 4; i++)
        {
            if (setto==to[i])
            {
                nt=i;
            }
        }
        cin>>nextgo;
        for(int i=0;nextgo[i]; i++)
        {
            if (nextgo[i]==go[0])//左轉
            {
                if (nt==0)//北邊
                {
                    nt=3;
                }
                else//其餘逆時針
                {
                    nt--;
                } 
            }
            else if (nextgo[i]==go[1])//右轉
            {
                if (nt==3)//西邊
                {
                    nt=0;
                }
                else//其餘順時針
                {
                    nt++;
                }
            }
            else//前進
            {
                nx=x+togo[nt][0];
                ny=y+togo[nt][1];
                if(nx>Mx||ny>My||nx<0||ny<0)//注意小於0也算
                {
                    if (nogo[x][y]!=1)//確認是否有標記
                    {
                        nogo[x][y]=1;
                        check = false;
                        break;
                    }
                }
                else
                {
                    
                    x=nx;
                    y=ny;
                }
            }
        }
        if(check)
        {
            printf("%d %d %c\n",x,y,to[nt]);
        }
        else
        {
            printf("%d %d %c LOST\n",x,y,to[nt]);
        }

    }


    return 0;
}

