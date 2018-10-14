                                       /********Author**********
                                        Muhammad Ali Mohan
                                        DUET(Dhaka University Of Engineering & Technology)
                                        Dept: CSE
                                        E-mail: duetcsemohan@gmail.com*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int  t, i, n;
    scanf("%d",&t);
    for(i = 0; i < t; i++)
    {
        scanf("%d", &n);

        if(n > 10)
            printf("%d %d\n",n - 10, 10);/*it can be at most 10 problems in each computer*/
        else
            printf("0 %d\n", n);

    }

return 0;
}
