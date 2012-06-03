

Node* reverse_by_group(Node* node, int group_size) {
    if (node == NULL)
        return NULL;

    Node* newHead = NULL;
    Node* tail = node;
    for (int i = 0; i < group_size && node != NULL; ++i) {
        Node* next = node->next;

        node->next = newHead;
        newHead = node;

        node = next;
    }
    tail->next = reverse_by_group(node, group_size);
    
    return newHead;
}
