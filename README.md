# A01707279_Proyecto_TC1033.302
Este proyecto fue realizado basándose en el proyecto demo, esto con el fin de realizar un programa que, al final, ayude a integrar todos los temas que se ven en la materia de Pensamiento Computacional Orientado a Objetos TC1033 del grupo 302. En resumen, este proyecto fue hecho con la intención de ver el alcance computacional que se espera al finalizar las clases, esto mediante la realización de avances de acuerdo a los temas abarcados en la materia. 

## Contexto
Un restaurante, que se enfoca en comida mexicana, en donde se tienen en cuenta los productos que se venden y las personas que hacen posible la apertura y funcionamiento del local, tales como los clientes, los cocineros y los meseros. Este programa busca generar una estructura de clases para poder manejar de forma ordenada la información de los objetos mencionadas anteriormente. El restaurante busca generar un reporte de datos de las personas que están ahí, por lo que se generan 3 clases de personas (Cliente, Mesero y Chef) que heredan características de la clase padre (Personas). Asimismo, se busca que cada cliente que entre al restaurante, pueda poner sus datos y escoger 1 de los 3 platillos mexicanos (Enchiladas, Chilaquiles, Pozole), cada platillo tiene sus características predeterminadas. Finalmente, cuando el usuario presione la opción de "Salir", se generara un reporte solamente de las personas involucradas en la estancia del cliente, incluyéndolo a él. 

## Funcionalidad
- La funcionalidad es básica.
- El programa permite que los clientes almacenen su información hasta el final de la estancia en el restaurante. 
- El programa despliega la información de los trabajadores del lugar, que son meseros y chefs.
- El programa perimte visualizar información predeterminada de los platillos que se tienen de opción en el menú.

Primeramente, el programa realiza una pequeña encuesta al usuario, acerca de sus datos personales; luego de esto, se imprime un menú que le permite al usuario elegir el platillo a ordenar. Las opciones son: 
1. Enchiladas
2. Chilaquiles
3. Pozole
Una vez realizada la elección, se puede acceder a más información acerca de cada tipo de platillos. Si el usuario escoge la opción de "Salir", se despliegarán los datos del clientes, previamente establecidos por él, y los datos predeterminados del mesero y el cocinero.

## Consideraciones
El programa corre en la consola y está hecho con el estilo de C++ Standard, por lo que corre en todos los sistemas operativos.  
El programa corre con el IDE llamado *"CLion"* y el IDE llamado *"XCode"*, que se recomienda en el uso de *Apple (Mac)*. 
- **Se debe de compilar en terminal con:** "g++ Personas.h Platillos.h main.cpp"
- **Para correr en linux, se utiliza:** "/a.out"
- **Y si se desea correr en windows, se usa:** "a.exe"

## Correciones
**En este programa se realizaron las siguientes correcciones (por ahora):**
1. Se arregló el tipo de variable de la llamada "precio" en la sección de los *Set variables*, para que en todos los lugares donde se mencionara, hubiera concordancia de tipos de variables.
2. Se omitió el uso de "using namespace std;", en cambión se utilizó el prefijo "std::" antes de cada "cout", "cin", "string" y "endl".
- *Versión 1.0:* 08 de noviembre de 2023. Subcompetencias: En este avance se implementó el repositorio en Github, se crearon sólo los archivos necesarios, se construyeron métodos y atributos (clase "Platillo" de 75 líneas, clase "Cliente" de 67 líneas, clase "Mesero" de 77 líneas). Se comprueban los métodos y atributos desde el main que contiene 71 líneas.
- *Versión 2.0:* 16 de noviembre 2023. En esta versión se creó un archivo .h en donde se guardó la clase "Personas", dicho archivo es la clase padre de las clases "Cliente" y "Mesero", dado que se hace uso de la herencia para otorgar características en común a las clases hijas. La clase padre es ahora "Personas", de la cual se heredan los atributos de nombre, edad y género. Subcompetencias: se creó un UML y se agregó al repositorio en formato .png. Al implementar herencia, se pudo trabajar desde tres distintos archivos pero se simplificó el trabajo en dos de las tres clases, llamense las clases hijas. Se creó la clase padre "Personas" de 60 líneas y se siguieron trabajando con las demás clases de la misma forma. Se comprueban los métodos y atributos desde el main que contiene 71 líneas.
- *Versión 3.0:* 23 de noviembre de 2023. En esta versión se mantuvieron los archivos "Personas.h", "Cliente.h", "Mesero.h", "Platillo.h" y "main.cpp"; sin embargo, se agregó una nueva clase en un archivo .h llamada "Factura.h", en donde el principal objetivo era generar un resumen del cliente y el platillo predeterminado que había hasta el momento. Esta clase tenía 46 líneas. Subcompetencias: Se utiliza agregación, se actualiza el archivo del UML, se crea el archivo .h necesario (Factura.h) para implementar la agregación al código.
- *Versión 4.0:* 30 de noviembre de 2023. Subcompetencias: Durante el desarrollo del proyecto, se ha sobreescrito en los archivos de Github para crear un historial. Se agregaron los comentarios en el formato requerido. De igual forma, se eliminaron archivos basura y se generó una última clase hija de "Personas" llamada "ChefComida", en donde se dan datos predeterminados del cocinero del restaurante. Esto permitió unificar las clases hijas de "Personas", las cuales son "Cliente", "Mesero" y "Chef" en un sólo archivo .h, así como se agregó composición a la clase "Cliente" de parte de la clase "Platillo", esto se actualizó en el UML y todo puede ser comprobado desde el main, que actualmente contiene 147 líneas, mientras que el archivo "Personas.h" tiene 226 líneas y el archivo "Platillos.h" tiene 108 líneas. 
