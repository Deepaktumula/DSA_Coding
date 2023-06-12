#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        Node *left = NULL;
        Node *right = NULL;
    }
};

Node *TreeNode(int data)
{
    if (data == -1)
    {
        return NULL;
    }
    // Create A First Root Node
    Node *root = new Node(data);

    // Left Root Node
    int leftData;
    cout << "Enter the Left Node Data of Node " << data << "::" << endl;
    cin >> leftData;
    root->left = TreeNode(leftData);

    // Right Root Node
    int rightData;
    cout << "Enter the Right Node Data of Node " << data << "::" << endl;
    cin >> rightData;
    root->right = TreeNode(rightData);

    return root;
}

void solve(Node *root, int targetSum, int &currSum, vector<int> &path, vector<vector<int>> &ans)
{
    // Base Case
    if (root == NULL)
    {
        return;
    }

    // Leaf Node
    if (root->left == NULL && root->right == NULL)
    {
        // Include Current Root Val---->Leaf Node Val
        path.push_back(root->data);
        currSum += root->data;

        // Check for targetSum
        if (currSum == targetSum)
        {
            ans.push_back(path);
        }

        // Exclude
        path.pop_back();
        currSum -= root->data;
        return;
    }
    // Include Current Root Value
    path.push_back(root->data);
    currSum += root->data;

    // Recursive Relation
    solve(root->left, targetSum, currSum, path, ans);
    solve(root->right, targetSum, currSum, path, ans);

    // BackTrack
    path.pop_back();
    currSum -= root->data;
}

vector<vector<int>> pathSum(Node *root, int targetSum)
{
    vector<vector<int>> ans;
    int sum = 0;
    vector<int> temp;
    solve(root, targetSum, sum, temp, ans);
    return ans;
}

int main()
{
    Node *root = NULL;
    int data;
    cout << "Enter the Root Node Data ::" << endl;
    cin >> data;
    root = TreeNode(data);

    int targetSum;
    cout << "Enter The TargetSum Value ::" << endl;
    cin >> targetSum;

    vector<vector<int>> pathAns = pathSum(root, targetSum);
    for (int i = 0; i < pathAns.size(); i++)
    {
        for (int j = 0; j < pathAns[i].size(); j++)
        {
            cout << pathAns[i][j] << " ";
        }
        cout << endl; // add new line after each path
    }
    return 0;
}