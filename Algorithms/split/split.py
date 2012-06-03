
def findWords(seq, words, wordList):
    seqLen = len(seq)
    candidates = (seq[:i + 1] for i in range(seqLen) if seq[:i + 1] in words)

    for word in candidates:
        wordList.append(word)

        wordLen = len(word)
        if wordLen == len(seq):
            print wordList
        else:
            findWords(seq[wordLen:], words, wordList)

        del wordList[-1]


words = set(("liu", "kai", "liuk", "ai"))
findWords("liukai", words, [])
