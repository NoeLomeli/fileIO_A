//File I/O practice
#include <iostream>
#include <fstream> // read and write files
#include <cstdlib>
using namespace std;

int main()
{
    ifstream fin;
    ofstream fout;
    string words;    
    string space = " ";
    fin.open("gba.txt");
    fout.open("results.txt");
   
   
   
    if(fin.fail())
    {
        cout << "error opening import file" << endl;
        exit(1);
    }//if
     
     if(fout.fail())
    {
        cout << "error opening output file" << endl;
        exit(1);
    }//if
    
    while (fin >> words)
    {
        cout << words << space;
        //fin >> words;
        //fout << words << space;
    
    }// while
    
    
    
    fin.close();
    fout.close();
    
    
    return 0;
}
