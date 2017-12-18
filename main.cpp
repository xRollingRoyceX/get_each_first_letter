
#include <std_lib_facilities.h>
#include <exception>
//get first char in each word.
const string get_char(string::size_type cnt, string &s, string s_holder, const unsigned &spaces = 1) {
    if (!s.empty()) {
        //go through the string
        for (cnt = 0; cnt != s.size(); ++cnt) {
            //If current char is not the same, AND if its not a punct. mark. 
            if (isalpha(s[cnt - spaces]) != isalpha(s[cnt]) && !ispunct(s[cnt]) && !isdigit(s[cnt])) {
                //store first letter from each word 
                s_holder += s[cnt];
            }
        }
    } else {
        throw std::runtime_error("Error... -> Invalid inputs <-");
    }
    // ... I should haven't even have commented the purpose of the previous code...
    return s_holder;
}

int main() {
    string::size_type stct = 0;
    string s = "A paragraph is a group of words put together to form a "
            " group that is usually longer than a sentence. Paragraphs are"
            " often made up of many sentences. They are usually between four"
            " to eight sentences. Paragraphs can begin with an indentation"
            " (about five spaces), or by missing a line out, and then starting"
            " again; this makes telling when one paragraph ends and another"
            " begins easier. In most organized forms of writing, such as essays,"
            " paragraphs contain a topic sentence . This topic sentence of the"
            " paragraph tells the reader what the paragraph will be about. Essays"
            " usually have multiple paragraphs that make claims to support"
            " a thesis statement, which is the central idea of the essay."
            " A pilcrow mark (¶) is sometimes used to show where a paragraph begins."
            " Paragraphs are important to essays, papers, columns, whatever"
            " you are writing. Paragraphs help separate ideas and let the"
            " audience know when you change partial topics."
            " Each paragraph has maybe an average of 3 - 7 sentences, "
            "depending on the topic and how much information is required.";

    string hold;
    cout << get_char(stct, s, hold) << endl;
}
