Node* reverseGroup(Node* node, int group_size) {
    if (node == NULL)
        return NULL;
    Node* newHead = NULL;
    Node* tail = node;
    Node* next = NULL;
    for (int i = 0; i < group_size && node != NULL; i++) {
        next = node->next; 
        node->next = newHead;
        newHead = node;
        node = next;
    }
    tail->next = reverseGroup(tail, group_size);
    return newHead;
}
Node* reverse(Node* node) {
    if (node == NULL)
        return NULL;
    Node* newHead = NULL;
    Node* next = NULL;
    while (node != NULL) {
        next = node->next;
        node->next = newHead;
        newHead = node;
        node = next;
    }
    return newHead;
}
