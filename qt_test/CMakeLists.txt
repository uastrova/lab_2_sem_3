cmake_minimum_required(VERSION 3.16)

project(lab2 VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Core)
find_package(Qt6 REQUIRED COMPONENTS Widgets)

qt_standard_project_setup()

qt_add_executable(lab2
        main.cpp
        ArrayIterator.h
        ArraySequence.h
        Book.h
        BookCardComporator.h
        BubbleSort.h
        Complex.h
        ComplexComporator.h
        DefaultComporator.h
        HeadSorter.h
        HeapSort.h
        Person.h
        QuickSort.h
        Sequence.h
        tests.h
        Generator.h
        mainwindow.cpp
        mainwindow.h
        inputdialog.cpp
        inputdialog.h
        sortchoicedialog.cpp
        sortchoicedialog.h
)

target_link_libraries(lab2 PRIVATE Qt6::Core Qt6::Widgets)
