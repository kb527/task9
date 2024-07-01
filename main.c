#include <stdio.h>
#include <math.h>

int minSteps(int x, int y) {
    int steps = 0;
    int current = x;

    while (current < y) {
        if (current == x || current == y - 1){
            steps++;
            current++;
            continue;
        }
        if (current + 2 < y){
            steps++;
            current += 2;
        }
        else{
            steps++;
            current++;
        }
    }

    return steps;
}

int main() {
    int x, y;
    printf("Enter the values for x and y: ");
    scanf("%d %d", &x, &y);

    if (x <= y && x >= 0 && y < pow(2, 31)) {
        int result = minSteps(x, y);
        printf("The minimum number of steps from %d to %d is: %d\n", x, y, result);
    } else {
        printf("Invalid input.\n");
    }

    return 0;
}
