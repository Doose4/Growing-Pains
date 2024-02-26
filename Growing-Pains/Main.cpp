#include <iostream>
#include "Helpers.hpp"

using namespace std;

//tester program
int tester()
{
    cout << endl;

    Myarray testarray;

    bool in_progress = true;
    int ele = 0;
    int Userinput;
    int j = 0;

    //loops through filling array
    while (in_progress)
    {
        cout << "Enter an integer" << endl;
        cin >> Userinput;
        testarray.append_element(Userinput);
        cout << "Value at location " << testarray.get_element_at_index(j) << endl;
        int siz = testarray.arraysize();
        cout << "The size of the array is now: " << siz << endl;
        if (j > 3)
        {
            in_progress = false;
        }
        j++;
    }

    //Displays array size and contents
    int siz = testarray.arraysize();
    for (int i = 0; i < siz; i++)
    {
        ele = testarray.get_element_at_index(i);
        cout << "Value at location " << i + 1 << " is: " << ele << endl;
    }

    //resets array
    testarray.reset();

    //refills and displays
    siz = testarray.arraysize();
    cout << "The size of the array is: " << siz << endl;
    cout << "Enter an integer" << endl;
    cin >> Userinput;
    testarray.append_element(Userinput);
    cout << "Enter an integer" << endl;
    cin >> Userinput;
    testarray.append_element(Userinput);
    siz = testarray.arraysize();
    cout << "The size of the array is: " << siz << endl;
    for (int i = 0; i < siz; i++)
    {
        ele = testarray.get_element_at_index(i);
        cout << "Value at location " << i + 1 << " is: " << ele << endl;
    }

    return 0;
}

//main program
int main()
{
    string userinput;
    bool in_progress=true;
    cout << "\t\tWelcome to dynamic array!" << endl;

    Myarray myarray;

    while (in_progress == true) {
        cout << "Please enter an integer or 'help' for more information:" << endl;
        cin >> userinput;

        if (isdigit(userinput[0])) {
            myarray.append_element(stoi(userinput));
        }
        else if (userinput == "test") {
            cout << "testing...." << endl;
            tester();
            cout << "finished test!" << endl;
        }
        else if (userinput == "help") {
            cout << "Your options are:" << endl
                << "'test' - to test the program" << endl
                << "'size' - to get the size of the array" << endl
                << "'get' - to get the value at a location in the array" << endl
                << "'reset' - to reset the array" << endl
                << "'exit' - to exit the program" << endl;
        }
        else if (userinput == "size") {
            cout << "The size of the array is " << myarray.arraysize() << endl;
        }
        else if (userinput == "get") {
            int numinput;
            cout << "Please enter an number between 0 and " << myarray.arraysize()-1 << " :" << endl;
            cin >> numinput;
            cout << "The value at " << numinput << " is " << myarray.get_element_at_index(numinput) << endl;
        }
        else if (userinput == "reset") {
            myarray.reset();
            cout << "The array has been reset..." << endl;
        }
        else {
            in_progress = false;
        }
    }
    
    int siz = myarray.arraysize();
    int ele;
    cout << "All elements of the array are: " << endl;
    for (int i = 0; i < siz; i++)
    {
        ele = myarray.get_element_at_index(i);
        cout << "Value at location " << i + 1 << " is: " << ele << endl;
    }


    return 0;
}