int isEven(int n) {
    return (n & 1);
}
int getIthBit(int n, int i) {
    int mask = (1 << i);
    return (n & mask) > 0 ? 1 : 0;
}