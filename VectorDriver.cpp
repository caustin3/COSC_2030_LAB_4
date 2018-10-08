//Chase Austin
//date8/oct/2018
//COSC 2030
//lab_4


#include "VectorDriver.h"

int main() {
    cout << "  ..:: B E G I N  S A M P L E  C O D E  ::.." << endl << endl;
  vector<short> sample_vector(5);
  cout << "new vector: ";
  print(sample_vector);
  cout << endl;
  fill_vector(sample_vector);
  cout << "filled vector: ";
  print(sample_vector);
  cout << endl;
  cout << "sum of vector's elements: " << compute_sum(sample_vector) <<
	  endl;
  cout << endl << "   ..::  E N D   S A M P L E  C O D E  ::.." << endl;
  print(sample_vector);
  cout << endl;  
  print_even(sample_vector);
  add_numbers(sample_vector);
  add_numbers(sample_vector);
  print_even(sample_vector);
  cout << endl;    
  cout << is_present(sample_vector, 1) << endl;
  cout << is_present(sample_vector, 0) << endl;
  cout << is_present(sample_vector, -1) << endl;
  cout << is_present(sample_vector, 3) << endl;
  cout << is_present(sample_vector, 10) << endl;
  cout << is_present(sample_vector, 25) << endl;
  cout << endl << endl;
  vector<short> my_vector(0); 
  srand(time(NULL));
  
	  for (short i = 0; i < 5; i++)
	  {
		  short rand_number = rand() % 100 + 1;
		  my_vector.push_back(rand_number);
	  }
	  print(my_vector);
	  cout << endl;
	  sort(my_vector.begin(), my_vector.end());
	  print(my_vector);
	  cout << endl;
	  /*std::vector<short>::const_iterator iter_begin = my_vector.begin();
	  std::vector<short>::const_iterator iter_end = my_vector.end();
	  sort(iter_begin, iter_end);*/

  system("pause");
  
  return 0;
}
