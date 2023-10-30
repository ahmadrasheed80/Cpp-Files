#include <iostream>
#include <cmath>
using namespace std;

class SimpleCalculator
{
    int num1, num2;
    double result = 0;

protected:
    void setSimpleValues()
    {
        cout << " Enter the first number : " << endl;
        cin >> num1;
        cout << "Enter the second number : " << endl;
        cin >> num2;
    }

    void calculate()
    {
        char symbol;
        cout << "Which symbol would you like to use (+, -, *, / )? ";
        cin >> symbol;

        switch (symbol)
        {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = static_cast<double>(num1) / num2; // Check for division by zero
            } else {
                cout << "Error: Division by zero." << endl;
            }
            break;
        default:
            cout << "Error: Invalid operation." << endl;
            break;
        }
    }

    void getSimpleValue()
    {
        cout << "The calculation of the values are: " << result << endl;
    }
};

class ScientificCalculator
{
    double result;
    double value;

protected:
    void setScientificValue()
    {
        cout << "Enter the number: " << endl;
        cin >> value;
    }

    void scientificCalculate()
    {
        int sign;
        cout << "Which symbol would you like to use:\n Choose (1, 2, 3, 4)\n 1. Sin\n 2. Cos\n 3. Tan\n 4. Square Root" << endl;
        cin >> sign;
        switch (sign)
        {
        case 1:
            result = sin(value);
            break;
        case 2:
            result = cos(value);
            break;
        case 3:
            result = tan(value);
            break;
        case 4:
            if (value >= 0) { // Check for square root of a negative number
                result = sqrt(value);
            } else {
                cout << "Error: Square root of a negative number." << endl;
            }
            break;
        default:
            cout << "Error: Invalid operation." << endl;
            break;
        }
    }

    void getScientificValue()
    {
        cout << "The Result of the calculation: " << result << endl;
    }
};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{
public:
    void simpleCalculation()
    {
        cout << "*********** Simple calculation **************" << endl;
        setSimpleValues();
        calculate();
        getSimpleValue();
    }

    void scientificCalculation()
    {
        cout << "*********** Scientific calculation **************" << endl;
        setScientificValue();
        scientificCalculate();
        getScientificValue();
    }
};

int main()
{
    int choose = 0;
    cout << "************** WELCOME TO CALCULATOR **************" << endl;

    cout << "---------------------------------------------------" << endl;

    cout << "What type of calculation would you like to do?\n 1. Simple.\n 2. Scientific. " << endl;
    cin >> choose;

    HybridCalculator Object1;

    if (choose == 1)
    {
        Object1.simpleCalculation();
    }
    else if (choose == 2)
    {
        Object1.scientificCalculation();
    }
    else
    {
        cout << "Invalid choice." << endl;
    }

    return 0;
}
