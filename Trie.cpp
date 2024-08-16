#include<bits/stdc++.h>
using namespace std;

class trienode{
    public:
    char data;
    trienode* children[26];
    bool isterminal;
    trienode(char c){
        data=c;
        for(int i=0;i<26;i++){
            children[i]=NULL;
        }
        isterminal=false;
    }
};

class trie{
    public:
    trienode* root;
    trie(char c){
        root=new trienode(c);
    }

    void inseu(trienode* root,string word){

        if(word.length()==0){
            root->isterminal=true;
            return ;
        }

        int ind=word[0]-'a';
        trienode* child;
        if(root->children[ind] != NULL){
            child=root->children[ind];
        }

        else{
            child=new trienode(word[0]);
            root->children[ind]=child;
        }

        inseu(child,word.substr(1));
    }
    void insert(string word){
        inseu(root,word);
    }

    bool searchin(trienode* root,string word){
        if(word.length()==0){
            return root->isterminal;
        }

        int ind=word[0]-'a';
        trienode* child;
        if(root->children[ind] != NULL){
            child=root->children[ind];
        }

        else{
            return false;
        }

        return searchin(child,word.substr(1));

    }

    bool search(string word){
        return searchin(root,word);
    }
};


int main(){
    string s="abs";
    trie *t=new trie('\0');
    t->insert(s);
    t->insert("abcde");
    t->insert("abcdeggg");
    t->insert("abceh");
    cout<<"presence "<<t->search("ab");
}