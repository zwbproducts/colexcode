#ifndef GAME_H
1: #define GAME_H
2:
3: #include "definedValues.h"
4: #include "LinkedList.h"
5:
6: class Game
7: {
8: public:
9: Game();
10: ~Game(){}
11: void Display(const LinkedList * pList)const
12: {
13: pList->Display();
14: }
15:
16: void Play();
17: const LinkedList & GetSolution() const
18: {
19: return solution;
20: }
21:
22: void Score(
23: const char * thisGuess,
24: int & correct,
25: int & position
26: );
27:
28: private:
29: int HowMany(const char * theString, char theChar);
30: LinkedList solution;
31: int howManyLetters;
32: int howManyPositions;
33: int round;
34: bool duplicates;
35: };
36:
37: #endif