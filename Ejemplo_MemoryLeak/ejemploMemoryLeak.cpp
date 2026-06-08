
#include <iostream>
#include <vector>

void createMemoryLeak(bool liberarMemoria) {
	//los siguientes son solo ejemplos que producen objetos en el heap
	//de cierto tamaño

    // Memory leak 1: creo un array de 1000 elementos en el heap
    int* leak1 = new int[1000];

    // Memory leak 2: creo vector (array dinámico para almacenar 10000 enteros)
    std::vector<double>* leak2 = new std::vector<double>(10000);

    // Memory leak 3: creo un nuevo objeto que representa un entero
    int* leak3 = new int(42);

    if (liberarMemoria) {
    	delete leak1;
		delete leak2;
		delete leak3;
    }
    // Nota: ninguno de estos punteros se libera
    //
}

int main(int argc, char* argv[]) {
    std::cout << "Generando memory leaks..." << std::endl;

	//analizo parámetro y determino si tengo que liberar memoria o no
	//0 no libero
	//1 si libero
    bool liberarMemoria = true;
    if (argc > 1) {
    	int lm = atoi(argv[1]);
	if (lm == 0) liberarMemoria = false;
    }

    while(true) {
        createMemoryLeak(liberarMemoria);
        // Pequeña pausa para no saturar la CPU
        for(int i = 0; i < 1000000; i++);
	std::cout << "Ejecutando...";
    }

    return 0;
}
