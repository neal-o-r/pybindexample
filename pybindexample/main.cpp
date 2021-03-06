#include <pybind11/pybind11.h>
#include "add.h"

namespace py = pybind11;

PYBIND11_MODULE(pybindexample, m) {
    m.doc() = R"pbdoc(
        Pybind11 example plugin
        -----------------------
    )pbdoc";

    m.def("add", &add, R"pbdoc(
        Add two numbers

        Some other explanation about the add function.
    )pbdoc");

    m.def("random_matrix", &random_matrix, R"pbdoc(
	Test Eigen functionality
    )pbdoc");

#ifdef VERSION_INFO
    m.attr("__version__") = VERSION_INFO;
#else
    m.attr("__version__") = "dev";
#endif
}
