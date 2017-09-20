/*
Author: Joedocei Hill
Code Exercise: https://gist.github.com/joshkeys/24733109a23ef3b90463cc1c46f3238a
Date: 9/19/17
*/

//include statements for libraries
#include <iostream>
#include <cmath>

//using standard library
using namespace std;

//main function
int main()
{
    //declaring constants for prices
    const double chaiPrice = 3.11;
    const double applePrice = 6.00;
    const double coffeePrice = 11.23;
    const double milkPrice = 4.75;
    const double discountApple = 4.50;
    
    //declaring counters for items
    int numChai = 0;
    int numApples = 0;
    int numCoffee = 0;
    int numMilk = 0 ;
    
    //declaring exit condition for while loop
    bool notDone = true;
    
    //display prompt for giving user instruction
    cout << "Enter item number you wish to add to cart:" << endl;
    cout << "1) Chai" << endl << "2) Apples" << endl;
    cout << "3) Coffee" << endl << "4) Milk" << endl;
    
    //while loop
    while(notDone)
    {
        //giving user instructions
        cout << "Enter Item: " << endl;
        
        //receiving user input
        int userChoice;
        cin >> userChoice;
        
        //incrementing counters based on user input
        //or exiting loop
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
    
    //implementing special #1
    //BOGO -- Buy-One-Get-One-Free Special on Coffee. (Unlimited)
    numCoffee = ceil(( numCoffee / 2 ));
    
    //declaring variable for total calculation
    double total = 0;
    
    //adding Chai to total
    total += numChai * chaiPrice;
    
    //implementing special #2, if applicable
    //APPL -- If you buy 3 or more bags of Apples, the price drops to $4.50.
    //adding apple to total
    if(numApples > 2)
        total += numApples * discountApple;
    else
        total += numApples * applePrice;
    
    //adding coffee to total
    total += numCoffee * coffeePrice;
    
    //implementing special #3
    //CHMK -- Purchase a box of Chai and get milk free. (Limit 1)
    //adding milk to price
    if(numChai > 0 && numMilk > 0)
        numMilk--;
    total += numMilk * milkPrice;
    
    //displaying total to user
    cout << "Total: " << total << endl;

}//end main
