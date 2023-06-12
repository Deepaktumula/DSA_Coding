#include <iostream>
using namespace std;

class TrieNode
{
public:
    char data;
    TrieNode *children[26];
    bool isTerminal;

    TrieNode(char d)
    {
        this->data = data;
        for (int i = 0; i < 26; i++)
        {
            children[i] = NULL;
        }
        this->isTerminal = false;
    }
};

void insertWord(TrieNode *root, string word)
{
    // Base Case
    if (word.length() == 0)
    {
        root->isTerminal = true;
        return;
    }

    char ch = word[0];
    int index = ch - 'a';
    TrieNode *child;

    // Present
    if (root->children[index] != NULL)
    {
        child = root->children[index];
    }
    else
    {
        // Not Present
        child = new TrieNode(ch);
        root->children[index] = child;
    }
    // Recursion Sambhal lega
    insertWord(child, word.substr(1));
}

bool searchingWord(TrieNode *root, string word)
{
    // Base Case
    if (word.length() == 0)
    {
        return root->isTerminal;
    }

    char ch = word[0];
    int index = ch - 'a';
    TrieNode *child;

    // Present
    if (root->children[index] != NULL)
    {
        child = root->children[index];
    }
    else
    {
        // Not Present
        return false;
    }
    // Recursive Call
    return searchingWord(child, word.substr(1));
}

int main()
{
    TrieNode *root = new TrieNode('-');
    insertWord(root, "coding");
    insertWord(root, "codehelp");
    insertWord(root, "coder");
    insertWord(root, "code");
    if (searchingWord(root, "cod"))
    {
        cout << " Present " << endl;
    }
    else
    {
        cout << " Not Present " << endl;
    }
    return 0;
}