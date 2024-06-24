<a href="#" onclick="return false;"><img alt="42 Logo" src="https://github.com/unisraporelmundo/unisraporelmundo/blob/main/unisraporelmundo/printfbanner.gif"></a>

El segundo proyecto en 42 es printf. El objetivo de este proyecto es bastante sencillo. Deberás reprogramar printf().
Aprenderás, principalmente, a utilizar un número variable de argumentos.

[Click aquí](https://github.com/unisraporelmundo/unisraporelmundo/blob/main/unisraporelmundo/SubjectPrintf.pdf) para ver el `PDF` del proyecto.

<div align="center">

  | Circle | Project | Status | Language |
  |:------:|:-------:|:------:|:------:|
  | 0 | [**Printf**](https://github.com/unisraporelmundo/printf) | **100%** | <img  height="25" src=https://user-images.githubusercontent.com/25181517/192106070-46255bcf-65e6-4c6b-a296-bf8d0d8fb2a7.png> |
  |||

### ⭐️ FT_PRINTF

La función principal del proyecto. Se encuentra en [ft_printf.c](https://github.com/unisraporelmundo/printf/blob/main/ft_printf.c).

Esta función:
1. Inicializa una lista de argumentos variables usando `va_start`.
2. Itera sobre la cadena de formato.
3. Llama a `ft_convert` cuando encuentra un `%`.
4. Imprime caracteres normales directamente.
5. Finaliza la lista de argumentos con `va_end`.
6. Devuelve el número de caracteres impresos.

### Funciones Auxiliares

#### ⭐️ FT_CONVERTER

Ubicada en [Ft_Converter](https://github.com/unisraporelmundo/printf/blob/main/ft_printf.c).

Esta función determina qué tipo de dato procesar basándose en el especificador y llama a la función correspondiente:
- `'c'`: `ft_putchar`
- `'s'`: `ft_putstr`
- `'p'`: `ft_putptr`
- `'d'`/`'i'`: `ft_putnbr`
- `'u'`: `ft_putunsigned`
- `'x'`/`'X'`: `ft_puthex`

#### ⭐️ FT_PUTCHAR

Ubicada en [ft_putchar.c](https://github.com/unisraporelmundo/printf/blob/main/ft_putchar.c).

Imprime un solo carácter.

#### ⭐️ FT_PUTSTR

Ubicada en [ft_putstr.c](https://github.com/unisraporelmundo/printf/blob/main/ft_putstr.c).

Imprime una cadena de caracteres. Maneja punteros nulos reemplazándolos con `"(null)"`.

#### ⭐️ FT_PUTPTR

Ubicada en [ft_putptr.c](https://github.com/unisraporelmundo/printf/blob/main/ft_putptr.c).

Imprime un puntero en formato hexadecimal, precedido por `0x`.

#### ⭐️ FT_PUTNBR

Ubicada en [ft_putnbr.c](https://github.com/unisraporelmundo/printf/blob/main/ft_putnbr.c).

Imprime un número entero. Maneja el caso especial del valor mínimo de `int` y los números negativos.

#### ⭐️ FT_PUTUNSIGNED

Ubicada en [ft_putunsigned.c](https://github.com/unisraporelmundo/printf/blob/main/ft_putunsigned.c).

Imprime un número entero sin signo.

#### ⭐️ FT_PUTHEX

Ubicada en [ft_puthex.c](https://github.com/unisraporelmundo/printf/blob/main/ft_puthex.c).

Imprime un número entero sin signo en formato hexadecimal. Usa la cadena `"0123456789abcdef"` para minúsculas y `"0123456789ABCDEF"` para mayúsculas.

### Funciones Complementarias

#### ⭐️ FT_STRLEN

Ubicada en [ft_strlen.c](https://github.com/unisraporelmundo/printf/blob/main/ft_strlen.c).

Devuelve la longitud de una cadena de caracteres.

## ‼️Conceptos Clave

### ❗️va_list, va_start, va_arg, va_end

`va_list` maneja argumentos variables en C. `va_start` inicializa la lista, `va_arg` recupera cada argumento, y `va_end` la limpia.

### ❗️uintptr_t

`uintptr_t` es un tipo entero sin signo que puede contener cualquier puntero válido.

### ❗️Cadena "0123456789abcdef"

Especifica el orden de los dígitos hexadecimales para imprimir en minúsculas. Para mayúsculas, usar `"0123456789ABCDEF"`.

## Enlaces a archivos
- [ft_printf.c](https://github.com/unisraporelmundo/printf/blob/main/ft_printf.c)
- [ft_putchar.c](https://github.com/unisraporelmundo/printf/blob/main/ft_putchar.c)
- [ft_putstr.c](https://github.com/unisraporelmundo/printf/blob/main/ft_putstr.c)
- [ft_putptr.c](https://github.com/unisraporelmundo/printf/blob/main/ft_putptr.c)
- [ft_putnbr.c](https://github.com/unisraporelmundo/printf/blob/main/ft_putnbr.c)
- [ft_putunsigned.c](https://github.com/unisraporelmundo/printf/blob/main/ft_putunsigned.c)
- [ft_puthex.c](https://github.com/unisraporelmundo/printf/blob/main/ft_puthex.c)
- [ft_strlen.c](https://github.com/unisraporelmundo/printf/blob/main/ft_strlen.c)

