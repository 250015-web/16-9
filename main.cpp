#include <iostream>
// using namespace std;
// int main () {
//     char input;
//     cout << "Enter traffic night color ( g/y/r); ";
//     cin >> input;
//     switch (input) {
//         case 'g':
//         case 'G':
//             cout << "Go!" << input << endl;
//             break;
//         case 'y':
//         case 'Y':
//             cout << "Get ready" << endl;
//             break;
//         default:
//             cout << "Invalid input! Please input 'g' , 'y' or 'G' or 'Y'" << endl;
//
//
//
//     }
//
//
//
//     int grade;
//     cout << " Enter student's grade (0-100); ";
//     cin >> grade;
//     // Validate input range
//     if (grade < 0 || grade > 100) {
//         cout << " Invalid grade! Please input grade (0-100);" << endl;
//         return 1;
//
//     }
//     switch (grade/10) {
//         case 10:
//         case 9:
//             cout << "A" << grade << endl;
//         case 8:
//             cout << "B" << grade << endl;
//         case 7:
//             cout << "C" << grade << endl;
//         case 6:
//             cout << "D" << grade << endl;
//         default:
//             cout << "F" << endl;
//
//     }
//
//
//
//
//     int angle1, angle2, angle3;
//     cout << " Enter three angles of a triangle; ";
//     cin >> angle1 >> angle2 >> angle3;
//     // Check if all angles are positive and sums equal to 180
//     if (angle1>0 && angle2>0 && angle3>0 && angle1+angle2+angle3==180) {
//         cout << " Valid triangle." << endl;
//     } else {
//         cout << " Invalid triangle." << endl;
//
//     }
//
//         char letter;
//         cout << "Enter a character; ";
//         cin >> letter;
//         // Check if it's an uppercase letter (A-Z
//         if (letter == 'A' && letter == 'Z') {
//             cout << "Uppercase letter!" << endl;
//         }
//         // Check if it's a lowercase letter (a-z)
//         else if (letter == 'a' && letter == 'z') {
//             cout << "Lowercase letter!" << endl;
//         }
//         // in case it's not an alphabet character
//         cout << " Enter an alphabet character! " << endl;}
//
//
//
//     int number;
//     // Validate that it's a three-digit number
//     if ( number < 100 || number > 999 ) {
//         cout << "Invalid number! Please input number (100-999)" << endl;
//         return 1;
//     }
//     // extract digits
//     int firstDigit = number / 100; // hundreds place
//     int secondDigit = number % 10; // units place
//     // check if it's a palindrome ( first digit equals last digit )
//     if (firstDigit == lastDigit) {
//         cout << number << endl << " is a palindrome" << endl;
//     } else {
//         cout << number << endl << " is not a palindrome" << endl;
//
//     }
//
//
//
//
//         char choice;
//         cout << "Choose a lang to greet: ";
//         cout << "u-Uzbek" << endl;
//         cout << "e-English" << endl;
//         cout << "r-Russian" << endl;
//         cout << "g-Germany" << endl;
//         cout << "Enter your choice: ";
//         cin >> choice;
//         switch (choice) {
//             case 'u':
//             case 'U':
//                 cout << "Xush kelibsiz!" << endl;
//                 break;
//             case 'e':
//             case 'E':
//                 cout << "Welcome!" << endl;
//                 break;
//             case 'r':
//             case 'R':
//                 cout << "Добро пожаловать!" << endl;
//                 break;
//             case 'g':
//             case 'G':
//                 cout << " Willkommen! " << endl;
//                 break;
//             default:
//                 cout << "invalid choice! Using English as default: Hello! Welcome!" << endl;
//         }
//         return 0;
//     }