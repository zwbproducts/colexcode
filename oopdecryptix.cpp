#include "definedValues.h"
1: #include "game.h"
2: 
3: int main()
4: {
5:
6: cout << "Decryptix. Copyright 1999 Liberty Associates,";
7: cout << " Inc. Version 0.3\n\n" << endl;
8: bool playAgain = true;
9:
10: while ( playAgain )
11: {
12: char choice = ' ';
13: Game theGame;
14: theGame.Play();
15:
16: cout << "\nThe answer: ";
17: theGame.GetSolution().Display();
18: cout << "\n\n" << endl;
19:
20: while ( choice != 'y' && choice != 'n' )
21: {
22: cout << "\nPlay again (y/n): ";
23: cin >> choice;
24: }
25:
26: playAgain = choice == 'y' ? true : false;
27: }
28:
29: return 0;
30: }