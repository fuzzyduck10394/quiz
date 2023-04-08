#include <fstream>
#include <vector>
using namespace std;

class quiz {
    vector<pair<string, string>> qs;        // question set
    int Q;                                  // number of active lines in file
    string SRC;                             // srcfile's content

    int SCORE;

    /********************************* BUILD *********************************/
    /*basic*/
    string GetExactLine(int);               // getline() but for the exact line in file
    string RawString(string);               // removes blank chars
    bool ActiveLine(string);                // checks if the line is not a comment and is not empty
    pair<string, string> ToQs(string);      // divides a line into a question and it's answer
    // void SetToFalse(bool*, int);            // sets dynamic bool aray to false
                                        
    /*for main*/
    bool CorrectInput(string);              // checks if parts on input are typed correctly 
    vector<int> BegParts();                 // returns a vector of numbers of lines in the file which are beginnings of the parts
    vector<int> MakeParts();                // returns sizes for the parts
                                       
    /*main*/
    void OpenFiles();                       // checks if files are able to open
    void BuildQue(string);                  // writes the vector<pair<string, string>qs using MakeParts() and BegParts() functions



    /********************************* ALGORITHM *********************************/ 
    // TODO: rygorystyczne spacje i capitale
    
    /*basic*/

    /*for main*/
    void MixQs();                           // mixes qs's elements using rand()
    bool AskQuestion(int);                  // 

    /*main*/

    
public:
    quiz();
    void AskParts();                        // gets input
                                            //
    void FirstRound();                      // asks all of the questions in random order
    void Round();                           //
};








































