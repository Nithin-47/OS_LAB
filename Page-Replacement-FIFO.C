#include <stdio.h>

#define FRAME_SIZE 3 


int findPageInFrames(int frames[], int page, int frameCount) {
    for (int i = 0; i < frameCount; i++) {
        if (frames[i] == page) {
            return 1; 
        }
    }
    return 0; 
}

int main() {
    int referenceString[] = {2, 3, 4, 2, 1, 3, 7, 5, 4, 3};
    int referenceLength = sizeof(referenceString) / sizeof(referenceString[0]);
    int frames[FRAME_SIZE] = {-1}; 
    int frameIndex = 0; 

    int pageFaults = 0;

    for (int i = 0; i < referenceLength; i++) {
        int currentPage = referenceString[i];

        
        if (!findPageInFrames(frames, currentPage, FRAME_SIZE)) {
            
            frames[frameIndex] = currentPage;
            frameIndex = (frameIndex + 1) % FRAME_SIZE; 
            pageFaults++;
        }

        
        printf("Frames: ");
        for (int j = 0; j < FRAME_SIZE; j++) {
            if (frames[j] != -1) {
                printf("%d ", frames[j]);
            } else {
                printf("- ");
            }
        }
        printf("\n");
    }

    printf("Total Page Faults: %d\n", pageFaults);

    return 0;
}
