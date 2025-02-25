#include <stdio.h>

// Función para copiar una cadena
void strcpy(char* destino, const char* origen) {
    while (*origen) {
        *destino = *origen;
        destino++;
        origen++;
    }
    *destino = '\0';
}

// Función para obtener un carácter en una posición específica
char charAt(const char* cadena, int indice) {
    return *(cadena + indice);
}

// Función para encontrar la primera ocurrencia de un carácter
int indexOf(const char* cadena, char caracter) {
    int indice = 0;
    while (*cadena) {
        if (*cadena == caracter) {
            return indice;
        }
        cadena++;
        indice++;
    }
    return -1; 
}

// Función para encontrar la última ocurrencia de un carácter
int lastIndexOf(const char* cadena, char caracter) {
    int indice = -1;
    int posicion = 0;
    while (*cadena) {
        if (*cadena == caracter) {
            indice = posicion;
        }
        cadena++;
        posicion++;
    }
    return indice; 
}

int main() {
    char origen[100];
    char destino[100];
    char caracter;
    int indice;

    printf("Ingrese una cadena: ");
    scanf("%s", origen);

    strcpy(destino, origen);
    printf("Copia de la cadena: %s\n", destino);

    printf("Ingrese un indice para obtener el caracter: ");
    scanf("%d", &indice);
    printf("Caracter en la posicion %d: %c\n", indice, charAt(origen, indice));

    printf("Ingrese un caracter para buscar su primera ocurrencia: ");
    scanf(" %c", &caracter); 
    int primeraOcurrencia = indexOf(origen, caracter);
    if (primeraOcurrencia != -1) {
        printf("Primera ocurrencia de '%c' en la posicion: %d\n", caracter, primeraOcurrencia);
    } else {
        printf("El caracter '%c' no se encuentra en la cadena.\n", caracter);
    }

    printf("Ingrese un caracter para buscar su ultima ocurrencia: ");
    scanf(" %c", &caracter);
    int ultimaOcurrencia = lastIndexOf(origen, caracter);
    if (ultimaOcurrencia != -1) {
        printf("Ultima ocurrencia de '%c' en la posicion: %d\n", caracter, ultimaOcurrencia);
    } else {
        printf("El caracter '%c' no se encuentra en la cadena.\n", caracter);
    }

    return 0;
}
