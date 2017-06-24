#include "List0606_LL.h"
1:
2: class Game
3: {
4: public:
5: Game ();
6: ~Game () {}
7: void Display (const LinkedList * pList) const
7a: { pList->Display(); }
8: const LinkedList & GetSolution () const { return
solution; }
9: void Play ();
10: void Score (const char * thisGuess, int &
10a: correct, int & position);
11:
12: private:
13: int HowMany (const char * theString, char theChar);
14:
15: bool duplicates;
16: int howManyLetters;
17: int howManyPositions;
18: int round;
19: LinkedList solution;
20: };
