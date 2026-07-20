#include <stdio.h>

int findLRU(int time[], int n) {
    int i, minimum = time[0], pos = 0;
    for(i = 1; i < n; ++i) {
        if(time[i] < minimum) {
            minimum = time[i];
            pos = i;
        }
    }
    return pos;
}

int main() {
    int pages[50], frames[10], time[10];
    int n, f, pf = 0, counter = 0;
    int i, j, flag1, flag2, pos;

    printf("Enter number of pages: ");
    scanf("%d", &n);

    printf("Enter the reference string: ");
    for(i = 0; i < n; i++)
        scanf("%d", &pages[i]);
        
    printf("Enter number of frames: ");
    scanf("%d", &f);

    for(i = 0; i < f; i++)
        frames[i] = -1;

    for(i = 0; i < n; ++i) {
        flag1 = flag2 = 0;

        for(j = 0; j < f; ++j) {
            if(frames[j] == pages[i]) {
                counter++;
                time[j] = counter;
                flag1 = flag2 = 1;
                
                break;
            }
        }

        if(flag1 == 0) {
            for(j = 0; j < f; ++j) {
                
                if(frames[j] == -1) {
                    counter++;
                    pf++;
                    frames[j] = pages[i];
                    time[j] = counter;
                    
                    flag2 = 1;
                    break;
                }
            }
        }

        if(flag2 == 0) {
            pos = findLRU(time, f);
            counter++;
            pf++;
            frames[pos] = pages[i];
            time[pos] = counter;
        }
    }

    printf("\nTotal Page Faults = %d\n", pf);

    return 0;
}
