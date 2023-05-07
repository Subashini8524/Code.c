/* Weather app
Name:Subashini C 
College:Vivekanandha college of engineering for women 
*/
#include <iostream>
#include <string>
using namespace std;


int main()
{
   double fahrenheit, celsius;
   cout << "Enter temperature in Fahrenheit: ";
   cin >> fahrenheit;
   celsius = (fahrenheit - 32) * 5 / 9;
   cout << "Temperature in Celsius: " << celsius << endl;
   
    string email, location;
    int choice;
    cout << "welocome to weather app:\n";
    
    cout << "Enter your email address: ";
    cin >> email;

    cout << "Enter your location: ";
    cin >> location;


    cout << "Weather Menu" << endl;
    cout << "1. Weekly report" << endl;
    cout << "2. Current climate" << endl;

    
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
        
        case 1:
            
            cout << "Enter temperature in Celsius: ";
            int temperature;
            cin >> temperature;
            
        case 2:
            cout << "enter todays's weather:";
            cout<<"todays climate is slightly cloudy";
            break;
        case 3:
            cout << "enter tomorrow's weather:";
            cout<<"\nrainy";
            break;
        case 4:
            cout << "enter yesterday's weather:";
            cout<<"\n sunny";
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
    }

    return 0;
}
