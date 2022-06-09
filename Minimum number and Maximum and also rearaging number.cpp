#include <iostream>
using namespace std;

int main() {
    int myNum[4] = { 5, 20, 2, 7 };
    int sum = 0;
    int minNum;

    cout << " The arrays contains these numbers: " << endl;

    for (int j = 1; j <= 1; j++) {

        for (int j = 0; j < 4; j++) {
            cout << myNum[j] << " ";
            sum += myNum[j];

        }
        cout << endl;
    }
    cout << "The sum is " << sum << endl;

    for (int j = 0; j < 4; j++) {
        minNum = myNum[0];
        if (myNum[j] < minNum) {
            cout << "The minimum number is " << myNum[j];

        }

    }

    cout << endl;
    cout << "The array in reverse is: " << endl;


    for (int j = 4 - 1; j >= 0; j--) {
        cout << myNum[j] << " ";



    }

    return 0;

}