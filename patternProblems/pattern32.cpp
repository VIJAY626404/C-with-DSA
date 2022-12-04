//  write a programe to print alphabet in diamond shape
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int space1 = 1;
    // loop to print the upper triangle
    for (int i = 1; i <= n; i++) {
        for (int space1 = 1; space1 <= n - i; space1++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            char ch = 'A' + j - 1;
            cout << ch;
        }
        cout<<endl;
        
    }
//  loop to print the lower triangle
for(int i =n+1; i<=2*n-1; i++){
    int space2 =1;
    for(int space2 =0; space2<i-n; space2++){
        cout<<" ";
    }
    int no_char = 2*(2*n-i)-1;
    for(int j = 0; j<no_char ; j++){

   
    cout<<(char)('A'+j);
}
cout<<endl;
    }
    return 0;
}