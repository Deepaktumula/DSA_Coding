// METHOD - 1 (Using 2 For Loops)

// #include <iostream>
// #include <vector>
// using namespace std;

// string longestCommonPrefix(vector<string> &strs)
// {
//     string ans = "";

//     // Loop on First String
//     for (int i = 0; i < strs[0].length(); i++)
//     {
//         char ch = strs[0][i];
//         bool match = true;

//         // Compare this Character with all remaining Strings in strs
//         for (int j = 1; j < strs.size(); j++)
//         {
//             if (strs[j].size() < i || ch != strs[j][i])
//             {
//                 match = false;
//                 break;
//             }
//         }
//         if (match == false)
//         {
//             break;
//         }
//         else
//         {
//             ans.push_back(ch);
//         }
//     }
//     return ans;
// }

// int main()
// {
//     vector<string> strs{"deepak", "deer", "deenesh", "deewali"};
//     string ans = longestCommonPrefix(strs);
//     cout << "Longest Common Prefix :: " << ans << endl;
//     return 0;
// }

// METHOD - 2 (Using Tries)

#include <iostream>
#include <vector>
using namespace std;

class TrieNode
{
public:
    char data;
    TrieNode *children[26];
    bool isTerminal;
    int childCount;

    TrieNode(char d)
    {
        this->data = d;

        for (int i = 0; i < 26; i++)
        {
            children[i] = NULL;
        }
        childCount = 0;
        this->isTerminal = false;
    }
};

void insertWord(TrieNode *root, string Word)
{
    // Base Case
    if (Word.length() == 0)
    {
        root->isTerminal = true;
        return;
    }

    char ch = Word[0];
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
        root->childCount++;
        root->children[index] = child;
    }
    // Recursion Sambhal lega
    insertWord(child, Word.substr(1));
}

bool searchWord(TrieNode *root, string Word)
{
    // Base Case
    if (Word.length() == 0)
    {
        return root->isTerminal;
    }

    char ch = Word[0];
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
    // Recursive Relation
    searchWord(child, Word.substr(1));
}

void longestCommonPrefix_helper(TrieNode *root, string first, string &ans)
{
    if (root->isTerminal)
    {
        return;
    }
    for (int i = 0; i < first.length(); i++)
    {
        char ch = first[i];

        if (root->childCount == 1)
        {
            ans.push_back(ch);
            int index = ch - 'a';
            root = root->children[index];
        }
        else
        {
            break;
        }
        if (root->isTerminal)
        {
            break;
        }
    }
}

string longestCommonPrefix(vector<string> &strs)
{
    TrieNode *root = new TrieNode('-');

    // insertStrings
    for (int i = 0; i < strs.size(); i++)
    {
        insertWord(root, strs[i]);
    }

    string ans = "";
    string first = strs[0];
    longestCommonPrefix_helper(root, first, ans);
    return ans;
}

int main()
{
    vector<string> strs{"deepak", "deer", "deenesh", "deewali"};
    string ans = longestCommonPrefix(strs);
    cout << "Longest Common Prefix :: " << ans << endl;
    return 0;
}