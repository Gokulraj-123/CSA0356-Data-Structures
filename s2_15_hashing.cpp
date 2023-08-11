#include <stdio.h>
#include <stdbool.h>

#define SIZE 10

int hashTable[SIZE];
bool isOccupied[SIZE];

int main() {
    for (int i = 0; i < SIZE; i++) {
        hashTable[i] = -1;
        isOccupied[i] = false;
    }

    int numKeys, key;
    int index;

    printf("Enter the number of keys to insert: ");
    scanf("%d", &numKeys);

    for (int i = 0; i < numKeys; i++) {
        printf("Enter key %d: ", i + 1);
        scanf("%d", &key);

        index = key % SIZE;

        if (isOccupied[index]) {
            // Linear probing
            int probeIndex = (index + 1) % SIZE;
            while (probeIndex != index && isOccupied[probeIndex]) {
                probeIndex = (probeIndex + 1) % SIZE;
            }
            if (probeIndex == index) {
                printf("Hash table is full\n");
                break;
            }
            index = probeIndex;
        }

        hashTable[index] = key;
        isOccupied[index] = true;
        printf("Inserted %d at index %d\n", key, index);
    }

    printf("Hash Table:\n");
    for (int i = 0; i < SIZE; i++) {
        if (isOccupied[i]) {
            printf("%d -> %d\n", i, hashTable[i]);
        } else {
            printf("%d -> Empty\n", i);
        }
    }

    return 0;
}

