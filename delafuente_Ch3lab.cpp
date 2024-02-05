#include <iostream>

using namespace std;

int main()
{
    float property_tax, house_value, tax_rate, assesment;
    // constant
    const float assessed_rate = 0.6;
    
    cout << "How much is your property worth? $";
    cin >> house_value;

    cout << "What is the current tax rate per $100 of assessed value on the house? $";
    cin >> tax_rate;

    // calculations
    assesment = house_value * assessed_rate;

    property_tax = (assesment / 100) * tax_rate;
    
    // output
    cout << " the annual property tax for this property is: $" << property_tax << endl;


    return 0;
}