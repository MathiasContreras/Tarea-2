int main() {
    int num_estudiantes = 5;
    int num_asignaturas = 3;
    
    float calificaciones[5][3]; 
    
    float suma_estudiante, suma_asignatura;
    float max_est, min_est, max_asig, min_asig;
    int aprobados, reprobados;
}

for (int i = 0; i < num_estudiantes; i++) {
        printf("\n Notas del Estudiante %d \n", i + 1);
        for (int j = 0; j < num_asignaturas; j++) {
           
            do {
                printf("Ingrese la calificacion para la asignatura %d (0 a 10): ", j + 1);
                scanf("%f", &calificaciones[i][j]);
                
                if (calificaciones[i][j] < 0 || calificaciones[i][j] > 10) {
                    printf("Error: La calificacion debe estar en el rango de 0 a 10.\n");
                }
            } while (calificaciones[i][j] < 0 || calificaciones[i][j] > 10);
        }
    }

    
    for (int i = 0; i < num_estudiantes; i++) {
        suma_estudiante = 0;
      
        max_est = calificaciones[i][0];
        min_est = calificaciones[i][0];

        for (int j = 0; j < num_asignaturas; j++) {
            float nota = calificaciones[i][j];
            suma_estudiante += nota;
            
            if (nota > max_est) max_est = nota;
            if (nota < min_est) min_est = nota;
        }
        
       
        float prom_estudiante = suma_estudiante / num_asignaturas; 
        printf("Estudiante %d  Promedio: %.2f  Nota mas alta: %.2f  Nota mas baja: %.2f\n", 
               i + 1, prom_estudiante, max_est, min_est);
    }