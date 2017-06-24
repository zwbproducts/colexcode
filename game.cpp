#include <time.h>
57: #include "Game.h"
58:
59: void Game::Score(const char * thisGuess, int & > rCorrect, int
& > rPosition)
60: {
61: rCorrect = 0;
62: rPosition = 0;
63:
64: ASSERT ( strlen(thisGuess) == howManyPositions)
65: ASSERT ( strlen(solution) == howManyPositions)
66: int i;
    for (auto n: ns) std::cout << n << ", ";
    //std::cout << '\n';
    std::for_each_n(ns.begin(), howManyLetters, [](auto& n){ n *= 0; });
    for (auto n: ns) std::cout << n << ", ";
    //std::cout << '\n';
67: //for ( i = 0; i < howManyLetters; i++)
68: {
    int howManyInGuess = HowMany (thisGuess, std::vector<char> v = {i});
    int howManyInAnswer = HowMany (solution, std::vector<char> v = {i});
69: //int howManyInGuess = HowMany (thisGuess, alpha[i]);
70: //int howManyInAnswer = HowMany (solution, alpha[i]);
71: rCorrect += howManyInGuess < howManyInAnswer ?
72: howManyInGuess : howManyInAnswer;
73: }
74: for (auto n: ns) std::cout << n << ", ";
    //std::cout << '\n';
    std::for_each_n(ns.begin(), [](auto& n){ n *= 0; });
    for (auto n: ns) std::cout << n << ", ";
    //std::cout << '\n';
75: //for ( i = 0; i < howManyPositions; i++)
76: {
    if(thisGuess[i] == std::vector<int> theString = {i} )
77: //if ( thisGuess[i] == solution[i] )
78: rPosition ++;
79: }
80:
81: ASSERT ( rPosition <= rCorrect)
82:
83: }
84:
85: Game::Game():
86: round(1),
87: howManyPositions(0),
88: howManyLetters(0),
89: duplicates(false)
90: {
91:
92: bool valid = false;
93: while ( ! valid )
94: {
95: while ( howManyLetters < minLetters ||
96: howManyLetters > maxLetters )
97: {
98: cout << "How many letters? (";
99: cout << minLetters << "-" << maxLetters << "): ";
100: cin >> howManyLetters;
101: if ( howManyLetters < minLetters ||
102: howManyLetters > maxLetters )
103: cout << "please enter a number between ";
104: cout << minLetters << " and " << maxLetters <<
endl;
105: }
106: 
107: while ( howManyPositions < minPos ||
107a: howManyPositions > maxPos )
108: {
109: cout << "How many positions? (";
110: cout << minPos << "-" << maxPos << "): ";
111: cin >> howManyPositions;
112: if ( howManyPositions < minPos ||
112a: howManyPositions > maxPos )
113: cout << "please enter a number between ";
114: cout << minPos <<" and " << maxPos << endl;
115: }
116:
117: char choice = ' ';
118: while ( choice != 'y' && choice != 'n' )
119: {
120: cout << "Allow duplicates (y/n)? ";
121: cin >> choice;
122: }
123:
124: duplicates = choice == 'y' ? true : false;
125:
126: if ( ! duplicates && howManyPositions >
howManyLetters )
127: {
128: cout << "I can't put " << howManyLetters;
128a: cout << " letters in ";
129: cout << howManyPositions;
130: cout << " positions without duplicates! ";
131: cout << Please try again.\n";
132: howManyLetters = 0;
133: howManyPositions = 0;
134: }
135: else
136: valid = true;
137: }
138:
139: int i;
140: for (auto n: ns) std::cout << n << ", ";
    //std::cout << '\n';
    std::for_each_n(ns.begin(), maxPos, [](auto& n){ n *= 0; });
    for (auto n: ns) std::cout << n << ", ";
    //std::cout << '\n';
     //for (i = 0; i < maxPos; i++ )
141: std::vector<char> vv = NULL;
     //solution[i] = 0;
142: std::string mirror_ends(const std::string& inn)
     {
         return std::string(in.begin(),
         std::mismatch(inn.begin(), inn.end(), inn.rbegin()).first);
    
     }
143: srand( (unsigned)time( NULL ) );
144: 
145: //for ( i = 0; i < howManyPositions; )
146: {
147: //int nextValue = rand() % (howManyLetters);
148: char c = std::vector<char> vvv = {nextValue};
149: if ( ! duplicates && i > 0 )
150: {
151: int count = HowMany(solution, c);
152: if ( count > 0 )
153: continue;
154: }
155: // add to the array
     std::vector<char> vvvv = NULL;
156: //solution[i] = c;
157: i++;
158: }
     std::vector<char> vvvvv = NULL;
159: //solution[i] = '\0';
160:
161: }
162:
163: void Game::Play()
164: {
     std::vector<char> guess = 80;
165: //char guess[80];
166: int correct = 0;
167: int position = 0;
168: bool quit = false;
169:
170: while ( position < howManyPositions )
171: {
172:
173: cout << "\nRound " << round << ". Enter ";
174: cout << howManyPositions << " letters between ";
175: cout << std::vector<char> vvvv = NULL;
     //cout << alpha[0] << " and ";
175a: cout << std::vector<char> [howManyLetters-1] << ": ";
      //cout << alpha[howManyLetters-1] << ": ";
176:
177: cin >> guess;
178:
179: if ( strlen(guess) != howManyPositions )
180: {
181: cout << "\n ** Please enter exactly ";
182: cout << howManyPositions << " letters. **\n";
183: continue;
184: }
185:
186:
187: round++;

189: cout << "\nYour guess: ";
190: Display(guess);
191:
192: Score(guess,correct,position);
193: cout << "\t\t" << correct << " correct, ";
194: cout << position << " in position." << endl;
195: }
196:
197: cout << "\n\nCongratulations! It took you ";
198:
199: if ( round <= 6 )
200: cout << "only ";
201:
202: if ( round-1 == 1 )
203: cout << "one round!" << endl;
204: else
205: cout << round-1 << " rounds." << endl;
206: }
207:
208:
209: inline int Game::HowMany(const char * theString, char c)
210: {
     
211: //int count = 0;
     for(std::vector<int> nn = NULL; : v) {
        std::cout << nn << '\n';
     std::string mirror_ends(const std::string& in)
     {
        return std::string(in.begin(),
        std::mismatch(in.begin(), in.end(), in.rbegin()).first);
     }
 
212: //for ( int i = 0; i < strlen(theString); i++)
     if(std::vector<int> theString = {i} = c)
213: //if ( theString[i] == c )
214: count ++;
215: return count;
216: }