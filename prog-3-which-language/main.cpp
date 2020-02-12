// prog3WhichLangMacbeth.cpp
//    Use letter frequency counts to determine what language text is in.
//
// Author: Kunj Patel & Raj Prajapati
// Date: Oct 2, 2018
// Class: CS 141, Fall 2018
// Language: C++
//
// Translations of Macbeth were created online using Google translate, starting with the
// English version at http://shakespeare.mit.edu/macbeth/full.html
// To trigger the translation option, I went to the Chrome browser / Settings / Language
// option and changed the default language, which triggered showing the translation option
// for the English Macbeth page when it was displayed.  The translated text was then
// copy/pasted into a text file and saved.  The texts are stored using the multi-byte
// UTF-8 format, explained at https://en.wikipedia.org/wiki/UTF-8, though here we are
// not attempting to count more than the first 128 alphabetical characters.
//
/* Results of running program are:
 Program 3: Which Language
 Letter Frequency Counts:
 Engl  Finn  Fren  Germ  Hung  Ital  Port  Span
 A:   6018  9416  6544  5068  7541  8935  9939 10052
 B:   1464   448  1081  2060  1746  1221  1173  1387
 C:   2144   636  3028  3126  1014  3865  2855  3222
 D:   3331  1013  2698  4592  2265  2945  3687  3815
 E:   9270  7187 12782 14779  8280  9364 10551 10861
 F:   1701   297  1101  1464   932  1099  1039   653
 G:   1333   187   772  2503  2975  1423   983   936
 H:   5244  2384  1004  4775  1687  1485  1413  1263
 I:   4653  8022  5583  7062  2961  8128  4179  3964
 J:     38  1331   538   148  1049     5   216   429
 K:    691  3952    28  1080  3551    51    19    18
 L:   3294  4648  4240  3089  4658  4814  2082  3985
 M:   2481  3526  3269  2861  3812  2790  4415  3021
 N:   4987  7958  5958  9026  4725  5966  4455  5704
 O:   6054  4219  5315  2208  3529  8668  8898  7605
 P:   1000  1331  2297   466   448  2060  1862  1842
 Q:    121    78   907    84    77   548   954   883
 R:   4518  1784  5986  5955  2802  5357  5328  5706
 S:   4943  5425  6898  5852  4538  4863  6774  6468
 T:   7055  7620  6025  5477  5632  5373  3729  3932
 U:   2590  4226  5373  3327   963  3081  3840  3591
 V:    657  1784  1566   661  1297  1287  1351   893
 W:   1926   120    78  1797   138   141    68    61
 X:    112    45   328    89    49    42   260    91
 Y:   1637  1403   247   169  1998   216    65   891
 Z:     15     3   343   939  2742   490   314   301
 Letter frequency order:
 Engl  Finn  Fren  Germ  Hung  Ital  Port  Span
 E     A     E     E     E     E     E     E
 T     I     S     N     A     A     A     A
 O     N     A     I     T     O     O     O
 A     T     T     R     N     I     S     S
 H     E     R     S     L     N     R     R
 N     S     N     T     S     T     N     N
 S     L     I     A     M     R     M     L
 I     U     U     H     K     S     I     I
 R     O     O     D     O     L     U     T
 D     K     L     U     G     C     T     D
 L     M     M     C     I     U     D     U
 U     H     C     L     R     D     C     C
 M     R     D     M     Z     M     L     M
 C     V     P     G     D     P     P     P
 W     Y     V     O     Y     H     H     B
 F     J     F     B     B     G     V     H
 Y     P     B     W     H     V     B     G
 B     D     H     F     V     B     F     V
 G     C     Q     K     J     F     G     Y
 P     B     G     Z     C     Q     Q     Q
 K     F     J     V     U     Z     Z     F
 V     G     Z     P     F     Y     X     J
 Q     W     X     Y     P     W     J     Z
 X     Q     Y     J     W     K     W     X
 J     X     W     X     Q     X     Y     W
 Z     Z     K     Q     X     J     K     K
 Copy and paste a paragraph of text to be analyzed, followed by ^z (PC) or ^d (Mac):
 Ma per arrivare a un agreement bisogna essere in due. E dato che il governo intende resistere sui numeri della manovra, è necessario offrire garanzie all'Europa e ai mercati. Perciò sono stati stabiliti due capisaldi: uno tecnico, l'altro più politico. La riduzione strutturale del debito viene fissato come un "obiettivo strategico", non a caso sottolineato da Di Maio dopo il vertice. La linea dell'esecutivo è che per far ripartire l'Italia sia necessario "cambiare approccio" con una manovra espansiva "dopo anni di cure rigoriste senza risultati", ma s
 A:51 B:5 C:20 D:15 E:55 F:4 G:6 H:2 I:54 J:0 K:0 L:22 M:10 N:29 O:39 P:13 Q:0 R:37 S:28 T:31 U:15 V:9 W:0 X:0 Y:0 Z:3
 Letter frequency order:
 Engl  Finn  Fren  Germ  Hung  Ital  Port  Span  User
 E     A     E     E     E     E     E     E     E
 T     I     S     N     A     A     A     A     I
 O     N     A     I     T     O     O     O     A
 A     T     T     R     N     I     S     S     O
 H     E     R     S     L     N     R     R     R
 N     S     N     T     S     T     N     N     T
 S     L     I     A     M     R     M     L     N
 I     U     U     H     K     S     I     I     S
 R     O     O     D     O     L     U     T     L
 D     K     L     U     G     C     T     D     C
 L     M     M     C     I     U     D     U     D
 U     H     C     L     R     D     C     C     U
 M     R     D     M     Z     M     L     M     P
 C     V     P     G     D     P     P     P     M
 W     Y     V     O     Y     H     H     B     V
 F     J     F     B     B     G     V     H     G
 Y     P     B     W     H     V     B     G     B
 B     D     H     F     V     B     F     V     F
 G     C     Q     K     J     F     G     Y     Z
 P     B     G     Z     C     Q     Q     Q     H
 K     F     J     V     U     Z     Z     F     J
 V     G     Z     P     F     Y     X     J     K
 Q     W     X     Y     P     W     J     Z     Q
 X     Q     Y     J     W     K     W     X     W
 J     X     W     X     Q     X     Y     W     X
 Z     Z     K     Q     X     J     K     K     Y
 60    78    16    50    94    10    18    13  <--- Difference (This line is not part of expected output, but is helpful!)
 Language is Italian
 */
