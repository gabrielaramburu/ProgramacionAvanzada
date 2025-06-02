
#include <iostream>
#include <vector>

void createMemoryLeak(bool liberarMemoria) {
    // Memory leak 1: asignación dinámica sin liberar
    int* leak1 = new int[1000];

    // Memory leak 2: vector que crece sin liberar
    std::vector<double>* leak2 = new std::vector<double>(10000);

    // Memory leak 3: asignación simple sin delete
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
