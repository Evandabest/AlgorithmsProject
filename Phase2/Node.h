class Node{

 public:

    int data;
    Node* next;
    Node* prev;

    Node(int val){

        data = val;
        next = nullptr;
        prev = nullptr;
    };
};
