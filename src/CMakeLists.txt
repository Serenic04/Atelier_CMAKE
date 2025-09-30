# Ajouter le dossier lib
add_subdirectory(lib)

# Créer l'exécutable
add_executable(calculator main.c)

# Lier l'exécutable avec la librairie
target_link_libraries(calculator PRIVATE lib)

# Ajouter le dossier include pour que #include "calculator.h" fonctionne
target_include_directories(calculator PRIVATE ../include)
