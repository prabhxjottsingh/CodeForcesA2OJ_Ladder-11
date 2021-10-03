/*

Lenny is playing a game on a 3 × 3 grid of lights. In the beginning of the game all lights are switched on. Pressing any of the lights will toggle it and all side-adjacent lights. The goal of the game is to switch all the lights off. We consider the toggling as follows: if the light was switched on then it will be switched off, if it was switched off then it will be switched on.

Lenny has spent some time playing with the grid and by now he has pressed each light a certain number of times. Given the number of times each light is pressed, you have to print the current state of each light.

Input
The input consists of three rows. Each row contains three integers each between 0 to 100 inclusive. The j-th number in the i-th row is the number of times the j-th light of the i-th row of the grid is pressed.

Output
Print three lines, each containing three characters. The j-th character of the i-th line is "1" if and only if the corresponding light is switched on, otherwise it's "0".

Examples


input
1 0 0
0 0 0
0 0 1
output
001
010
100

input
1 0 1
8 8 8
2 0 3
output
010
011
100

Problem Link:
https://codeforces.com/problemset/problem/275/A

*/

#include <bits/stdc++.h>
using namespace std;

void change(int &x)
{
    if (x == 1)
        x = 0;
    else if (x == 0)
        x = 1;
}

int main()
{
    int a[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }
    int b[3][3] = {1, 1, 1, 1, 1, 1, 1, 1, 1};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (a[i][j] % 2 != 0)
            {
                if (i != 2)
                    change(b[i + 1][j]);
                if (j != 2)
                    change(b[i][j + 1]);
                change(b[i][j]);
                if (i != 0)
                    change(b[abs(i - 1)][j]);
                if (j != 0)
                    change(b[i][abs(j - 1)]);
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << b[i][j];
        }
        cout << endl;
    }
    return 0;
}
