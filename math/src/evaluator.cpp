#include "math/evaluator.h"
// #include "math/ast.hpp"  // когда Денис сделает

std::optional<double> Evaluator::evaluate(const ASTNode* node, double x) {
    if (!node) return std::nullopt;
    return evaluateNode(node, x);
}

// ... реализации методов