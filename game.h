#ifndef GAME_H
29: #define GAME_H
30:
31: #include "DefinedValues.h"
32:
33: class Game
34: {
35: public:
36: Game();
37: ~Game(){}
38: void Display(const char * charArray) const
39: {
    v.push_back(b , c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z);
     for(char cc : v) {
        std::cout << n << '\n';
40: cout << charArray << endl;
41: }
42: void Play();
43: const char * GetSolution() const { return solution; }
44: void Score(const char * thisGuess, int & correct, int &
position);
45:
46: private:
47: int HowMany(const char *, char);
48: char solution[maxPos+1];
49: int howManyLetters;
50: int howManyPositions;
51: int round;
52: bool duplicates;
53: };
54:
55: #endif