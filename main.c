#include <stdio.h>
#include <stdlib.h>

void juego(char array[3][3]);
void tablero(char array[3][3]);
void imp_tablero(char array[3][3]);
void intro1_numeros(char array[3][3]);
void intro2_numeros(char array[3][3]);
int ganador (char array[3][3]);

int main()
{
    char array[3][3];
    printf("Juego del gato");
    juego(array);
    return 3;
}

void juego(char array[3][3])
{
    int i=0, j;
    tablero(array);
    do
    {
        system("cls");
        imp_tablero(array);

        if(i%2==0)
            intro1_numeros(array);
        else
            intro2_numeros(array);
        j=ganador(array);
        i++;
        }while(i<9&&j==2);
        system("cls");
        imp_tablero(array);
        if(j==0)
        {
        printf("\nEl jugador 1 gano\n");
        }
        else if(j==1)
        {
        printf("\nEl jugador 2 gano\n");
        }
        else if(j==2)
        {
        printf("\Han empatado\n");
        }
}
void tablero(char array[3][3])
{
    char aux='1';
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            array[i][j]=aux++;
    }
}
void imp_tablero(char array[3][3])
{
  for(int i=0;i<3;i++)
  {
      for(int j=0;j<3;j++)
      {
          printf("%c\t", array[i][j]);
      }
      printf("\n\n");
  }
}
void intro1_numeros(char array[3][3])
{
    char aux;
    int k,i,j;
    do
    {
        do
        {
            printf("Jugador 1 selecciona una casilla entre 1 y 9: ");
            fflush(stdin);
            scanf("%c", &aux);
        }while(aux<'1'||aux>'9');
        k=0;
        switch(aux)
        {
        case '1':
            {
            i=0;
            j=0;
            if(array[i][j]=='X'||array[i][j]=='O')
            {
                k=1;
                printf("intenta nuevamente con una casilla que no este ocupada\n");
            }
            break;
            }
            case '2':
            {
            i=0;
            j=1;
            if(array[i][j]=='X'||array[i][j]=='O')
            {
                k=1;
                printf("intenta nuevamente con una casilla que no este ocupada\n");
            }
            break;
            }
            case '3':
            {
            i=0;
            j=2;
            if(array[i][j]=='X'||array[i][j]=='O')
            {
                k=1;
                printf("intenta nuevamente con una casilla que no este ocupada\n");
            }
            break;
            }
            case '4':
            {
            i=1;
            j=0;
            if(array[i][j]=='X'||array[i][j]=='O')
            {
                k=1;
                printf("intenta nuevamente con una casilla que no este ocupada\n");
            }
            break;
            }
            case '5':
            {
            i=1;
            j=1;
            if(array[i][j]=='X'||array[i][j]=='O')
            {
                k=1;
                printf("intenta nuevamente con una casilla que no este ocupada\n");
            }
            break;
            }
            case '6':
            {
            i=1;
            j=2;
            if(array[i][j]=='X'||array[i][j]=='O')
            {
                k=1;
                printf("intenta nuevamente con una casilla que no este ocupada\n");
            }
            break;
            }
            case '7':
            {
            i=2;
            j=0;
            if(array[i][j]=='X'||array[i][j]=='O')
            {
                k=1;
                printf("intenta nuevamente con una casilla que no este ocupada\n");
            }
            break;
            }
            case '8':
            {
            i=2;
            j=1;
            if(array[i][j]=='X'||array[i][j]=='O')
            {
                k=1;
                printf("intenta nuevamente con una casilla que no este ocupada\n");
            }
            break;
            }
            case '9':
            {
            i=2;
            j=2;
            if(array[i][j]=='X'||array[i][j]=='O')
            {
                k=1;
                printf("intenta nuevamente con una casilla que no este ocupada\n");
            }
            break;
            }
        }
    }while (k==1);
    array[i][j]='X';
}

