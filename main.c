/*
#include <fcntl.h>    // Pour 'open'
#include <unistd.h>   // Pour 'write'
#include <string.h>   // Pour 'strlen'
#include <stdio.h>    // Pour 'perror'
#include <stdlib.h>
#include <errno.h>
#include <sys/stat.h> 

int main(int argc, char *argv[]) {
    const char *en_tete = "P3\n3 2\n255\n255 0 0 0 255 0 0 0 255\n255 255 0 255 255 255 0 0 0 ";

    // Création du fichier : Écrasement si existe, lecture/écriture, droits rw- pour l'utilisateur
    int fd = open("firstPPM.ppm", O_CREAT | O_TRUNC | O_RDWR, S_IRUSR | S_IWUSR);

    if (fd == -1) {
        perror("Erreur à l'ouverture du fichier");
        return EXIT_FAILURE;
    }

    ssize_t bytes_written = write(fd, en_tete, strlen(en_tete));

    if (bytes_written == -1) {
        perror("Erreur à l'écriture dans le fichier");
        close(fd); // On ferme quand même le fichier
        return EXIT_FAILURE;
    }
    while(1){
        
    }
    close(fd);
    return EXIT_SUCCESS;
}*/