# Clase Nro 13 Clase de Uniones en C Embebido

En esta clase sobre uniones en C Embebido, exploramos una poderosa característica que nos permite ahorrar memoria y manipular datos de manera eficiente en sistemas embebidos.

***Puedes ver toda la clase: [aquí](https://youtu.be/tqK7GILLDzw) 👈🏻***

![Imagen](/13.Union/Img/UNION_C_Embebido.png)

## Desarrollo de clase

### Bit Field
Comenzamos introduciendo el concepto de estructuras con Bit Fields, que nos permiten asignar un número específico de bits a cada campo de una estructura. Aprendimos cómo esto puede ser útil para representar configuraciones de hardware y estados de dispositivos de manera eficiente.

### Union
Luego, nos adentramos en las uniones. Las uniones son similares a las estructuras, pero con una diferencia crucial: comparten el mismo espacio de memoria para todos sus campos. Esto significa que, en cualquier momento, solo un campo de la unión puede contener datos válidos.

### TRISDbits
Exploramos cómo las uniones son útiles cuando necesitamos representar una misma ubicación de memoria de diferentes maneras, según el contexto. Vimos ejemplos de Microchip con TRISDbits, donde una unión se utiliza para acceder a los bits individuales de un registro, lo que facilita la manipulación y configuración de pines GPIO en microcontroladores PIC.

--- 

En resumen, esta clase nos proporcionó una comprensión sólida de las uniones en C Embebido y cómo pueden ser utilizadas para representar datos en diferentes formatos dentro de la misma ubicación de memoria. Esto es esencial para desarrollar aplicaciones eficientes y confiables en sistemas embebidos. ¡Prepárate para seguir explorando más conceptos emocionantes en las próximas clases!

¡Prepárate para seguir explorando más conceptos emocionantes en las próximas clases!

Puedes encontrar la grabación de esta clase en este enlace de [YouTube.](https://youtu.be/tqK7GILLDzw)

### Archivos que utilizamos:
* [Main.c](/13.Union/main.c) - Archivo Main.
* [Online GDB](https://www.onlinegdb.com/) - El compilador virtual que puedes utilizar para programar.

### Descarga el PDF:
* [PDF Clase Estructuras](/13.Union/Doc/Union%20-%20C%20Embebido.pdf) - Documento de la clase.

A continuación, te proporcionamos los enlaces de descarga de las herramientas que utilizaremos en la siguiente clase:

### Software a descargar:
* [STM32Cube IDE](https://www.st.com/en/development-tools/stm32cubeide.html) - El IDE con el que utilizaremos
* [MinGW](https://sourceforge.net/projects/mingw/) Descarga el compilador GCC

¡Prepárate para seguir explorando los conceptos avanzados en las próximas clases!

