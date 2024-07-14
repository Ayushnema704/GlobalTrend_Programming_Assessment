#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Codec {
public:
    string serialize(TreeNode* root) {
        ostringstream out;
        serializeHelper(root, out);
        return out.str();
    }

    TreeNode* deserialize(const string &data) {
        istringstream in(data);
        return deserializeHelper(in);
    }

private:
    void serializeHelper(TreeNode* node,ostringstream &out) {
        if (node == nullptr) {
            out << "# ";
            return;
        }
        out << node->val << " ";
        serializeHelper(node->left, out);
        serializeHelper(node->right, out);
    }

    TreeNode* deserializeHelper(istringstream &in) {
        string val;
        in >> val;
        if (val == "#") {
            return nullptr;
        }
        TreeNode* node = new TreeNode(stoi(val));
        node->left = deserializeHelper(in);
        node->right = deserializeHelper(in);
        return node;
    }
};

int main() {
    Codec codec;
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->right->left = new TreeNode(4);
    root->right->right = new TreeNode(5);

    string serialized = codec.serialize(root);
    cout << "Serialized tree: " << serialized << endl;

    TreeNode* deserializedRoot = codec.deserialize(serialized);
    string reSerialized = codec.serialize(deserializedRoot);
    cout << "Re-Serialized tree: " << reSerialized << endl;

    return 0;
}
