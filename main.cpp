/* 
 * File:   main.cpp
 * Author: sean
 */
#include <std_lib_facilities.h>
//get first char in each word.
string get_char(string::size_type cnt, string s, string holder)
{
    for (cnt = 0; cnt != s.size(); ++cnt) 
    {
        if (isalpha(s[cnt - 1]) != isalpha(s[cnt]) &&
                !ispunct(s[cnt - 1] && !ispunct(s[cnt]))) 
        {
            holder += s[cnt];
        }
    }
    return holder;
}
int main() {
    /*  Work on figuring out how to fix minor, 
     *  errors like '[rogram' and 'h.ow'.  
     */
    string::size_type stct = 0;
    string s = "ENTER YOUR OWN SENTENCE HERE this is also test-text"
            " for ,my little. [rogram to see h.ow it works and what"
            " to debug for";
    string hold;
    cout << get_char(stct, s, hold) << endl;
    //current result: 
    // .. 
    //E Y O S H t i a t-t f m l.r t s h.o i w a w t d f
}
