#include <iostream>
#include <string>

using namespace std;

class TreeNode
{
public:
	TreeNode(const string &s = string()) :count(0), left(new TreeNode(s)), right(new TreeNode(s)) {}
	TreeNode(const TreeNode&);
	TreeNode& operator=(const TreeNode&);
	~TreeNode();
private:
	string value;
	int count;
	TreeNode *left;
	TreeNode *right;
};

class BinStrTree
{
public:
	BinStrTree() :root(new TreeNode()) {}
	BinStrTree(const BinStrTree&);
	BinStrTree& operator=(const BinStrTree&);
	~BinStrTree();
private:
	TreeNode * root;
};

TreeNode::TreeNode(const TreeNode& t) :count(t.count), left(t.left), right(t.right)
{
	++count;
}

TreeNode& TreeNode::operator=(const TreeNode& t)
{
	++count;
	if (count == 0)
	{
		delete left;
		delete right;
	}
	value = t.value;
	count = t.count;
	left = t.left;
	right = t.right;
	return *this;
}

TreeNode::~TreeNode()
{
	if (count == 0)
	{
		delete left;
		delete right;
	}
}

BinStrTree::BinStrTree(const BinStrTree& b) :root(b.root) {}

BinStrTree& BinStrTree::operator=(const BinStrTree& b)
{
	root = b.root;
	return *this;
}

BinStrTree::~BinStrTree()
{
	delete root;
}

int main()
{
	return 0;
}