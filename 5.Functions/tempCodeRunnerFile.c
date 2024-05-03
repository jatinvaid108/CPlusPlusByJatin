int main() {
    int x = 6677;
    int y = 7888;
    printf("Before swapping: x = %d, y = %d\n", x, y);
    x = x + y;
    y = x - y;
    x = x - y;
    printf("After swapping: x = %d, y = %d\n", x, y);
    return 0;
}