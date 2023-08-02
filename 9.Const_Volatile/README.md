# Clase Nro 9 Const y Volatile en C Embebido

En esta clase sobre Const y Volatile en C Embebido, exploramos el uso de estas palabras clave para mejorar la robustez y eficiencia de nuestros programas en sistemas embebidos

***Puedes ver toda la clase: [aquí](https://youtu.be/PLkXXSn8TPo) 👈🏻***

![Imagen](/9.Const_Volatile/Img/Const_Volatile_C.png)

## Desarrollo de clase

### Calificador Const
Comenzamos explicando el uso de la palabra clave "const" en diferentes contextos, incluyendo su aplicación con punteros. Aprendimos cómo "const" nos permite declarar variables inmutables, lo que evita modificaciones accidentales y asegura la integridad de los datos. 

### Const con punteros
Además, exploramos cómo utilizar "const" con punteros para proteger el contenido al que apuntan y prevenir cambios indeseados en áreas críticas de memoria.

### Volatile
Luego, nos adentramos en el concepto de "volatile" y su importancia en el desarrollo de sistemas embebidos. Aprendimos que "volatile" se utiliza para indicar que una variable puede cambiar inesperadamente debido a factores externos, como registros de hardware o interrupciones. Esto es esencial en entornos donde el hardware puede cambiar el valor de una variable sin que el programa principal sea consciente de ello.

### Optimización con Volatile
Exploramos cómo "volatile" es especialmente útil en la optimización de programas, ya que evita que el compilador realice optimizaciones agresivas que podrían afectar la funcionalidad del código. Esto es crucial en sistemas embebidos, donde la precisión y el tiempo de respuesta son críticos.

--- 

En resumen, esta clase nos brindó una comprensión profunda de cómo utilizar "const" y "volatile" en C Embebido para asegurar la integridad de los datos y mejorar la eficiencia del programa. Con estos conocimientos, estaremos mejor preparados para desarrollar aplicaciones más robustas y confiables en sistemas embebidos. ¡Prepárate para seguir explorando más conceptos emocionantes en las próximas clases!

¡Prepárate para seguir explorando más conceptos emocionantes en las próximas clases!

Puedes encontrar la grabación de esta clase en este enlace de [YouTube.](https://youtu.be/PLkXXSn8TPo)

### Archivos que utilizamos:
* [Main.c](/9.Const_Volatile/Codigo_STM32/Src/main.c) - Proyecto de STM32.
* [Delay.c](/9.Const_Volatile/Codigo_STM32/Src/delay.c) - Archivo Delay de STM32.
* [Main.c](/9.Const_Volatile/main.c) - Archivo Hola Mundo.
* [Online GDB](https://www.onlinegdb.com/) - El compilador virtual que puedes utilizar para programar.

### Descarga el PDF:
* [PDF Clase Const - Volatile](/9.Const_Volatile/Doc/Const%20Volatile%20y%20Optimización%20-%20Clase%209%20-%20C%20Embebido.pdf) - Documento de la clase.

A continuación, te proporcionamos los enlaces de descarga de las herramientas que utilizaremos en la siguiente clase:

### Software a descargar:
* [STM32Cube IDE](https://www.st.com/en/development-tools/stm32cubeide.html) - El IDE con el que utilizaremos
* [MinGW](https://sourceforge.net/projects/mingw/) Descarga el compilador GCC

¡Prepárate para seguir explorando los conceptos avanzados en las próximas clases!

