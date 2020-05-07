#include "Matrix.h"

using namespace godot;

void Matrix::_register_methods() {
    //register_method("_process", &Matrix::_process);
}

Matrix::Matrix() {
}

Matrix::~Matrix() {
    // add your cleanup here
}

void Matrix::_init() {
    // initialize any variables here
    time_passed = 0.0;

    Eigen::MatrixXd m(2,2);
    m(0,0) = 3;
    m(1,0) = 2.5;
    m(0,1) = -1;
    m(1,1) = m(1,0) + m(0,1);
    std::cout << m << std::endl;
}

