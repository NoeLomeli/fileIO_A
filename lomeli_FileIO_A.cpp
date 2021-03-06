//File I/O practice
#include <iostream>
#include <fstream> // read and write files
#include <cstdlib>
using namespace std;
void countWords(string strA, int& words, int& chars);
string upperAll(string strA);
void countChar(string strA, int& sum);
int main()
{
    ifstream fin;
    ofstream fout;
    ofstream foutB;
    ofstream foutC;
    string words;
    string newString;    
    string space = " ";
    fin.open("gba.txt");//opens document gba.txt
    fout.open("results.txt");//creates document
    foutB.open("capitalize.txt");
    foutC.open("uppercase.txt");
    int chars = 0;
    int wordCount = 0;
    int length = 0;
    int length1(0), length2(0), length3(0),length4(0),length5(0), length6(0), length7(0), length8(0),length9(0),length10(0), length11(0);
    
    string newPara;
    string capitals;
    
    if(fin.fail())//if it fails to import data from document
    {
        cout << "error opening import file" << endl;
        exit(1);
    }//if
     
     if(fout.fail())//if it fails to output to new document
    {
        cout << "error opening output file" << endl;
        exit(1);
    }//if
    
    while (fin >> words)
    {
        length = words.length();
         
        
        switch (length)//counting the number of characters in a word and keeping count of each word
        {
            case 1:
                length1++;
                break;
            case 2:
                length2++;
                break;
            case 3:
                length3++;
                break;
            case 4:
                length4++;
                break;
            case 5:
                length5++;
                break;
            case 6:
                length6++;
                break;
            case 7:
                length7++;
                break;
            case 8:
                length8++;
                break;
            case 9:
                length9++;
                break;
            case 10:
                length10++;
                break;
            default:
                length11++;
                break;
                
        }//switch
        
        //countChar(words, length);
        
        words[0] =  toupper(words[0]);// capitalize char at position [[0]]
        newString += words + space;
        newPara = newString;
        capitals = upperAll(newPara);
        
       
    
    }// while
    
    cout << length2;
    foutB << capitals;
    foutC << newString;
    countWords(newPara, wordCount, chars);       
    fout << "average characters per word: " << (chars / wordCount) << endl;
    fout << length1 << " words of length 1" << endl;
    fout << length2 << " words of length 2" << endl;
    fout << length3 << " words of length 3" << endl;
    fout << length4 << " words of length 4" << endl;
    fout << length5 << " words of length 5" << endl;
    fout << length6 << " words of length 6" << endl;
    fout << length7 << " words of length 7" << endl;
    fout << length8 << " words of length 8" << endl;
    fout << length9 << " words of length 9" << endl;
    fout << length10 << " words of length 10" << endl;
    fout << length11 << " words of length 11 or longer" << endl;
    fout << "Total number of words: " << wordCount << endl;
    fin.close();
    fout.close();
    foutB.close();
    foutC.close();
    
    return 0;
}
void countWords(string strA, int& words, int& chars)//count the number of words
{
    words = 0;
    
    for (int ix(0); ix < strA.length(); ix++)
    {
        if ((strA[ix] == ' ') && (strA[ix +1] >= '0')&& (strA[ix +1] <= '}'))//accounts for the next char after the space not being an alphabet character
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
string upperAll(string strA) 
{
    string upper;    
    for(int ix = 0; ix < strA.length(); ix++)
    {
        string letter;
        letter = toupper(strA[ix]);
        upper += letter;
        
    }
    return upper;
}//upperAll
void countChar(string strA, int& length)
{
    
    for(int ix(0); ix < strA.length(); ix++)
    {
        
        length++;    
    }
    return;

}

