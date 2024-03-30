#include <iostream>
#include "Helpers.hpp"
#include "ArithmeticDynamicArray.hpp"
#include "GeometricDynamicArray.hpp"

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
        cout << "This is a test, Enter " << (5-j) << " more integers" << endl;
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
    cout << endl << "Now testing refilling and displaying..." << endl;
    siz = testarray.arraysize();
    cout << "The size of the array is: " << siz << endl;
    cout << "This is part 2 of the test, Enter an integer" << endl;
    cin >> Userinput;
    testarray.append_element(Userinput);
    cout << "This is part 2 of the test, Enter an integer" << endl;
    cin >> Userinput;
    testarray.append_element(Userinput);
    siz = testarray.arraysize();
    cout << "The size of the array is: " << siz << endl;
    for (int i = 0; i < siz; i++)
    {
        ele = testarray.get_element_at_index(i);
        cout << "Value at location " << i + 1 << " is: " << ele << endl;
    }


    //test Arthmetic array
    cout << endl << "Now testing arithmetic arrays... " << endl;
    Arithmeticarray dyna = Arithmeticarray(4);
    in_progress = true;
    j = 0;
    siz = 4;
    while (in_progress)
    {
        dyna.append_element(j+1);
        cout << "Value at location " << dyna.get_element_at_index(j) << endl;
        int siz = dyna.arraysize();
        cout << "The size of the array is now: " << siz << endl;
        if (j > 4)
        {
            in_progress = false;
        }
        j++;
    }

    for (int i = 0; i < siz; i++)
    {
        ele = dyna.get_element_at_index(i);
        cout << "Value at location " << i + 1 << " is: " << ele << endl;
    }

    cout << dyna.maxsize() << endl;


    //Testing Geometric Array
    cout << endl << "Now testing Geometric arrays... " << endl;
    GeometricArray Geo;
    in_progress = true;
    j = 0;
    siz = 4;
    while (in_progress)
    {
        Geo.append_element(6-j);
        cout << "Value at location " << Geo.get_element_at_index(j) << endl;
        int siz = Geo.arraysize();
        cout << "The size of the array is now: " << siz << endl;
        if (j > 4)
        {
            in_progress = false;
        }
        j++;
    }

    for (int i = 0; i < siz; i++)
    {
        ele = Geo.get_element_at_index(i);
        cout << "Value at location " << i + 1 << " is: " << ele << endl;
    }

    cout << Geo.maxsize() << endl;

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
            in_progress = false;
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