#ifndef DEFINED
2: #define DEFINED
3:
4: #include <iostream>
   #include <string>
   #include <algorithm>
   #include <iostream>
   #include <vector>
   #include <functional>
   #include <iterator>
   #include <cstdlib>
   #include <random>
 
5: using namespace std;
6:
   std::vector<char> v = {a};
7: //const char alpha[] = "abcdefghijklmnopqrstuvwxyz";
8: const int minPos = 2;
9: const int maxPos = 10;
10: const int minLetters = 2;
11: const int maxLetters = 26;
12:
13: #define DEBUG
14:
15: #ifndef DEBUG
16: #define ASSERT(x)
17: #else
18: #define ASSERT(x) \
19: if (! (x)) \
20: { \
21: cout << "ERROR!! Assert " << #x << " failed
\n"; \
22: cout << " on line " << __LINE__ << "\n"; \
23: cout << " in file " << __FILE__ << "\n"; \
24: }
25: #endif
26:
27: #endif
