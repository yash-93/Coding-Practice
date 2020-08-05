// Without Trie
/*class WordDictionary {
public:

WordDictionary() {
    dict.clear();
}

void addWord(string word) {
    int l=word.size();
    dict[l].insert(word);
}

bool search(string word) {
    int l=word.size();
    if(dict.find(l)==dict.end()) return false;
    if(dict[l].find(word)!=dict[l].end()) return true;

    int j;
    for(string s: dict[l]){
        for(j=0; j<l; j++){
            if(word[j]!='.' && word[j]!=s[j]) break;
        }
        if(j==l) return true;
    }
    return false;
}

private:
    unordered_map<int,unordered_set<string>> dict;
};*/

// Using Trie
/*class TrieNode {
public:
    bool word;
    TrieNode* children[26];
    TrieNode() {
        word = false;
        memset(children, NULL, sizeof(children));
    }
};

class WordDictionary {
public:
    WordDictionary() {

    }

    void addWord(string word) {
        TrieNode* node = root;
        for (char c : word) {
            if (!node -> children[c - 'a']) {
                node -> children[c - 'a'] = new TrieNode();
            }
            node = node -> children[c - 'a'];
        }
        node -> word = true;
    }

    bool search(string word) {
        return search(word.c_str(), root);
    }
private:
    TrieNode* root = new TrieNode();

    bool search(const char* word, TrieNode* node) {
        for (int i = 0; word[i] && node; i++) {
            if (word[i] != '.') {
                node = node -> children[word[i] - 'a'];
            } else {
                TrieNode* tmp = node;
                for (int j = 0; j < 26; j++) {
                    node = tmp -> children[j];
                    if (search(word + i + 1, node)) {
                        return true;
                    }
                }
            }
        }
        return node && node -> word;
    }
};*/
