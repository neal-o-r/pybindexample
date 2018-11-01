#include <pybind11/eigen.h>
#include "Eigen/Dense"


using std::size_t;
typedef double real_t;

typedef Eigen::Matrix<real_t, Eigen::Dynamic, Eigen::Dynamic>
        Matrix;

int add(int i, int j) {
    return i + j;
}

Matrix random_matrix(int d) {
	return Matrix::Random(d,d);
}
