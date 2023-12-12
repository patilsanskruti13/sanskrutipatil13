#include <iostream>

using namespace std;

float add(float x, float y) {
    return x + y;
}

float subtract(float x, float y) {
    return x - y;
}

float multiply(float x, float y) {
    return x * y;
}

float divide(float x, float y) {
    if (y != 0) {
        return x / y;
    } else {
        return -1;
    }
}

int main() {
    float num1, num2, result;
    int ch;
    
    cout << "Calculator" << endl;
    cout << "Enter two numbers: "<<endl;
    cout<<"enter 1st no.=";
    cin>>num1;
    cout<<"enter 2nd no.=";
    cin>>num2;
    do {
        cout << "1. ADDITION" << endl;
        cout << "2. SUBTRACTION" << endl;
        cout << "3. MULTIPLICATION" << endl;
        cout << "4. DIVIDE" << endl;
        cout<<"5.EXIT"<<endl;
        cout << "Enter your choice ==> ";
        cin >> ch;

        switch (ch) {
            case 1: {
                result = add(num1, num2);
                cout << num1 << " + " << num2 << " = " << result << endl;
                break;
            }
            case 2: {
                result = subtract(num1, num2);
                cout << num1 << " - " << num2 << " = " << result << endl;
                break;
            }
            case 3: {
                result = multiply(num1, num2);
                cout << num1 << " * " << num2 << " = " << result << endl;
                break;
            }
            case 4: {
                result = divide(num1, num2);
                if (result == -1) {
                    cout << "Error: Cannot divide by zero." << endl;
                } else {
                    cout << num1 << " / " << num2 << " = " << result << endl;
                }
                break;
            }
            case 5:
            {
                cout << "Exiting the calculator. Goodbye!" << endl;
                exit (0);
                break;
            }    
            default:
                cout << "Invalid operation. Please choose 1, 2, 3, or 4." << endl;
        }
    } 
    //while (ch < 1 || ch > 4);
     while(true);
    return 0;
}
