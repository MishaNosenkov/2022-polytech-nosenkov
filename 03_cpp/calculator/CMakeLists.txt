cmake_minimum_required(VERSION 2.8)	 # Проверка версии CMake.
										# Если версия установленой программы
										# старее указаной, произайдёт аварийный выход.

project(calculator)			# Название проекта

add_executable(calc calc.cpp)	# Создает исполняемый файл с именем main
