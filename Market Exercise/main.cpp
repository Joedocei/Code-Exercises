#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    const double chaiPrice = 3.11;
    const double applePrice = 6.00;
    const double coffeePrice = 11.23;
    const double milkPrice = 4.75;
    
    const double discountApple = 4.50;
    
    int numChai = 0;
    int numApples = 0;
    int numCoffee = 0;
    int numMilk = 0 ;
    bool notDone = true;
    
    cout << "Enter item number you wish to add to cart:" << endl;
    cout << "1) Chai" << endl << "2) Apples" << endl;
    cout << "3) Coffee" << endl << "4) Milk" << endl;
    
    while(notDone)
    {
        cout << "Enter Item: " << endl;
        int userChoice;
        cin >> userChoice;
        
        if(userChoice == 1)
            numChai++;
        else if(userChoice == 2)
            numApples++;
        else if(userChoice == 3)
            numCoffee++;
        else if(userChoice == 4)
            numMilk++;
        else
            notDone = false;
    }
    
    numCoffee = ceil(( numCoffee / 2 ));
    
    double total = 0;
    total += numChai * chaiPrice;
    if(numApples > 2)
        total += numApples * discountApple;
    else
        total += numApples * applePrice;
    
    total += numCoffee * coffeePrice;
    if(numChai > 0 && numMilk > 0)
        numMilk--;
    total += numMilk * milkPrice;
    
    cout << "Total: " << total << endl;
}
