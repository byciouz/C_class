#include<iostream>
using namespace std;
int main()
{
    int a, b,m, n;
    cin >>m>>n;
    for(a = 2; a <= m; a++)
    {
        for(b = 3; b <= m; b++)
        {
            if(a * a + n * n == b * b)
            {
                cout << n << " " << a << " " << b << endl;
            }
        }
    }
}
