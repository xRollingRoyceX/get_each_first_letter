/* 
 * File:   main.cpp
 * Author: sean
 */
#include <std_lib_facilities.h>
//get first char in each word.
const string get_char(string::size_type cnt, string &s, string s_holder)
{
    //go through the string
    for (cnt = 0; cnt != s.size(); ++cnt) 
    {
        //If current char is not the same, AND if its not a punct. mark. 
        if (isalpha(s[cnt - 1]) != isalpha(s[cnt]) && !ispunct(s[cnt])) 
        {
            //store first letter from each word 
            s_holder += s[cnt];
        }
    }
    // ... I should haven't even have commented the purpose of the previous code...
    return s_holder;
}
int main()
{
    /*  Work on figuring out how to fix minor, 
     *  errors like '[rogram' and 'h.ow'.  
     */
    string::size_type stct = 0;
    string s = "ENTER YOUR OWN SENTENCE HERE this is also test-text"
            " for ,my little. [rogram to see h.ow it works and what"
            " to debug for";
    string hold;
    cout << get_char(stct, s, hold) << endl;
} 
//Current Result: 
// .....>
//      E Y O S H t i a t-t f m l.r t s h.o i w a w t d f
//After Debugging Issue, Result:) 
// .....>
//      E Y O S H t i a tt f m lr t s ho i w a w t d f

//  quite happy i solved this problem after a small step away from the computer..
//  my error was stupid but worth learning about and seeing how and why.

//..
//  ..                              X X XXXXXYY____Y
//    ............................X======XXXXYYYYYYYY
//  ..                              X X XXXXXYY____Y
//..                                                 

/*
 * I was explaining numbers and letters on computers to my dad, with a simple example
 * c++ teaches you so much. delete this and line above w/ multi-line comments
    
    char c;
    for(int i = 0; i != 123; ++i){
        cout << ++c;
    }      
 */
   
