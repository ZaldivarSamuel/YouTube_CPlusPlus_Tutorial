#include <iostream>
#include <string>
using namespace std;

int main(){
    
    //variables to hold user data
    string firstName;
    int age;
    
    //Ask user for first name
    cout << "What is your first name? ";
    cin >> firstName;    //save first name in firstName variable
    
    //Ask user for age
    cout << "Enter your age: ";
    cin >> age; //save age in age variable
    
    //Display message
    cout << "Hello " << firstName << ", you are " << age
        << " years old" << endl << endl;
}
