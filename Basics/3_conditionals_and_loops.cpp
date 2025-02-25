#include <iostream>
using namespace std;

int main() {
    // CONDITIONAL STATEMENTS
    
    // if-else statement
    int number = 15;
    cout << "Number is: " << number << endl;
    if (number > 0) {                    // Checks if number is positive
        cout << "Number is positive" << endl;
    } else if (number < 0) {             // Checks if number is negative
        cout << "Number is negative" << endl;
    } else {                            // If neither above is true
        cout << "Number is zero" << endl;
    }

    // Switch statement
    int day = 3;
    cout << "\nDay number: " << day << endl;
    switch (day) {
        case 1:                         // If day is 1
            cout << "Monday" << endl;
            break;                     // Exit switch
        case 2:                        // If day is 2
            cout << "Tuesday" << endl;
            break;
        case 3:                        // If day is 3
            cout << "Wednesday" << endl;
            break;
        default:                       // If no case matches
            cout << "Invalid day" << endl;
            break;
    }

    // LOOPS
    
    // For loop - counts from 1 to 5
    cout << "\nFor loop counting 1 to 5:" << endl;
    for (int i = 1; i <= 5; i++) {     // i starts at 1, runs while i <= 5, increments i
        cout << i << " ";
    }
    cout << endl;

    // While loop - counts down from 5 to 1
    int count = 5;
    cout << "While loop counting 5 to 1:" << endl;
    while (count > 0) {                // Runs as long as count > 0
        cout << count << " ";
        count--;                      // Decrements count
    }
    cout << endl;

    // Do-while loop - runs at least once
    int x = 0;
    cout << "Do-while loop (runs once even if condition is false):" << endl;
    do {
        cout << "x is " << x << endl;
        x++;
    } while (x < 0);                  // Condition checked after execution

    return 0;
}