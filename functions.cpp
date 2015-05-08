#include <iostream>
 
// Definition of function doPrint()
void doPrint()
{
    using namespace std;  // using directive that provides access to std::cout and std::endl
    cout << "In doPrint()" << endl;
}
 
// Definition of function main()
int main()
{
    using namespace std;  // using directive that provides access to std::cout and std::endl
    cout << "Starting main()" << endl;
    doPrint(); // Interrupt main() by making a function call to doPrint()
    cout << "Ending main()" << endl;
    return 0;
}
