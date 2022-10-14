#include <iostream>
#include <string> // for string class
using namespace std;
 
// Driver Code
int main()
{
    // Declaring string
    string str;
 
    // Taking string input using getline()
    getline(cin, str);
 
    // Displaying string
    cout << "The initial string is : ";
    cout << str << endl;
    return(0);
}