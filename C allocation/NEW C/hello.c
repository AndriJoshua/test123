#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator with the current time
    srand(time(NULL));
    
    // Generate a random floating-point number in the range of 0 to 1
    float randomNum = (float)rand() / RAND_MAX;
    
    // Print the random number
    printf("Random number between 0 and 1: %f\n", randomNum);
    
    return 0;
}
