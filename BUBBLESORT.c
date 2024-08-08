



#include<stdio.h>
void bubbleSort(int array[], int size) {
  for (int step = 0; step < size - 1; ++step) {
    int swapped = 0;
    for (int i = 0; i < size - step - 1; ++i) {
      if (array[i] > array[i + 1]) {
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
        
        swapped = 1;
      }
    }
    if (swapped == 0) {
      break;
    }
    
  }
}

void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}

int main() {
  int size, i;
  printf("Enter the number of elements: ");
  scanf("%d", &size);
  
  int data[size];
  
  printf("Enter %d elements:\n", size);
  for (i = 0; i < size; i++) {
    scanf("%d", &data[i]);
  }

  bubbleSort(data, size);
  
  printf("Sorted Array in Ascending Order:\n");
  printArray(data, size);
  
  return 0;
}