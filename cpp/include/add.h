// This is start of the header guard.  ADD_H can be any unique name.  By convention, we use the name of the header file.
#ifndef ADD_H
#define ADD_H

#include <pybind11/eigen.h>
#include "Eigen/Dense"


using std::size_t;
typedef double real_t;

typedef Eigen::Matrix<real_t, Eigen::Dynamic, Eigen::Dynamic> 
        Matrix;

// This is the content of the .h file, which is where the declarations go
int add(int x, int y); // function prototype for add.h -- don't forget the semicolon!

Matrix random_matrix(int d);

// This is the end of the header guard
#endif
