#include <bits/stdc++.h>

using namespace std;
int calculate(int a, int b, int count)
{
    
    if (a == b)
    {
        return count;
    }
    else if (a > b)
    {
        int c ;
        c = a - b;
        if(c % 2 == 0){
            a = a - c;
            count++;
            return count;
        }
        else{
            a = a + c;
            count++;
            calculate(a,b,count);
        }

    }
    else{
        int c;
        c = b - a;
        if(c % 2 == 1){
            a = a+c;
            count++;
            return count;
        }
        else{
            int d = b - c;
            a += d-1;
            count++;
            calculate(a,b,count);

        }
    }
}

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int a, b;
        cin >> a >> b;
        int count = 0;
        int result = calculate(a,b,count);
        cout<<result<<endl;

    }

    return 0;
}
