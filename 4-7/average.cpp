#include <vector>
#include <stdexcept>
#include "average.h"

using std::vector;
using std::domain_error;


double average(const vector<double>& vec) {
  typedef vector<double>::size_type vec_sz;
  vec_sz size = vec.size();

  if (size == 0)
    throw domain_error("Cannot compute average of an empty vector.");

  double total = 0;
  for (vec_sz i = 0; i != size; ++i)
    total += vec[i];

  return total / size;
}