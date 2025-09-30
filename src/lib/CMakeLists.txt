# Créer la librairie statique
add_library(lib calculator.c)

# Exposer le dossier include pour l'exécutable
target_include_directories(lib PUBLIC ../../include)
