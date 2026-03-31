

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

//nested if Statements
//Driver Licence or can drive a car?
void CanDrive(bool HasDriverLicence, short Age)
{
    //here we can use the function IsAgeUpper18() if we want
    if (Age >= 18)
    {
        if (HasDriverLicence)
        {
            cout << "Yes , You can drive a car\n";
       
        }
        else
        {
            cout << "You cannot drive because you do not have  a driver Licence \n";
        }
    }
    else
    {
        cout << "You cannot drive because you are under 18\n";
    }

   
}
int main()
{
    //here we will call the age function to check if the user uppert han 18
    short Age = 0;
        cout << "Enter Your age please  : ";
        cin >> Age;

        if (IsAgeUpper18(Age))
        {
            cout << "Your Age Upper or Equal 18 \n";
        }
        else { cout << "Your Age Under 18 \n"; }

        cout << endl << endl << endl;
        //here we will call the battery procedure
        short BatteryLevel = 0;
        cout << "Enter the battery level  : ";
        cin >> BatteryLevel;
        BatteryIndicator(BatteryLevel);

        cout << endl << endl << endl;
        //here we will call the CanDrive procedure so we can now if the user can drive or not 
        short NewAge;
        bool HasDriverLicence;
        cout << "Enter Your Age Please : ";
        cin >> NewAge;
        cout << "Do You Have a Driver Licence , answer by 1 if yes and 0 if not : ";
        cin >> HasDriverLicence;
        CanDrive(HasDriverLicence, NewAge);
        return;

}

