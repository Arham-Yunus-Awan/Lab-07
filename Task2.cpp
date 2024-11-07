#include <io stream>
using namespace std;
int main() {
  int study_hours[10];
  int highest_hours = 0;
  for (int i = 0; i < 10; i++) {
      cout << "Enter study hours of student " << i + 1 << ": ";
      cin >> study_hours[i];
  }
  for (int j = 0; j < 10; j++) {
      if(highest_hours < study_hours[j]) {
          highest_hours = study_hours[j];
      }
      cout << study_hours[j] << endl;
  }
  cout << "Highest study time is: " << highest_hours << endl;
  return 0;
}
