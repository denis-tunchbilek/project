# Корневой CMakeLists.txt
cmake_minimum_required(VERSION 3.10)
project(DesmosClone)

set(CMAKE_CXX_STANDARD 17)

# Включаем тестирование
include(CTest)

# Подключаем подпроекты
add_subdirectory(math)
add_subdirectory(plot)
add_subdirectory(ui)

# Главный исполняемый файл
add_executable(desmos_app main.cpp)

# Линкуем все библиотеки
target_link_libraries(desmos_app
        PRIVATE
        math_lib
        plot_lib
        ui_lib
)