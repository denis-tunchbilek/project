// main.cpp (временная версия для проверки связи)
// #include <iostream>
// #include "math/parser.hpp"     // Денис
// #include "math/evaluator.hpp"   // Ты
// #include "plot/scene.hpp"       // Артём
//
// int main() {
//     // Денис: парсит выражение
//     Parser parser("x^2 - 3");
//     auto ast = parser.parse();
//
//     if (!ast) {
//         std::cerr << "Ошибка парсинга!" << std::endl;
//         return 1;
//     }
//
//     // Ты: вычисляешь значения
//     Evaluator eval;
//     std::vector<double> y_values;
//
//     for (double x = -5; x <= 5; x += 0.01) {
//         auto y = eval.evaluate(ast.get(), x);
//         if (y.has_value()) {
//             y_values.push_back(y.value());
//         } else {
//             y_values.push_back(NAN);  // Not a Number для ошибок
//         }
//     }
//
//     // Артём: рисует график
//     Scene scene;
//     scene.addFunction(y_values);
//     scene.render();
//
//     return 0;
// }