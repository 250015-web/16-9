#include <iostream>
#include <cmath>
#include <iomanip>
// using namespace std;
// int main () {
//
// int num, positiveCount = 0, negativeCount = 0, totalCount = 0;
// int sum = 0;
//
// cout << "Enter an integer, the input ends if it is 0: ";
//
// while (true) {
//     cin >> num;
//
//     if (num == 0) {
//         break;
//     }
//
//     if (num > 0) {
//         positiveCount++;
//     } else {
//         negativeCount++;
//     }
//
//     sum += num;
//     totalCount++;
// }
//
// if (totalCount == 0) {
//     cout << "No numbers entered except 0" << endl;
// } else {
//     cout << "The number of positives is " << positiveCount << endl;
//     cout << "The number of negatives is " << negativeCount << endl;
//     cout << "The total is " << sum << endl;
//     cout << "The average is " << static_cast<double>(sum) / totalCount << endl;
// }
// int main() {
//     int number, sum = 0;
//     cout << "Enter a number: ";
//     cin >> number;
//     int temp = number;
//     while ( temp != 0 ) {
//         sum += temp % 10;
//         temp = temp / 10;
//
//     }
//     cout << " The sum is: "<< sum <<  endl;
// }

//     int main() {
//         long long binary;
//         int decimal = 0, i = 0, remainder;
//
//         cout << "Enter: ";
//         cin >> binary;
//
//         long long temp = binary;
//         while (temp != 0) {
//             remainder = temp % 10;
//             temp /= 10;
//             decimal += remainder * pow(2, i);
//             ++i;
//         }
//
//         cout << " The decimal is " << decimal << endl;
//
//
//
//        int main () {
//            int n;
//
//            cout << "Input: ";
//            cin >> n;
//
//            cout << "Output: " << endl;
//            for (int i = 0; i < n; i++) {
//                for (int j = 0; j < n; j++) {
//                    cout << "*";
//                }
//                cout << endl;
//            }
// int main () {
// int n;
//
// cout << "Input: ";
// cin >> n;
//
// cout << "Output: " << endl;
// for (int i = 1; i <= n; i++) {
//     for (int j = 1; j <= i; j++) {
//         cout << "*";
//     }
//     cout << endl;
// }
//
// int main() {
// int n;
// cout << "Input: ";
// cin >> n;
// if (n == 0) {
// cout << "Output: The depth is 0" << endl;
//  } else {
// cout << "Output: " << endl;
// for (int i = 1; i <= n; i++) {
// for (int j = 1; j <= i; j++) {
//  cout << i;
//  }
//   cout << endl;
// }
//  }
//
//  int main () {
// int number;
// cout << "Input: ";
// cin >> number;
// cout << "Output: ";
// int factor = 2;
//      while (number > 1) {
//          if (number % factor == 0) {
//              cout << factor << " ";
//              number /= factor;
//          } else {
//              factor++;
//          }
//      }
//      cout << endl;
//    int main (){
//        int n = 0;
//            int power = 1;
//
//            while (power * 2 < 30000) {
//                power *= 2;
//                n++;
//            }
//
//            cout << "The largest n such that 2^n < 30,000 is: " << n << endl;
//            cout << "2^" << n << " = " << power << endl;
//        int main () {
//           cout << fixed << setprecision(10);
//
//           for (int i = 10000; i <= 100000; i += 10000) {
//               double pi = 0.0;
//               for (int j = 1; j <= i; j++) {
//                   if (j % 2 == 1) {
//                       pi += 1.0 / (2 * j - 1);
//                   } else {
//                       pi -= 1.0 / (2 * j - 1);
//                   }
//               }
//               pi *= 4;
//
//               cout << "i = " << i << ", Pi = " << pi << endl;
//           }
//            int main() {
//            cout << fixed << setprecision(3);
//            cout << "Miles\tKilometers" << endl;
//            cout << "----------------" << endl;
//
//            for (int miles = 1; miles <= 10; miles++) {
//                double kilometers = miles * 1.609;
//                cout << miles << "\t" << kilometers << endl;
//            }
//      return 0;
//
//
//
//
//
//
// }