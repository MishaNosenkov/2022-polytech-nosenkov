cmake_minimum_required(VERSION 2.8)	 # Проверка версии CMake.
										# Если версия установленой программы
										# старее указаной, произайдёт аварийный выход.

project(hello)			# Название проекта

set(SOURCE_EXE hello.cpp func.cpp)		# Установка переменной со списком исходников для исполняемого файла

add_executable(hello${SOURCE_EXE})	# Создает исполняемый файл с именем main
