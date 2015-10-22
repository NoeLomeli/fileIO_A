//File I/O practice
#include <iostream>
#include <fstream> // read and write files
#include <cstdlib>
using namespace std;
void countWords(string strA, int& words, int& chars);
int main()
{
    ifstream fin;
    ofstream fout;
    string words;
    string newString;    
    string space = " ";
    fin.open("gba.txt");
    fout.open("results.txt");
    int chars = 0;
    int wordCount = 0;
   
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
        newString += words + space;
        //cout << words << space;
        //fin >> words;
        //fout << words << space;
    
    }// while
    
    countWords(newString, wordCount, chars);       
    fout << "average characters per word: " << (chars / wordCount) << endl;
    fin.close();
    fout.close();
    
    
    return 0;
}
void countWords(string strA, int& words, int& chars)
{
    words = 0;
    
    for (int ix(0); ix < strA.length(); ix++)
    {
        if ((strA[ix] == ' ') && (strA[ix +1] >= '0')&& (strA[ix +1] <= '}'))
        {
            words ++;                                  
        }//if
        if ((strA[ix] >= 'A') || (strA[ix] >= 'z'))
        {
            chars++;
        } 
        
    }//for
    return;
}//countWords

