#include <io stream>
using namespace std;
int main() {
  int mixed_array[10];
  int num_of_positive = 0;
  int num_of_negative = 0;
  int num_of_odd = 0;
  int num_of_even = 0;
  int num_of_zero = 0;
  for (int index = 0; index < 10; index++) {
      cout << "Enter a number: ";
      cin >> mixed_array[index];
  }
  for (int i = 0; i < 10; i++) {
      if (mixed_array[i] % 2 == 0) {
          num_of_even++;
      }
      if (mixed_array[i] % 2 == 1) {
          num_of_odd++;
      }
      if (mixed_array[i] == 0) {
          num_of_zero++;
      }
      if (mixed_array[i] > 0) {
          num_of_positive++;
      }
      if (mixed_array[i] < 0) {
          num_of_negative++;
      }
  }
  cout << "There were " << num_of_positive << " positive numbers.\n";
  cout << "There were " << num_of_negative << " negative numbers.\n";
  cout << "There were " << num_of_even << " even numbers.\n";
  cout << "There were " << num_of_odd << " odd numbers.\n";
  cout << "There were " << num_of_zero << " zeros.\n";
  return 0;
}
