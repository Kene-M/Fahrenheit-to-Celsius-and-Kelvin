// This program will convert a set of temperatures from Fahrenheit to Celsius and Kelvin.

#include <iostream>
#include <iomanip>

using namespace std ;

int main()
{
        // Declare variables.
    double initial_temperature_in_F ;  // The starting or current temperature in Fahrenheit.
    double final_temperature_in_F ;  // The ending temperature in Fahrenheit.
    double Increment_Value ;  // The value by which the temperature will be increasing.
    double Celsius_Temperature ;  // The value of the temperature in Celsius.
    double Kelvin_Temperature ;  // The value of the temperature in Kelvin.

        // Get the increment value, initial and final temperature in Fahrenheit from the user.
    cin >> initial_temperature_in_F >> final_temperature_in_F >> Increment_Value ;

        // Validate the input.
    while ( ( final_temperature_in_F < initial_temperature_in_F ) || Increment_Value <= 0.0 )
    {
            // Display error message.
        cout << "Starting temperature must be <= ending temperature and increment must be > 0.0" ;
        cout << endl ;

            // Get the increment value, initial and final temperature in Fahrenheit from the user.
        cin >> initial_temperature_in_F >> final_temperature_in_F >> Increment_Value ;
    }

        // Set the desired output formatting for numbers.
    cout << setprecision (4) << fixed << showpoint ;

        // Display the top of the table.
    cout << setw (18) << right << "Fahrenheit" ;
    cout << setw (18) << right << "Celsius" ;
    cout << setw (18) << right << "Kelvin" << endl ;

        // Display the rest of the table to the user.
    do
    {
            // Calculate the current temperature in Celsius.
        Celsius_Temperature = ( initial_temperature_in_F - 32 ) / 1.8 ;

            // Calculate the current temperature in Kelvin.
        Kelvin_Temperature = Celsius_Temperature + 273.15 ;

            // Display the formatted current temperatures to the user.
        cout << setw (18) << right << initial_temperature_in_F ;
        cout << setw (18) << right << Celsius_Temperature ;
        cout << setw (18) << right << Kelvin_Temperature << endl ;

            // Update the current temperature by the increment value in each iteration.
        initial_temperature_in_F += Increment_Value ;

            // Check if the initial temperature is not up more than the final temperature.
    } while ( initial_temperature_in_F <= final_temperature_in_F ) ;

    return 0 ;
}
