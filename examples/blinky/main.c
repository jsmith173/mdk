#include <mdk.h>

// Array ordering routine
void bubbleSort(int* arr, int n)
{
	bool swapped;
	int tmp;

	for (int i = 0; i < n - 1; i++) {
		swapped = false;
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				tmp = arr[j]; arr[j] = arr[j+1]; arr[j+1] = tmp;
				swapped = true;
			}
		}

		// If no two elements were swapped, then break
		if (!swapped)
			break;
	}
}

// test array to sort
#define N 10
int arr[N];

volatile int test_var = 0;


int main(void) 
{

  for (int i=0; i<N; i++) arr[i]=N-1-i;

  bubbleSort(arr, N);

  // After the array sort we should have arr[3] = 3
  if (arr[3] == 3) {
   // We can stop here   
   test_var = 1; // just to emit code, compiler will not optimize out
  }


  while (1) ;
  
  return 0;
}
