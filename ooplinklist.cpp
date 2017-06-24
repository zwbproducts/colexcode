#include "LinkedList.h"
1:
2: InternalNode::InternalNode(char theCharacter, Node * next):
3: myChar(theCharacter),nextNode(next)
4: {
5: }
6:
7: InternalNode::~InternalNode()
8: {
9: delete nextNode;
10: }
11:
12: void InternalNode::Display() const
13: {
14: cout << myChar; nextNode->Display();
15: }
16:
17: int InternalNode::HowMany(char theChar) const
18: {
19: int myCount = 0;
20: if ( myChar == theChar )
21: myCount++;
22: return myCount + nextNode->HowMany(theChar);
23: }
24: 
25: Node * InternalNode::Insert(char theCharacter)
26: {
27: nextNode = nextNode->Insert(theCharacter);
28: return this;
29: }
30:
31: char InternalNode::operator[](int offSet)
32: {
33: if ( offSet == 0 )
34: return myChar;
35: else
36: return (*nextNode)[--offSet];
37: }
38:
39:
40: int TailNode::HowMany(char theChar) const
41: {
42: return 0;
43: }
44:
45: Node * TailNode::Insert(char theChar)
46: {
47: return new InternalNode(theChar, this);
48: }
49:
50: char TailNode::operator[](int offset)
51: {
52: ASSERT(false);
53: return ' ';
54: }
55:
56:
57:
58: LinkedList::LinkedList():
59: duplicates(true)
60: {
61: nextNode = new TailNode;
62: }
63:
64: LinkedList::~LinkedList()
65: {
66: delete nextNode;
67: }
68:
69: void LinkedList::Display() const
70: {
71: nextNode->Display();
72: }
73:
74: int LinkedList::HowMany(char theChar) const
75: {
76: return nextNode->HowMany(theChar);
77: }
78:
79: Node * LinkedList::Insert(char theChar)
80: {
81: nextNode = nextNode->Insert(theChar);
82: return nextNode;
83: }
84:
85: char LinkedList::operator[](int offSet)
86: {
87: return (*nextNode)[offSet];
88: }
89:
90:
91:
92: bool LinkedList::Add(char theChar)
93: {
94: if ( duplicates || HowMany(theChar) == 0 )
95: {
96: Insert(theChar);
97: return true;
98: }
99: else
100: return false;
101: }
102:
103:
104: void LinkedList::SetDuplicates(bool dupes)
105: {
106: duplicates = dupes;
107: }