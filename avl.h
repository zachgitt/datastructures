#ifndef AVL_HEADER
#define AVL_HEADER

class Node {
public:
	Node();
	~Node();
	Node *left;
	Node *right;
	int val;	
};

class Map {
private:
	Node *root;	

public:
	Map();
	~Map();
	int find(int key);
	void update(int key, int value);
	void insert(int key, int value);
};

#endif
