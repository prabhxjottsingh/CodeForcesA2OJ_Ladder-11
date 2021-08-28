

Ternary numeric notation is quite popular in Berland. To telegraph the ternary number the Borze alphabet is used. Digit 0 is transmitted as «.», 1 as «-.» and 2 as «--». You are to decode the Borze code, i.e. to find out the ternary number given its representation in Borze alphabet.

Input
The first line contains a number in Borze code. The length of the string is between 1 and 200 characters. It's guaranteed that the given string
is a valid Borze code of some ternary number (this number can have leading zeroes).

Output
Output the decoded ternary number. It can have leading zeroes.

Examples

input
.-.--
output
012

input
--.
output
20

input
-..-.--
output
1012

Problem Link:
https://codeforces.com/problemset/problem/32/B




#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    string ans;
    cin>>s;
    for(int i=0; i<s.length(); i++){
      if(s[i]=='.')
        ans = ans + '0';
      if(s[i]=='-' && s[i+1]=='.'){
        ans = ans + '1';
        i++;
      }
      if(s[i]=='-' && s[i+1]=='-'){
        ans = ans + '2';
        i++;
      }
    }
    cout<<ans;
    return 0;
}