#include <iostream>
#include <cctype>       // For the letter checking functions
#include <fstream>      // For file input
#include <iomanip>      // For setw
#include <cstdlib>      // For exit()
#include <cmath>        // For abs()
using namespace std;

const int LIMIT = 26;                  // Max array size, which is number of alphabet
const int totalMcbethFiles = 8;        // total languages files

//the menu for geeting output according to user choice
// *** Arvan: The name should clearly, without ambiguity indicate what the function does. For example, printIntroStatements();
void introStatements()
{
    cout << "Program 3: Which Language." << endl;
    cout << "Select from the following stages of output to display:  "<<endl;
    cout << "   1. Letter frequency counts"<<endl;
    cout << "   2. Letter frequency order" << endl;
    cout << "   3. Get user input and display frequency counts" << endl;
    cout << "   4. Get user input, display frequency counts, and display language" << endl;
    cout << "   0. Exit the program" << endl;
    cout << "Your choice -->";
}

//this function will be used to sort the alphabets according to index
// *** Arvan: The name should clearly, without ambiguity indicate what the function does.
void frequencyHelperFunction(int paraArray[], char paraArray2[])
{
    //this loop will assign every max index and value to -1
    for (int i=0; i <LIMIT; i++){
        int maxIndex = -1;                                               //assigning maximum index to -1
        int maxNum = -1;                                                 //assigning maximum value to -1
        //this loop finds the max num and its index
        for(int j=0;j<LIMIT;j++){
            if (paraArray[j] > maxNum)
            {
                maxNum = paraArray[j];
                maxIndex = j;
            }
        }//end of max value finding loop
        paraArray2[i] = (maxIndex + 'A');
        paraArray[maxIndex] = -1;
    }
}

//this function is used to loop through every file and gives the sorted array of characters
// *** Arvan: The name should clearly, without ambiguity indicate what the function does.
void frequencyFunction(int paraArray[][LIMIT], char paraArray2[][LIMIT])
{
    for(int i=0;i<totalMcbethFiles + 1;i++){
        
        frequencyHelperFunction(paraArray[i], paraArray2[i]);
    }
}

// this function is used to assign contents of one 2d array to other 2d array
// *** Arvan: The name should clearly, without ambiguity indicate what the function does.
void assigningFunction(int paraArray[][LIMIT], int paraArray2[][LIMIT], int paraMeter, int paraMeter2)
{
    for (int i=0; i<paraMeter; i++){
        for (int j=0;j<paraMeter2;j++){
            paraArray[i][j] = paraArray2[i][j];
        }
    }
}

