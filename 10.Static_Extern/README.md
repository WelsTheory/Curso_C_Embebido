# Clase Nro 10 Static y Extern en C Embebido

En esta clase sobre variables locales y globales en C Embebido, exploramos las diferencias entre estos dos tipos de variables y cómo afectan el alcance y la vida útil de los datos en nuestros programas.

***Puedes ver toda la clase: [aquí](https://youtu.be/ps2Q2NtB-3g) 👈🏻***

![Imagen](/10.Static_Extern/Img/Static_Extern_C_Embebido.png)

## Desarrollo de clase

### Variables locales
Comenzamos explicando las variables locales, que son aquellas declaradas dentro de una función y solo son accesibles dentro de esa función. Aprendimos que las variables locales tienen un alcance limitado a la función en la que se definen, lo que significa que no pueden ser utilizadas fuera de ella. Además, las variables locales se crean y destruyen cada vez que se entra y se sale de la función, lo que determina su vida útil.

### Variables globales
Por otro lado, exploramos las variables globales, que se declaran fuera de cualquier función y son accesibles desde cualquier parte del programa. Aprendimos que las variables globales tienen un alcance global y pueden ser utilizadas y modificadas en diferentes funciones. Su vida útil se extiende a lo largo de toda la ejecución del programa.

### Static
Aprendimos que "static" se puede utilizar con variables locales para mantener su valor entre llamadas a la función, mientras que "static" en funciones limita su alcance a solo el archivo en el que están definidas.

### Extern
Por otro lado, "extern" se utiliza para hacer referencia a variables o funciones que se encuentran en otro archivo de código fuente. Esto permite compartir información entre diferentes módulos o archivos en un programa más grande.

--- 

En resumen, esta clase nos brindó una comprensión clara de las diferencias entre variables locales y globales en C Embebido, así como el uso de "static" y "extern" para controlar el alcance y la vida útil de variables y funciones. Estos conceptos son fundamentales para estructurar y organizar nuestros programas de manera efectiva en sistemas embebidos. ¡Prepárate para seguir explorando más conceptos emocionantes en las próximas clases!

¡Prepárate para seguir explorando más conceptos emocionantes en las próximas clases!

Puedes encontrar la grabación de esta clase en este enlace de [YouTube.](https://youtu.be/ps2Q2NtB-3g)

### Archivos que utilizamos:
* [Main.c](/10.Static_Extern/main.c) - Archivo Hola Mundo.
* [Delay.c](/10.Static_Extern/delay.c) - Archivo Delay de STM32.
* [Online GDB](https://www.onlinegdb.com/) - El compilador virtual que puedes utilizar para programar.

### Descarga el PDF:
* [PDF Clase Static y Extern](/10.Static_Extern/Doc/Const%20y%20Extern%201%20-%20C%20Embebido.pptx.pdf) - Documento de la clase.

A continuación, te proporcionamos los enlaces de descarga de las herramientas que utilizaremos en la siguiente clase:

### Software a descargar:
* [STM32Cube IDE](https://www.st.com/en/development-tools/stm32cubeide.html) - El IDE con el que utilizaremos
* [MinGW](https://sourceforge.net/projects/mingw/) Descarga el compilador GCC

¡Prepárate para seguir explorando los conceptos avanzados en las próximas clases!

