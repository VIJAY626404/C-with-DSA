// wap to print pattern
// 1
// 2  3
// 4  5  6
// 7  8  9  10
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 1;
    int count = 1;

    // while(i<=n){
    //     int j=1;
    //     while(j<=i){
    //         cout<<count<<" " ;
    //         count=count+1;
    //         j=j+1;

    //     }
    //     cout<<endl;
    //     i=i+1;

    // }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }

    return 0;
}