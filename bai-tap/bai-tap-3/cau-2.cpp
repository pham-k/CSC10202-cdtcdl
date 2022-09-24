#include <iostream>
using namespace std;

struct NODE {
    int data;
    NODE *next;
};

class LinkedList {
    private:
    public:
        NODE *head;
        NODE *tail;
        LinkedList() {
            head = nullptr;
            tail = nullptr;
        }
        void insertAtEnd(int val) {
            NODE *node = new NODE;
            node->data = val;
            node->next = nullptr;
            if (head == nullptr) {
                head = node;
                tail = node;
            } else {
                tail->next = node;
                tail = node;
            }
        }
        void print(string s) {
            NODE *node = head;
            cout << s << ": ";
            while (node != nullptr) {
                cout << node->data << " ";
                node = node->next;
            }
            cout << endl;
        }
};

void split(NODE *node, NODE **a, NODE **b) {
        NODE *slow = node;
        NODE *fast = node->next;
        while (fast != nullptr) {
            fast = fast->next;
            if(fast != nullptr) {
                slow = slow->next;
                fast = fast->next;

            }
        }
        *a = node;
        *b = slow-> next;
        cout << "Split position: " << (*a)->data << " " << (*b)->data << endl;
        slow->next = nullptr;
    }

NODE* merge(NODE *&head1, NODE *&head2) {
    NODE *result = nullptr;
    if (head1 == nullptr) {
        return head2;
    } else if (head2 == nullptr) {
        return head1;
    }
    if (head1->data <= head2->data) {
        result = head1;
        result->next = merge(head1->next, head2);
    } else {
        result = head2;
        result->next = merge(head1, head2->next);
    }
    return result;
}

void sort(NODE *&head) {
    NODE *node = head;
    NODE *a;
    NODE *b;

    if ((node == nullptr) || (node->next == nullptr)) {
        return;
    }
 
    split(node, &a, &b);
 
    sort(a);
    sort(b);
 
    head = merge(a, b);
}


int main() {
    LinkedList ll;
    ll.insertAtEnd(8);
    ll.insertAtEnd(3);
    ll.insertAtEnd(2);
    ll.insertAtEnd(1);
    ll.insertAtEnd(5);
    ll.insertAtEnd(4);
    ll.insertAtEnd(6);
    ll.insertAtEnd(7);
    ll.print("Current linked list");
    sort(ll.head);
    ll.print("Sorted linked list");
    return 0;
}