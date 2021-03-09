/* 
 * File:   SoftwareSales.cpp
 * Author: Juan Enriquez
 *
 * Created on March 5, 2021, 9:40 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    // Variables
    double package = 99;   //the cost of each package
    int i;  // counter for if loop
    
    // Input
    cout << "What is the quantity that is desired" << endl;
    cin >> i;

    // The total cost of the sale
    double total = i * package; 
    
    // precision manipulator used to set 2 decimals
    cout << setprecision(2) << fixed;
    
    // if statement used to apply correct discount
    if (i < 1)
        {        
            cout << "The value is below 1, please try again.";
        }
    else if (i >= 1 && i <= 9)
        {
            total = total;
        }
    else if (i >= 10 && i <= 19)
        {
            total = total - (total * .2);
        }
    else if (i >= 20 && i <= 49)
        {
            total = total - (total * .3);
        }
    else if (i >= 50 && i <= 99)
        {
            total = total - (total * .4);
        }
    else
        {
           total = total - ((i * package) * .5);
        }
    
    // Output
    cout << "The total cost of the purchase is: $ " << total << endl;
    
    
    return 0;
}

