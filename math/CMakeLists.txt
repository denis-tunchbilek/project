project(MathLib)

# Добавляем библиотеку с твоим кодом
add_library(math_lib
        src/evaluator.cpp
        include/math/evaluator.h
        # позже добавишь парсер Дениса
)

# Указываем где искать заголовки
target_include_directories(math_lib
        PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)

# Если нужны флаги компиляции
target_compile_features(math_lib PUBLIC cxx_std_17)

# Тесты
if(BUILD_TESTING)
    add_executable(math_tests
            tests/test_evaluator.cpp
            src/evaluator.cpp
    )

    target_include_directories(math_tests
            PRIVATE
            ${CMAKE_CURRENT_SOURCE_DIR}/include
    )

    target_link_libraries(math_tests PRIVATE math_lib)

    add_test(NAME math_evaluator COMMAND math_tests)
endif()
