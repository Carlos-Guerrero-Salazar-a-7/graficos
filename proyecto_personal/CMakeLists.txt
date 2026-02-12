cmake_minimum_required(VERSION 3.10)
project(ProyectoOpenGL VERSION 1.0.0 LANGUAGES CXX C)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Incluir directorios de headers
include_directories(
    ${CMAKE_SOURCE_DIR}/include
)

# GLAD: compilar el archivo glad.c
set(GLAD_SOURCES
    ${CMAKE_SOURCE_DIR}/lib/glad.c
)
set(IMAGE_SOURCES
    ${CMAKE_SOUCE_DI}/lib/stb_image.h)

# Archivos fuente de tu aplicación
set(APP_SOURCES
    ${CMAKE_SOURCE_DIR}/src/nuevo.cpp
    ${GLAD_SOURCES}
)

# Buscar GLFW (opción 1: instalado en el sistema)
find_package(glfw3 REQUIRED)

# Si GLFW no se encuentra, usar opción 2 (ver abajo)

# Buscar OpenGL
find_package(OpenGL REQUIRED)

# Crear ejecutable
add_executable(proyectomain ${APP_SOURCES})

# Vincular bibliotecas
target_link_libraries(proyectomain PRIVATE
    glfw
    OpenGL::GL
    ${CMAKE_DL_LIBS}  # Para dlopen/dlsym en Linux
)

set_target_properties(proyectomain PROPERTIES 
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
)