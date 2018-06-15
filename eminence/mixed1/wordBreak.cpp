// A recursive program to print all possible
// partitions of a given string into dictionary
// words
#include <bits/stdc++.h>
using namespace std;

string *dictionary;

/* A utility function to check whether a word
  is present in dictionary or not.  An array of
  strings is used for dictionary.  Using array
  of strings for dictionary is definitely not
  a good idea. We have used for simplicity of
  the program*/
int dictionaryContains(string &word)
{
    int n = sizeof(dictionary)/sizeof(dictionary[0]);
    for (int i = 0; i < n; i++)
        if (dictionary[i].compare(word) == 0)
            // cout << "true";
            return true;
    return false;
}

//prototype of wordBreakUtil
void wordBreakUtil(string str, int size, string result);

// Prints all possible word breaks of given string
void wordBreak(string str)
{
    // last argument is prefix
    wordBreakUtil(str, str.size(), "");
}

// result store the current prefix with spaces
// between words
void wordBreakUtil(string str, int n, string result)
{
    //Process all prefixes one by one
    for (int i=1; i<=n; i++)
    {
        //extract substring from 0 to i in prefix
        string prefix = str.substr(0, i);

        // if dictionary conatins this prefix, then
        // we check for remaining string. Otherwise
        // we ignore this prefix (there is no else for
        // this if) and try next
        if (dictionaryContains(prefix))
        {
            // if no more elements are there, print it
            if (i == n)
            {
                // cout <<" result";
                // add this element to previous prefix
                result += " ";
                result += prefix;
                cout << result << endl; //print result
                return;
            }
            wordBreakUtil(str.substr(i, n-i), n-i,
                                result + prefix + " ");
        }
    }      //end for

}//end function

int main()
{

  	int n;
    cin >> n;
    dictionary = new string[n];
	  for(int i = 0; i < n; i++){
  	  cin >> dictionary[i];
      // cout << dictionary[i] << endl;
  	}
  	string str;
  	cin >> str;
  	wordBreak(str);

    /*cout << "First Test:\n";
    wordBreak("iloveicecreamandmango");

    cout << "\nSecond Test:\n";
    wordBreak("ilovesamsungmobile");*/
    return 0;
}
