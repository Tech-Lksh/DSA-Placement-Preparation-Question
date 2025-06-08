#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 // Subsequence of String Mtlb App isme se koi bhi element remove kr skte hai pr orede mantain hona chahiye

 void findSubsequences(string str, string output, int index) {
    // Base case
    if(index >= str.length()) {
        // Ans ban chuka hai is print kar do
        cout<< "-> " << output << endl;
        return;
    }

    // processing
    char ch = str[index];

    // Exclude Case
    findSubsequences(str, output, index+1);

    // Include Case
    output.push_back(ch);
    findSubsequences(str, output, index+1);


    /*
    include
    output.push_back(ch);
    findSubsequences(str, output, index+1);

    exclude
    output.pop_back();
    findSubsequences(str, output, index+1);
    */
 }
int main()
{
    string str = "abc";
    string output = "";
    int index = 0;

    findSubsequences(str, output, index);
    
    return 0;
}


// output : ->
// -> c
// -> b
// -> bc
// -> a
// -> ac
// -> ab
// -> abc