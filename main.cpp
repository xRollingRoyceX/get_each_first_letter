/* 
 * File:   main.cpp11
 * Author: sean
 */
#include <std_lib_facilities.h>
#include <exception>
//get first char in each word.
const string get_char(string::size_type cnt, string &s, string s_holder)
{
    if (!s.empty()) 
    {
        //go through the string
        for (cnt = 0; cnt != s.size(); ++cnt) 
        {
            //If current char is not the same, AND if its not a punct. mark. 
            if (isalpha(s[cnt - 1]) != isalpha(s[cnt]) && !ispunct(s[cnt]) && !isdigit(s[cnt])) 
            {
                //store first letter from each word 
                s_holder += s[cnt];
            }
        }
    }else{
        throw std::runtime_error("Error... -> Invalid inputs <-");
    }
    // ... I should haven't even have commented the purpose of the previous code...
    return s_holder;
}
int main()
{
    string::size_type stct = 0;
    //this sentence works as a way to test the waters of the function
     string s = "A paragraph is a group of words put together to form a "
            "group that is usually longer than a sentence. Paragraphs are "
            "often made up of many sentences. They are usually between four "
            "to eight sentences. Paragraphs can begin with an indentation "
            "(about five spaces), or by missing a line out, and then starting "
            "again; this makes telling when one paragraph ends and another "
            "begins easier.";
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


//.............................................................................................................
//                                      //BREAK: just cause 'code', disregard. (My notes in a way)
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
   
