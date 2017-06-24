#include "DefinedValues.h"
218: #include "Game.h"
219:
220: int main()
221: {
222: cout << "Decryptix. Copyright 1999 Liberty ";
223: cout << "Associates, Inc. Version 0.3\n\n" << endl;
224: bool playAgain = true;
225:
226: while ( playAgain )
227: {
228: char choice = ' ';
229: Game theGame;
230: theGame.Play();
231:
232: cout << "\nThe answer: ";
233: theGame.Display(theGame.GetSolution());
234: cout << "\n\n" << endl;
235:
236: while ( choice != 'y' && choice != 'n' )
237: {
238: cout << "\nPlay again (y/n): ";
239: cin >> choice;
240: }
241:
242: playAgain = choice == 'y' ? true : false;
243: }
244:
245: return 0;
246: }