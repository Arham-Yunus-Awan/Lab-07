#include <io stream>
using namespace std;
int main() {
  int numbers[7];
  int multiple_of_5 = 0;
  for (int index = 0; index < 7; index++) {
      cout << "Enter a number: ";
      cin >> numbers[index];
  }
  for (int j = 0; j < 7; j++) {
       if (numbers[j] % 5 == 0) {
           multiple_of_5++;
       }
  }
  cout << "There are " << multiple_of_5 << " multiples of 5.\n";
  return 0;
}
