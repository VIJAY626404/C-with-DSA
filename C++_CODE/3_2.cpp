#include <iostream>
using namespace std;

class shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initcounter(void) { counter = 0; }
    void setPrice(void);
    void displayPrice(void);

};
void shop :: setPrice(void)
{
    cout << "Enter Id of your item no" << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter the price of your item "  << endl;
    cin >> itemPrice[counter];
    counter++;
}
void shop ::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of item with Id" << itemId[i] << " is" << itemPrice[i] << endl;
    }
}
int main()
{
    shop dukan;
    dukan.initcounter();
    dukan.setPrice();
    dukan.setPrice();
    dukan.setPrice();
    dukan.displayPrice();

    return 0;
}
