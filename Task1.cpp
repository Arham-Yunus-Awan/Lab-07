#include <io stream>
using namespace std;
int main() {
  int num_of_scores;
  cout << "Enter how many scores you want: ";
  cin >> num_of_scores;
  int scores[num_of_scores];
  for (int i = 0; i < num_of_scores; i++) {
      cout << "Enter score " << i + 1 << ": ";
      cin >> scores[i];
  }
  for (int j = 0; j < num_of_scores; j++) {
       cout << scores[j] << endl;
  }
  return 0;
}
