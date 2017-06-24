#ifndef LINKEDLIST_H
1: #define LINKEDLIST_H
2:
3: #include "DefinedValues.h"
4:
5: class Node // abstract data type
6: {
7: public:
8: Node(){}
9: virtual ~Node() {}
10: virtual void Display() const { }
11: virtual int HowMany(char c) const = 0;
12: virtual Node * Insert(char theCharacter) = 0;
13: virtual char operator[](int offset) = 0;
14: private:
15: };
16:
17: class InternalNode: public Node
18: {
19: public:
20: InternalNode(char theCharacter, Node * next);
21: virtual ~InternalNode();
22: virtual void Display() const;
23: virtual int HowMany(char c) const;
24: virtual Node * Insert(char theCharacter);
25: virtual char operator[](int offset);
26:
27: private:
28: char myChar;
29: Node * nextNode;
30: };
31:
32: class TailNode : public Node
33: {
34: public:
35: TailNode(){}
36: virtual ~TailNode(){}
37: virtual int HowMany(char c) const;
38: virtual Node * Insert(char theCharacter);
39: virtual char operator[](int offset);
40:
41: private:
42:
43: };
44:
45: class LinkedList : public Node
46: {
47: public:
48: LinkedList();
49: virtual ~LinkedList();
50: virtual void Display() const;
51: virtual int HowMany(char c) const;
52: virtual char operator[](int offset);
53:
54: bool Add(char c);
55: void SetDuplicates(bool dupes);
56:
57: private:
58: Node * Insert(char c);
59: bool duplicates;
60: Node * nextNode;
61: };
62:
63: #endif