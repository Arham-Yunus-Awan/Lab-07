#include <io stream>
using namespace std;
int main() {
  int reverse_array[10];
  for (int index = 0; index < 10; index++) {
      cout << "Enter a number: ";
      cin >> reverse_array[index];
  }
  for (int count = 9; count >= 0; count --) {
      cout << reverse_array[count] << endl;
  }
  return 0;
}
