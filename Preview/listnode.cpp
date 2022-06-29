#include <iostream>
#include <vector>

using namespace std;

struct ListNode{
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* node) : val(x), next(node) {}
};

class myListNode{
public:
    myListNode(){
        _size = 0;
        dummy = new ListNode();
    }
    
    void vec2ListNode(vector<int> vec);
    void reverseKGroup(int k);
    void printListNode();

private:
    int _size;
    ListNode* dummy;
};

void myListNode::vec2ListNode(vector<int> vec){
    ListNode* node = dummy;
    for (int i = 0; i < vec.size(); i++){
        node->next = new ListNode(vec[i]);
        node = node->next;
    }
}

void myListNode::reverseKGroup(int k){
    ListNode* prev = dummy;
    ListNode* ed = dummy;
    while(ed != NULL){
        for (int i = 0; i < k && ed != NULL; i++){
            ed = ed->next;
        }
        if (ed == NULL) break;
        ListNode* st = prev->next;
        ListNode* nxt = ed->next;
        ed->next = NULL;

        ListNode* cur = NULL;
        ListNode* node = st;
        while(node){
            ListNode* tmp = node->next;
            node->next = cur;
            cur = node;
            node = tmp;
        }

        prev->next = ed;
        st->next = nxt;
        prev = st;
        ed = st;
    }
}

void myListNode::printListNode(){
    ListNode* node = dummy->next;
    while(node){
        cout << node->val << " ";
        node = node->next;
    }
}

int main(){
    myListNode* mynode = new myListNode();
    vector<int> vec;
    int num, k;
    while(cin >> num){
        vec.push_back(num);
        char ch = getchar();
        if (ch == '\n') break;
    }
    cin >> k;

    mynode->vec2ListNode(vec);
    mynode->reverseKGroup(k);
    mynode->printListNode();

    return 0;
}
