/*

Capitalization is writing a word with its first letter as a capital letter. Your task is to capitalize the given word.

Note, that during capitalization all the letters except the first one remains unchanged.

Input
A single line contains a non-empty word. This word consists of lowercase and uppercase English letters. The length of the word will not exceed 103.

Output
Output the given word after capitalization.

Examples


input
ApPLe
output
ApPLe

input
konjac
output
Konjac

Problem Link:
https://codeforces.com/problemset/problem/281/A

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    string s2;
    int countu = 0, countl = 0;
    cin >> str;
    if (islower(str[0]))
        str[0] = toupper(str[0]);
    cout << str;
    return 0;
}