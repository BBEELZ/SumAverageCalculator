#include <iostream>

using namespace std;

int main()
{   //Prompt the user for their name
    cout << "What is your name? ";
    string userName;
    cin >> userName;

    //Say Hello
    cout << "Hello, " << userName << "!" << endl;

    //Prompt the user to enter the first number
    cout << "Please enter a number: ";

    //Get first number
    float x;
    cin >> x;

    //Prompt the user to enter the second number
    cout << "Please enter a second number: ";

    //Get second number
    float y;
    cin >> y;

    //Prompt the user to enter the third number
    cout << "Please enter a third number: ";

    //Get third number
    float z;
    cin >> z;

    //Calculate the sum of all three numbers
    float sum;
    sum = x + y + z;

    //Calculate the average of all three numbers
    float average;
    average = (float)((x + y + z) / 3.0f);

    //Display sum and average
    cout << "The sum of these numbers is " << sum << endl;
    cout << "The average of these numbers is " << average << endl;
}