#include <iostream>


void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

template<typename T>
void sort(T arr[], int size){
  for(int i = 0; i < size - 1; i++){
      T min = i;
      for(int j = i + 1; j < size; j++){
          if(arr[j] < arr[min]){
              min = j;
          }
          if(min != i){
              swap(&arr[i], &arr[min]);
          }
      }
  }
}

template<typename U>
void printArray(U arr[], int size){
    for(int i = 0; i < size; i++){
        std::cout << arr[i] << '\n';
    }
}

int main() {
    const int size = 3;
    int arr[size] = {3, 2, 1};
    sort(arr, size);
    printArray(arr, size);
}
