#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(void)
{
    string automobile;
    int year;
    double a_price;
    double d_price;
    
    cout << "Enter the make and model of automobile: ";
    getline(cin, automobile);
    
    cin >> year;
    cin >> a_price;
    d_price = 0.913*a_price;
//    create object for output
    ofstream outFile;
    outFile.open("carinfo.txt");
    cout << "Now using the outFile to write input into the file." << endl;
    
    outFile << fixed;
    outFile.precision(2);
    outFile.setf(ios_base::showpoint);
    outFile << "Make and model" << automobile << endl;
    outFile << "Year" << year << endl;
     
    outFile.close();
    
    return 0;
}