void intro2_numeros(char array[3][3])
{
    char aux;
    int k,i,j;
    do
    {
        do
        {
            printf("Jugador 2 selecciona una casilla entre 1 y 9: ");
            fflush(stdin);
            scanf("%c", &aux);
        }while(aux<'1'||aux>'9');
        k=0;
        switch(aux)
        {
        case '1':
            {
            i=0;
            j=0;
            if(array[i][j]=='X'||array[i][j]=='O')
            {
                k=1;
                printf("intenta nuevamente con una casilla que no este ocupada\n");
            }
            break;
            }
            case '2':
            {
            i=0;
            j=1;
            if(array[i][j]=='X'||array[i][j]=='O')
            {
                k=1;
                printf("intenta nuevamente con una casilla que no este ocupada\n");
            }
            break;
            }
            case '3':
            {
            i=0;
            j=2;
            if(array[i][j]=='X'||array[i][j]=='O')
            {
                k=1;
                printf("intenta nuevamente con una casilla que no este ocupada\n");
            }
            break;
            }
            case '4':
            {
            i=1;
            j=0;
            if(array[i][j]=='X'||array[i][j]=='O')
            {
                k=1;
                printf("intenta nuevamente con una casilla que no este ocupada\n");
            }
            break;
            }
            case '5':
            {
            i=1;
            j=1;
            if(array[i][j]=='X'||array[i][j]=='O')
            {
                k=1;
                printf("intenta nuevamente con una casilla que no este ocupada\n");
            }
            break;
            }
            case '6':
            {
            i=1;
            j=2;
            if(array[i][j]=='X'||array[i][j]=='O')
            {
                k=1;
                printf("intenta nuevamente con una casilla que no este ocupada\n");
            }
            break;
            }
            case '7':
            {
            i=2;
            j=0;
            if(array[i][j]=='X'||array[i][j]=='O')
            {
                k=1;
                printf("intenta nuevamente con una casilla que no este ocupada\n");
            }
            break;
            }
            case '8':
            {
            i=2;
            j=1;
            if(array[i][j]=='X'||array[i][j]=='O')
            {
                k=1;
                printf("intenta nuevamente con una casilla que no este ocupada\n");
            }
            break;
            }
            case '9':
            {
            i=2;
            j=2;
            if(array[i][j]=='X'||array[i][j]=='O')
            {
                k=1;
                printf("intenta nuevamente con una casilla que no este ocupada\n");
            }
            break;
            }
        }
    }while (k==1);
    array[i][j]='O';
}
int ganador (char array[3][3])
{
    if (array[0][0]=='X'||array[0][0]=='O')
    {
        if(array[0][0]==array[0][1]&&array[0][0]==array[0][2])
        {
            if (array[0][0]=='X')
            {
                return 0;
            }
            else
            {
                return 1;
            }
        }
        if(array[0][0]==array[1][0]&&array[0][0]==array[2][0])
        {
            if (array[0][0]=='X')
            {
                return 0;
            }
            else
            {
                return 1;
            }
        }
    }
    if (array[1][1]=='X'||array[1][1]=='O')
    {
        if(array[1][1]==array[0][0]&&array[1][1]==array[2][2])
        {
            if (array[1][1]=='X')
            {
                return 0;
            }
            else
            {
                return 1;
            }
        }
        if(array[1][1]==array[0][1]&&array[1][1]==array[2][1])
        {
            if (array[1][1]=='X')
            {
                return 0;
            }
            else
            {
                return 1;
            }
        }
        if(array[1][1]==array[0][2]&&array[1][1]==array[2][0])
        {
            if (array[1][1]=='X')
            {
                return 0;
            }
            else
            {
                return 1;
            }
        }
        if(array[1][1]==array[1][0]&&array[1][1]==array[1][2])
        {
            if (array[1][1]=='X')
            {
                return 0;
            }
            else
            {
                return 1;
            }
        }
    }
    if (array[2][2]=='X'||array[2][2]=='O')
    {
        if(array[2][2]==array[0][2]&&array[2][2]==array[1][2])
        {
            if (array[2][2]=='X')
            {
                return 0;
            }
            else
            {
                return 1;
            }
        }
        if(array[2][2]==array[2][0]&&array[2][2]==array[2][1])
        {
            if (array[2][2]=='X')
            {
                return 0;
            }
            else
            {
                return 1;
            }
        }
    }

    return 2;
}
