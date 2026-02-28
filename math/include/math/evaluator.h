#pragma once

#include <optional>
#include <memory>
#include <cmath>

class ASTNode;  // forward declaration, потом подключишь от Дениса

class Evaluator {
public:
    std::optional<double> evaluate(const ASTNode* node, double x);

private:
    std::optional<double> evaluateNode(const ASTNode* node, double x);
    // остальные методы
};