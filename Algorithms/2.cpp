//2. Given a array, how to reverse an array
//Write like on the whiteboard

int size = sizeof(array);
int head = 0;
int tail = index - 1;
while (head < tail) {
    int temp = array[head];
    array[head] = array[tail];
    array[tail] = temp;
    head++;
    tail--;
    // swap(head++, tail--);
}
