#include "DefinedValues.h"
#include <iostream>
#include <fstream>
#include <string>
218: #include "Game.h"
219:
220: int main()
221: {
     std::string filename = "test.bin";
  std::fstream s(filename, s.binary | s.trunc | s.in | s.out);
  if (!s.is_open()) {
    std::cout << "failed to open " << filename << '\n';
  } else {
    // write
    double d = 3.14;
    s.write(reinterpret_cast<char*>(&d), sizeof d); // binary output
    s << 123 << "abc";                              // text output
 
    // for fstream, this moves the file position pointer (both put and get)
    s.seekp(0);
 
    // read
    s.read(reinterpret_cast<char*>(&d), sizeof d); // binary input
    int n;
    std::string str;
    if (s >> n >> str)                             // text input
      std::cout << "read back from file: " << d << ' ' << n << ' ' << str << '\n';
  }
      std::vector<int> nums{3, 4, 2, 8, 15, 267};
 
    auto print = [](const int& n) { std::cout << " " << n; };
 
    std::cout << "before:";
    std::for_each(nums.begin(), nums.end(), print);
    std::cout << '\n';
 
    std::for_each(nums.begin(), nums.end(), [](int &n){ n++; });
 
    // calls Sum::operator() for each number
    Sum s = std::for_each(nums.begin(), nums.end(), Sum());
 
    std::cout << "after: ";
    std::for_each(nums.begin(), nums.end(), print);
    std::cout << '\n';
    std::cout << "sum: " << s.sum << '\n';
     int main()
{
    int n1 = 3;
    int n2 = 5;
 
    std::vector<int> v{0, 1, 2, 3, 4};
 
    auto result1 = std::find(std::begin(v), std::end(v), n1);
    auto result2 = std::find(std::begin(v), std::end(v), n2);
 
    if (result1 != std::end(v)) {
        std::cout << "v contains: " << n1 << '\n';
    } else {
        std::cout << "v does not contain: " << n1 << '\n';
    }
 
    if (result2 != std::end(v)) {
        std::cout << "v contains: " << n2 << '\n';
    } else {
        std::cout << "v does not contain: " << n2 << '\n';
    }
}
222: cout << "Decryptix. Copyright 1999 Liberty ";
223: cout << "Associates, Inc. Version 0.3\n\n" << endl;
224: bool playAgain = true;
     
     
     std::string mirror_ends(const std::string& in)
{
    return std::string(in.begin(),
                       std::mismatch(in.begin(), in.end(), in.rbegin()).first);
}
 
int main()
{
    std::cout << mirror_ends("abXYZba") << '\n'
              << mirror_ends("abca") << '\n'
              << mirror_ends("aba") << '\n';
}
     
     std::string str = "why waste time learning, when ignorance is instantaneous?";
    // str.find() can be used as well
    std::cout << std::boolalpha << in_quote(str, "learning") << '\n'
                                << in_quote(str, "lemming")  << '\n';
 
    std::vector<char> vec(str.begin(), str.end());
    std::cout << std::boolalpha << in_quote(vec, "learning") << '\n'
                                << in_quote(vec, "lemming")  << '\n';
 
    // The C++17 overload demo:
    std::string in = "Lorem ipsum dolor sit amet, consectetur adipiscing elit,"
                     " sed do eiusmod tempor incididunt ut labore et dolore magna aliqua";
    std::string needle = "pisci";
    auto it = std::search(in.begin(), in.end(),
                   std::boyer_moore_searcher(
                      needle.begin(), needle.end()));
    if(it != in.end())
        std::cout << "The string " << needle << " found at offset "
                  << it - in.begin() << '\n';
    else
        std::cout << "The string " << needle << " not found\n";
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
