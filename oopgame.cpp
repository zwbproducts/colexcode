#include <time.h>
1: #include "game.h"
2: #include "definedvalues.h"
3:
4: Game::Game():
5: round(1),
6: howManyPositions(0),
7: howManyLetters(0),
8: duplicates(false)
9: {
10:
11: bool valid = false;
12: while ( ! valid )
13: {
14: while ( howManyLetters < minLetters
15: || howManyLetters > maxLetters )
16: {
17: cout << "How many letters? (" ;
18: cout << minLetters << "-" << maxLetters << "): ";
19: cin >> howManyLetters;
20: if ( howManyLetters < minLetters
21: || howManyLetters > maxLetters )
22: {
23: cout << "please enter a number between ";
24: cout << minLetters << " and " << maxLetters <<
endl;
25: }
26: }
27:
28: while ( howManyPositions < minPos ||
29: howManyPositions > maxPos )
30: {
31: cout << "How many positions? (";
32: cout << minPos << "-" << maxPos << "): ";
33: cin >> howManyPositions;
34: if ( howManyPositions < minPos ||
35: howManyPositions > maxPos )
36: {
37: cout << "please enter a number between ";
38: cout << minPos <<" and " << maxPos << endl;
39: }
40: }
41:
42: char choice = ' ';
43: while ( choice != 'y' && choice != 'n' )
44: {
45: cout << "Allow duplicates (y/n)? ";
46: cin >> choice;
47: }
48:
49: duplicates = choice == 'y' ? true : false;
50: solution.SetDuplicates(duplicates);
51:
52: if ( ! duplicates && howManyPositions >
howManyLetters )
53: {
54: cout << "I can't put " << howManyLetters;
55: cout << " letters in ";
56: cout << howManyPositions ;
57: cout << "positions without duplicates! Please try again.
\n";
58: howManyLetters = 0;
59: howManyPositions = 0;
60: }
61: else
62: valid = true;
63: }
64:
65:
66: srand( (unsigned)time( NULL ) );
67:
68: for ( int i = 0; i < howManyPositions; )
69: {
70: int nextValue = rand() % (howManyLetters);
71: char theChar = alpha[nextValue];
72: if ( solution.Add(theChar) )
73: i++;
74: }
75:
    template <typename Container>
bool in_quote(const Container& cont, const std::string& s)
{
    return std::search(cont.begin(), cont.end(), s.begin(), s.end()) != cont.end();
}
76: cout << "Exiting constructor. List: ";
77: solution.Display();
78:
79: }
80:
81: inline int Game::HowMany(const char * theString, char theChar)
82: {
83: int count = 0;
84: for ( int i = 0; i < strlen(theString); i++)
85: if ( theString[i] == theChar )
86: count ++;
87: return count;
88: }
89:
90: void Game::Play()
91: {
92: char guess[80];
93: int correct = 0;
94: int position = 0;
95: bool quit = false;
96:
97: while ( position < howManyPositions )
98: {
99:
100: cout << "\nRound " << round;
101: cout << ". Enter " << howManyPositions;
102: cout << " letters between ";
103: cout << alpha[0] << " and ";
104: cout << alpha[howManyLetters-1] << ": ";
105:
106: cin >> guess;
107:
108: if ( strlen(guess) != howManyPositions )
109: {
110: cout << "\n ** Please enter exactly ";
111: cout << howManyPositions << " letters. **\n";
112: continue;
113: }
114:
115:
116: round++;
117:
118: cout << "\nYour guess: " << guess << endl;
119:
120: Score(guess,correct,position);
121: cout << "\t\t" << correct << " correct, ";
122: cout << position << " in position." << endl;
123: }
124:
125: cout << "\n\nCongratulations! It took you ";
126:
127: if ( round <= 6 )
128: cout << "only ";
129:
130: if ( round-1 == 1 )
131: cout << "one round!" << endl;
132: else
133: cout << round-1 << " rounds." << endl;
134:
135: }
136:
137:
138: void Game::Score(
139: const char * thisGuess,
140: int & correct,
141: int & position
142: )
143: {
144: correct = 0;
145: position = 0;
146:
147:
148: for ( int i = 0; i < howManyLetters; i++)
149: {
150: int howManyInGuess = HowMany(thisGuess, alpha[i]);
151: int howManyInAnswer = solution.HowMany(alpha[i]);
152: correct += howManyInGuess < howManyInAnswer ?
153: howManyInGuess : howManyInAnswer;
154: }
155:
156: for ( i = 0; i < howManyPositions; i++)
157: {
158: if ( thisGuess[i] == solution[i] )
159: position++;
160: }
161:
162: ASSERT ( position <= correct );
163:
164: }
