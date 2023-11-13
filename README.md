# <div align="center">📚 ft_printf 100/100:white_check_mark:</div>
<p align="center">
  <img src="https://github.com/byaliego/42-project-badges/blob/main/badges/ft_printfe.png" alt="Libftm Badge">
</p>

## 📝 Resumen

El objetivo de este proyecto es bastante sencillo. Deberás reprogramar printf(). Aprenderás, principalmente, a utilizar un número variable de argumentos. 👨‍💻

## Descripción 

Este proyecto consiste en replicar el funcionamiento de la función original de printf. 
Se deben implementar las siguientes conversiones:

| Conversión  | Descripción														 			|
|-------|-----------------------------------------------------------------------------------|
| **%c** | Imprime un solo carácter.       													|
| **%s** | Imprime una string (como se define por defecto en C).											|
| **%p** | El puntero void * dado como argumento se imprime en formato hexadecimal.								|
| **%d** | Imprime un número decimal (base 10).																	|
| **%i** | Imprime un entero en base 10.               											|
| **%u** | Imprime un número decimal (base 10) sin signo.               									|
| **%x** | Imprime un número hexadecimal (base 16) en minúsculas.                				|
| **%X** | Imprime un número hexadecimal (base 16) en mayúsculas.                				|
| **%%** | Imprime el símbolo del porcentaje.                 											|

◦ La función printf retorna el número de caracteres impresos, o un valor negativo si ocurre un error.

◦ No se debe implementar la gestión del buffer del original.

Prototipo de la función:

```C
int ft_printf(char const *s, ...);
```

