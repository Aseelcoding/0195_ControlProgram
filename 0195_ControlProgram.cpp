

#include <iostream>
using namespace std;

//Simple If Statement
//check if the age upper than 18
bool IsAgeUpper18(short Age) 
{
    if (Age < 18)
        return false;
    else return true;
}

//else if
//Battery level indicator
void BatteryIndicator(short BatterLevel) 
{
    if (BatterLevel==100)
    {
        cout << "Full Charge Unplug charger\n";
    }
    else if (BatterLevel>=20)
    {
        cout << "Battery ok\n";
    }
    else if (BatterLevel>=10&& BatterLevel<20)
    {
        cout << "Low Battery\n";
    }
    else if (BatterLevel<10)
    {
        cout << "Critical! Phone shutting down";
    }
}

int main()
{
  
    
}

