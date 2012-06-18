bool checkCircle(Node* node) {
    Node* pQuick = node;
    Node* pSlow = node;
    while (pQuick != NULL) {
        if (pQuick == pSlow) {
            return true;
        }
        pSlow++;
        pQuick++;
        if (pQuick == NULL)
            break;
        else 
            pQuick++;
    }
    return false;
}
