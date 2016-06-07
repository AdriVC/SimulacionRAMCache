//Tarea 1 Organizacion de Computadoras
//Ing. Pablo Meraz
//Por: Adriana Vega, Ambar Suarez, Fernando Reyes, Melvin Portillo, Oscar Carranza

char**

int main(int argc, char const *argv[]){
	
	return 0;
}

/*
Programa de simulación de la eficacia del uso de la memoria Caché
Elaborar un programa que simule el uso de la memoria caché con las siguientes características:
a)	El tamaño de la memoria RAM será de 4096 bytes
b)	La memoria caché de 128 bytes
c)	El tamaño del bloque de 8  bytes
d)	El tamaño del conjunto es de 4 líneas (solo aplica cuando el caché es asociativo por conjunto) 
e)	La memoria RAM (el cual es un arreglo) se llenará con números entre 0 y 255 leídos del archivos datos.txt
f)	Se creará un programa para ordenar números en forma ascendente, utilizando exactamente este método:

	n=4096;
	for (int i=0;i<=n-2;i++)
	        for (int j=i+1;j<=n-1;j++)
	           if (leer(i,tipo)>leer(j,tipo)){
	              temp=leer(i,tipo);
	              escribir(i, tipo,leer(j,tipo));
	              escribir(j,tipo,temp);}

g)	Se crearán 2  funciones , la función “leer” y la función “escribir” con los parámetros
	i:  posición donde se desea leer o escribir (entre 0 y 4095)
	tipo: es un entero que puede valer:
		0:   No utiliza  caché
		1:   Caché directo
		2:   Caché Asociativo
		3:   Caché Asociativo por conjuntos

h)	Los Tiempos de acceso a la memoria son los siguientes
	a.	0.1 µs si se lee o escribe de la RAM (no hay caché)
	b.	0.01 µs si se lee o escribe de la caché
	c.	0.11 µs si se lee de la caché pero antes hay que pasarlo de la RAM a la cache 
	d.	0.22 µs Si se lee de la caché, pero antes hay que pasarlo de la RAM a la caché y luego de la caché a la RAM
       
i)	El programa debe correrse una vez para cada uno de los 4 tipos de caché, el arreglo de los números a ordenar debe contener los mismos datos desordenados en cada corrida  se debe mostrar el siguiente reporte (aquí aparecen datos inventados)
	Tipo	Tiempo de corrida
	Sin Caché	1,000,000 µs
	Directo	900,000 µs
	Asociativo	800,000 µs
	Asociativo por conjuntos	820,000 µs

j)	Las funciones “leer” y “escribir” dependiendo del tipo de caché deben determinar cuánto tiempo le tomó efectuar la operación, por ejemplo si no se utiliza caché, el tiempo es de 0.1 µs, si utiliza caché directo y determina que el dato ya está en el caché, el tiempo será de 0.01 µs, pero si no está en la caché el tiempo será de 0.11 µs, o peor aún si está en el caché pero  la línea se ha modificado, el tiempo será de 0.22 µs 
k)	Recordar que los valores de las etiquetas no forman parte de los 128 bytes de la caché
l)	Recordar que cada línea del caché debe tener un bit para indicar si la línea es válida y otro bit para indicar si la línea ha sido modificada.
m)	Para el caché asociativo las líneas se irán usando en forma secuencial, por lo que debe  haber una variable que indique cual es la siguiente línea a ser utilizada
n)	Para el caché asociativo por conjuntos también las líneas de cada conjunto se irán utilizando en forma secuencial, o sea debe haber una variable para cada conjunto (o sea un arreglo) que indique cual es la siguiente línea a ser utilizada.
o)	Pueden hacer grupos de máximo 4 personas
p)	Deben enviar por medio de la plataforma lo siguiente
	a.	El programa fuente
	b.	El programa ejecutable
	c.	Una imagen (print screen) con la salida del programa
*/