//Printing The array of counted letters
void displayLettersFrequencyCount(int paraArray[totalMcbethFiles + 1][LIMIT], int paraMeter, int paraMeter2)
{
    
    cout << "Letter Frequency Counts:\n";
    cout<<"    Engl  Finn  Fren  Germ  Hung  Ital  Port  Span"<<endl;
    
    //2d array to display lettercounts
    for(int i=0;i<paraMeter;i++){
        cout << (char)(i+'A') << ":" << setw(6);
        
        for(int k=0;k<paraMeter2;k++){
            
            cout<<setw(6)<<paraArray[k][i];
        }
        cout<<endl;
    }
    cout <<endl;
}

//Printing the sorted letters
void displayLettersFrequencyOrder(char paraArray[totalMcbethFiles + 1][LIMIT], int paraMeter, int paraMeter2)
{
    cout<<"Letter Frequency Order:"<<endl;
    
    //display without user column
    if (paraMeter2 == totalMcbethFiles){
        cout<<"    Engl  Finn  Fren  Germ  Hung  Ital  Port  Span"<<endl;
    }
    //display with user column
    else{
        cout<<"       Engl  Finn  Fren  Germ  Hung  Ital  Port  Span  User"<<endl;
    }
    //2d array for printing the sorted array according to alphabets
    for(int i=0;i<paraMeter;i++){
        cout<<"  ";
        for(int k=0;k<paraMeter2;k++){
            
            cout<<setw(6)<<paraArray[k][i];
        }
        cout<<endl;
    }
    
}

// initialize lettersArray count values
void intializingLettersArray(int paraArray[LIMIT])
{
    for ( int i=0; i<LIMIT; i++){
        paraArray[i]= 0;
    }
}

