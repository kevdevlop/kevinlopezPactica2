Analex
====
Analizador lexico para TynyC para Temas Selectos de Ingeniería de Software II
Kevin Norman López López

## Instrucciones de uso
### Para ejecutar el programa principal "ejecutar.py" se pasa como argumento el nombre del archivo que se desea analizar, siguiendo este comando:
``` $ python [programa_principal] [archivo_para_analizar]
```
``` $ python [programa_principal] [archivo_para_analizar]
   #EJEMPLO
  $ python ejecutar.py ejemplo.tc
```

### Input - Este es el archivo de ejemplo para analizar "ejemplo.tc"
```/* guess a number between 1 and 100.
/* t. a. Gibson 11/29/76.
guessnum [
int _guess, number
char answer
float b = 20.89
number++
ps "seed? ";last=seed=gn
answer = 'y'
while (answer == 'y') [
number = random (1,100)
pl "Guess a number between 1 and 100."
pl "";ps "What is your guess? ";guess = gn
while (guess != number) [
if (guess < number) && guess ps "Too low."
if (guess > number) ps "Too high."
pl "";ps "What is your guess? ";guess = gn
] /* end while loop.
ps "RIGHT!!";pl "";ps "Again (y/n)? "
answer = gc
] /* end of answer loop.
]
```

### Output - Salida del programa
Linea 1    Columna 0    Tipo DIV              Valor [ /  ]
Linea 1    Columna 1    Tipo MULT             Valor [ *  ]
Linea 1    Columna 3    Tipo IDENTIFICADOR    Valor [ guess ]
Linea 1    Columna 9    Tipo IDENTIFICADOR    Valor [ a  ]
Linea 1    Columna 11   Tipo IDENTIFICADOR    Valor [ number ]
Linea 1    Columna 18   Tipo IDENTIFICADOR    Valor [ between ]
Linea 1    Columna 26   Tipo ENTERO           Valor [ 1  ]
Linea 1    Columna 28   Tipo IDENTIFICADOR    Valor [ and ]
Linea 1    Columna 32   Tipo FLOTANTE         Valor [ 100. ]
Linea 2    Columna 37   Tipo DIV              Valor [ /  ]
Linea 2    Columna 38   Tipo MULT             Valor [ *  ]
Linea 2    Columna 40   Tipo IDENTIFICADOR    Valor [ t  ]
Linea 2    Columna 41   Tipo FLOTANTE         Valor [ .  ]
Linea 2    Columna 43   Tipo IDENTIFICADOR    Valor [ a  ]
Linea 2    Columna 44   Tipo FLOTANTE         Valor [ .  ]
Linea 2    Columna 46   Tipo IDENTIFICADOR    Valor [ Gibson ]
Linea 2    Columna 53   Tipo ENTERO           Valor [ 11 ]
Linea 2    Columna 55   Tipo DIV              Valor [ /  ]
Linea 2    Columna 56   Tipo ENTERO           Valor [ 29 ]
Linea 2    Columna 58   Tipo DIV              Valor [ /  ]
Linea 2    Columna 59   Tipo FLOTANTE         Valor [ 76. ]
Linea 3    Columna 63   Tipo IDENTIFICADOR    Valor [ guessnum ]
Linea 3    Columna 72   Tipo CORIZQ           Valor [ [  ]
Linea 4    Columna 75   Tipo IDENTIFICADOR    Valor [ int ]
Linea 4    Columna 79   Tipo IDENTIFICADOR    Valor [ _guess ]
Linea 4    Columna 85   Tipo COMA             Valor [ ,  ]
Linea 4    Columna 87   Tipo IDENTIFICADOR    Valor [ number ]
Linea 4    Columna 93   Tipo PLUSPLUS         Valor [ ++ ]
Linea 5    Columna 97   Tipo IDENTIFICADOR    Valor [ char ]
Linea 5    Columna 102  Tipo IDENTIFICADOR    Valor [ answer ]
Linea 6    Columna 110  Tipo IDENTIFICADOR    Valor [ float ]
Linea 6    Columna 116  Tipo IDENTIFICADOR    Valor [ b  ]
Linea 6    Columna 118  Tipo ASIGNAR          Valor [ =  ]
Linea 6    Columna 120  Tipo FLOTANTE         Valor [ 20.89 ]
Linea 7    Columna 127  Tipo IDENTIFICADOR    Valor [ ps ]
Linea 7    Columna 130  Tipo COMDOB           Valor [ "  ]
Linea 7    Columna 131  Tipo IDENTIFICADOR    Valor [ seed ]
Linea 7    Columna 135  Tipo INTDER           Valor [ ?  ]
Linea 7    Columna 137  Tipo COMDOB           Valor [ "  ]
Linea 7    Columna 138  Tipo PUNTOCOMA        Valor [ ;  ]
Linea 7    Columna 139  Tipo IDENTIFICADOR    Valor [ last ]
Linea 7    Columna 143  Tipo ASIGNAR          Valor [ =  ]
Linea 7    Columna 144  Tipo IDENTIFICADOR    Valor [ seed ]
Linea 7    Columna 148  Tipo ASIGNAR          Valor [ =  ]
Linea 7    Columna 149  Tipo IDENTIFICADOR    Valor [ gn ]
Linea 8    Columna 153  Tipo IDENTIFICADOR    Valor [ answer ]
Linea 8    Columna 160  Tipo ASIGNAR          Valor [ =  ]
Linea 8    Columna 162  Tipo CHAR             Valor [ 'y' ]
Linea 9    Columna 167  Tipo MIENTRAS         Valor [ while ]
Linea 9    Columna 173  Tipo PARIZQ           Valor [ (  ]
Linea 9    Columna 174  Tipo IDENTIFICADOR    Valor [ answer ]
Linea 9    Columna 181  Tipo IGUAL            Valor [ == ]
Linea 9    Columna 184  Tipo CHAR             Valor [ 'y' ]
Linea 9    Columna 187  Tipo PARDER           Valor [ )  ]
Linea 9    Columna 189  Tipo CORIZQ           Valor [ [  ]
Linea 10   Columna 193  Tipo IDENTIFICADOR    Valor [ number ]
Linea 10   Columna 200  Tipo ASIGNAR          Valor [ =  ]
Linea 10   Columna 202  Tipo IDENTIFICADOR    Valor [ random ]
Linea 10   Columna 209  Tipo PARIZQ           Valor [ (  ]
Linea 10   Columna 210  Tipo ENTERO           Valor [ 1  ]
Linea 10   Columna 211  Tipo COMA             Valor [ ,  ]
Linea 10   Columna 212  Tipo ENTERO           Valor [ 100 ]
Linea 10   Columna 215  Tipo PARDER           Valor [ )  ]
Linea 11   Columna 219  Tipo IDENTIFICADOR    Valor [ pl ]
Linea 11   Columna 222  Tipo COMDOB           Valor [ "  ]
Linea 11   Columna 223  Tipo IDENTIFICADOR    Valor [ Guess ]
Linea 11   Columna 229  Tipo IDENTIFICADOR    Valor [ a  ]
Linea 11   Columna 231  Tipo IDENTIFICADOR    Valor [ number ]
Linea 11   Columna 238  Tipo IDENTIFICADOR    Valor [ between ]
Linea 11   Columna 246  Tipo ENTERO           Valor [ 1  ]
Linea 11   Columna 248  Tipo IDENTIFICADOR    Valor [ and ]
Linea 11   Columna 252  Tipo FLOTANTE         Valor [ 100. ]

## NOTA
### Se anexa un programa de prueba que contiene errores lexicos llamado "error.tc"
