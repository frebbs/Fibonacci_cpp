#include <iostream>
using namespace std;

int main() {

    int num1 = 0;
    int num2 = 1;
    int maxLoop = 20;
    int temp;

    
    cout << "Lets compute Fibonacci numbers" << endl;

    for(int x = 0; x < maxLoop; x++){
        temp = num1 + num2;
        cout << num1 << " plus " << num2 << " is " << temp << endl;
        num1 = num2;
        num2 = temp;

    }


}