int main()
{
    ifstream inputFileStream;                                 // declare the input file stream
    int lettersArray[ LIMIT];                                 // count occurrences of characters
    char c = ' ';                                             // input character
    int i;                                                    // loop counter
    int userChoice = 0;                                       // intializing user input which will be used to get menu options
    int trueMin=1000;                                         // number to find the minimum from different set of integers
    int differenceArray[totalMcbethFiles];                    // array to store the index differences of user input and files
    int lettersCountArr[totalMcbethFiles + 1][LIMIT];         // 2d array to store the counted letters from the files
    char alphaArray[totalMcbethFiles + 1][LIMIT];             // 2d array to store and display the letters accodring to frequency
    char userIn = ' ';                                        // var to get input from the user to count the letters
    char sortedUserAlphaArray[totalMcbethFiles + 1][LIMIT];   // 2d array consisting of sorted letters by frequency including user column
    int temporarySortedArray[totalMcbethFiles + 1][LIMIT];    // 2d array to store the already counted numbers and userIn
    string langTextFile[totalMcbethFiles] = {"MacbethEnglish.txt","MacbethFinnish.txt","MacbethFrench.txt",
                                             "MacbethGerman.txt","MacbethHungarian.txt","MacbethItalian.txt",
                                             "MacbethPortuguese.txt","MacbethSpanish.txt"};
    
    // called function to print input statements
    introStatements();
    
 // *** Arvan: This section could have been done using functions.
   // looping through all macbeth files to work with
    for (int fileloop=0;fileloop<totalMcbethFiles;fileloop++){
        
        //assigning content of each file to this variable
        string fileName = langTextFile[fileloop];
        
        // open input file and verify
        inputFileStream.open( fileName.c_str());             // Convert C++ string to expected C-style string
        if( !inputFileStream.is_open()) {
            cout << "Could not find input file.  Exiting..." << endl;
            exit( -1);
        }
        
        intializingLettersArray(lettersArray);               // initializing array to 0
        
        while( inputFileStream >> c) {
           // convert alphabetic input characters to upper case                                                                 
            if( isalpha( c)) {
                c = toupper( c);
                int index= c-'A';
                lettersArray[ index]++;                      // update letter count, using the character as the index               
            }
        }
        
        // storing counted occurences of letters in each row of on one iteration of j
        for (i=0;i<LIMIT;i++){                              
            if(lettersArray[i] != 0){
                lettersCountArr[fileloop][i] = lettersArray[i];
            }
        }
        
        //closing file
        inputFileStream.close();                                            
    }// end of looping through 8 files;
    
    // getting input from user to display and work accroding to menu options above:
    cin >> userChoice;                                                      
    
    // exiting for input 0
    if (userChoice == 0){                                                   
        exit(0);
    }
    
    // displaying letter frequency counts
    if(userChoice == 1){                                                     
        displayLettersFrequencyCount(lettersCountArr,LIMIT, totalMcbethFiles);
    }
    
    // assigning temporarySortedArray of 9 columns to same content of lettersCountArr until column 8 for further use
    assigningFunction(temporarySortedArray, lettersCountArr, totalMcbethFiles + 1, LIMIT);
    
    // if user chooses menu option 2 or more:
    if(userChoice >= 2){                                                     
        displayLettersFrequencyCount(lettersCountArr, LIMIT, totalMcbethFiles);
        
        // sorting letters acorrding to frequency
        frequencyFunction(lettersCountArr, alphaArray);                      
        
        // function called to display the letter frequency order
        displayLettersFrequencyOrder(alphaArray, LIMIT, totalMcbethFiles);   
        
        // if user chooses menu option 3:
        if(userChoice >= 3){
            cout << "\nCopy and paste a paragraph of text to be analyzed, followed by ^z (PC) or ^d (Mac):";
            intializingLettersArray(lettersArray);
            
// *** Arvan: This section could have been done using functions.
            // taking input and counting letter occurences
            while( cin >> userIn) {
                // convert alphabetic input characters to upper case
                if( isalpha( userIn)) {
                    userIn = toupper( userIn);
                    int index = userIn-'A';
                    lettersArray[ index]++; // update letter count, using the character as the index
                }
            }

            // displaying counts of letters in input
            for ( int i=0; i<LIMIT; i++){
                cout<< char(i+'A')<<": " <<lettersArray[i]<<" ";
            }
            cout<<"\n"<<endl;
    
            // storing counted letters from input into last column of this array
            for (int i=0;i<LIMIT;i++)
            {
                temporarySortedArray[totalMcbethFiles][i]=lettersArray[i];
            }
            
            cout<<endl;
            
            // sending the temporary array to count frequency of user input as well
            frequencyFunction(temporarySortedArray, sortedUserAlphaArray);
            // printing it:
            displayLettersFrequencyOrder(sortedUserAlphaArray, LIMIT, totalMcbethFiles + 1);
            
            if ( userChoice ==4)
            {
// *** Arvan: This section could have been done using functions.
                char langChar, userChar;              // to store the letter from each row to compare
                const int maxThreshold = 4;           //this is the number for updating distance
                int difference = 0;                   // to calculate the difference of indexes
                
                // loop for each language column
                for(int languages=0; languages<totalMcbethFiles; languages++){
                    int wholeColDifference = 0;       // emptying on each iteration to store other column's difference
                    
                    // loop for each letter in a column to compare
                    for(int userColRow=0; userColRow<LIMIT; userColRow++){
                        // storing each letter of user column particular index to compare
                        userChar = sortedUserAlphaArray[totalMcbethFiles][userColRow];  
                        
                        // loop for each letter in a column to compare
                        for (int langColRow = 0; langColRow < LIMIT; langColRow++){
                            
                            // storing each letter of particular index to compare
                            langChar = sortedUserAlphaArray[languages][langColRow];     
                            
                            if (userChar == langChar){
                                // finding absolute diffrence between columns same letters
                                difference = abs(userColRow - langColRow);              

                                if (difference <=maxThreshold){
                                    // if the difference less the 4 then assigng it to 0 which will
                                    // help keeping the diffrence count low and helping estimating the language
                                    difference =0;                                       
                                }
                            }
                            else{                                                       
                                // if diffrent letter then continuing to next letter
                                continue;
                            }
                            
                            // adding all diffrences of the column into one variable
                            wholeColDifference += difference;                           
                        } // end of third for loop
                    } // end of second for loop
                    
                    if (wholeColDifference < trueMin){ 
                        // assigning the trueMin to the most minimum diffrence of all languages
                        trueMin = wholeColDifference;
                    }
                    // storing the each language differnce to this array
                    differenceArray[languages] = wholeColDifference;                   
                } // end of first for loop
                
                // string array containg the language names
                string languageName[totalMcbethFiles]={"Language is English","Language is Finnish","Language is French",
                                                       "Language is German","Language is Hungarian","Language is Italian",
                                                       "Language is Portuguese","Language is Spanish"};
                
                // this loop prints the name of the language from languageName
                // having same index as of the minimum number containg index in differenceArray
                for (int row=0; row<totalMcbethFiles; row++){
                    if (differenceArray[row] == trueMin){
                        cout << languageName[row];
                    }
                } // end of loop determing the language
            } // if statement of input 4 ends
        } // if statement of input  3 ends
    } // if statement of input 2 ends
    
    return 0;     //keeping c++ happy
}                 //end main()

