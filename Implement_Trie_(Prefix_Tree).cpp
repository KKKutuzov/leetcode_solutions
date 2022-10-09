class TrieNode{
    public:
    char data;
    map<char, TrieNode*> children;
    bool isTerminal;
        TrieNode(char data){
            this->data = data;
            isTerminal = false;
        }
};
class Trie {
    TrieNode* root;
    void insertWord(TrieNode* root, string word){
        if(word.length() == 0){
            root->isTerminal = true;
            return;
        }
        TrieNode* child;
        if(root->children.find(word[0]) != root->children.end())
            child = root->children[word[0]];
        else{
            root->children[word[0]] = new TrieNode(word[0]);
            child = root->children[word[0]];
        }
        insertWord(child, word.substr(1));
    }
    int doSearch(TrieNode* root, string word){
        if(word.length() == 0){
            if(root->isTerminal)
                return 1;
            return 0;
        }
        if(root->children.find(word[0])!=root->children.end())
            return doSearch(root->children[word[0]], word.substr(1));
        return -1;
    }
public:
    Trie() {
        root = new TrieNode('\0');
    }
    void insert(string word) {
        insertWord(root, word);
    }
    bool search(string word) {
        if(doSearch(root, word) == 1)
            return true;
        return false;
    }
    bool startsWith(string prefix) {
        int res = doSearch(root, prefix);
        if(res>=0)
            return true;
        return false;
    }
};
/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */