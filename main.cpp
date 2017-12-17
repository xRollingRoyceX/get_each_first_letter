/* 
 * File:   main.cpp
 * Author: sean
 */
#include <std_lib_facilities.h>
//get first char in each word.
const string get_char(string::size_type cnt, string &s,string holder)
{
    
    for (cnt = 0; cnt != s.size(); ++cnt) 
    {
        
        if (isalpha(s[cnt - 1]) != isalpha(s[cnt]) && !ispunct(s[cnt])) 
        {
            holder += s[cnt];
        }
    }
    return holder;
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
/*
 * I was explaining numbers and letters on computers to my dad, with a simple example
 * c++ teaches you so much. delete this and line above w/ multi-line comments
    
    char c;
    for(int i = 0; i != 123; ++i){
        cout << ++c;
    }      
 */
   