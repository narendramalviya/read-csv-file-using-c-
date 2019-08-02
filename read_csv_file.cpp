#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string s;
    ifstream file;  //ifstream object for file reading
    
    file.open("animalData.dat"); //open csv file using open function
    if(file.is_open())    //  check file is properly open or not
       cout<<"Error"<<endl;
    
    while (file.good()){
        while (!file.eof()){  //looping until getline function reach end of line
            getline(file, s, ',');   
               cout << s << " ";   
        }
        cout << "\n";
    }
    file.close();
    return 0;
}