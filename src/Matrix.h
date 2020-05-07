#ifndef MATRIX_H
#define MATRIX_H

#include <Godot.hpp>
#include <Node.hpp>
#include <Eigen/Dense>

namespace godot {

class Matrix : public Node {
    GODOT_CLASS(Matrix, Node)

private:
    float time_passed;

public:
    static void _register_methods();

    Matrix();
    ~Matrix();

    void _init(); // our initializer called by Godot
};

}

#endif
