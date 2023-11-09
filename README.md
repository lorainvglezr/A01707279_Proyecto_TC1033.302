# A01707279_Proyecto_TC1033.302
Este proyecto fue realizado basándose en el proyecto demo, esto con el fin de realizar un programa que, al final, ayude a integrar todos los temas que se ven en la materia de Pensamiento Computacional Orientado a Objetos TC1033 del grupo 302. En resumen, este proyecto fue hecho con la intención de ver el alcance computacional que se espera al finalizar las clases, esto mediante la realización de avances de acuerdo a los temas abarcados en la materia. 

## Contexto
Un restaurante, que se enfoca en comida mexicana, en donde se tienen en cuenta los productos que se venden y las personas que hacen posible la apertura del local, tales como los clientes y los meseros. Este programa busca generar una estructura de clases para poder manejar de forma ordenada la indormación de las variables mencionadas anteriormente. Existen 3 variables del restaurante: la primera (El Platillo) define las características y funciones del platillo que comerá el cliente, puede incluir atributos como nombre, ingredientes, precio, entre otros. Continuando, la segunda clase (El Cliente) establece las variables características del cliente que visita el restaurante, algunos atributos predeterminados podrían ser el nombre, edad, género, preferencias alimenticias, etc. Por último, está la tercera variable del restaurante (El Mesero) en donde se definen las características del mesero encargado de atender a los clientes, esto podría incluir atributos como nombre, edad, experiencia, habilidades, etc. 

## Funcionalidad
La funcionalidad hasta este punto es básica
El programa permitirá altas de nuevos clientes y el almacenamiento de información de viejos clientes. 
El programa permitirá la baja de la información de los trabajadores. 
Consta de una opción predeterminada de la comida que consumirá el cliente y que servirá el mesero, las últimas dos variables también están preestablecidas. 

## Consideraciones
El programa corre en la consola y está hecho con el estilo de C++ Standard, por lo que corre en todos los sistemas operativos.  
El programa corre con el IDE llamado *"CLion"*, que se recomienda en el uso de *Apple (Mac)*. 
**Se debe de compilar en terminal con:** "g++ empleado.h empresa.h main.cpp"
**Para correr en linux, se utiliza:** "/a.out"
**Y si se desea correr en windows, se usa:** "a.exe"

## Correciones
**En este programa se realizaron las siguientes correcciones (por ahora):**
1. Se arregló el tipo de variable de la llamada "precio" en la sección de los *Set variables*, para que en todos los lugares donde se mencionara, hubiera concordancia de tipos de variables.
2. Se omitió el uso de "using namespace std;", en cambión se utilizó el prefijo "std::" antes de cada "cout", "cin", "string" y "endl".
