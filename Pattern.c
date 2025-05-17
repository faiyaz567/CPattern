#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define getch() getchar()

void clearScreen()
{
    #ifdef _WIN32
         system("cls");
    #else
         system ("clear");
    #endif
}

void printAsciiArt() {
    printf("   _  _  _  _  _         ___       _  _   _  _  _  _  _     _  _   _  _  _  _  _     _  _  _  _  _       _  _  _  _  _      _ _          _ _                              \n");
    printf("|                )     /     \\    | _     _   _   _   _|   | _     _   _   _   _|   |_   _   _   _|   |                )   |     \\      |   |                      \n");
    printf("|     -  -      /     /       \\           |   |                    |   |            |   |             |     -  -      /    |      \\     |   |                  \n");
    printf("|   |       |  /     /    -    \\          |   |                    |   |            |   |             |   |       |  /     |       \\    |   |                \n");
    printf("|     -  -    /     /   |   |   \\         |   |                    |   |            |   |             |     -  -    /      |    _   \\   |   |                      \n");
    printf("|     _ _ _ _/     /      -      \\        |   |                    |   |            |   |_ _ _ _      |     _ _ _ _/       |   |  \\  \\  |   |                     \n");
    printf("|  |              /    /     \\    \\       |   |                    |   |            |   | _ _ _ |     |   |     \\   \\      |   |   \\  \\ |   |                        \n");
    printf("|  |             /    /       \\    \\      |   |                    |   |            |   |             |   |      \\   \\     |   |    \\  \\|   |                            \n");
    printf("|  |            /    /         \\    \\     |   |                    |   |            |_  | _  _   _    |   |       \\   \\    |   |     \\      |                          \n");
    printf("|_ |           / _  /           \\  _ \\    | _ |                    | _ |            |_   _   _   _|   |_ _|        \\_ _\\   |_ _|      \\  _ _|                       \n");
}

//Function
void home()


 {

char name[100];
int letsgo = -1;
clearScreen();

printf("\n\n");


printAsciiArt();

printf("\n\n\n");
printf("\n");
printf("\n");


printf("                                         Please Enter Your Name: ");
scanf("%[^\n]%*c", name);

    clearScreen();

printAsciiArt();
printf("\n");
printf("\n");

printf("\n                                       Hello, %s!\n", name);

printf("\n");
printf("\n");
printf("                                         It's nice to meet you! \n");
printf("\n");
printf("\n");
printf("                                         This project is mainly based on showing pattern in simple and visual way possible.\n");
printf("\n");
printf("                                         Thank you for taking your time and hope you enjoy the project.\n");
printf("\n");
printf("                                         Sorry in advance if you find any mistakes in logic from my code and debugging.\n");
printf("\n");
printf("\n");
printf("                                                                      HAPPY CODING (-_-) (F.W.Tahsin)       \n");
printf("\n");
printf("\n");

while(1){
    printf("                                             Press 1 to Continue or 0 to Exit...\n\n\n");
    printf("\n");
    printf("\n");
    printf("                                             Enter your choice:  ");
    if(scanf("%d", &letsgo) != 1)
       while(getchar() != '\n');
       switch(letsgo)
{
    case 1:
    clearScreen();
    return;
    case 0:
    printf("                                             EXITING PROGRAM.  BYE BYE \\(-_-)/\n\n");

    exit(0);


}
}





printf("\\(T-T)//");

printf("\n");
printf("\n");

}

void cross()

{
    clearScreen();
    printAsciiArt();
    printf("\n\n\n");
    printf("\n");
    printf("\n");
    printf("CODE: \n");
    printf("\n");
    printf("\n");

    printf("for(i = 1 ;i<=n; i++)\n");
    printf("   {\n");
    printf("       for (j=1; j<=n ; j++)\n");
    printf("           {\n");
    printf("              if(j==(n-i+1)|| i == j )\n");
    printf("              printf(\"*\");\n");
    printf("            }\n");
    printf("             else \n");
    printf("           {\n");
    printf("             printf(\" \");\n");
    printf("           }\n");
    printf("     printf(\"\\n\");\n");
    printf("   }\n");
    printf("\n");
    printf("\n");
    printf("           The below pattern is a cross pattern.\n");
    printf("           The cross pattern is a pattern that consists of two diagonal lines that intersect at the center.\n");
    printf("           The first diagonal line goes from the top left to the bottom right, and the second diagonal line goes from the top right to the bottom left.\n");

    printf("           The following code is commented out as it seems to be an example of how to visualize the pattern.\n");

printf("1.\n");
    printf("           FOR Example, n = 4\n");
    printf("                      |-j(1)-|-------------|-j(n)-| \n");
    printf("           i = 1      |[j1(*)| j2( ) j3( ) |j4( )]| \n");
    printf("                      |------|-------------|------| \n");
    printf("           i = 2      |[j1( )| j2( ) j3( ) |j4( )]| \n");
    printf("           i = 3      |[j1( )| j2( ) j3( ) |j4( )]| \n");
    printf("                      |------|-------------|------| \n");
    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4( )]| \n");
    printf("                      |------|-------------|------| \n");
    printf("\n");


    printf("2.\n");
    printf("\n");

    printf("                      |-j(1)-|-------------|-j(n)-| \n");
    printf("           i = 1      |[j1(*)| j2( ) j3( ) |j4( )]| \n");
    printf("                      |------|-------------|------| \n");
    printf("           i = 2      |[j1( )| j2(*) j3( ) |j4( )]| \n");
    printf("           i = 3      |[j1( )| j2( ) j3( ) |j4( )]| \n");
    printf("                      |------|-------------|------| \n");
    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4( )]| \n");
    printf("                      |------|-------------|------| \n");
    printf("\n");
    printf("3.\n");
    printf("\n");

    printf("                      |-j(1)-|-------------|-j(n)-| \n");
    printf("           i = 1      |[j1(*)| j2( ) j3( ) |j4( )]| \n");
    printf("                      |------|-------------|------| \n");
    printf("           i = 2      |[j1( )| j2(*) j3( ) |j4( )]| \n");
    printf("           i = 3      |[j1( )| j2( ) j3(*) |j4( )]| \n");
    printf("                      |------|-------------|------| \n");
    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4( )]| \n");
    printf("                      |------|-------------|------| \n");
    printf("\n");
    printf("4.\n");
    printf("\n");

    printf("                      |-j(1)-|-------------|-j(n)-| \n");
    printf("           i = 1      |[j1(*)| j2( ) j3( ) |j4( )]| \n");
    printf("                      |------|-------------|------| \n");
    printf("           i = 2      |[j1( )| j2(*) j3( ) |j4( )]| \n");
    printf("           i = 3      |[j1( )| j2( ) j3(*) |j4( )]| \n");
    printf("                      |------|-------------|------| \n");
    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4(*)]| \n");
    printf("                      |------|-------------|------| \n");
    printf("\n");
    printf("5.\n");
    printf("\n");

    printf("                      |-j(1)-|-------------|-j(n)-| \n");
    printf("           i = 1      |[j1(*)| j2( ) j3( ) |j4(*)]| \n");
    printf("                      |------|-------------|------| \n");
    printf("           i = 2      |[j1( )| j2(*) j3( ) |j4( )]| \n");
    printf("           i = 3      |[j1( )| j2( ) j3(*) |j4( )]| \n");
    printf("                      |------|-------------|------| \n");
    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4(*)]| \n");
    printf("                      |------|-------------|------| \n");
    printf("\n");
    printf("6.\n");
    printf("\n");

    printf("                      |-j(1)-|-------------|-j(n)-| \n");
    printf("           i = 1      |[j1(*)| j2( ) j3( ) |j4(*)]| \n");
    printf("                      |------|-------------|------| \n");
    printf("           i = 2      |[j1( )| j2(*) j3(*) |j4( )]| \n");
    printf("           i = 3      |[j1( )| j2( ) j3(*) |j4( )]| \n");
    printf("                      |------|-------------|------| \n");
    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4(*)]| \n");
    printf("                      |------|-------------|------| \n");
    printf("\n");
    printf("7.\n");
    printf("\n");

    printf("                      |-j(1)-|-------------|-j(n)-| \n");
    printf("           i = 1      |[j1(*)| j2( ) j3( ) |j4(*)]| \n");
    printf("                      |------|-------------|------| \n");
    printf("           i = 2      |[j1( )| j2(*) j3(*) |j4( )]| \n");
    printf("           i = 3      |[j1( )| j2(*) j3(*) |j4( )]| \n");
    printf("                      |------|-------------|------| \n");
    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4(*)]| \n");
    printf("                      |------|-------------|------| \n");

    printf("\n");
    printf("8.\n");
    printf("\n");

    printf("                      |-j(1)-|-------------|-j(n)-| \n");
    printf("           i = 1      |[j1(*)| j2( ) j3( ) |j4(*)]| \n");
    printf("                      |------|-------------|------| \n");
    printf("           i = 2      |[j1( )| j2(*) j3(*) |j4( )]| \n");
    printf("           i = 3      |[j1( )| j2(*) j3(*) |j4( )]| \n");
    printf("                      |------|-------------|------| \n");
    printf("           i = 4(n)   |[j1(*)| j2( ) j3( ) |j4(*)]| \n");
    printf("                      |------|-------------|------| \n");
}

void crosssquare()

{
    clearScreen();
    printAsciiArt();
    printf("\n\n\n");
    printf("\n");
    printf("\n");
    printf("CODE:\n");
    printf("\n");
    printf("\n");

    printf("for(i = 1 ;i<=n; i++)\n");
    printf("{\n");
    printf("for (j=1; j<=n ; j++)\n");
    printf("{\n");
    printf("if(i==1 || i==n || j==1 || j==n || j==(n-i+1) || i==j )\n");
    printf("printf(\"*\");\n");
    printf("else\n");
    printf("printf(\" \");\n");
    printf("}\n");
    printf("printf(\"\\n\");\n");
    printf("}\n");
    printf("           This below pattern is a crosssquare pattern.\n");
    printf("           The crosssquare pattern is a pattern that consists of two diagonal lines that intersect at the center.\n");
    printf("           The first diagonal line goes from the top left to the bottom right, and the second diagonal line goes from the top right to the bottom left.\n");
    printf("           This all happens inside a square.\n");
    printf("\n");
    printf("\n");

    printf("1.\n");
    printf("           FOR Example, n = 4\n");
    printf("                      |-j(1)-|-------------|-j(n)-| \n");
    printf("           i = 1      |[j1(*)| j2( ) j3( ) |j4( )]| \n");
    printf("                      |------|-------------|------| \n");
    printf("           i = 2      |[j1( )| j2( ) j3( ) |j4( )]| \n");
    printf("           i = 3      |[j1( )| j2( ) j3( ) |j4( )]| \n");
    printf("                      |------|-------------|------| \n");
    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4( )]| \n");
    printf("                      |------|-------------|------| \n");
    printf("\n");
    printf("\n");

    printf("2.\n");
    printf("\n");
    printf("                      |-j(1)-|-------------|-j(n)-| \n");
    printf("           i = 1      |[j1(*)| j2(*) j3( ) |j4( )]| \n");
    printf("                      |------|-------------|------| \n");
    printf("           i = 2      |[j1( )| j2( ) j3( ) |j4( )]| \n");
    printf("           i = 3      |[j1( )| j2( ) j3( ) |j4( )]| \n");
    printf("                      |------|-------------|------| \n");
    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4( )]| \n");
    printf("                      |------|-------------|------| \n");
    printf("\n");
    printf("3.\n");
    printf("\n");

    printf("                      |-j(1)-|-------------|-j(n)-| \n");
    printf("           i = 1      |[j1(*)| j2(*) j3(*) |j4( )]| \n");
    printf("                      |------|-------------|------| \n");
    printf("           i = 2      |[j1( )| j2( ) j3( ) |j4( )]| \n");
    printf("           i = 3      |[j1( )| j2( ) j3( ) |j4( )]| \n");
    printf("                      |------|-------------|------| \n");
    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4( )]| \n");
    printf("                      |------|-------------|------| \n");
    printf("\n");
    printf("4.\n");
    printf("\n");

    printf("                      |-j(1)-|-------------|-j(n)-| \n");
    printf("           i = 1      |[j1(*)| j2(*) j3(*) |j4(*)]| \n");
    printf("                      |------|-------------|------| \n");
    printf("           i = 2      |[j1( )| j2( ) j3( ) |j4( )]| \n");
    printf("           i = 3      |[j1( )| j2( ) j3( ) |j4( )]| \n");
    printf("                      |------|-------------|------| \n");
    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4( )]| \n");
    printf("                      |------|-------------|------| \n");


    printf("\n");
    printf("5.\n");
    printf("\n");

    printf("                      |-j(1)-|-------------|-j(n)-| \n");
    printf("           i = 1      |[j1(*)| j2(*) j3(*) |j4(*)]| \n");
    printf("                      |------|-------------|------| \n");
    printf("           i = 2      |[j1(*)| j2( ) j3( ) |j4( )]| \n");
    printf("           i = 3      |[j1( )| j2( ) j3( ) |j4( )]| \n");
    printf("                      |------|-------------|------| \n");
    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4( )]| \n");
    printf("                      |------|-------------|------| \n");
    printf("\n");
    printf("6.\n");
    printf("\n");

    printf("                      |-j(1)-|-------------|-j(n)-| \n");
    printf("           i = 1      |[j1(*)| j2(*) j3(*) |j4(*)]| \n");
    printf("                      |------|-------------|------| \n");
    printf("           i = 2      |[j1(*)| j2( ) j3( ) |j4(*)]| \n");
    printf("           i = 3      |[j1( )| j2( ) j3( ) |j4( )]| \n");
    printf("                      |------|-------------|------| \n");
    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4( )]| \n");
    printf("                      |------|-------------|------| \n");

    printf("\n");
    printf("7.\n");
    printf("\n");

    printf("                      |-j(1)-|-------------|-j(n)-| \n");
    printf("           i = 1      |[j1(*)| j2(*) j3(*) |j4(*)]| \n");
    printf("                      |------|-------------|------| \n");
    printf("           i = 2      |[j1(*)| j2( ) j3( ) |j4(*)]| \n");
    printf("           i = 3      |[j1(*)| j2( ) j3( ) |j4( )]| \n");
    printf("                      |------|-------------|------| \n");
    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4( )]| \n");
    printf("                      |------|-------------|------| \n");

    printf("\n");
    printf("8.\n");
    printf("\n");

    printf("                      |-j(1)-|-------------|-j(n)-| \n");
    printf("           i = 1      |[j1(*)| j2(*) j3(*) |j4(*)]| \n");
    printf("                      |------|-------------|------| \n");
    printf("           i = 2      |[j1(*)| j2( ) j3( ) |j4(*)]| \n");
    printf("           i = 3      |[j1(*)| j2( ) j3( ) |j4(*)]| \n");
    printf("                      |------|-------------|------| \n");
    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4( )]| \n");
    printf("                      |------|-------------|------| \n");

    printf("\n");
    printf("9.\n");
    printf("\n");

    printf("                      |-j(1)-|-------------|-j(n)-| \n");
    printf("           i = 1      |[j1(*)| j2(*) j3(*) |j4(*)]| \n");
    printf("                      |------|-------------|------| \n");
    printf("           i = 2      |[j1(*)| j2( ) j3( ) |j4(*)]| \n");
    printf("           i = 3      |[j1(*)| j2( ) j3( ) |j4(*)]| \n");
    printf("                      |------|-------------|------| \n");
    printf("           i = 4(n)   |[j1(*)| j2( ) j3( ) |j4( )]| \n");
    printf("                      |------|-------------|------| \n");
    printf("\n");
    printf("10.\n");
    printf("\n");

    printf("                      |-j(1)-|-------------|-j(n)-| \n");
    printf("           i = 1      |[j1(*)| j2(*) j3(*) |j4(*)]| \n");
    printf("                      |------|-------------|------| \n");
    printf("           i = 2      |[j1(*)| j2( ) j3( ) |j4(*)]| \n");
    printf("           i = 3      |[j1(*)| j2( ) j3( ) |j4(*)]| \n");
    printf("                      |------|-------------|------| \n");
    printf("           i = 4(n)   |[j1(*)| j2(*) j3( ) |j4( )]| \n");
    printf("                      |------|-------------|------| \n");
    printf("\n");
    printf("11.\n");
    printf("\n");
    printf("                      |-j(1)-|-------------|-j(n)-| \n");
    printf("           i = 1      |[j1(*)| j2(*) j3(*) |j4(*)]| \n");
    printf("                      |------|-------------|------| \n");
    printf("           i = 2      |[j1(*)| j2( ) j3( ) |j4(*)]| \n");
    printf("           i = 3      |[j1(*)| j2( ) j3( ) |j4(*)]| \n");
    printf("                      |------|-------------|------| \n");
    printf("           i = 4(n)   |[j1(*)| j2(*) j3(*) |j4( )]| \n");
    printf("                      |------|-------------|------| \n");
    printf("\n");
    printf("12.\n");
    printf("\n");
    printf("                      |-j(1)-|-------------|-j(n)-| \n");
    printf("           i = 1      |[j1(*)| j2(*) j3(*) |j4(*)]| \n");
    printf("                      |------|-------------|------| \n");
    printf("           i = 2      |[j1(*)| j2( ) j3( ) |j4(*)]| \n");
    printf("           i = 3      |[j1(*)| j2( ) j3( ) |j4(*)]| \n");
    printf("                      |------|-------------|------| \n");
    printf("           i = 4(n)   |[j1(*)| j2(*) j3(*) |j4(*)]| \n");
    printf("                      |------|-------------|------| \n");
    printf("\n");
    printf("13.\n");
    printf("\n");
    printf("                      |-j(1)-|-------------|-j(n)-| \n");
    printf("           i = 1      |[j1(*)| j2(*) j3(*) |j4(*)]| \n");
    printf("                      |------|-------------|------| \n");
    printf("           i = 2      |[j1(*)| j2(*) j3( ) |j4(*)]| \n");
    printf("           i = 3      |[j1(*)| j2( ) j3( ) |j4(*)]| \n");
    printf("                      |------|-------------|------| \n");
    printf("           i = 4(n)   |[j1(*)| j2(*) j3(*) |j4(*)]| \n");
    printf("                      |------|-------------|------| \n");
    printf("\n");
    printf("14.\n");
    printf("\n");
    printf("                      |-j(1)-|-------------|-j(n)-| \n");
    printf("           i = 1      |[j1(*)| j2(*) j3(*) |j4(*)]| \n");
    printf("                      |------|-------------|------| \n");
    printf("           i = 2      |[j1(*)| j2(*) j3( ) |j4(*)]| \n");
    printf("           i = 3      |[j1(*)| j2( ) j3(*) |j4(*)]| \n");
    printf("                      |------|-------------|------| \n");
    printf("           i = 4(n)   |[j1(*)| j2(*) j3(*) |j4(*)]| \n");
    printf("                      |------|-------------|------| \n");
    printf("\n");
    printf("15.\n");
    printf("\n");
    printf("                      |-j(1)-|-------------|-j(n)-| \n");
    printf("           i = 1      |[j1(*)| j2(*) j3(*) |j4(*)]| \n");
    printf("                      |------|-------------|------| \n");
    printf("           i = 2      |[j1(*)| j2(*) j3(*) |j4(*)]| \n");
    printf("           i = 3      |[j1(*)| j2( ) j3(*) |j4(*)]| \n");
    printf("                      |------|-------------|------| \n");
    printf("           i = 4(n)   |[j1(*)| j2(*) j3(*) |j4(*)]| \n");
    printf("                      |------|-------------|------| \n");

    printf("\n");
    printf("16.\n");
    printf("\n");
    printf("                      |-j(1)-|-------------|-j(n)-| \n");
    printf("           i = 1      |[j1(*)| j2(*) j3(*) |j4(*)]| \n");
    printf("                      |------|-------------|------| \n");
    printf("           i = 2      |[j1(*)| j2(*) j3(*) |j4(*)]| \n");
    printf("           i = 3      |[j1(*)| j2(*) j3(*) |j4(*)]| \n");
    printf("                      |------|-------------|------| \n");
    printf("           i = 4(n)   |[j1(*)| j2(*) j3(*) |j4(*)]| \n");
    printf("                      |------|-------------|------| \n");
}

void hollowsquare()
{
    clearScreen();
    printAsciiArt();
    printf("\n\n\n");
    printf("\n");
    printf("\n");
    printf("Code: \n");

    printf("\n");
    printf("\n");
    printf("for(i=1; i<=n; i++)\n");
    printf("{\n");
    printf("for(j=1; j<=n;j++)\n");
           printf("{\n");
    printf("if(i == 1 || i == n || j == 1 || j == n)\n");
         printf("printf(\"*\");\n");
            printf("else\n");
              printf("printf("  ");\n");
           printf("}\n");
       printf("printf(\"n\");\n");
        printf("}\n");

        printf("\n");

        printf("\n");

        printf("Code: \n");
        printf("\n");
        printf("\n");
        printf("while(i <= n )\n"); // Row Loop
        printf("{\n");
        printf("j = 1;\n");
        printf("while(j <= n)\n");
        printf("{\n");
        printf("if(i == 1 || i == n || j == 1 || j == n)\n");
        printf("printf(\"*\");\n");
        printf("else\n");
        printf("printf(\" \");\n");
        printf("j++;\n");
        printf("}\n");
        printf("printf(\"\\n\");\n");
        printf("i++;\n");
        printf("}\n");
        printf("\n");
        printf("           This below pattern is a hollow square pattern.\n");
        printf("           The hollow square pattern is a pattern that consists hollow at the center.\n");
        printf("           It's possible for if condition (i==1 || i==n || j==1 || j==n).\n");
        printf("           This all happens inside a square.\n");
        printf("1.\n");
    printf("           FOR Example, n = 4\n");
    printf("                      |-j(1)-|-------------|-j(n)-| \n");
    printf("           i = 1      |[j1(*)| j2( ) j3( ) |j4( )]| \n");
    printf("                      |------|-------------|------| \n");
    printf("           i = 2      |[j1( )| j2( ) j3( ) |j4( )]| \n");
    printf("           i = 3      |[j1( )| j2( ) j3( ) |j4( )]| \n");
    printf("                      |------|-------------|------| \n");
    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4( )]| \n");
    printf("                      |------|-------------|------| \n");

    printf("\n");
    printf("2.\n");
    printf("\n");
    printf("                      |-j(1)-|-------------|-j(n)-| \n");
    printf("           i = 1      |[j1(*)| j2(*) j3( ) |j4( )]| \n");
    printf("                      |------|-------------|------| \n");
    printf("           i = 2      |[j1( )| j2( ) j3( ) |j4( )]| \n");
    printf("           i = 3      |[j1( )| j2( ) j3( ) |j4( )]| \n");
    printf("                      |------|-------------|------| \n");
    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4( )]| \n");
    printf("                      |------|-------------|------| \n");
    printf("\n");
    printf("3.\n");
    printf("\n");

    printf("                      |-j(1)-|-------------|-j(n)-| \n");
    printf("           i = 1      |[j1(*)| j2(*) j3(*) |j4( )]| \n");
    printf("                      |------|-------------|------| \n");
    printf("           i = 2      |[j1( )| j2( ) j3( ) |j4( )]| \n");
    printf("           i = 3      |[j1( )| j2( ) j3( ) |j4( )]| \n");
    printf("                      |------|-------------|------| \n");
    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4( )]| \n");
    printf("                      |------|-------------|------| \n");
    printf("\n");
    printf("4.\n");
    printf("\n");

    printf("                      |-j(1)-|-------------|-j(n)-| \n");
    printf("           i = 1      |[j1(*)| j2(*) j3(*) |j4(*)]| \n");
    printf("                      |------|-------------|------| \n");
    printf("           i = 2      |[j1( )| j2( ) j3( ) |j4( )]| \n");
    printf("           i = 3      |[j1( )| j2( ) j3( ) |j4( )]| \n");
    printf("                      |------|-------------|------| \n");
    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4( )]| \n");
    printf("                      |------|-------------|------| \n");
    printf("\n");
    printf("5.\n");
    printf("\n");

    printf("                      |-j(1)-|-------------|-j(n)-| \n");
    printf("           i = 1      |[j1(*)| j2(*) j3(*) |j4(*)]| \n");
    printf("                      |------|-------------|------| \n");
    printf("           i = 2      |[j1(*)| j2( ) j3( ) |j4( )]| \n");
    printf("           i = 3      |[j1( )| j2( ) j3( ) |j4( )]| \n");
    printf("                      |------|-------------|------| \n");
    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4( )]| \n");
    printf("                      |------|-------------|------| \n");
    printf("\n");
    printf("6.\n");
    printf("\n");

    printf("                      |-j(1)-|-------------|-j(n)-| \n");
    printf("           i = 1      |[j1(*)| j2(*) j3(*) |j4(*)]| \n");
    printf("                      |------|-------------|------| \n");
    printf("           i = 2      |[j1(*)| j2( ) j3( ) |j4(*)]| \n");
    printf("           i = 3      |[j1( )| j2( ) j3( ) |j4( )]| \n");
    printf("                      |------|-------------|------| \n");
    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4( )]| \n");
    printf("                      |------|-------------|------| \n");
    printf("\n");
    printf("7.\n");
    printf("\n");

    printf("                      |-j(1)-|-------------|-j(n)-| \n");
    printf("           i = 1      |[j1(*)| j2(*) j3(*) |j4(*)]| \n");
    printf("                      |------|-------------|------| \n");
    printf("           i = 2      |[j1(*)| j2( ) j3( ) |j4(*)]| \n");
    printf("           i = 3      |[j1(*)| j2( ) j3( ) |j4( )]| \n");
    printf("                      |------|-------------|------| \n");
    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4( )]| \n");
    printf("                      |------|-------------|------| \n");
    printf("\n");
    printf("8.\n");
    printf("\n");

    printf("                      |-j(1)-|-------------|-j(n)-| \n");
    printf("           i = 1      |[j1(*)| j2(*) j3(*) |j4(*)]| \n");
    printf("                      |------|-------------|------| \n");
    printf("           i = 2      |[j1(*)| j2( ) j3( ) |j4(*)]| \n");
    printf("           i = 3      |[j1(*)| j2( ) j3( ) |j4(*)]| \n");
    printf("                      |------|-------------|------| \n");
    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4( )]| \n");
    printf("                      |------|-------------|------| \n");
    printf("\n");
    printf("9.\n");
    printf("\n");

    printf("                      |-j(1)-|-------------|-j(n)-| \n");
    printf("           i = 1      |[j1(*)| j2(*) j3(*) |j4(*)]| \n");
    printf("                      |------|-------------|------| \n");
    printf("           i = 2      |[j1(*)| j2( ) j3( ) |j4(*)]| \n");
    printf("           i = 3      |[j1(*)| j2( ) j3( ) |j4(*)]| \n");
    printf("                      |------|-------------|------| \n");
    printf("           i = 4(n)   |[j1(*)| j2( ) j3( ) |j4( )]| \n");
    printf("                      |------|-------------|------| \n");
    printf("\n");
    printf("10.\n");
    printf("\n");
    printf("                      |-j(1)-|-------------|-j(n)-| \n");
    printf("           i = 1      |[j1(*)| j2(*) j3(*) |j4(*)]| \n");
    printf("                      |------|-------------|------| \n");
    printf("           i = 2      |[j1(*)| j2( ) j3( ) |j4(*)]| \n");
    printf("           i = 3      |[j1(*)| j2( ) j3( ) |j4(*)]| \n");
    printf("                      |------|-------------|------| \n");
    printf("           i = 4(n)   |[j1(*)| j2(*) j3( ) |j4( )]| \n");
    printf("                      |------|-------------|------| \n");
    printf("\n");
    printf("11.\n");
    printf("\n");

    printf("                      |-j(1)-|-------------|-j(n)-| \n");
    printf("           i = 1      |[j1(*)| j2(*) j3(*) |j4(*)]| \n");
    printf("                      |------|-------------|------| \n");
    printf("           i = 2      |[j1(*)| j2( ) j3( ) |j4(*)]| \n");
    printf("           i = 3      |[j1(*)| j2( ) j3( ) |j4(*)]| \n");
    printf("                      |------|-------------|------| \n");
    printf("           i = 4(n)   |[j1(*)| j2(*) j3(*) |j4( )]| \n");
    printf("                      |------|-------------|------| \n");
    printf("\n");
    printf("12.\n");
    printf("\n");

    printf("                      |-j(1)-|-------------|-j(n)-| \n");
    printf("           i = 1      |[j1(*)| j2(*) j3(*) |j4(*)]| \n");
    printf("                      |------|-------------|------| \n");
    printf("           i = 2      |[j1(*)| j2( ) j3( ) |j4(*)]| \n");
    printf("           i = 3      |[j1(*)| j2( ) j3( ) |j4(*)]| \n");
    printf("                      |------|-------------|------| \n");
    printf("           i = 4(n)   |[j1(*)| j2(*) j3(*) |j4(*)]| \n");
    printf("                      |------|-------------|------| \n");
}

void holostarandplus1()
{
    clearScreen();
    printAsciiArt();
    printf("\n\n\n");
    printf("\n");
    printf("\n");
    printf("CODE:\n");
    printf("\n");
    printf("\n");

    printf("for(i=1;i<=n;i++)");
    printf("{\n");
    printf("for(j=1;j<=n;j++)");
    printf("{\n");
        printf("if(i ==1 || i == n || j == 1 || j == n) // For only the border part\n");
        printf("{\n");
           printf("if((i+j) percentage two == 0) // i included because each row there's significant change +/*\n");


           printf("printf(\"*\");\n");
           printf("else\n");
           printf("printf(\"*\");\n");
       printf("}\n");
        printf("else\n");

        printf("printf(\"\\n\");\n");
        printf("}\n");
        printf("printf(\"n\");\n");
        printf("}\n");
        printf("           FOR Example, n = 4\n");



    printf("           i = 1,            j1 = 1,            i+j = 1+1 = 2,            Two percentage Two == 0     j1[*] \n");
    printf("           i = 1,            j2 = 2,            i+j = 1+2 = 3,            Three percentage Two != 0   j2[+] \n");
    printf("           i = 1,            j3 = 3,            i+j = 1+3 = 4,            Four percentage Two == 0    j3[*] \n");
    printf("           i = 1,            j4 = 4,            i+j = 1+4 = 5,            Five percentage Two != 0    j5[+] \n");

    printf("\n");
    printf("           i = 1, j1[*] j2[+] j3[*] j4[+] \n");
    printf("\n");


    printf("           i = 2, j1 = 1, i+j = 2+1 = 3, Three percentage Two != 0   j1[+] \n");
    printf("           i = 2, j2 = 2, i+j = 2+2 = 4, Four percentage Two == 0    j2[*] \n");
    printf("           i = 2, j3 = 3, i+j = 2+3 = 5, Five percentage Two != 0    j3[+] \n");
    printf("           i = 2, j4 = 4, i+j = 2+4 = 6, Six percentage Two == 0     j5[*] \n");

    printf("\n");
    printf("           i = 2, j1[*] j2[+] j3[*] j4[+] \n");
    printf("\n");




    printf("           i = 3, j1 = 1, i+j = 3+1 = 4, Four percentage Two == 0    j1[*] \n");
    printf("           i = 3, j2 = 2, i+j = 3+2 = 5, Five percentage Two != 0    j2[+] \n");
    printf("           i = 3, j3 = 3, i+j = 3+3 = 6, Six percentage Two == 0     j3[*] \n");
    printf("           i = 3, j4 = 4, i+j = 3+4 = 7, Seven percentage Two != 0   j5[+] \n");



    printf("\n");
    printf("           i = 3, j1[*] j2[+] j3[*] j4[+] \n");
    printf("\n");



    printf("           i = 4, j1 = 1, i+j = 4+1 = 5, Five percentage Two != 0    j1[+] \n");
    printf("           i = 4, j2 = 2, i+j = 4+2 = 6, Six percentage Two == 0     j2[*] \n");
    printf("           i = 4, j3 = 3, i+j = 4+3 = 7, Seven percentage Two != 0   j3[+] \n");
    printf("           i = 4, j4 = 4, i+j = 4+4 = 8, Eight percentage Two == 0   j5[*] \n");


    printf("\n");
    printf("           i = 4, j1[*] j2[+] j3[*] j4[+] \n");
    printf("\n");

    printf("           Output will show like this:   \n");


    printf("                      |-j(1)-|-------------|-j(n)-| \n");
    printf("           i = 1      |[j1(*)| j2(+) j3(*) |j4(+)]| \n");
    printf("                      |------|-------------|------| \n");
    printf("           i = 2      |[j1(+)| j2(*) j3(+) |j4(*)]| \n");
    printf("           i = 3      |[j1(*)| j2(+) j3(*) |j4(+)]| \n");
    printf("                      |------|-------------|------| \n");
    printf("           i = 4(n)   |[j1(+)| j2(*) j3(+) |j4(*)]| \n");
    printf("                      |------|-------------|------| \n");
    printf("\n");
    printf("\n");

    printf("           just because of this if/else statement for the border part \n");
    printf("           Only the middle part will disappear for this statement\n");
    printf("           if(i ==1 || i == n || j == 1 || j == n)  \n");


    printf("           This will be the final output: \n");

    printf("\n");
    printf("\n");

    printf("                      |-j(1)-|-------------|-j(n)-| \n");
    printf("           i = 1      |[j1(*)| j2(+) j3(*) |j4(+)]| \n");
    printf("                      |------|-------------|------| \n");
    printf("           i = 2      |[j1(+)| j2( ) j3( ) |j4(*)]| \n");
    printf("           i = 3      |[j1(*)| j2( ) j3( ) |j4(+)]| \n");
    printf("                      |------|-------------|------| \n");
    printf("           i = 4(n)   |[j1(+)| j2(*) j3(+) |j4(*)]| \n");
    printf("                      |------|-------------|------| \n");
}

void holostarandplus2()
{
    clearScreen();
    printAsciiArt();
    printf("\n\n\n");
    printf("\n");
    printf("\n");
    printf("CODE: \n");
    printf("\n");
    printf("\n");


    printf("for (i=1;i<=n;i++)\n");
    printf("{\n");
    printf("for (j=1;j<=n;j++)\n");
    printf("{\n");
    printf("if (i==n||i==1||j==1||j==n)\n");
    printf("{\n");
    printf("row 1 and row n\n");
    printf("if (i==1||i==n)\n");
    printf("{\n");
    printf("printf(\"*\");\n");
    printf("}\n");
    printf("column 1 and column n\n");
    printf("else\n");
    printf("{\n");
    printf("printf(\"+\");\n");
    printf("}\n");
    printf("}\n");
    printf("else\n");
    printf("printf(\" \");\n");
    printf("}\n");
    printf("printf(\"\\n\");\n");
    printf("}\n");
    printf("\n\n\n");
    printf("           This below pattern is a hollow star pattern.\n");
    printf("           The hollow star pattern is a pattern that consists of stars arranged in a square shape, with the stars on the 1st and last row, plus on the 1st and last column and spaces in the middle.\n");
    printf("           This all happens inside a square.\n");
    printf("\n");
    printf("\n");
    printf("1.\n");
    printf("           FOR Example, n = 5\n");
    printf("                      |-j(1)-|----------------------|-j(n)-| \n");
    printf("           i = 1      |[j1(*)| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("           i = 2      |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("           i = 3      |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("           i = 4      |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("           i = 5(n)   |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");

    printf("2.\n");
    printf("           FOR Example, n = 5\n");
    printf("                      |-j(1)-|----------------------|-j(n)-| \n");
    printf("           i = 1      |[j1(*)| j2(*)  j3( )   j4( ) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("           i = 2      |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("           i = 3      |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("           i = 4      |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("           i = 5(n)   |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");

    printf("3.\n");
    printf("           FOR Example, n = 5\n");
    printf("                      |-j(1)-|----------------------|-j(n)-| \n");
    printf("           i = 1      |[j1(*)| j2(*)  j3(*)   j4( ) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("           i = 2      |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("           i = 3      |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("           i = 4      |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("           i = 5(n)   |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");

    printf("4.\n");
    printf("           FOR Example, n = 5\n");
    printf("                      |-j(1)-|----------------------|-j(n)-| \n");
    printf("           i = 1      |[j1(*)| j2(*)  j3(*)   j4(*) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("           i = 2      |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("           i = 3      |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("           i = 4      |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("           i = 5(n)   |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");


    printf("5.\n");
    printf("           FOR Example, n = 5\n");
    printf("                      |-j(1)-|----------------------|-j(n)-| \n");
    printf("           i = 1      |[j1(*)| j2(*)  j3(*)   j4(*) |j5(*)]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("           i = 2      |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("           i = 3      |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("           i = 4      |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("           i = 5(n)   |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");

    printf("6.\n");
    printf("           FOR Example, n = 5\n");
    printf("                      |-j(1)-|----------------------|-j(n)-| \n");
    printf("           i = 1      |[j1(*)| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("           i = 2      |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("           i = 3      |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("           i = 4      |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("           i = 5(n)   |[j1(*)| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");

    printf("7.\n");

    printf("           FOR Example, n = 5\n");
    printf("                      |-j(1)-|----------------------|-j(n)-| \n");
    printf("           i = 1      |[j1(*)| j2(*)  j3(*)   j4(*) |j5(*)]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("           i = 2      |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("           i = 3      |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("           i = 4      |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("           i = 5(n)   |[j1(*)| j2(*)  j3( )   j4( ) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");

    printf("8.\n");

    printf("           FOR Example, n = 5\n");
    printf("                      |-j(1)-|----------------------|-j(n)-| \n");
    printf("           i = 1      |[j1(*)| j2(*)  j3(*)   j4(*) |j5(*)]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("           i = 2      |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("           i = 3      |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("           i = 4      |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("           i = 5(n)   |[j1(*)| j2(*)  j3(*)   j4( ) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");

    printf("9.\n");

    printf("           FOR Example, n = 5\n");
    printf("                      |-j(1)-|----------------------|-j(n)-| \n");
    printf("           i = 1      |[j1(*)| j2(*)  j3(*)   j4(*) |j5(*)]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("           i = 2      |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("           i = 3      |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("           i = 4      |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("           i = 5(n)   |[j1(*)| j2(*)  j3(*)   j4(*) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");

    printf("10.\n");

    printf("           FOR Example, n = 5\n");
    printf("                      |-j(1)-|----------------------|-j(n)-| \n");
    printf("           i = 1      |[j1(*)| j2(*)  j3(*)   j4(*) |j5(*)]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("           i = 2      |[j1(+)| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("           i = 3      |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("           i = 4      |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("           i = 5(n)   |[j1(*)| j2(*)  j3(*)   j4(*) |j5(*)]| \n");
    printf("                      |------|----------------------|------| \n");

    printf("11.\n");
    printf("           FOR Example, n = 5\n");
    printf("                      |-j(1)-|----------------------|-j(n)-| \n");
    printf("           i = 1      |[j1(*)| j2(*)  j3(*)   j4(*) |j5(*)]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("           i = 2      |[j1(+)| j2( )  j3( )   j4( ) |j5(+)]| \n");
    printf("           i = 3      |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("           i = 4      |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("           i = 5(n)   |[j1(*)| j2(*)  j3(*)   j4(*) |j5(*)]| \n");
    printf("                      |------|----------------------|------| \n");

    printf("12.\n");

    printf("           FOR Example, n = 5\n");
    printf("                      |-j(1)-|----------------------|-j(n)-| \n");
    printf("           i = 1      |[j1(*)| j2(*)  j3(*)   j4(*) |j5(*)]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("           i = 2      |[j1(+)| j2( )  j3( )   j4( ) |j5(+)]| \n");
    printf("           i = 3      |[j1(+)| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("           i = 4      |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("           i = 5(n)   |[j1(*)| j2(*)  j3(*)   j4(*) |j5(*)]| \n");
    printf("                      |------|----------------------|------| \n");

    printf("13.\n");
    printf("           FOR Example, n = 5\n");
    printf("                      |-j(1)-|----------------------|-j(n)-| \n");
    printf("           i = 1      |[j1(*)| j2(*)  j3(*)   j4(*) |j5(*)]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("           i = 2      |[j1(+)| j2( )  j3( )   j4( ) |j5(+)]| \n");
    printf("           i = 3      |[j1(+)| j2( )  j3( )   j4( ) |j5(+)]| \n");
    printf("           i = 4      |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("           i = 5(n)   |[j1(*)| j2(*)  j3(*)   j4(*) |j5(*)]| \n");
    printf("                      |------|----------------------|------| \n");

    printf("15.\n");

    printf("           FOR Example, n = 5\n");
    printf("                      |-j(1)-|----------------------|-j(n)-| \n");
    printf("           i = 1      |[j1(*)| j2(*)  j3(*)   j4(*) |j5(*)]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("           i = 2      |[j1(+)| j2( )  j3( )   j4( ) |j5(+)]| \n");
    printf("           i = 3      |[j1(+)| j2( )  j3( )   j4( ) |j5(+)]| \n");
    printf("           i = 4      |[j1(+)| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("           i = 5(n)   |[j1(*)| j2(*)  j3(*)   j4(*) |j5(*)]| \n");
    printf("                      |------|----------------------|------| \n");

    printf("16.\n");

    printf("           FOR Example, n = 5\n");
    printf("                      |-j(1)-|----------------------|-j(n)-| \n");
    printf("           i = 1      |[j1(*)| j2(*)  j3(*)   j4(*) |j5(*)]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("           i = 2      |[j1(+)| j2( )  j3( )   j4( ) |j5(+)]| \n");
    printf("           i = 3      |[j1(+)| j2( )  j3( )   j4( ) |j5(+)]| \n");
    printf("           i = 4      |[j1(+)| j2( )  j3( )   j4( ) |j5(+)]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("           i = 5(n)   |[j1(*)| j2(*)  j3(*)   j4(*) |j5(*)]| \n");
    printf("                      |------|----------------------|------| \n");


}

void starandplus1()
{
    clearScreen();
    printAsciiArt();
    printf("\n\n\n");
    printf("\n");
    printf("\n");
    printf("CODE:\n");
    printf("\n\n");

    printf("for(i = 1 ;i<=n; i++)");
    printf("{\n");
    printf("     for (j=1; j<=n ; j++)\n");
    printf("         {\n");
    printf("           if(i percentage Two ==0 || j percentage Two ==0)\n");
    printf("              {\n");
    printf("                printf(\"+\");\n");
    printf("              }\n");
    printf("           else \n");
    printf("               printf(\"*\");\n");
    printf("         }\n");
    printf("   printf(\"\\n\");\n");
    printf("}\n");
    printf("\n");
    printf("           This below pattern is a star plus square.\n");
    printf("           The star plus square pattern is a pattern that consists of stars and plus signs arranged in a square shape.\n");
    printf("           The stars are arranged in a square shape, with the plus signs in between.\n");
    printf("           Only the even column and row can be plus sign and rest of it will be star.\n");
    printf("\n");
    printf("\n");

    printf("1.\n");
    printf("     FOR Example, n = 5\n");
    printf("                      |-j(1)-|----------------------|-j(n)-| \n");
    printf("                      | else |  if    else     if   | else | \n");
    printf("     i = 1(else)      |[j1(*)| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("     i = 2(if)        |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("     i = 3(else)      |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("     i = 4(if)        |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("     i = 5(n)(else)   |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");

    printf("\n");
    printf("2.\n");
    printf("\n");

    printf("     FOR Example, n = 5\n");
    printf("                      |-j(1)-|----------------------|-j(n)-| \n");
    printf("                      | else |  if    else     if   | else | \n");
    printf("     i = 1(else)      |[j1(*)| j2(+)  j3( )   j4( ) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("     i = 2(if)        |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("     i = 3(else)      |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("     i = 4(if)        |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("     i = 5(n)(else)   |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");


    printf("\n");
    printf("3.\n");
    printf("\n");


    printf("     FOR Example, n = 5\n");
    printf("                      |-j(1)-|----------------------|-j(n)-| \n");
    printf("                      | else |  if    else     if   | else | \n");
    printf("     i = 1(else)      |[j1(*)| j2(+)  j3(*)   j4( ) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("     i = 2(if)        |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("     i = 3(else)      |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("     i = 4(if)        |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("     i = 5(n)(else)   |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");


    printf("\n");
    printf("4.\n");
    printf("\n");
    printf("     FOR Example, n = 5\n");
    printf("                      |-j(1)-|----------------------|-j(n)-| \n");
    printf("                      | else |  if    else     if   | else | \n");
    printf("     i = 1(else)      |[j1(*)| j2(+)  j3(*)   j4(+) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("     i = 2(if)        |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("     i = 3(else)      |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("     i = 4(if)        |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("     i = 5(n)(else)   |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");

    printf("\n");
    printf("5.\n");
    printf("\n");
    printf("     FOR Example, n = 5\n");
    printf("                      |-j(1)-|----------------------|-j(n)-| \n");
    printf("                      | else |  if    else     if   | else | \n");
    printf("     i = 1(else)      |[j1(*)| j2(+)  j3(*)   j4(+) |j5(*)]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("     i = 2(if)        |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("     i = 3(else)      |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("     i = 4(if)        |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("     i = 5(n)(else)   |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");

    printf("\n");
    printf("6.\n");
    printf("\n");
    printf("     FOR Example, n = 5\n");
    printf("                      |-j(1)-|----------------------|-j(n)-| \n");
    printf("                      | else |  if    else     if   | else | \n");
    printf("     i = 1(else)      |[j1(*)| j2(+)  j3(*)   j4(+) |j5(*)]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("     i = 2(if)        |[j1(+)| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("     i = 3(else)      |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("     i = 4(if)        |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("     i = 5(n)(else)   |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");

    printf("\n");
    printf("7.\n");
    printf("\n");
    printf("     FOR Example, n = 5\n");
    printf("                      |-j(1)-|----------------------|-j(n)-| \n");
    printf("                      | else |  if    else     if   | else | \n");
    printf("     i = 1(else)      |[j1(*)| j2(+)  j3(*)   j4(+) |j5(*)]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("     i = 2(if)        |[j1(+)| j2(+)  j3( )   j4( ) |j5( )]| \n");
    printf("     i = 3(else)      |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("     i = 4(if)        |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("     i = 5(n)(else)   |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");

    printf("\n");
    printf("8.\n");
    printf("\n");


    printf("     FOR Example, n = 5\n");
    printf("                      |-j(1)-|----------------------|-j(n)-| \n");
    printf("                      | else |  if    else     if   | else | \n");
    printf("     i = 1(else)      |[j1(*)| j2(+)  j3(*)   j4(+) |j5(*)]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("     i = 2(if)        |[j1(+)| j2(+)  j3(+)   j4( ) |j5( )]| \n");
    printf("     i = 3(else)      |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("     i = 4(if)        |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("     i = 5(n)(else)   |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");


    printf("\n");
    printf("9.\n");
    printf("\n");

    printf("     FOR Example, n = 5\n");
    printf("                      |-j(1)-|----------------------|-j(n)-| \n");
    printf("                      | else |  if    else     if   | else | \n");
    printf("     i = 1(else)      |[j1(*)| j2(+)  j3(*)   j4(+) |j5(*)]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("     i = 2(if)        |[j1(+)| j2(+)  j3(+)   j4(+) |j5( )]| \n");
    printf("     i = 3(else)      |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("     i = 4(if)        |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("     i = 5(n)(else)   |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");

    printf("\n");
    printf("10.\n");
    printf("\n");

    printf("     FOR Example, n = 5\n");
    printf("                      |-j(1)-|----------------------|-j(n)-| \n");
    printf("                      | else |  if    else     if   | else | \n");
    printf("     i = 1(else)      |[j1(*)| j2(+)  j3(*)   j4(+) |j5(*)]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("     i = 2(if)        |[j1(+)| j2(+)  j3(+)   j4(+) |j5(+)]| \n");
    printf("     i = 3(else)      |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("     i = 4(if)        |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("     i = 5(n)(else)   |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");

    printf("\n");
    printf("11.\n");
    printf("\n");

    printf("     FOR Example, n = 5\n");
    printf("                      |-j(1)-|----------------------|-j(n)-| \n");
    printf("                      | else |  if    else     if   | else | \n");
    printf("     i = 1(else)      |[j1(*)| j2(+)  j3(*)   j4(+) |j5(*)]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("     i = 2(if)        |[j1(+)| j2(+)  j3(+)   j4(+) |j5(+)]| \n");
    printf("     i = 3(else)      |[j1(*)| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("     i = 4(if)        |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("     i = 5(n)(else)   |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");

    printf("\n");
    printf("12.\n");
    printf("\n");

    printf("     FOR Example, n = 5\n");
    printf("                      |-j(1)-|----------------------|-j(n)-| \n");
    printf("                      | else |  if    else     if   | else | \n");
    printf("     i = 1(else)      |[j1(*)| j2(+)  j3(*)   j4(+) |j5(*)]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("     i = 2(if)        |[j1(+)| j2(+)  j3(+)   j4(+) |j5(+)]| \n");
    printf("     i = 3(else)      |[j1(*)| j2(+)  j3( )   j4( ) |j5( )]| \n");
    printf("     i = 4(if)        |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("     i = 5(n)(else)   |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");

    printf("\n");
    printf("13.\n");
    printf("\n");

    printf("     FOR Example, n = 5\n");
    printf("                      |-j(1)-|----------------------|-j(n)-| \n");
    printf("                      | else |  if    else     if   | else | \n");
    printf("     i = 1(else)      |[j1(*)| j2(+)  j3(*)   j4(+) |j5(*)]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("     i = 2(if)        |[j1(+)| j2(+)  j3(+)   j4(+) |j5(+)]| \n");
    printf("     i = 3(else)      |[j1(*)| j2(+)  j3(*)   j4( ) |j5( )]| \n");
    printf("     i = 4(if)        |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("     i = 5(n)(else)   |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");


    printf("\n");
    printf("14.\n");
    printf("\n");

    printf("     FOR Example, n = 5\n");
    printf("                      |-j(1)-|----------------------|-j(n)-| \n");
    printf("                      | else |  if    else     if   | else | \n");
    printf("     i = 1(else)      |[j1(*)| j2(+)  j3(*)   j4(+) |j5(*)]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("     i = 2(if)        |[j1(+)| j2(+)  j3(+)   j4(+) |j5(+)]| \n");
    printf("     i = 3(else)      |[j1(*)| j2(+)  j3(*)   j4(+) |j5( )]| \n");
    printf("     i = 4(if)        |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("     i = 5(n)(else)   |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");


    printf("\n");
    printf("15.\n");
    printf("\n");

    printf("     FOR Example, n = 5\n");
    printf("                      |-j(1)-|----------------------|-j(n)-| \n");
    printf("                      | else |  if    else     if   | else | \n");
    printf("     i = 1(else)      |[j1(*)| j2(+)  j3(*)   j4(+) |j5(*)]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("     i = 2(if)        |[j1(+)| j2(+)  j3(+)   j4(+) |j5(+)]| \n");
    printf("     i = 3(else)      |[j1(*)| j2(+)  j3(*)   j4(+) |j5(*)]| \n");
    printf("     i = 4(if)        |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("     i = 5(n)(else)   |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");


    printf("\n");
    printf("16.\n");
    printf("\n");

    printf("     FOR Example, n = 5\n");
    printf("                      |-j(1)-|----------------------|-j(n)-| \n");
    printf("                      | else |  if    else     if   | else | \n");
    printf("     i = 1(else)      |[j1(*)| j2(+)  j3(*)   j4(+) |j5(*)]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("     i = 2(if)        |[j1(+)| j2(+)  j3(+)   j4(+) |j5(+)]| \n");
    printf("     i = 3(else)      |[j1(*)| j2(+)  j3(*)   j4(+) |j5(*)]| \n");
    printf("     i = 4(if)        |[j1(+)| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("     i = 5(n)(else)   |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");


    printf("\n");
    printf("17.\n");
    printf("\n");

    printf("     FOR Example, n = 5\n");
    printf("                      |-j(1)-|----------------------|-j(n)-| \n");
    printf("                      | else |  if    else     if   | else | \n");
    printf("     i = 1(else)      |[j1(*)| j2(+)  j3(*)   j4(+) |j5(*)]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("     i = 2(if)        |[j1(+)| j2(+)  j3(+)   j4(+) |j5(+)]| \n");
    printf("     i = 3(else)      |[j1(*)| j2(+)  j3(*)   j4(+) |j5(*)]| \n");
    printf("     i = 4(if)        |[j1(+)| j2(+)  j3( )   j4( ) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("     i = 5(n)(else)   |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");


    printf("\n");
    printf("18.\n");
    printf("\n");

    printf("     FOR Example, n = 5\n");
    printf("                      |-j(1)-|----------------------|-j(n)-| \n");
    printf("                      | else |  if    else     if   | else | \n");
    printf("     i = 1(else)      |[j1(*)| j2(+)  j3(*)   j4(+) |j5(*)]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("     i = 2(if)        |[j1(+)| j2(+)  j3(+)   j4(+) |j5(+)]| \n");
    printf("     i = 3(else)      |[j1(*)| j2(+)  j3(*)   j4(+) |j5(*)]| \n");
    printf("     i = 4(if)        |[j1(+)| j2(+)  j3(+)   j4( ) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("     i = 5(n)(else)   |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");



    printf("\n");
    printf("19.\n");
    printf("\n");

    printf("     FOR Example, n = 5\n");
    printf("                      |-j(1)-|----------------------|-j(n)-| \n");
    printf("                      | else |  if    else     if   | else | \n");
    printf("     i = 1(else)      |[j1(*)| j2(+)  j3(*)   j4(+) |j5(*)]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("     i = 2(if)        |[j1(+)| j2(+)  j3(+)   j4(+) |j5(+)]| \n");
    printf("     i = 3(else)      |[j1(*)| j2(+)  j3(*)   j4(+) |j5(*)]| \n");
    printf("     i = 4(if)        |[j1(+)| j2(+)  j3(+)   j4(+) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("     i = 5(n)(else)   |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");




    printf("\n");
    printf("20.\n");
    printf("\n");

    printf("     FOR Example, n = 5\n");
    printf("                      |-j(1)-|----------------------|-j(n)-| \n");
    printf("                      | else |  if    else     if   | else | \n");
    printf("     i = 1(else)      |[j1(*)| j2(+)  j3(*)   j4(+) |j5(*)]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("     i = 2(if)        |[j1(+)| j2(+)  j3(+)   j4(+) |j5(+)]| \n");
    printf("     i = 3(else)      |[j1(*)| j2(+)  j3(*)   j4(+) |j5(*)]| \n");
    printf("     i = 4(if)        |[j1(+)| j2(+)  j3(+)   j4(+) |j5(+)]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("     i = 5(n)(else)   |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");



    printf("\n");
    printf("21.\n");
    printf("\n");

    printf("     FOR Example, n = 5\n");
    printf("                      |-j(1)-|----------------------|-j(n)-| \n");
    printf("                      | else |  if    else     if   | else | \n");
    printf("     i = 1(else)      |[j1(*)| j2(+)  j3(*)   j4(+) |j5(*)]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("     i = 2(if)        |[j1(+)| j2(+)  j3(+)   j4(+) |j5(+)]| \n");
    printf("     i = 3(else)      |[j1(*)| j2(+)  j3(*)   j4(+) |j5(*)]| \n");
    printf("     i = 4(if)        |[j1(+)| j2(+)  j3(+)   j4(+) |j5(+)]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("     i = 5(n)(else)   |[j1(*)| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");




    printf("\n");
    printf("22.\n");
    printf("\n");

    printf("     FOR Example, n = 5\n");
    printf("                      |-j(1)-|----------------------|-j(n)-| \n");
    printf("                      | else |  if    else     if   | else | \n");
    printf("     i = 1(else)      |[j1(*)| j2(+)  j3(*)   j4(+) |j5(*)]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("     i = 2(if)        |[j1(+)| j2(+)  j3(+)   j4(+) |j5(+)]| \n");
    printf("     i = 3(else)      |[j1(*)| j2(+)  j3(*)   j4(+) |j5(*)]| \n");
    printf("     i = 4(if)        |[j1(+)| j2(+)  j3(+)   j4(+) |j5(+)]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("     i = 5(n)(else)   |[j1(*)| j2(+)  j3( )   j4( ) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");

    printf("\n");
    printf("23.\n");
    printf("\n");

    printf("     FOR Example, n = 5\n");
    printf("                      |-j(1)-|----------------------|-j(n)-| \n");
    printf("                      | else |  if    else     if   | else | \n");
    printf("     i = 1(else)      |[j1(*)| j2(+)  j3(*)   j4(+) |j5(*)]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("     i = 2(if)        |[j1(+)| j2(+)  j3(+)   j4(+) |j5(+)]| \n");
    printf("     i = 3(else)      |[j1(*)| j2(+)  j3(*)   j4(+) |j5(*)]| \n");
    printf("     i = 4(if)        |[j1(+)| j2(+)  j3(+)   j4(+) |j5(+)]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("     i = 5(n)(else)   |[j1(*)| j2(+)  j3(*)   j4( ) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");

    printf("\n");
    printf("24.\n");
    printf("\n");

    printf("     FOR Example, n = 5\n");
    printf("                      |-j(1)-|----------------------|-j(n)-| \n");
    printf("                      | else |  if    else     if   | else | \n");
    printf("     i = 1(else)      |[j1(*)| j2(+)  j3(*)   j4(+) |j5(*)]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("     i = 2(if)        |[j1(+)| j2(+)  j3(+)   j4(+) |j5(+)]| \n");
    printf("     i = 3(else)      |[j1(*)| j2(+)  j3(*)   j4(+) |j5(*)]| \n");
    printf("     i = 4(if)        |[j1(+)| j2(+)  j3(+)   j4(+) |j5(+)]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("     i = 5(n)(else)   |[j1(*)| j2(+)  j3(*)   j4(+) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");


    printf("\n");
    printf("22.\n");
    printf("\n");

    printf("     FOR Example, n = 5\n");
    printf("                      |-j(1)-|----------------------|-j(n)-| \n");
    printf("                      | else |  if    else     if   | else | \n");
    printf("     i = 1(else)      |[j1(*)| j2(+)  j3(*)   j4(+) |j5(*)]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("     i = 2(if)        |[j1(+)| j2(+)  j3(+)   j4(+) |j5(+)]| \n");
    printf("     i = 3(else)      |[j1(*)| j2(+)  j3(*)   j4(+) |j5(*)]| \n");
    printf("     i = 4(if)        |[j1(+)| j2(+)  j3(+)   j4(+) |j5(+)]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("     i = 5(n)(else)   |[j1(*)| j2(+)  j3(*)   j4(+) |j5(*)]| \n");
    printf("                      |------|----------------------|------| \n");


}

void starandpluscross()
{
    clearScreen();
    printAsciiArt();
    printf("\n\n\n");
    printf("\n\n");
    printf("CODE:\n");
    printf("\n\n");
    printf("for (i = 1; i <= n; i++)");
    printf("   {\n");
    printf("       for (j = 1; j <= n; j++)");
    printf("          {\n");
    printf("      Diagonal cross\n");
    printf("             if (i == j || j == (n - i + 1))\n");
    printf("                    printf(\"*\");\n");
    printf("            else if (i == n / 2 + 1)\n");
    printf("      middle row\n");
    printf("                {\n");
    printf("                 printf(\"+\");\n");
    printf("                }\n");
    printf("           else if (j == n / 2 + 1)\n");
    printf("     middle column\n");
    printf("               {\n");
    printf("                printf(\"+\");\n");
    printf("               }\n");
    printf("    space for hollow effect\n");
    printf("          else\n");
    printf("                {\n");
    printf("               printf(\" \");\n");
    printf("                }\n");
    printf("printf(\"\\n\");\n");
    printf("         }\n");
    printf("  }\n");
    printf("           This is a starpluscross pattern.\n");
    printf("           The starpluscross pattern is a pattern that consists of a star and a plus sign.\n");
    printf("           The star is formed by two diagonal lines that intersect at the center, and the plus sign is formed by a horizontal and vertical line that intersect at the center.\n");
    printf("           First, the star is drawn, and then the plus sign is drawn on top of it.\n");


    printf("1.\n");
    printf("           FOR Example, n = 5\n");
    printf("                      |-j(1)-|----------------------|-j(n)-| \n");
    printf("           i = 1      |[j1(*)| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("           i = 2      |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("           i = 3      |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("           i = 4      |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("           i = 5(n)   |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");

    printf("2.\n");

    printf("           FOR Example, n = 5\n");
    printf("                      |-j(1)-|----------------------|-j(n)-| \n");
    printf("           i = 1      |[j1(*)| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("           i = 2      |[j1( )| j2(*)  j3( )   j4( ) |j5( )]| \n");
    printf("           i = 3      |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("           i = 4      |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("           i = 5(n)   |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("3.\n");
    printf("           FOR Example, n = 5\n");
    printf("                      |-j(1)-|----------------------|-j(n)-| \n");
    printf("           i = 1      |[j1(*)| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("           i = 2      |[j1( )| j2(*)  j3( )   j4( ) |j5( )]| \n");
    printf("           i = 3      |[j1( )| j2( )  j3(*)   j4( ) |j5( )]| \n");
    printf("           i = 4      |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("           i = 5(n)   |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");

    printf("4.\n");
    printf("           FOR Example, n = 5\n");
    printf("                      |-j(1)-|----------------------|-j(n)-| \n");
    printf("           i = 1      |[j1(*)| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("           i = 2      |[j1( )| j2(*)  j3( )   j4( ) |j5( )]| \n");
    printf("           i = 3      |[j1( )| j2( )  j3(*)   j4( ) |j5( )]| \n");
    printf("           i = 4      |[j1( )| j2( )  j3( )   j4(*) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("           i = 5(n)   |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");

    printf("5.\n");

    printf("           FOR Example, n = 5\n");
    printf("                      |-j(1)-|----------------------|-j(n)-| \n");
    printf("           i = 1      |[j1(*)| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("           i = 2      |[j1( )| j2(*)  j3( )   j4( ) |j5( )]| \n");
    printf("           i = 3      |[j1( )| j2( )  j3(*)   j4( ) |j5( )]| \n");
    printf("           i = 4      |[j1( )| j2( )  j3( )   j4(*) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("           i = 5(n)   |[j1( )| j2( )  j3( )   j4( ) |j5(*)]| \n");
    printf("                      |------|----------------------|------| \n");

    printf("6.\n");

    printf("           FOR Example, n = 5\n");
    printf("                      |-j(1)-|----------------------|-j(n)-| \n");
    printf("           i = 1      |[j1(*)| j2( )  j3( )   j4( ) |j5(*)]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("           i = 2      |[j1( )| j2(*)  j3( )   j4( ) |j5( )]| \n");
    printf("           i = 3      |[j1( )| j2( )  j3(*)   j4( ) |j5( )]| \n");
    printf("           i = 4      |[j1( )| j2( )  j3( )   j4(*) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("           i = 5(n)   |[j1( )| j2( )  j3( )   j4( ) |j5(*)]| \n");
    printf("                      |------|----------------------|------| \n");

    printf("7.\n");
    printf("           FOR Example, n = 5\n");
    printf("                      |-j(1)-|----------------------|-j(n)-| \n");
    printf("           i = 1      |[j1(*)| j2( )  j3( )   j4( ) |j5(*)]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("           i = 2      |[j1( )| j2(*)  j3( )   j4(*) |j5( )]| \n");
    printf("           i = 3      |[j1( )| j2( )  j3(*)   j4( ) |j5( )]| \n");
    printf("           i = 4      |[j1( )| j2( )  j3( )   j4(*) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("           i = 5(n)   |[j1( )| j2( )  j3( )   j4( ) |j5(*)]| \n");
    printf("                      |------|----------------------|------| \n");

    printf("8.\n");
    printf("           FOR Example, n = 5\n");
    printf("                      |-j(1)-|----------------------|-j(n)-| \n");
    printf("           i = 1      |[j1(*)| j2( )  j3( )   j4( ) |j5(*)]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("           i = 2      |[j1( )| j2(*)  j3( )   j4(*) |j5( )]| \n");
    printf("           i = 3      |[j1( )| j2( )  j3(*)   j4( ) |j5( )]| \n");
    printf("           i = 4      |[j1( )| j2(*)  j3( )   j4(*) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("           i = 5(n)   |[j1( )| j2( )  j3( )   j4( ) |j5(*)]| \n");
    printf("                      |------|----------------------|------| \n");

    printf("9.\n");



    printf("           FOR Example, n = 5\n");
    printf("                      |-j(1)-|----------------------|-j(n)-| \n");
    printf("           i = 1      |[j1(*)| j2( )  j3( )   j4( ) |j5(*)]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("           i = 2      |[j1( )| j2(*)  j3( )   j4(*) |j5( )]| \n");
    printf("           i = 3      |[j1( )| j2( )  j3(*)   j4( ) |j5( )]| \n");
    printf("           i = 4      |[j1( )| j2(*)  j3( )   j4(*) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("           i = 5(n)   |[j1(*)| j2( )  j3( )   j4( ) |j5(*)]| \n");
    printf("                      |------|----------------------|------| \n");

    printf("10.\n");

    printf("           FOR Example, n = 5\n");
    printf("                      |-j(1)-|----------------------|-j(n)-| \n");
    printf("           i = 1      |[j1(*)| j2( )  j3( )   j4( ) |j5(*)]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("           i = 2      |[j1( )| j2(*)  j3( )   j4(*) |j5( )]| \n");
    printf("           i = 3      |[j1(+)| j2( )  j3(*)   j4( ) |j5( )]| \n");
    printf("           i = 4      |[j1( )| j2(*)  j3( )   j4(*) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("           i = 5(n)   |[j1(*)| j2( )  j3( )   j4( ) |j5(*)]| \n");
    printf("                      |------|----------------------|------| \n");

    printf("11.\n");
    printf("           FOR Example, n = 5\n");
    printf("                      |-j(1)-|----------------------|-j(n)-| \n");
    printf("           i = 1      |[j1(*)| j2( )  j3( )   j4( ) |j5(*)]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("           i = 2      |[j1( )| j2(*)  j3( )   j4(*) |j5( )]| \n");
    printf("           i = 3      |[j1(+)| j2(+)  j3(*)   j4( ) |j5( )]| \n");
    printf("           i = 4      |[j1( )| j2(*)  j3( )   j4(*) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("           i = 5(n)   |[j1(*)| j2( )  j3( )   j4( ) |j5(*)]| \n");
    printf("                      |------|----------------------|------| \n");

    printf("12.\n");

    printf("           FOR Example, n = 5\n");
    printf("                      |-j(1)-|----------------------|-j(n)-| \n");
    printf("           i = 1      |[j1(*)| j2( )  j3( )   j4( ) |j5(*)]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("           i = 2      |[j1( )| j2(*)  j3( )   j4(*) |j5( )]| \n");
    printf("           i = 3      |[j1(+)| j2(+)  j3(*)   j4(+) |j5( )]| \n");
    printf("           i = 4      |[j1( )| j2(*)  j3( )   j4(*) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("           i = 5(n)   |[j1(*)| j2( )  j3( )   j4( ) |j5(*)]| \n");
    printf("                      |------|----------------------|------| \n");

    printf("13.\n");


    printf("           FOR Example, n = 5\n");
    printf("                      |-j(1)-|----------------------|-j(n)-| \n");
    printf("           i = 1      |[j1(*)| j2( )  j3( )   j4( ) |j5(*)]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("           i = 2      |[j1( )| j2(*)  j3( )   j4(*) |j5( )]| \n");
    printf("           i = 3      |[j1(+)| j2(+)  j3(*)   j4(+) |j5(+)]| \n");
    printf("           i = 4      |[j1( )| j2(*)  j3( )   j4(*) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("           i = 5(n)   |[j1(*)| j2( )  j3( )   j4( ) |j5(*)]| \n");
    printf("                      |------|----------------------|------| \n");

    printf("14.\n");

    printf("           FOR Example, n = 5\n");
    printf("                      |-j(1)-|----------------------|-j(n)-| \n");
    printf("           i = 1      |[j1(*)| j2( )  j3(+)   j4( ) |j5(*)]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("           i = 2      |[j1( )| j2(*)  j3( )   j4(*) |j5( )]| \n");
    printf("           i = 3      |[j1(+)| j2(+)  j3(*)   j4(+) |j5(+)]| \n");
    printf("           i = 4      |[j1( )| j2(*)  j3( )   j4(*) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("           i = 5(n)   |[j1(*)| j2( )  j3( )   j4( ) |j5(*)]| \n");
    printf("                      |------|----------------------|------| \n");

    printf("15.\n");

    printf("           FOR Example, n = 5\n");
    printf("                      |-j(1)-|----------------------|-j(n)-| \n");
    printf("           i = 1      |[j1(*)| j2( )  j3(+)   j4( ) |j5(*)]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("           i = 2      |[j1( )| j2(*)  j3(+)   j4(*) |j5( )]| \n");
    printf("           i = 3      |[j1(+)| j2(+)  j3(*)   j4(+) |j5(+)]| \n");
    printf("           i = 4      |[j1( )| j2(*)  j3( )   j4(*) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("           i = 5(n)   |[j1(*)| j2( )  j3( )   j4( ) |j5(*)]| \n");
    printf("                      |------|----------------------|------| \n");


    printf("16.\n");
    printf("           FOR Example, n = 5\n");
    printf("                      |-j(1)-|----------------------|-j(n)-| \n");
    printf("           i = 1      |[j1(*)| j2( )  j3(+)   j4( ) |j5(*)]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("           i = 2      |[j1( )| j2(*)  j3(+)   j4(*) |j5( )]| \n");
    printf("           i = 3      |[j1(+)| j2(+)  j3(*)   j4(+) |j5(+)]| \n");
    printf("           i = 4      |[j1( )| j2(*)  j3(+)   j4(*) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("           i = 5(n)   |[j1(*)| j2( )  j3( )   j4( ) |j5(*)]| \n");
    printf("                      |------|----------------------|------| \n");

    printf("17.\n");


    printf("           FOR Example, n = 5\n");
    printf("                      |-j(1)-|----------------------|-j(n)-| \n");
    printf("           i = 1      |[j1(*)| j2( )  j3(+)   j4( ) |j5(*)]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("           i = 2      |[j1( )| j2(*)  j3(+)   j4(*) |j5( )]| \n");
    printf("           i = 3      |[j1(+)| j2(+)  j3(*)   j4(+) |j5(+)]| \n");
    printf("           i = 4      |[j1( )| j2(*)  j3(+)   j4(*) |j5( )]| \n");
    printf("                      |------|----------------------|------| \n");
    printf("           i = 5(n)   |[j1(*)| j2( )  j3(+)   j4( ) |j5(*)]| \n");
    printf("                      |------|----------------------|------| \n");

}

void oddsquare()
{
    clearScreen();
    printAsciiArt();
    printf("\n\n\n");
    printf("\n\n");
    printf("CODE:\n");
    printf("\n\n");
    printf("for(i=1; i<=n; i++)\n");
    printf("  {\n");
    printf("      for(j=1; j<=n;j++)\n");
    printf("      if u want the hollow part then use (if (i==1 || i==n || j==1|| j==n)) then use the following if else statement\n");
    printf("        {\n");
    printf("      if(j %% 2 !=0) // if (j == 1 || j = n-1) this is only possible if n = 4 or smth\n");
    printf("           printf(\"+\");\n");
    printf("      else\n");
    printf("           printf(\" \");\n");
    printf("        }\n");
    printf("    printf(\"\\n\");\n");
    printf("  }\n");
    printf("\n\n");
    printf("           This below pattern is a only plus.\n");
    printf("           The only plus pattern is a pattern that consists of plus signs arranged in a square shape.\n");
    printf("           The plus signs are arranged in a square shape, with the plus signs in between.\n");
    printf("           Only odd column can be plus sign and rest of it will be space.\n");


    printf("\n");
    printf("1.\n");
    printf("\n");
    printf("           FOR Example, n = 5\n");
    printf("                            |-j(1)-|----------------------|-j(n)-| \n");
    printf("                            |  if  |  else   if     else  |  if  | \n");
    printf("           i = 1(if)        |[j1(+)| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("                            |------|----------------------|------| \n");
    printf("           i = 2(else)      |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("           i = 3(if)        |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("           i = 4(else)      |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("                            |------|----------------------|------| \n");
    printf("           i = 5(n)(if)     |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("                            |------|----------------------|------| \n");

    printf("\n");
    printf("2.\n");
    printf("\n");
    printf("           FOR Example, n = 5\n");
    printf("                            |-j(1)-|----------------------|-j(n)-| \n");
    printf("                            |  if  |  else   if     else  |  if  | \n");
    printf("           i = 1(if)        |[j1(+)| j2( )  j3(+)   j4( ) |j5( )]| \n");
    printf("                            |------|----------------------|------| \n");
    printf("           i = 2(else)      |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("           i = 3(if)        |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("           i = 4(else)      |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("                            |------|----------------------|------| \n");
    printf("           i = 5(n)(if)     |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("                            |------|----------------------|------| \n");

    printf("\n");
    printf("3.\n");
    printf("\n");
    printf("           FOR Example, n = 5\n");
    printf("                            |-j(1)-|----------------------|-j(n)-| \n");
    printf("                            |  if  |  else   if     else  |  if  | \n");
    printf("           i = 1(if)        |[j1(+)| j2( )  j3(+)   j4( ) |j5(+)]| \n");
    printf("                            |------|----------------------|------| \n");
    printf("           i = 2(else)      |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("           i = 3(if)        |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("           i = 4(else)      |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("                            |------|----------------------|------| \n");
    printf("           i = 5(n)(if)     |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("                            |------|----------------------|------| \n");

    printf("\n");
    printf("4.\n");
    printf("\n");
    printf("           FOR Example, n = 5\n");
    printf("                            |-j(1)-|----------------------|-j(n)-| \n");
    printf("                            |  if  |  else   if     else  |  if  | \n");
    printf("           i = 1(if)        |[j1(+)| j2( )  j3(+)   j4( ) |j5(+)]| \n");
    printf("                            |------|----------------------|------| \n");
    printf("           i = 2(else)      |[j1(+)| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("           i = 3(if)        |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("           i = 4(else)      |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("                            |------|----------------------|------| \n");
    printf("           i = 5(n)(if)     |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("                            |------|----------------------|------| \n");


    printf("\n");
    printf("5.\n");
    printf("\n");
    printf("           FOR Example, n = 5\n");
    printf("                            |-j(1)-|----------------------|-j(n)-| \n");
    printf("                            |  if  |  else   if     else  |  if  | \n");
    printf("           i = 1(if)        |[j1(+)| j2( )  j3(+)   j4( ) |j5(+)]| \n");
    printf("                            |------|----------------------|------| \n");
    printf("           i = 2(else)      |[j1(+)| j2( )  j3(+)   j4( ) |j5( )]| \n");
    printf("           i = 3(if)        |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("           i = 4(else)      |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("                            |------|----------------------|------| \n");
    printf("           i = 5(n)(if)     |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("                            |------|----------------------|------| \n");

    printf("\n");
    printf("6.\n");
    printf("\n");
    printf("           FOR Example, n = 5\n");
    printf("                            |-j(1)-|----------------------|-j(n)-| \n");
    printf("                            |  if  |  else   if     else  |  if  | \n");
    printf("           i = 1(if)        |[j1(+)| j2( )  j3(+)   j4( ) |j5(+)]| \n");
    printf("                            |------|----------------------|------| \n");
    printf("           i = 2(else)      |[j1(+)| j2( )  j3(+)   j4( ) |j5(+)]| \n");
    printf("           i = 3(if)        |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("           i = 4(else)      |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("                            |------|----------------------|------| \n");
    printf("           i = 5(n)(if)     |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("                            |------|----------------------|------| \n");

    printf("\n");
    printf("7.\n");
    printf("\n");
    printf("           FOR Example, n = 5\n");
    printf("                            |-j(1)-|----------------------|-j(n)-| \n");
    printf("                            |  if  |  else   if     else  |  if  | \n");
    printf("           i = 1(if)        |[j1(+)| j2( )  j3(+)   j4( ) |j5(+)]| \n");
    printf("                            |------|----------------------|------| \n");
    printf("           i = 2(else)      |[j1(+)| j2( )  j3(+)   j4( ) |j5(+)]| \n");
    printf("           i = 3(if)        |[j1(+)| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("           i = 4(else)      |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("                            |------|----------------------|------| \n");
    printf("           i = 5(n)(if)     |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("                            |------|----------------------|------| \n");


    printf("\n");
    printf("8.\n");
    printf("\n");
    printf("           FOR Example, n = 5\n");
    printf("                            |-j(1)-|----------------------|-j(n)-| \n");
    printf("                            |  if  |  else   if     else  |  if  | \n");
    printf("           i = 1(if)        |[j1(+)| j2( )  j3(+)   j4( ) |j5(+)]| \n");
    printf("                            |------|----------------------|------| \n");
    printf("           i = 2(else)      |[j1(+)| j2( )  j3(+)   j4( ) |j5(+)]| \n");
    printf("           i = 3(if)        |[j1(+)| j2( )  j3(+)   j4( ) |j5( )]| \n");
    printf("           i = 4(else)      |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("                            |------|----------------------|------| \n");
    printf("           i = 5(n)(if)     |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("                            |------|----------------------|------| \n");


    printf("\n");
    printf("9.\n");
    printf("\n");
    printf("           FOR Example, n = 5\n");
    printf("                            |-j(1)-|----------------------|-j(n)-| \n");
    printf("                            |  if  |  else   if     else  |  if  | \n");
    printf("           i = 1(if)        |[j1(+)| j2( )  j3(+)   j4( ) |j5(+)]| \n");
    printf("                            |------|----------------------|------| \n");
    printf("           i = 2(else)      |[j1(+)| j2( )  j3(+)   j4( ) |j5(+)]| \n");
    printf("           i = 3(if)        |[j1(+)| j2( )  j3(+)   j4( ) |j5(+)]| \n");
    printf("           i = 4(else)      |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("                            |------|----------------------|------| \n");
    printf("           i = 5(n)(if)     |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("                            |------|----------------------|------| \n");


    printf("\n");
    printf("10.\n");
    printf("\n");
    printf("           FOR Example, n = 5\n");
    printf("                            |-j(1)-|----------------------|-j(n)-| \n");
    printf("                            |  if  |  else   if     else  |  if  | \n");
    printf("           i = 1(if)        |[j1(+)| j2( )  j3(+)   j4( ) |j5(+)]| \n");
    printf("                            |------|----------------------|------| \n");
    printf("           i = 2(else)      |[j1(+)| j2( )  j3(+)   j4( ) |j5(+)]| \n");
    printf("           i = 3(if)        |[j1(+)| j2( )  j3(+)   j4( ) |j5(+)]| \n");
    printf("           i = 4(else)      |[j1(+)| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("                            |------|----------------------|------| \n");
    printf("           i = 5(n)(if)     |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("                            |------|----------------------|------| \n");


    printf("\n");
    printf("11.\n");
    printf("\n");
    printf("           FOR Example, n = 5\n");
    printf("                            |-j(1)-|----------------------|-j(n)-| \n");
    printf("                            |  if  |  else   if     else  |  if  | \n");
    printf("           i = 1(if)        |[j1(+)| j2( )  j3(+)   j4( ) |j5(+)]| \n");
    printf("                            |------|----------------------|------| \n");
    printf("           i = 2(else)      |[j1(+)| j2( )  j3(+)   j4( ) |j5(+)]| \n");
    printf("           i = 3(if)        |[j1(+)| j2( )  j3(+)   j4( ) |j5(+)]| \n");
    printf("           i = 4(else)      |[j1(+)| j2( )  j3(+)   j4( ) |j5( )]| \n");
    printf("                            |------|----------------------|------| \n");
    printf("           i = 5(n)(if)     |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("                            |------|----------------------|------| \n");


    printf("\n");
    printf("12.\n");
    printf("\n");
    printf("           FOR Example, n = 5\n");
    printf("                            |-j(1)-|----------------------|-j(n)-| \n");
    printf("                            |  if  |  else   if     else  |  if  | \n");
    printf("           i = 1(if)        |[j1(+)| j2( )  j3(+)   j4( ) |j5(+)]| \n");
    printf("                            |------|----------------------|------| \n");
    printf("           i = 2(else)      |[j1(+)| j2( )  j3(+)   j4( ) |j5(+)]| \n");
    printf("           i = 3(if)        |[j1(+)| j2( )  j3(+)   j4( ) |j5(+)]| \n");
    printf("           i = 4(else)      |[j1(+)| j2( )  j3(+)   j4( ) |j5(+)]| \n");
    printf("                            |------|----------------------|------| \n");
    printf("           i = 5(n)(if)     |[j1( )| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("                            |------|----------------------|------| \n");


    printf("\n");
    printf("13.\n");
    printf("\n");
    printf("           FOR Example, n = 5\n");
    printf("                            |-j(1)-|----------------------|-j(n)-| \n");
    printf("                            |  if  |  else   if     else  |  if  | \n");
    printf("           i = 1(if)        |[j1(+)| j2( )  j3(+)   j4( ) |j5(+)]| \n");
    printf("                            |------|----------------------|------| \n");
    printf("           i = 2(else)      |[j1(+)| j2( )  j3(+)   j4( ) |j5(+)]| \n");
    printf("           i = 3(if)        |[j1(+)| j2( )  j3(+)   j4( ) |j5(+)]| \n");
    printf("           i = 4(else)      |[j1(+)| j2( )  j3(+)   j4( ) |j5(+)]| \n");
    printf("                            |------|----------------------|------| \n");
    printf("           i = 5(n)(if)     |[j1(+)| j2( )  j3( )   j4( ) |j5( )]| \n");
    printf("                            |------|----------------------|------| \n");

    printf("\n");
    printf("14.\n");
    printf("\n");
    printf("           FOR Example, n = 5\n");
    printf("                            |-j(1)-|----------------------|-j(n)-| \n");
    printf("                            |  if  |  else   if     else  |  if  | \n");
    printf("           i = 1(if)        |[j1(+)| j2( )  j3(+)   j4( ) |j5(+)]| \n");
    printf("                            |------|----------------------|------| \n");
    printf("           i = 2(else)      |[j1(+)| j2( )  j3(+)   j4( ) |j5(+)]| \n");
    printf("           i = 3(if)        |[j1(+)| j2( )  j3(+)   j4( ) |j5(+)]| \n");
    printf("           i = 4(else)      |[j1(+)| j2( )  j3(+)   j4( ) |j5(+)]| \n");
    printf("                            |------|----------------------|------| \n");
    printf("           i = 5(n)(if)     |[j1(+)| j2( )  j3(+)   j4( ) |j5( )]| \n");
    printf("                            |------|----------------------|------| \n");


    printf("\n");
    printf("15.\n");
    printf("\n");
    printf("           FOR Example, n = 5\n");
    printf("                            |-j(1)-|----------------------|-j(n)-| \n");
    printf("                            |  if  |  else   if     else  |  if  | \n");
    printf("           i = 1(if)        |[j1(+)| j2( )  j3(+)   j4( ) |j5(+)]| \n");
    printf("                            |------|----------------------|------| \n");
    printf("           i = 2(else)      |[j1(+)| j2( )  j3(+)   j4( ) |j5(+)]| \n");
    printf("           i = 3(if)        |[j1(+)| j2( )  j3(+)   j4( ) |j5(+)]| \n");
    printf("           i = 4(else)      |[j1(+)| j2( )  j3(+)   j4( ) |j5(+)]| \n");
    printf("                            |------|----------------------|------| \n");
    printf("           i = 5(n)(if)     |[j1(+)| j2( )  j3(+)   j4( ) |j5(+)]| \n");
    printf("                            |------|----------------------|------| \n");


}

void lefttriangle()
{
    clearScreen();
    printAsciiArt();
    printf("\n\n\n");
    printf("\n");
    printf("\n");
    printf("CODE:\n");
    printf("\n");
    printf("\n");
    printf("for (i = 1; i <= n; i++)\n");
    printf("{\n");
    printf("    for (j = 1;j<=i ; j++)\n");
    printf("    {\n");
    printf("        printf(\"*\");\n");
    printf("    }\n");
    printf("    printf(\"\\n\");\n");
    printf("}\n");
    printf("\n");
    printf("\n");
    printf("           This is a left triangle full pattern.\n");
    printf("           In this pattern, left cross section will be used as a j=i\n");
    printf("           It adjusts the starting column for each row.\n");
    printf("           The pattern is as follows:\n");
    printf("\n");
    printf("\n");
    printf("           i=1,           j=1             *\n");
    printf("           i=2,           j=2             * *\n");
    printf("           i=3,           j=3             * * *\n");
    printf("           i=4,           j=4             * * * *\n");

    printf("\n");
    printf("1.\n");
    printf("\n");
    printf("           FOR Example, n = 4\n");
    printf("                      |-j(1)-|-------------|-j(n)-| \n");
    printf("           i = 1      |[j1(*)| j2( ) j3( ) |j4( )]| (j= 1 to 1) \n");
    printf("                      |------|-------------|------| \n");
    printf("           i = 2      |[j1( )| j2( ) j3( ) |j4( )]| \n");
    printf("           i = 3      |[j1( )| j2( ) j3( ) |j4( )]| \n");
    printf("                      |------|-------------|------| \n");
    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4( )]| \n");
    printf("                      |------|-------------|------| \n");

    printf("\n");
    printf("2.\n");
    printf("\n");
    printf("           FOR Example, n = 4\n");
    printf("                      |-j(1)-|-------------|-j(n)-| \n");
    printf("           i = 1      |[j1(*)| j2( ) j3( ) |j4( )]|  (j= 1 to 1)\n");
    printf("                      |------|-------------|------| \n");
    printf("           i = 2      |[j1(*)| j2(*) j3( ) |j4( )]|  (j= 1 to 2)\n");
    printf("           i = 3      |[j1( )| j2( ) j3( ) |j4( )]| \n");
    printf("                      |------|-------------|------| \n");
    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4( )]| \n");
    printf("                      |------|-------------|------| \n");

    printf("\n");
    printf("3.\n");
    printf("\n");
    printf("           FOR Example, n = 4\n");
    printf("                      |-j(1)-|-------------|-j(n)-| \n");
    printf("           i = 1      |[j1(*)| j2( ) j3( ) |j4( )]|  (j= 1 to 1)\n");
    printf("                      |------|-------------|------|             \n");
    printf("           i = 2      |[j1(*)| j2(*) j3( ) |j4( )]|  (j= 1 to 2)\n");
    printf("           i = 3      |[j1(*)| j2(*) j3(*) |j4( )]|  (j= 1 to 3)\n");
    printf("                      |------|-------------|------| \n");
    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4( )]| \n");
    printf("                      |------|-------------|------| \n");

    printf("\n");
    printf("4.\n");
    printf("\n");
    printf("           FOR Example, n = 4\n");
    printf("                      |-j(1)-|-------------|-j(n)-| \n");
    printf("           i = 1      |[j1(*)| j2( ) j3( ) |j4( )]|  (j= 1 to 1)\n");
    printf("                      |------|-------------|------|             \n");
    printf("           i = 2      |[j1(*)| j2(*) j3( ) |j4( )]|  (j= 1 to 2)\n");
    printf("           i = 3      |[j1(*)| j2(*) j3(*) |j4( )]|  (j= 1 to 3)\n");
    printf("                      |------|-------------|------| \n");
    printf("           i = 4(n)   |[j1(*)| j2(*) j3(*) |j4(*)]| (j= 1 to 4)\n");
    printf("                      |------|-------------|------| \n");

}

void reverselefttriangle()
{
        clearScreen();
        printAsciiArt();
        printf("\n\n\n");
        printf("\n");
        printf("\n");
        printf("CODE:\n");
        printf("\n");
        printf("\n");
        printf("for (i = 1; i <= n; i++)\n");
        printf("{\n");
        printf("    for (space=1;space<i;space++)\n");
        printf("    {\n");
        printf("        printf(\" \");\n");
        printf("    }\n");
        printf("    for (j = i; j <= n; j++)\n");
        printf("    {\n");
        printf("        printf(\"*\");\n");
        printf("    }\n");
        printf("    printf(\"\\n\");\n");
        printf("}\n");
        printf("\n");
        printf("\n");
        printf("           This is a left triangle reverse pattern.\n");
        printf("           In this pattern, left cross section will be used as a j=i\n");
        printf("           as j<=n it will print the * in the same row\n");

        printf("           It adjusts the starting column for each row.\n");


        printf("           i=1,j=1 space(1)<1(i) (false)= no space(* * * *)\n");
        printf("           i=2,j=2 space(1)<2(i) (true )= 1  space(  * * *)\n");
        printf("           i=3,j=3 space(2)<3(i) (false)= 2  space(    * *)\n");
        printf("           i=4,j=4 space(3)<4(i) (false)= 3  space(      *)\n");

        printf("1.\n");
        printf("\n");
        printf("           FOR Example, n = 4\n");
        printf("                      |-j(1)-----|---------------------|-j(n)-| \n");
        printf("           i = 1      |[j1(  *  )| j2(  *  ) j3(  *  ) |j4(*)]| \n");
        printf("                      |----------|---------------------|------| \n");
        printf("           i = 2      |[j1(     )| j2(     ) j3(     ) |j4( )]| \n");
        printf("           i = 3      |[j1(     )| j2(     ) j3(     ) |j4( )]| \n");
        printf("                      |----------|---------------------|------| \n");
        printf("           i = 4(n)   |[j1(     )| j2(     ) j3(     ) |j4( )]| \n");
        printf("           |----------|---------------------|------| \n");
        printf("\n");
        printf("2.\n");
        printf("\n");
        printf("           FOR Example, n = 4\n");
        printf("                      |-j(1)-----|---------------------|-j(n)-| \n");
        printf("           i = 1      |[j1(  *  )| j2(  *  ) j3(  *  ) |j4(*)]| \n");
        printf("                      |----------|---------------------|------| \n");
        printf("           i = 2      |[j1(SPACE)| j2(  *  ) j3(  *  ) |j4(*)]| \n");
        printf("           i = 3      |[j1(     )| j2(     ) j3(     ) |j4( )]| \n");
        printf("                      |----------|---------------------|------| \n");
        printf("           i = 4(n)   |[j1(     )| j2(     ) j3(     ) |j4( )]| \n");
        printf("                      |----------|---------------------|------| \n");
        printf("\n");
        printf("3.\n");
        printf("\n");
        printf("           FOR Example, n = 4\n");
        printf("                      |-j(1)-----|---------------------|-j(n)-| \n");
        printf("           i = 1      |[j1(  *  )| j2(  *  ) j3(  *  ) |j4(0)]| \n");
        printf("                      |----------|---------------------|------| \n");
        printf("           i = 2      |[j1(SPACE)| j2(  *  ) j3(  *  ) |j4(*)]| \n");
        printf("           i = 3      |[j1(SPACE)| j2(SPACE) j3(  *  ) |j4(*)]| \n");
        printf("                      |----------|---------------------|------| \n");
        printf("           i = 4(n)   |[j1(     )| j2(     ) j3(     ) |j4( )]| \n");
        printf("                      |----------|---------------------|------| \n");

        printf("\n");
        printf("4.\n");
        printf("\n");
        printf("           FOR Example, n = 4\n");
        printf("                      |-j(1)-----|---------------------|-j(n)-| \n");
        printf("           i = 1      |[j1(  *  )| j2(  *  ) j3(  *  ) |j4(*)]| \n");
        printf("                      |----------|---------------------|------| \n");
        printf("           i = 2      |[j1(SPACE)| j2(  *  ) j3(  *  ) |j4(*)]| \n");
        printf("           i = 3      |[j1(SPACE)| j2(SPACE) j3(  *  ) |j4(*)]| \n");
        printf("                      |----------|---------------------|------| \n");
        printf("           i = 4(n)   |[j1(SPACE)| j2(SPACE) j3(SPACE) |j4(*)]| \n");
        printf("                      |----------|---------------------|------| \n");
}

void reversehollowlefttriangle()
{
        clearScreen();
        printAsciiArt();
        printf("\n\n\n");
        printf("\n");
        printf("\n");
        printf("CODE:\n");
        printf("\n");
        printf("\n");

        printf("for (i = 1; i <= n; i++)\n");
        printf("{\n");
        printf("    for (space=1;space<i;space++)\n");
        printf("    {\n");
        printf("        printf(\" \");\n");
        printf("    }\n");
        printf("    for (j = i; j <= n; j++)\n");
        printf("    {\n");
        printf("        printf(\"*\");\n");
        printf("        if (j == n || i ==1 || i== j)\n");
        printf("            printf(\"*\");\n");
        printf("        else\n");
        printf("            printf(\" \");\n");
        printf("    }\n");
        printf("    printf(\"\\n\");\n");
        printf("}\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("           This is a left triangle reverse hollow pattern.\n");
        printf("           In this pattern, left cross section will be used as a j=i\n");
        printf("           as j<=n it will print the * in the same row\n");
        printf("           It adjusts the starting column for each row.\n");
        printf("1.\n");
        printf("\n");
        printf("           FOR Example, n = 5\n");
        printf("                      |-j(1)-----|------------------------------|-j(n)-| \n");
        printf("           i = 1      |[j1(  *  )| j2(  *  ) j3(  *  ) j4(  *  )|j5(*)]| \n");
        printf("                      |----------|------------------------------|------| \n");
        printf("           i = 2      |[j1(     )| j2(     ) j3(     ) j4(     )|j5( )]| \n");
        printf("           i = 3      |[j1(     )| j2(     ) j3(     ) j4(     )|j5( )]| \n");
        printf("           i = 4      |[j1(     )| j2(     ) j3(     ) j3(     )|j5( )]| \n");
        printf("                      |----------|------------------------------|------| \n");
        printf("           i = 5(n)   |[j1(     )| j2(     ) j3(     ) j3(     )|j5( )]| \n");
        printf("                      |----------|------------------------------|------| \n");

        printf("\n");
        printf("2.\n");
        printf("\n");
        printf("           FOR Example, n = 5\n");
        printf("                      |-j(1)-----|------------------------------|-j(n)-| \n");
        printf("           i = 1      |[j1(  *  )| j2(  *  ) j3(  *  ) j4(  *  )|j5(*)]| \n");
        printf("                      |----------|------------------------------|------| \n");
        printf("           i = 2      |[j1(SPACE)| j2(  *  ) j3( else) j4( else)|j5(*)]| \n");
        printf("           i = 3      |[j1(     )| j2(     ) j3(     ) j4(     )|j5( )]| \n");
        printf("           i = 4      |[j1(     )| j2(     ) j3(     ) j3(     )|j5( )]| \n");
        printf("                      |----------|------------------------------|------| \n");
        printf("           i = 5(n)   |[j1(     )| j2(     ) j3(     ) j3(     )|j5( )]| \n");
        printf("                      |----------|------------------------------|------| \n");
        printf("\n");
        printf("3.\n");
        printf("\n");
        printf("           FOR Example, n = 5\n");
        printf("                      |-j(1)-----|------------------------------|-j(n)-| \n");
        printf("           i = 1      |[j1(  *  )| j2(  *  ) j3(  *  ) j4(  *  )|j5(*)]| \n");
        printf("                      |----------|------------------------------|------| \n");
        printf("           i = 2      |[j1(SPACE)| j2(  *  ) j3( else) j4( else)|j5(*)]| \n");
        printf("           i = 3      |[j1(SPACE)| j2(SPACE) j3(  *  ) j4( else)|j5(*)]| \n");
        printf("           i = 4      |[j1(     )| j2(     ) j3(     ) j3(     )|j5( )]| \n");
        printf("                      |----------|------------------------------|------| \n");
        printf("           i = 5(n)   |[j1(     )| j2(     ) j3(     ) j3(     )|j5( )]| \n");
        printf("                      |----------|------------------------------|------| \n");

        printf("\n");
        printf("4.\n");
        printf("\n");
        printf("           FOR Example, n = 5\n");
        printf("                      |-j(1)-----|------------------------------|-j(n)-| \n");
        printf("           i = 1      |[j1(  *  )| j2(  *  ) j3(  *  ) j4(  *  )|j5(*)]| \n");
        printf("                      |----------|------------------------------|------| \n");
        printf("           i = 2      |[j1(SPACE)| j2(  *  ) j3( else) j4( else)|j5(*)]| \n");
        printf("           i = 3      |[j1(SPACE)| j2(SPACE) j3(  *  ) j4( else)|j5(*)]| \n");
        printf("           i = 4      |[j1(SPACE)| j2(SPACE) j3(SPACE) j3(  *  )|j5(*)]| \n");
        printf("                      |----------|------------------------------|------| \n");
        printf("           i = 5(n)   |[j1(     )| j2(     ) j3(     ) j3(     )|j5( )]| \n");
        printf("                      |----------|------------------------------|------| \n");

        printf("\n");
        printf("5.\n");
        printf("\n");
        printf("           FOR Example, n = 5\n");
        printf("                      |-j(1)-----|------------------------------|-j(n)-| \n");
        printf("           i = 1      |[j1(  *  )| j2(  *  ) j3(  *  ) j4(  *  )|j5(*)]| \n");
        printf("                      |----------|------------------------------|------| \n");
        printf("           i = 2      |[j1(SPACE)| j2(  *  ) j3( else) j4( else)|j5(*)]| \n");
        printf("           i = 3      |[j1(SPACE)| j2(SPACE) j3(  *  ) j4( else)|j5(*)]| \n");
        printf("           i = 4      |[j1(SPACE)| j2(SPACE) j3(SPACE) j3(  *  )|j5(*)]| \n");
        printf("                      |----------|------------------------------|------| \n");
        printf("           i = 5(n)   |[j1(SPACE)| j2(SPACE) j3(SPACE) j3(SPACE)|j5(*)]| \n");
        printf("                      |----------|------------------------------|------| \n");


}

void righttriangle()
{
    clearScreen();
    printAsciiArt();
    printf("\n\n\n");
    printf("\n");
    printf("\n");
    printf("CODE:\n");
    printf("\n");
    printf("\n");

    printf("\n");
    printf("for (i = 1; i <= n; i++)\n");
    printf("{\n");
    printf("    for (space = 1; space <= n - i; space++)\n");
    printf("    {\n");
    printf("        printf(\" \");\n");
    printf("    }\n");
    printf("    for (j = 1;j<=i ; j++)\n");
    printf("    {\n");
    printf("        printf(\"*\");\n");
    printf("    }\n");
    printf("    printf(\"\\n\");\n");
    printf("}\n");
    printf("\n");
    printf("\n");
    printf("           This is a right triangle full pattern.\n");
    printf("           In this pattern, right cross section will be used as a j=i\n");
    printf("           But 1st space will be used space<=n-i\n");
    printf("           And then a * will be printed.\n");
    printf("           It adjusts the starting column for each            row.\n");

    printf("           i=1,j=1 space<= 4-1= 3  (    *)\n");
    printf("           i=2,j=2 space<= 4-2= 2 (   * *)\n");
    printf("           i=3,j=3 space<= 4-3= 1 ( * * *)\n");
    printf("           i=4,j=4 space<= 4-4= 0(* * * *)\n");





    printf("1.\n");
    printf("\n");
    printf("           FOR Example, n = 4\n");
    printf("                      |-j(1)-----|---------------------|-j(n)-| \n");
    printf("           i = 1      |[j1(SPACE)| j2(SPACE) j3(SPACE) |j4(*)]| \n");
    printf("                      |----------|---------------------|------| \n");
    printf("           i = 2      |[j1(     )| j2(     ) j3(     ) |j4( )]| \n");
    printf("           i = 3      |[j1(     )| j2(     ) j3(     ) |j4( )]| \n");
    printf("                      |----------|---------------------|------| \n");
    printf("           i = 4(n)   |[j1(     )| j2(     ) j3(     ) |j4( )]| \n");
    printf("                      |----------|---------------------|------| \n");
    printf("\n");
    printf("2.\n");
    printf("\n");
    printf("           FOR Example, n = 4\n");
    printf("                      |-j(1)-----|---------------------|-j(n)-| \n");
    printf("           i = 1      |[j1(SPACE)| j2(SPACE) j3(SPACE) |j4(*)]| \n");
    printf("                      |----------|---------------------|------| \n");
    printf("           i = 2      |[j1(SPACE)| j2(SPACE) j3(  *  ) |j4(*)]| \n");
    printf("           i = 3      |[j1(     )| j2(     ) j3(     ) |j4( )]| \n");
    printf("                      |----------|---------------------|------| \n");
    printf("           i = 4(n)   |[j1(     )| j2(     ) j3(     ) |j4( )]| \n");
    printf("                      |----------|---------------------|------| \n");

    printf("\n");
    printf("3.\n");
    printf("\n");
    printf("           FOR Example, n = 4\n");
    printf("                      |-j(1)-----|---------------------|-j(n)-| \n");
    printf("           i = 1      |[j1(SPACE)| j2(SPACE) j3(SPACE) |j4(*)]| \n");
    printf("                      |----------|---------------------|------| \n");
    printf("           i = 2      |[j1(SPACE)| j2(SPACE) j3(  *  ) |j4(*)]| \n");
    printf("           i = 3      |[j1(SPACE)| j2(  *  ) j3(  *  ) |j4(*)]| \n");
    printf("                      |----------|---------------------|------| \n");
    printf("           i = 4(n)   |[j1(     )| j2(     ) j3(     ) |j4( )]| \n");
    printf("                      |----------|---------------------|------| \n");

    printf("\n");
    printf("4.\n");
    printf("\n");
    printf("           FOR Example, n = 4\n");
    printf("                      |-j(1)-----|---------------------|-j(n)-| \n");
    printf("           i = 1      |[j1(SPACE)| j2(SPACE) j3(SPACE) |j4(*)]| \n");
    printf("                      |----------|---------------------|------| \n");
    printf("           i = 2      |[j1(SPACE)| j2(SPACE) j3(  *  ) |j4(*)]| \n");
    printf("           i = 3      |[j1(SPACE)| j2(  *  ) j3(  *  ) |j4(*)]| \n");
    printf("                      |----------|---------------------|------| \n");
    printf("           i = 4(n)   |[j1(  *  )| j2(  *  ) j3(  *  ) |j4(*)]| \n");
    printf("                      |----------|---------------------|------| \n");


}

void reverserighttriangle()
{
    clearScreen();
    printAsciiArt();
    printf("\n\n\n");
    printf("\n");
    printf("\n");
    printf("CODE:\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("for (i = 1; i <= n; i++)\n");
    printf("{\n");
    printf("    for (j = 1; j <= n - i; j++)\n");
    printf("    {\n");
    printf("        printf(\"*\");\n");
    printf("    }\n");
    printf("    printf(\"\\n\");\n");
    printf("}\n");
    printf("\n");
    printf("\n");
    printf("           This is a right triangle reverse pattern.\n");
    printf("           In this pattern, right cross section will be used as a j=n-i\n");
    printf("           It adjusts the starting column for each row.\n");


    printf("           i=1,           j <= 4-1= 3              * * *  \n");
    printf("           i=2,           j <= 4-2= 2              * *    \n");
    printf("           i=3,           j <= 4-3= 1              *      \n");
    printf("           i=4,           j <= 4-4= 0                     \n");

    printf("1.\n");
    printf("\n");
    printf("           FOR Example, n = 4\n");
    printf("                      |-j(1)-----|---------------------|-j(n)-| \n");
    printf("           i = 1      |[j1(  *  )| j2(  *  ) j3(  *  ) |j4(0)]| \n");
    printf("                      |----------|---------------------|------| \n");
    printf("           i = 2      |[j1(     )| j2(     ) j3(     ) |j4( )]| \n");
    printf("           i = 3      |[j1(     )| j2(     ) j3(     ) |j4( )]| \n");
    printf("                      |----------|---------------------|------| \n");
    printf("           i = 4(n)   |[j1(     )| j2(     ) j3(     ) |j4( )]| \n");
    printf("                      |----------|---------------------|------| \n");
    printf("\n");
    printf("2.\n");
    printf("\n");
    printf("           FOR Example, n = 4\n");
    printf("                      |-j(1)-----|---------------------|-j(n)-| \n");
    printf("           i = 1      |[j1(  *  )| j2(  *  ) j3(  *  ) |j4(0)]| \n");
    printf("                      |----------|---------------------|------| \n");
    printf("           i = 2      |[j1(  *  )| j2(  *  ) j3(  0  ) |j4(0)]| \n");
    printf("           i = 3      |[j1(     )| j2(     ) j3(     ) |j4( )]| \n");
    printf("                      |----------|---------------------|------| \n");
    printf("           i = 4(n)   |[j1(     )| j2(     ) j3(     ) |j4( )]| \n");
    printf("                      |----------|---------------------|------| \n");
    printf("\n");
    printf("3.\n");
    printf("\n");
    printf("           FOR Example, n = 4\n");
    printf("                      |-j(1)-----|---------------------|-j(n)-| \n");
    printf("           i = 1      |[j1(  *  )| j2(  *  ) j3(  *  ) |j4(0)]| \n");
    printf("                      |----------|---------------------|------| \n");
    printf("           i = 2      |[j1(  *  )| j2(  *  ) j3(  0  ) |j4(0)]| \n");
    printf("           i = 3      |[j1(  *  )| j2(  0  ) j3(  0  ) |j4(0)]| \n");
    printf("                      |----------|---------------------|------| \n");
    printf("           i = 4(n)   |[j1(     )| j2(     ) j3(     ) |j4( )]| \n");
    printf("                      |----------|---------------------|------| \n");

    printf("\n");
    printf("4.\n");
    printf("\n");
    printf("           FOR Example, n = 4\n");
    printf("                      |-j(1)-----|---------------------|-j(n)-| \n");
    printf("           i = 1      |[j1(  *  )| j2(  *  ) j3(  *  ) |j4(0)]| \n");
    printf("                      |----------|---------------------|------| \n");
    printf("           i = 2      |[j1(  *  )| j2(  *  ) j3(  0  ) |j4(0)]| \n");
    printf("           i = 3      |[j1(  *  )| j2(  0  ) j3(  0  ) |j4(0)]| \n");
    printf("                      |----------|---------------------|------| \n");
    printf("           i = 4(n)   |[j1(  0  )| j2(  0  ) j3(  0  ) |j4(0)]| \n");
    printf("                      |----------|---------------------|------| \n");
}

void hollowrec()
{
           clearScreen();
           printAsciiArt();
           printf("\n\n\n");
           printf("\n");
            printf("\n");
            printf("CODE:\n");
            printf("\n");
            printf("\n");

            printf("for(i=1;i<=n;i++)\n");
            printf("{\n");
            printf("   for(j=1;j<=n-i;j++)\n");
            printf("     {\n");
            printf("        printf(\" \");\n");
            printf("     }\n");
            printf("   for(j=1;j<=n;j++)\n");
            printf("     {\n");
            printf("        if(i==1||i==n||j==1||j==n)\n");
            printf("            printf(\"*\");\n");
            printf("        else\n");
            printf("            printf(\" \");\n");
            printf("     }\n");
            printf("     printf(\"\\n\");\n");
            printf("}\n");
            printf("\n");
            printf("\n");
            printf("           This is a hollow rectangle.\n");
            printf("           In this pattern, 1st space is printed for space<=n-i\n");
            printf("           2nd * is printed for j<=n\n");
            printf("\n");
            printf("           3rd again space is printed inside rectangle for i==1||i==n||j==1||j==n\n");
            printf("           i = 1, space = n - i = 4 - 1 = 3(space)    space space space  *     *     *    *\n");
            printf("           i = 2, space = n - i = 4 - 2 = 2(space)    space space   *                 *\n");
            printf("           i = 3, space = n - i = 4 - 3 = 1(space)    space   *                    *\n");
            printf("           i = 4, space = n - i = 4 - 4 = 0(space)      *       *       *      *\n");

            printf("\n");
            printf("\n");
            printf("\n");


            printf("1.\n");
            printf("\n");
            printf("           FOR Example, n = 4\n");
            printf("                      |-----j(1)-----|--------------------------------------------------------------------------------------|----j(n)-----| \n");
            printf("           i = 1      |[j1(  SPACE  )| j2(  SPACE  ) j3(SPACE)  j4(     *   )   j5(     *   )   j6(     *   )    |j7(     *   )]          | \n");
            printf("                      |--------------|--------------------------------------------------------------------------------------|-------------| \n");
            printf("           i = 2      |[j1(         )| j2(         )       j3(         )  j4(         )   j5(         )   j6(         )     |j7(      )]  | \n");
            printf("           i = 3      |[j1(         )| j2(         )       j3(         )  j4(         )   j5(         )   j6(         )     |j7(      )]  | \n");
            printf("                      |--------------|--------------------------------------------------------------------------------------|-------------| \n");
            printf("           i = 4(n)   |[j1(         )| j2(         )       j3(         )  j4(         )   j5(         )   j6(         )     |j7(      )]  | \n");
            printf("                      |--------------|--------------------------------------------------------------------------------------|-------------| \n");


            printf("\n");
            printf("2.\n");
            printf("\n");
            printf("           FOR Example, n = 4\n");
            printf("                      |-----j(1)-----|--------------------------------------------------------------------------------------|----j(n)-----| \n");
            printf("           i = 1      |[j1(  SPACE  )| j2(  SPACE  ) j3(SPACE)  j4(     *   )   j5(     *   )   j6(     *   )    |j7(     *   )]          | \n");
            printf("                      |--------------|--------------------------------------------------------------------------------------|-------------| \n");
            printf("           i = 2      |[j1(  SPACE  )| j2(  SPACE  )       j3(     *   )  j4(   else   )   j5(   else   )   j6(     *   )   |j7(      )]  | \n");
            printf("           i = 3      |[j1(         )| j2(         )       j3(         )  j4(         )   j5(         )   j6(         )     |j7(      )]  | \n");
            printf("                      |--------------|--------------------------------------------------------------------------------------|-------------| \n");
            printf("           i = 4(n)   |[j1(         )| j2(         )       j3(         )  j4(         )   j5(         )   j6(         )     |j7(      )]  | \n");
            printf("                      |--------------|--------------------------------------------------------------------------------------|-------------| \n");


            printf("\n");
            printf("3.\n");
            printf("\n");
            printf("           FOR Example, n = 4\n");
            printf("                      |-----j(1)-----|--------------------------------------------------------------------------------------|----j(n)-----| \n");
            printf("           i = 1      |[j1(  SPACE  )| j2(  SPACE  ) j3(SPACE)  j4(     *   )   j5(     *   )   j6(     *   )    |j7(     *   )]          | \n");
            printf("                      |--------------|--------------------------------------------------------------------------------------|-------------| \n");
            printf("           i = 2      |[j1(  SPACE  )| j2(  SPACE  )       j3(     *   )  j4(   else   )   j5(   else   )   j6(      *   )  |j7(      )]  | \n");
            printf("           i = 3      |[j1(  SPACE  )|                j2(       *   )  j3(  else   )  j4(  else   )  j5(       *   )  j6( ) |j7(      )]  | \n");
            printf("                      |--------------|--------------------------------------------------------------------------------------|-------------| \n");
            printf("           i = 4(n)   |[j1(         )| j2(         )       j3(         )  j4(         )   j5(         )   j6(         )     |j7(      )]  | \n");
            printf("                      |--------------|--------------------------------------------------------------------------------------|-------------| \n");

            printf("\n");
            printf("4.\n");
            printf("\n");
            printf("           FOR Example, n = 4\n");
            printf("                      |-----j(1)-----|--------------------------------------------------------------------------------------|----j(n)-----| \n");
            printf("           i = 1      |[j1(  SPACE  )| j2(  SPACE  ) j3(SPACE)  j4(     *   )   j5(     *   )   j6(     *   )    |j7(     *   )]          | \n");
            printf("                      |--------------|--------------------------------------------------------------------------------------|-------------| \n");
            printf("           i = 2      |[j1(  SPACE  )| j2(  SPACE  )       j3(     *   )  j4(  else   )   j5(  else   )   j6(      *   )    |j7(      )]  | \n");
            printf("           i = 3      |[j1(  SPACE  )|                j2(       *   )  j3(  else   )  j4(  else   )  j5(       *   )  j6( ) |j7(      )]  | \n");
            printf("                      |--------------|--------------------------------------------------------------------------------------|-------------| \n");
            printf("           i = 4(n)   |[                      j1(     *   )| j2(     *   )       j3(     *   )  j4(     *   ) j5()    j6()  |j7(      )]  | \n");
            printf("                      |--------------|--------------------------------------------------------------------------------------|-------------| \n");
}

void mirrorhollow()
{
            clearScreen();
            printAsciiArt();
            printf("\n\n\n");
            printf("\n");
            printf("\n");
            printf("CODE:\n");
            printf("\n");
            printf("\n");

            printf("for(i=1;i<=n;i++)\n");
            printf("{\n");
            printf("for(space=1;space<i;space++)\n");
            printf("        {\n");
            printf("            printf(\" \");\n");
            printf("        }\n");
            printf("        for(j=1;j<=n;j++)\n");
            printf("        {\n");
            printf("            if(i==1||i==n||j==1||j==n)\n");
            printf("            printf(\"*\");\n");
            printf("            else\n");
            printf("            printf(\" \");\n");
            printf("        }\n");
            printf("        printf(\"\\n\");\n");
            printf("    }\n");
            printf("\n");
            printf("    printf(\"\\n\");\n");
            printf("\n");
            printf("           This is a mirror hollow rectangle.\n");
            printf("           In this pattern, 1st space is printed for space<i\n");
            printf("           And then * is printed for j<=n\n");
            printf("           if i==1||i==n||j==1||j==n is for hollow inside rectangle\n");

            printf("\n");
            printf("\n");

            printf("           i = 1, space<i = 1 < 1 = 0 (false)(space)   *     *     *    *\n");
            printf("           i = 2, space<i = 1 < 2 = 1 (true)(space)  space   *                *\n");
            printf("           i = 2, space<i = 2 < 3 = 2 (true)(space)  space space    *                *\n");
            printf("           i = 2, space<i = 3 < 4 = 3 (true)(space)  space space  space    *     *     *    *\n");

            printf("\n");
            printf("\n");
            printf("\n");


            printf("1.\n");
            printf("\n");
            printf("           FOR Example, n = 4\n");
            printf("                      |[j(1)------------------|--------------------------------------------------------------------------|-------------| \n");
            printf("           i = 1      |[j1(           *  )    | j2(  *   )   j3(  *  )    j4(   *  )    j5(     *   )    j6(     *   )   |j7(      )]  | \n");
            printf("                      |-----------------------|--------------------------------------------------------------------------|-------------| \n");
            printf("           i = 2      |[j1(              )    | j2(      )   j3(     )    j4(      )    j5(         )    j6(         )   |j7(      )]  | \n");
            printf("           i = 3      |[j1(              )    | j2(      )   j3(     )    j4(      )    j5(         )    j6(         )   |j7(      )]  | \n");
            printf("                      |-----------------------|--------------------------------------------------------------------------|-------------| \n");
            printf("           i = 4(n)   |[j1(              )    | j2(      )   j3(     )    j4(      )    j5(         )    j6(         )   |j7(      )]  | \n");
            printf("                      |-----------------------|--------------------------------------------------------------------------|-------------| \n");


            printf("\n");
            printf("2.\n");
            printf("\n");
            printf("           FOR Example, n = 4\n");
            printf("                      |[j(1)------------------|--------------------------------------------------------------------------|-------------| \n");
            printf("           i = 1      |[j1(           *  )    | j2(  *   )   j3(  *  )    j4(   *  )    j5(     *   )    j6(     *   )   |j7(      )]  | \n");
            printf("                      |-----------------------|--------------------------------------------------------------------------|-------------| \n");
            printf("           i = 2      |[j1(         SPACE)    | j2(  *   )   j3(  *  )    j4( else )    j5(   else  )    j6(     *   )   |j7(      )]  | \n");
            printf("           i = 3      |[j1(              )    | j2(      )   j3(     )    j4(      )    j5(         )    j6(         )   |j7(      )]  | \n");
            printf("                      |-----------------------|--------------------------------------------------------------------------|-------------| \n");
            printf("           i = 4(n)   |[j1(              )    | j2(      )   j3(     )    j4(      )    j5(         )    j6(         )   |j7(      )]  | \n");
            printf("                      |-----------------------|--------------------------------------------------------------------------|-------------| \n");


            printf("\n");
            printf("3.\n");
            printf("\n");
            printf("           FOR Example, n = 4\n");
            printf("                      |[j(1)------------------|--------------------------------------------------------------------------|-------------| \n");
            printf("           i = 1      |[j1(           *  )    | j2(  *   )   j3(  *  )    j4(   *  )    j5(     *   )    j6(     *   )   |j7(      )]  | \n");
            printf("                      |-----------------------|--------------------------------------------------------------------------|-------------| \n");
            printf("           i = 2      |[j1(         SPACE)    | j2(  *   )   j3(  *  )    j4( else )    j5(   else  )    j6(     *   )   |j7(      )]  | \n");
            printf("           i = 3      |[j1(         SPACE)    | j2(SPACE )   j3(  *  )    j4( else )    j5(   else  )    j6(     *   )   |j7(      )]  | \n");
            printf("                      |-----------------------|--------------------------------------------------------------------------|-------------| \n");
            printf("           i = 4(n)   |[j1(              )    | j2(      )   j3(     )    j4(      )    j5(         )    j6(         )   |j7(      )]  | \n");
            printf("                      |-----------------------|--------------------------------------------------------------------------|-------------| \n");


            printf("\n");
            printf("4.\n");
            printf("\n");
            printf("           FOR Example, n = 4\n");
            printf("                      |[j(1)------------------|--------------------------------------------------------------------------|-------------| \n");
            printf("           i = 1      |[j1(           *  )    | j2(  *   )   j3(  *  )    j4(   *  )    j5(     *   )    j6(     *   )   |j7(      )]  | \n");
            printf("                      |-----------------------|--------------------------------------------------------------------------|-------------| \n");
            printf("           i = 2      |[j1(         SPACE)    | j2(  *   )   j3(  *  )    j4( else )    j5(   else  )    j6(     *   )   |j7(      )]  | \n");
            printf("           i = 3      |[j1(         SPACE)    | j2(SPACE )   j3(  *  )    j4( else )    j5(   else  )    j6(     *   )   |j7(      )]  | \n");
            printf("                      |-----------------------|--------------------------------------------------------------------------|-------------| \n");
            printf("           i = 4(n)   |[j1(         SPACE)    | j2(SPACE )   j3(SPACE)    j4(   *  )    j5(     *   )    j6(     *   )   |j7(     *)]  | \n");
            printf("                      |-----------------------|--------------------------------------------------------------------------|-------------| \n");

}

void mirror()
{
           clearScreen();
           printAsciiArt();
          printf("\n\n\n");
           printf("\n");
            printf("\n");
            printf("CODE:\n");
            printf("\n");
            printf("\n");

           printf("for(i=1;i<=n;i++)\n");
              printf("{\n");
                printf("  for(space=1;space<i;space++)\n");
                printf("     {\n");
                printf("       printf(\" \");\n");
                printf("     }\n");
                printf("  for(j=1;j<=n;j++)\n");
                printf("      {\n");
                printf("       printf(\"*\");\n");
                printf("      }\n");
                printf("   printf(\"\\n\");\n");
                printf("}\n");
                printf("\n");

                printf("\n");
                printf("           This is a mirror rectangle.\n");
                printf("           In this pattern, 1st space is printed for space<i\n");
                printf("           And then * is printed for j<=n\n");
                printf("        i = 1, space<i = 1 < 1 = 0 (false)(space)   *     *     *    *\n");
                printf("        i = 2, space<i = 1 < 2 = 1 (true)(space)  space   *     *     *    *\n");
                printf("        i = 2, space<i = 2 < 3 = 2 (true)(space)  space space    *     *     *    *\n");
                printf("        i = 2, space<i = 3 < 4 = 3 (true)(space)  space space  space    *     *     *    *\n");

                printf("\n");
                printf("\n");
                printf("\n");


                printf("1.\n");
                printf("\n");
                printf("           FOR Example, n = 4\n");
                printf("                      |[j(1)------------------|--------------------------------------------------------------------------|-------------| \n");
                printf("           i = 1      |[j1(           *  )    | j2(  *   )   j3(  *  )    j4(   *  )    j5(     *   )    j6(     *   )   |j7(      )]  | \n");
                printf("                      |-----------------------|--------------------------------------------------------------------------|-------------| \n");
                printf("           i = 2      |[j1(              )    | j2(      )   j3(     )    j4(      )    j5(         )    j6(         )   |j7(      )]  | \n");
                printf("           i = 3      |[j1(              )    | j2(      )   j3(     )    j4(      )    j5(         )    j6(         )   |j7(      )]  | \n");
                printf("                      |-----------------------|--------------------------------------------------------------------------|-------------| \n");
                printf("           i = 4(n)   |[j1(              )    | j2(      )   j3(     )    j4(      )    j5(         )    j6(         )   |j7(      )]  | \n");
                printf("                      |-----------------------|--------------------------------------------------------------------------|-------------| \n");


                printf("\n");
                printf("2.\n");
                printf("\n");
                printf("           FOR Example, n = 4\n");
                printf("                      |[j(1)------------------|--------------------------------------------------------------------------|-------------| \n");
                printf("           i = 1      |[j1(           *  )    | j2(  *   )   j3(  *  )    j4(   *  )    j5(     *   )    j6(     *   )   |j7(      )]  | \n");
                printf("                      |-----------------------|--------------------------------------------------------------------------|-------------| \n");
                printf("           i = 2      |[j1(         SPACE)    | j2(  *   )   j3(  *  )    j4(   *  )    j5(     *   )    j6(     *   )   |j7(      )]  | \n");
                printf("           i = 3      |[j1(              )    | j2(      )   j3(     )    j4(      )    j5(         )    j6(         )   |j7(      )]  | \n");
                printf("                      |-----------------------|--------------------------------------------------------------------------|-------------| \n");
                printf("           i = 4(n)   |[j1(              )    | j2(      )   j3(     )    j4(      )    j5(         )    j6(         )   |j7(      )]  | \n");
                printf("                      |-----------------------|--------------------------------------------------------------------------|-------------| \n");


                printf("\n");
                printf("3.\n");
                printf("\n");
                printf("           FOR Example, n = 4\n");
                printf("                      |[j(1)------------------|--------------------------------------------------------------------------|-------------| \n");
                printf("           i = 1      |[j1(           *  )    | j2(  *   )   j3(  *  )    j4(   *  )    j5(     *   )    j6(     *   )   |j7(      )]  | \n");
                printf("                      |-----------------------|--------------------------------------------------------------------------|-------------| \n");
                printf("           i = 2      |[j1(         SPACE)    | j2(  *   )   j3(  *  )    j4(   *  )    j5(     *   )    j6(     *   )   |j7(      )]  | \n");
                printf("           i = 3      |[j1(         SPACE)    | j2(SPACE )   j3(  *  )    j4(   *  )    j5(     *   )    j6(     *   )   |j7(      )]  | \n");
                printf("                      |-----------------------|--------------------------------------------------------------------------|-------------| \n");
                printf("           i = 4(n)   |[j1(              )    | j2(      )   j3(     )    j4(      )    j5(         )    j6(         )   |j7(      )]  | \n");
                printf("                      |-----------------------|--------------------------------------------------------------------------|-------------| \n");


                printf("\n");
                printf("4.\n");
                printf("\n");
                printf("           FOR Example, n = 4\n");
                printf("                      |[j(1)------------------|--------------------------------------------------------------------------|-------------| \n");
                printf("           i = 1      |[j1(           *  )    | j2(  *   )   j3(  *  )    j4(   *  )    j5(     *   )    j6(     *   )   |j7(      )]  | \n");
                printf("                      |-----------------------|--------------------------------------------------------------------------|-------------| \n");
                printf("           i = 2      |[j1(         SPACE)    | j2(  *   )   j3(  *  )    j4(   *  )    j5(     *   )    j6(     *   )   |j7(      )]  | \n");
                printf("           i = 3      |[j1(         SPACE)    | j2(SPACE )   j3(  *  )    j4(   *  )    j5(     *   )    j6(     *   )   |j7(      )]  | \n");
                printf("                      |-----------------------|--------------------------------------------------------------------------|-------------| \n");
                printf("           i = 4(n)   |[j1(         SPACE)    | j2(SPACE )   j3(SPACE)    j4(   *  )    j5(     *   )    j6(     *   )   |j7(     *)]  | \n");
                printf("                      |-----------------------|--------------------------------------------------------------------------|-------------| \n");

}

void rectangle()
{
            clearScreen();
            printAsciiArt();
            printf("\n\n\n");
            printf("\n");
            printf("\n");
            printf("CODE:\n");
            printf("\n");
            printf("\n");

            printf("for(i=1;i<=n;i++)\n");
            printf("{\n");
            printf("    for(j=1;j<=n-i;j++)//space\n");
            printf("    {\n");
            printf("        printf(\"0\");\n");
            printf("    }\n");
            printf("    for(j=1;j<=n;j++)\n");
            printf("    {\n");
            printf("        printf(\"*\");\n");
            printf("    }\n");
            printf("    printf(\"\\n\");\n");
            printf("}\n");
            printf("\n");
            printf("           This is a rectangle.\n");
            printf("           In this pattern, 1st space is printed for j<=n-i\n");
            printf("           And then * is printed for j<=n\n");
            printf("        i = 1, space = n - i = 4 - 1 = 3(space)    space space space  *     *     *    *\n");
            printf("        i = 2, space = n - i = 4 - 2 = 2(space)    space space   *      *     *    *\n");
            printf("        i = 3, space = n - i = 4 - 3 = 1(space)    space   *       *      *     *\n");
            printf("        i = 4, space = n - i = 4 - 4 = 0(space)      *       *       *      *\n");

            printf("\n");
            printf("\n");
            printf("\n");
            printf("1.\n");
            printf("\n");
            printf("           FOR Example, n = 4\n");
            printf("                      |-----j(1)-----|--------------------------------------------------------------------------------------|----j(n)-----| \n");
            printf("           i = 1      |[j1(  SPACE  )| j2(  SPACE  ) j3(SPACE)  j4(     *   )   j5(     *   )   j6(     *   )    |j7(     *   )]          | \n");
            printf("                      |--------------|--------------------------------------------------------------------------------------|-------------| \n");
            printf("           i = 2      |[j1(         )| j2(         )       j3(         )  j4(         )   j5(         )   j6(         )     |j7(      )]  | \n");
            printf("           i = 3      |[j1(         )| j2(         )       j3(         )  j4(         )   j5(         )   j6(         )     |j7(      )]  | \n");
            printf("                      |--------------|--------------------------------------------------------------------------------------|-------------| \n");
            printf("           i = 4(n)   |[j1(         )| j2(         )       j3(         )  j4(         )   j5(         )   j6(         )     |j7(      )]  | \n");
            printf("                      |--------------|--------------------------------------------------------------------------------------|-------------| \n");


            printf("\n");
            printf("2.\n");
            printf("\n");
            printf("           FOR Example, n = 4\n");
            printf("                      |-----j(1)-----|--------------------------------------------------------------------------------------|----j(n)-----| \n");
            printf("           i = 1      |[j1(  SPACE  )| j2(  SPACE  ) j3(SPACE)  j4(     *   )   j5(     *   )   j6(     *   )    |j7(     *   )]          | \n");
            printf("                      |--------------|--------------------------------------------------------------------------------------|-------------| \n");
            printf("           i = 2      |[j1(  SPACE  )| j2(  SPACE  )       j3(     *   )  j4(     *   )   j5(     *   )   j6(     *   )     |j7(      )]  | \n");
            printf("           i = 3      |[j1(         )| j2(         )       j3(         )  j4(         )   j5(         )   j6(         )     |j7(      )]  | \n");
            printf("                      |--------------|--------------------------------------------------------------------------------------|-------------| \n");
            printf("           i = 4(n)   |[j1(         )| j2(         )       j3(         )  j4(         )   j5(         )   j6(         )     |j7(      )]  | \n");
            printf("                      |--------------|--------------------------------------------------------------------------------------|-------------| \n");


            printf("\n");
            printf("3.\n");
            printf("\n");
            printf("           FOR Example, n = 4\n");
            printf("                      |-----j(1)-----|--------------------------------------------------------------------------------------|----j(n)-----| \n");
            printf("           i = 1      |[j1(  SPACE  )| j2(  SPACE  ) j3(SPACE)  j4(     *   )   j5(     *   )   j6(     *   )    |j7(     *   )]          | \n");
            printf("                      |--------------|--------------------------------------------------------------------------------------|-------------| \n");
            printf("           i = 2      |[j1(  SPACE  )| j2(  SPACE  )       j3(     *   )  j4(     *   )   j5(     *   )   j6(      *   )    |j7(      )]  | \n");
            printf("           i = 3      |[j1(  SPACE  )|                j2(       *   )  j3(     *   )  j4(     *   )  j5(       *   )  j6( ) |j7(      )]  | \n");
            printf("                      |--------------|--------------------------------------------------------------------------------------|-------------| \n");
            printf("           i = 4(n)   |[j1(         )| j2(         )       j3(         )  j4(         )   j5(         )   j6(         )     |j7(      )]  | \n");
            printf("                      |--------------|--------------------------------------------------------------------------------------|-------------| \n");

            printf("\n");
            printf("4.\n");
            printf("\n");
            printf("           FOR Example, n = 4\n");
            printf("                      |-----j(1)-----|--------------------------------------------------------------------------------------|----j(n)-----| \n");
            printf("           i = 1      |[j1(  SPACE  )| j2(  SPACE  ) j3(SPACE)  j4(     *   )   j5(     *   )   j6(     *   )    |j7(     *   )]          | \n");
            printf("                      |--------------|--------------------------------------------------------------------------------------|-------------| \n");
            printf("           i = 2      |[j1(  SPACE  )| j2(  SPACE  )       j3(     *   )  j4(     *   )   j5(     *   )   j6(      *   )    |j7(      )]  | \n");
            printf("           i = 3      |[j1(  SPACE  )|                j2(       *   )  j3(     *   )  j4(     *   )  j5(       *   )  j6( ) |j7(      )]  | \n");
            printf("                      |--------------|--------------------------------------------------------------------------------------|-------------| \n");
            printf("           i = 4(n)   |[                      j1(     *   )| j2(     *   )       j3(     *   )  j4(     *   ) j5()    j6()  |j7(      )]  | \n");
            printf("                      |--------------|--------------------------------------------------------------------------------------|-------------| \n");
}

void diamonds()
{
    clearScreen();
    printAsciiArt();
    printf("\n\n\n");


    printf("           Pyramids:\n");
    printf("\n");
    printf("           This is a pyramids.\n");
    printf("           In this pattern, 1st space is printed for space<=n-i\n");
    printf("           And then * is printed for j<=2*i-1\n");
    printf("\n");
    printf("           Each column starts with n-i+1 because space printed for n-i and then for +1 that's where the column starts printing stars.\n");
    printf("\n");

    printf("     i = 1, space<=n-i <= 5-1=4       (space) j(column) = 5 - 1 + 1 = 5(column), j(stars) = 2 x 1 - 1 = 1(stars) SPACE  SPACE  SPACE  SPACE  *                  \n");
    printf("     i = 2, space<=n-i <= 5-2=3       (space) j(column) = 5 - 2 + 1 = 4(column), j(stars) = 2 x 2 - 1 = 3(stars) SPACE  SPACE  SPACE     *   *   *              \n");
    printf("     i = 3, space<=n-i <= 5-3=2       (space) j(column) = 5 - 3 + 1 = 3(column), j(stars) = 2 x 3 - 1 = 5(stars) SPACE  SPACE        *   *   *   *   *          \n");
    printf("     i = 4, space<=n-i <= 5-4=1       (space) j(column) = 5 - 4 + 1 = 2(column), j(stars) = 2 x 4 - 1 = 7(stars) SPACE           *   *   *   *   *   *   *      \n");
    printf("     i = 5, space<=n-i <= 5-4=0       (space) j(column) = 5 - 5 + 1 = 1(column), j(stars) = 2 x 5 - 1 = 9(stars)             *   *   *   *   *   *   *   *   *  \n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("CODE:\n");
    printf("\n");
    printf("\n");

    printf("for (i = 1; i <= n; i++)\n");
    printf("{\n");
    printf("    // Print spaces\n");
    printf("    for (space = 1; space <= n - i; space++)\n");
    printf("    {\n");
    printf("        printf(\" \");\n");
    printf("    }\n");
    printf("    // Print stars\n");
    printf("    for (j = 1; j <= 2*i-1; j++)\n");
    printf("    {\n");
    printf("        printf(\"*\");\n");
    printf("    }\n");
    printf("    printf(\"\\n\");\n");
    printf("}\n");
    printf("\n");
    printf("\n");

    printf("           Reverse pyramids:\n");
    printf("\n");

    printf("           This is a reverse pyramids.\n");
    printf("           For row starts from n to 1 and i >= 1 \n");
    printf("           In this pattern, 1st *(stars) is printed for j<=2*i-1 \n");
    printf("           And then space for space <= n - i\n");

    printf("\n");
    printf("\n");

    printf("     i = 5, space<=n-i <= 5-5=0       (space) j(stars) = 2 x 5 - 1 = 9(stars)                 *   *   *   *   *   *   *   *   *  \n");
    printf("     i = 4, space<=n-i <= 5-4=1       (space) j(stars) = 2 x 4 - 1 = 7(stars) SPACE               *   *   *   *   *   *   *      \n");
    printf("     i = 3, space<=n-i <= 5-3=2       (space) j(stars) = 2 x 3 - 1 = 5(stars) SPACE  SPACE            *   *   *   *   *          \n");
    printf("     i = 2, space<=n-i <= 5-2=3       (space) j(stars) = 2 x 2 - 1 = 3(stars) SPACE  SPACE  SPACE         *   *   *              \n");
    printf("     i = 1, space<=n-i <= 5-1=4       (space) j(stars) = 2 x 1 - 1 = 1(stars) SPACE  SPACE  SPACE  SPACE      *                  \n");

    printf("\n");
    printf("\n");
    printf("CODE:\n");
    printf("\n");
    printf("\n");


    printf("for (i = n; i >= 1; i--)");
    printf("{\n");
    printf("    // Print spaces\n");
    printf("    for (space = 1; space <= n - i; space++)\n");
    printf("    {\n");
    printf("        printf(\" \");\n");
    printf("    }\n");
    printf("    // Print stars\n");
    printf("    for (j = 1; j <= 2 * i - 1; j++)\n");
    printf("    {\n");
    printf("        printf(\"*\");\n");
    printf("    }\n");
    printf("    printf(\"\\n\");\n");
    printf("}\n");

    printf("\n");
    printf("\n");

    printf("\n");
    printf("1.\n");
    printf("\n");
    printf("           FOR Example, n = 5\n");
    printf("                      |-j(1)-----|----------------------------------------------------------------------------|-j=(2*n-1)-| \n");
    printf("           i = 1      |[j1(SPACE)| j2(SPACE) j3(SPACE)  j4(SPACE)  j5(  *  )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("           i = 2      |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("           i = 3      |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("           i = 4      |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("           i = 5(n)   |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("\n");
    printf("2.\n");
    printf("\n");

    printf("           FOR Example, n = 5\n");
    printf("                      |-j(1)-----|----------------------------------------------------------------------------|-j=(2*n-1)-| \n");
    printf("           i = 1      |[j1(SPACE)| j2(SPACE) j3(SPACE)  j4(SPACE)  j5(  *  )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("           i = 2      |[j1(SPACE)| j2(SPACE) j3(SPACE)  j4(  *  )  j5(  *  )  j6(  *  )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("           i = 3      |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("           i = 4      |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("           i = 5(n)   |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("\n");
    printf("3.\n");
    printf("\n");

    printf("           FOR Example, n = 5\n");
    printf("                      |-j(1)-----|----------------------------------------------------------------------------|-j=(2*n-1)-| \n");
    printf("           i = 1      |[j1(SPACE)| j2(SPACE) j3(SPACE)  j4(SPACE)  j5(  *  )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("           i = 2      |[j1(SPACE)| j2(SPACE) j3(SPACE)  j4(  *  )  j5(  *  )  j6(  *  )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("           i = 3      |[j1(SPACE)| j2(SPACE) j3(  *  )  j4(  *  )  j5(  *  )  j6(  *  )  j7(  *  )  j8(     ) | j9(     )]| \n");
    printf("           i = 4      |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("           i = 5(n)   |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");

    printf("\n");
    printf("4.\n");
    printf("\n");

    printf("           FOR Example, n = 5\n");
    printf("                      |-j(1)-----|----------------------------------------------------------------------------|-j=(2*n-1)-| \n");
    printf("           i = 1      |[j1(SPACE)| j2(SPACE) j3(SPACE)  j4(SPACE)  j5(  *  )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("           i = 2      |[j1(SPACE)| j2(SPACE) j3(SPACE)  j4(  *  )  j5(  *  )  j6(  *  )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("           i = 3      |[j1(SPACE)| j2(SPACE) j3(  *  )  j4(  *  )  j5(  *  )  j6(  *  )  j7(  *  )  j8(     ) | j9(     )]| \n");
    printf("           i = 4      |[j1(SPACE)| j2(  *  ) j3(  *  )  j4(  *  )  j5(  *  )  j6(  *  )  j7(  *  )  j8(  *  ) | j9(     )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("           i = 5(n)   |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");

    printf("\n");
    printf("5.\n");
    printf("\n");

    printf("           FOR Example, n = 5\n");
    printf("                      |-j(1)-----|----------------------------------------------------------------------------|-j=(2*n-1)-| \n");
    printf("           i = 1      |[j1(SPACE)| j2(SPACE) j3(SPACE)  j4(SPACE)  j5(  *  )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("           i = 2      |[j1(SPACE)| j2(SPACE) j3(SPACE)  j4(  *  )  j5(  *  )  j6(  *  )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("           i = 3      |[j1(SPACE)| j2(SPACE) j3(  *  )  j4(  *  )  j5(  *  )  j6(  *  )  j7(  *  )  j8(     ) | j9(     )]| \n");
    printf("           i = 4      |[j1(SPACE)| j2(  *  ) j3(  *  )  j4(  *  )  j5(  *  )  j6(  *  )  j7(  *  )  j8(  *  ) | j9(     )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("           i = 5(n)   |[j1(  *  )| j2(  *  ) j3(  *  )  j4(  *  )  j5(  *  )  j6(  *  )  j7(  *  )  j8(  *  ) | j9(  *  )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");

    printf("\n");
    printf("\n");

    printf("\n");
    printf("6.\n");
    printf("\n");
    printf("           FOR Example, n = 5\n");
    printf("                      |-j(1)-----|----------------------------------------------------------------------------|-j=(2*n-1)-| \n");
    printf("           i = 1      |[j1(  *  )| j2(  *  ) j3(  *  )  j4(  *  )  j5(  *  )  j6(  *  )  j7(  *  )  j8(  *  ) | j9(  *  )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("           i = 2      |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("           i = 3      |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("           i = 4      |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("           i = 5(n)   |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");


    printf("\n");
    printf("7.\n");
    printf("\n");

    printf("           FOR Example, n = 5\n");
    printf("                      |-j(1)-----|----------------------------------------------------------------------------|-j=(2*n-1)-| \n");
    printf("           i = 1      |[j1(  *  )| j2(  *  ) j3(  *  )  j4(  *  )  j5(  *  )  j6(  *  )  j7(  *  )  j8(  *  ) | j9(  *  )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("           i = 2      |[j1(SPACE)| j2(  *  ) j3(  *  )  j4(  *  )  j5(  *  )  j6(  *  )  j7(  *  )  j8(  *  ) | j9(     )]| \n");
    printf("           i = 3      |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("           i = 4      |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("           i = 5(n)   |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");


    printf("\n");
    printf("8.\n");
    printf("\n");

    printf("           FOR Example, n = 5\n");
    printf("                      |-j(1)-----|----------------------------------------------------------------------------|-j=(2*n-1)-| \n");
    printf("           i = 1      |[j1(  *  )| j2(  *  ) j3(  *  )  j4(  *  )  j5(  *  )  j6(  *  )  j7(  *  )  j8(  *  ) | j9(  *  )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("           i = 2      |[j1(SPACE)| j2(  *  ) j3(  *  )  j4(  *  )  j5(  *  )  j6(  *  )  j7(  *  )  j8(  *  ) | j9(     )]| \n");
    printf("           i = 3      |[j1(SPACE)| j2(SPACE) j3(  *  )  j4(  *  )  j5(  *  )  j6(  *  )  j7(  *  )  j8(     ) | j9(     )]| \n");
    printf("           i = 4      |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("           i = 5(n)   |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");

    printf("\n");
    printf("9.\n");
    printf("\n");

    printf("           FOR Example, n = 5\n");
    printf("                      |-j(1)-----|----------------------------------------------------------------------------|-j=(2*n-1)-| \n");
    printf("           i = 1      |[j1(  *  )| j2(  *  ) j3(  *  )  j4(  *  )  j5(  *  )  j6(  *  )  j7(  *  )  j8(  *  ) | j9(  *  )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("           i = 2      |[j1(SPACE)| j2(  *  ) j3(  *  )  j4(  *  )  j5(  *  )  j6(  *  )  j7(  *  )  j8(  *  ) | j9(     )]| \n");
    printf("           i = 3      |[j1(SPACE)| j2(SPACE) j3(  *  )  j4(  *  )  j5(  *  )  j6(  *  )  j7(  *  )  j8(     ) | j9(     )]| \n");
    printf("           i = 4      |[j1(SPACE)| j2(SPACE) j3(SPACE)  j4(  *  )  j5(  *  )  j6(  *  )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("           i = 5(n)   |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");

    printf("\n");
    printf("10.\n");
    printf("\n");

    printf("           FOR Example, n = 5\n");
    printf("                      |-j(1)-----|----------------------------------------------------------------------------|-j=(2*n-1)-| \n");
    printf("           i = 1      |[j1(  *  )| j2(  *  ) j3(  *  )  j4(  *  )  j5(  *  )  j6(  *  )  j7(  *  )  j8(  *  ) | j9(  *  )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("           i = 2      |[j1(SPACE)| j2(  *  ) j3(  *  )  j4(  *  )  j5(  *  )  j6(  *  )  j7(  *  )  j8(  *  ) | j9(     )]| \n");
    printf("           i = 3      |[j1(SPACE)| j2(SPACE) j3(  *  )  j4(  *  )  j5(  *  )  j6(  *  )  j7(  *  )  j8(     ) | j9(     )]| \n");
    printf("           i = 4      |[j1(SPACE)| j2(SPACE) j3(SPACE)  j4(  *  )  j5(  *  )  j6(  *  )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("           i = 5(n)   |[j1(SPACE)| j2(SPACE) j3(SPACE)  j4(SPACE)  j5(  *  )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");


}

void hollowdia()
{
    clearScreen();
    printAsciiArt();
    printf("\n\n\n");
    printf("           This is a hollow pyramids.\n");
    printf("           In this pattern, 1st space is printed for space<=n-i\n");
    printf("           And then * is printed for j<=2*i-1\n");
    printf("\n");
    printf("           Each column starts with n-i+1 because space printed for n-i and then for +1 that's where the column starts printing stars.\n");
    printf("\n");
    printf("           If the condition for j is 1 or j is 2*i-1 or i is not met then it will be hollow space inside pyramids\n");
    printf("\n");

    printf("     i = 1, space<=n-i <= 5-1=4 (space) j(column) = 5 - 1 + 1 = 5(column), j(stars) = 2 x 1 - 1 = 1(stars) SPACE  SPACE  SPACE  SPACE  *                \n");
    printf("     i = 2, space<=n-i <= 5-2=3 (space) j(column) = 5 - 2 + 1 = 4(column), j(stars) = 2 x 2 - 1 = 3(stars) SPACE  SPACE  SPACE     *       *            \n");
    printf("     i = 3, space<=n-i <= 5-3=2 (space) j(column) = 5 - 3 + 1 = 3(column), j(stars) = 2 x 3 - 1 = 5(stars) SPACE  SPACE        *               *        \n");
    printf("     i = 4, space<=n-i <= 5-4=1 (space) j(column) = 5 - 4 + 1 = 2(column), j(stars) = 2 x 4 - 1 = 7(stars) SPACE           *                       *    \n");
    printf("     i = 5, space<=n-i <= 5-5=0 (space) j(column) = 5 - 5 + 1 = 1(column), j(stars) = 2 x 5 - 1 = 9(stars)             *                              * \n");

    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("CODE:\n");
    printf("\n");
    printf("\n");

    printf("for (i = 1; i <= n; i++)");
    printf(" {\n");
    printf("     // Print spaces\n");
    printf("     for (space = 1; space <= n - i; space++) {\n");
    printf("         printf(\" \");\n");
    printf("                }\n");
    printf("     // Print stars and spaces in between\n");
    printf("     for (j = 1; j <= 2 * i - 1; j++) {\n");
    printf("         if (j == 1 || j == 2 * i - 1 )\n");
    printf("             printf(\"*\");\n");
    printf("         else\n");
    printf("             printf(\" \");\n");
    printf("     }\n");
    printf("     printf(\"\\n\");\n");
    printf(" }\n");
    printf("\n");

    printf("\n");
    printf("\n");
    printf("           This is a reverse hollow pyramids.\n");
    printf("           For row starts from n to 1 and i >= 1 \n");
    printf("           In this pattern, 1st *(stars) is printed for j<=2*i-1 \n");
    printf("           And then space for space <= n - i\n");
    printf("\n");
    printf("           Finally hollow space will be printed if the condition is not met j==1, j==2*i-1,i==n\n");
    printf("\n");
    printf("     i = 5, space<=n-i = 1 <= 5-5=0 (space) j(stars) = 2 x 5 - 1 = 9(stars)                 *                               *  \n");
    printf("     i = 4, space<=n-i = 1 <= 5-4=1 (space) j(stars) = 2 x 4 - 1 = 7(stars) SPACE               *                       *      \n");
    printf("     i = 3, space<=n-i = 1 <= 5-3=2 (space) j(stars) = 2 x 3 - 1 = 5(stars) SPACE  SPACE            *               *          \n");
    printf("     i = 2, space<=n-i = 1 <= 5-2=3 (space) j(stars) = 2 x 2 - 1 = 3(stars) SPACE  SPACE  SPACE         *       *              \n");
    printf("     i = 1, space<=n-i = 1 <= 5-1=4 (space) j(stars) = 2 x 1 - 1 = 1(stars) SPACE  SPACE  SPACE  SPACE      *                  \n");


    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("CODE:\n");
    printf("\n");
    printf("\n");

    printf("for (i = n; i >= 1; i--)");
    printf("{\n");
    printf("    // Print spaces\n");
    printf("    for (space = 1; space <= n - i; space++)\n");
    printf("    {\n");
    printf("        printf(\" \");\n");
    printf("    }\n");
    printf("    // Print stars\n");
    printf("    for (j = 1; j <= 2 * i - 1; j++)\n");
    printf("    {\n");
    printf("        if (j == 1 || j == 2 * i - 1)\n");
    printf("            printf(\"*\");\n");
    printf("        else\n");
    printf("            printf(\" \");\n");
    printf("    }\n");
    printf("    printf(\"\\n\");\n");
    printf("}\n");
    printf("\n");
    printf("\n");
    printf("1.\n");
    printf("\n");
    printf("           FOR Example, n = 5\n");
    printf("                      |-j(1)-----|----------------------------------------------------------------------------|-j=(2*n-1)-| \n");
    printf("           i = 1      |[j1(SPACE)| j2(SPACE) j3(SPACE)  j4(SPACE)  j5(  *  )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("           i = 2      |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("           i = 3      |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("           i = 4      |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("           i = 5(n)   |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("\n");
    printf("2.\n");
    printf("\n");

    printf("           FOR Example, n = 5\n");
    printf("                      |-j(1)-----|----------------------------------------------------------------------------|-j=(2*n-1)-| \n");
    printf("           i = 1      |[j1(SPACE)| j2(SPACE) j3(SPACE)  j4(SPACE)  j5(  *  )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("           i = 2      |[j1(SPACE)| j2(SPACE) j3(SPACE)  j4(  *  )  j5(else )  j6(  *  )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("           i = 3      |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("           i = 4      |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("           i = 5(n)   |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("\n");
    printf("3.\n");
    printf("\n");

    printf("           FOR Example, n = 5\n");
    printf("                      |-j(1)-----|----------------------------------------------------------------------------|-j=(2*n-1)-| \n");
    printf("           i = 1      |[j1(SPACE)| j2(SPACE) j3(SPACE)  j4(SPACE)  j5(  *  )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("           i = 2      |[j1(SPACE)| j2(SPACE) j3(SPACE)  j4(  *  )  j5(else )  j6(  *  )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("           i = 3      |[j1(SPACE)| j2(SPACE) j3(  *  )  j4(else )  j5(else )  j6(else )  j7(  *  )  j8(     ) | j9(     )]| \n");
    printf("           i = 4      |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("           i = 5(n)   |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");

    printf("\n");
    printf("4.\n");
    printf("\n");

    printf("           FOR Example, n = 5\n");
    printf("                      |-j(1)-----|----------------------------------------------------------------------------|-j=(2*n-1)-| \n");
    printf("           i = 1      |[j1(SPACE)| j2(SPACE) j3(SPACE)  j4(SPACE)  j5(  *  )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("           i = 2      |[j1(SPACE)| j2(SPACE) j3(SPACE)  j4(  *  )  j5(else )  j6(  *  )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("           i = 3      |[j1(SPACE)| j2(SPACE) j3(  *  )  j4(else )  j5(else )  j6(else )  j7(  *  )  j8(     ) | j9(     )]| \n");
    printf("           i = 4      |[j1(SPACE)| j2(  *  ) j3(else )  j4(else )  j5(else )  j6(else )  j7(else )  j8(  *  ) | j9(     )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("           i = 5(n)   |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");

    printf("\n");
    printf("5.\n");
    printf("\n");

    printf("           FOR Example, n = 5\n");
    printf("                      |-j(1)-----|----------------------------------------------------------------------------|-j=(2*n-1)-| \n");
    printf("           i = 1      |[j1(SPACE)| j2(SPACE) j3(SPACE)  j4(SPACE)  j5(  *  )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("           i = 2      |[j1(SPACE)| j2(SPACE) j3(SPACE)  j4(  *  )  j5(else )  j6(  *  )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("           i = 3      |[j1(SPACE)| j2(SPACE) j3(  *  )  j4(else )  j5(else )  j6(else )  j7(  *  )  j8(     ) | j9(     )]| \n");
    printf("           i = 4      |[j1(SPACE)| j2(  *  ) j3(  *  )  j4(else )  j5(else )  j6(else )  j7(else )  j8(  *  ) | j9(     )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("           i = 5(n)   |[j1(  *  )| j2(else ) j3(else )  j4(else )  j5(else )  j6(else )  j7(else )  j8(else ) | j9(  *  )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");

    printf("                                                                  GAP FOR UNDERSTANDING\n");

    printf("\n");
    printf("6.\n");
    printf("\n");
    printf("           FOR Example, n = 5\n");
    printf("                      |-j(1)-----|----------------------------------------------------------------------------|-j=(2*n-1)-| \n");
    printf("           i = 1      |[j1(  *  )| j2(else ) j3(else )  j4(else )  j5(else )  j6(else )  j7(else )  j8(else ) | j9(  *  )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("           i = 2      |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("           i = 3      |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("           i = 4      |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("           i = 5(n)   |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");


    printf("\n");
    printf("7.\n");
    printf("\n");

    printf("           FOR Example, n = 5\n");
    printf("                      |-j(1)-----|----------------------------------------------------------------------------|-j=(2*n-1)-| \n");
    printf("           i = 1      |[j1(  *  )| j2(else ) j3(else )  j4(else )  j5(else )  j6(else )  j7(else )  j8(else ) | j9(  *  )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("           i = 2      |[j1(SPACE)| j2(  *  ) j3( else)  j4( else)  j5( else)  j6( else)  j7( else)  j8(  *  ) | j9(     )]| \n");
    printf("           i = 3      |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("           i = 4      |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("           i = 5(n)   |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");


    printf("\n");
    printf("8.\n");
    printf("\n");

    printf("           FOR Example, n = 5\n");
    printf("                      |-j(1)-----|----------------------------------------------------------------------------|-j=(2*n-1)-| \n");
    printf("           i = 1      |[j1(  *  )| j2(else ) j3(else )  j4(else )  j5(else )  j6(else )  j7(else )  j8(else ) | j9(  *  )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("           i = 2      |[j1(SPACE)| j2(  *  ) j3( else)  j4( else)  j5( else)  j6( else)  j7( else)  j8(  *  ) | j9(     )]| \n");
    printf("           i = 3      |[j1(SPACE)| j2(SPACE) j3(  *  )  j4( else)  j5( else)  j6( else)  j7(  *  )  j8(     ) | j9(     )]| \n");
    printf("           i = 4      |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("           i = 5(n)   |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");

    printf("\n");
    printf("9.\n");
    printf("\n");

    printf("           FOR Example, n = 5\n");
    printf("                      |-j(1)-----|----------------------------------------------------------------------------|-j=(2*n-1)-| \n");
    printf("           i = 1      |[j1(  *  )| j2(else ) j3(else )  j4(else )  j5(else )  j6(else )  j7(else )  j8(else ) | j9(  *  )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("           i = 2      |[j1(SPACE)| j2(  *  ) j3( else)  j4( else)  j5( else)  j6( else)  j7( else)  j8(  *  ) | j9(     )]| \n");
    printf("           i = 3      |[j1(SPACE)| j2(SPACE) j3(  *  )  j4( else)  j5( else)  j6( else)  j7(  *  )  j8(     ) | j9(     )]| \n");
    printf("           i = 4      |[j1(SPACE)| j2(SPACE) j3(SPACE)  j4(  *  )  j5( else)  j6(  *  )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("           i = 5(n)   |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");

    printf("\n");
    printf("10.\n");
    printf("\n");

    printf("           FOR Example, n = 5\n");
    printf("                      |-j(1)-----|----------------------------------------------------------------------------|-j=(2*n-1)-| \n");
    printf("           i = 1      |[j1(  *  )| j2(else ) j3(else )  j4(else )  j5(else )  j6(else )  j7(else )  j8(else ) | j9(  *  )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("           i = 2      |[j1(SPACE)| j2(  *  ) j3( else)  j4( else)  j5( else)  j6( else)  j7( else)  j8(  *  ) | j9(     )]| \n");
    printf("           i = 3      |[j1(SPACE)| j2(SPACE) j3(  *  )  j4( else)  j5( else)  j6( else)  j7(  *  )  j8(     ) | j9(     )]| \n");
    printf("           i = 4      |[j1(SPACE)| j2(SPACE) j3(SPACE)  j4(  *  )  j5( else)  j6(  *  )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("           i = 5(n)   |[j1(SPACE)| j2(SPACE) j3(SPACE)  j4(SPACE)  j5(  *  )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");

}

void boxinsidedia()
{
    clearScreen();
    printAsciiArt();
    printf("\n\n\n");
    printf("           This is an upper half of the pattern.\n");
    printf("           In this pattern,Outer loop is i=1,i<=n,i++\n");
    printf("           Furthermore,Inner loop is j=i,j<=n,j++\n");
    printf("           (*stars) will be printed for j<=n\n");
    printf("           For Middle space loop is space=1,space<=(2*i-2),space++\n");
    printf("           space will printed space<=(2*i-2) there it  will increase as i increases\n");
    printf("           Finally, 2nd Inner loop is j=i,j<=n,j++\n");
    printf("\n");
    printf("\n");
    printf("           using @ as space\n");
    printf("           i = 1, space<=2*i-2 <= 2*1-2   = 0 (space) *   *   *   *   *   *   *   *   *   *\n");
    printf("           i = 2, space<=2*i-2 <= 2*2-2   = 2 (space) *   *   *   *   @   @   *   *   *   *\n");
    printf("           i = 3, space<=2*i-2 <= 2*3-2   = 4 (space) *   *   *   @   @   @   @   *   *   *\n");
    printf("           i = 4, space<=2*i-2 <= 2*4-2   = 6 (space) *   *   @   @   @   @   @   @   *   *\n");
    printf("           i = 5, space<=2*i-2 <= 2*5-2   = 8 (space) *   @   @   @   @   @   @   @   @   *\n");
    printf("\n");
    printf("\n");

    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("CODE:\n");
    printf("\n");



    printf("for(i=1; i<=n; i++)");
    printf("{\n");
    printf("    for(j=i; j<=n; j++)\n");
    printf("    {\n");
    printf("        printf(\"*\");\n");
    printf("    }\n");
    printf("    for(space=1; space<=(2*i-2); space++)\n");
    printf("    {\n");
    printf("        printf(\" \");\n");
    printf("    }\n");
    printf("    for(j=i; j<=n; j++)\n");
    printf("    {\n");
    printf("        printf(\"*\");\n");
    printf("    }\n");
    printf("    printf(\"\\n\");\n");
    printf("}\n");
    printf("\n");
    printf("\n");

    printf("           This is a GAP \n           for understanding.\n");
    printf("\n");
    printf("\n");

    printf("           This is a lower half of the pattern.\n");
    printf("           In this pattern,Outer loop is i=1,i<=n,i++\n");
    printf("           Furthermore,Inner loop is j=i,j<=n,j++\n");
    printf("           (*stars) will be printed for j<=n\n");
    printf("           For Middle space loop is space=2*i-2,space<(2*i-2),space++\n");
    printf("           space will printed space<=(2*i-2) there it  will decreases as i increases\n");
    printf("           Finally, 2nd Inner loop is j=i,j<=n,j++\n");
    printf("           Similar to the 1st loop, the number of stars increases as i increases calculated as (2n-2 - 2*i-2)\n");
    printf("\n");
    printf("\n");
    printf("           using @ as space\n");
    printf("           i = 1, (2*n-2 - 2*i-2)= 2*5-2 - 2*1-2 = 8 (space) *   @   @   @   @   @   @   @   @   *\n");
    printf("           i = 2, (2*n-2 - 2*i-2)= 2*5-2 - 2*2-2 = 6 (space) *   *   @   @   @   @   @   @   *   *\n");
    printf("           i = 3, (2*n-2 - 2*i-2)= 2*5-2 - 2*3-2 = 4 (space) *   *   *   @   @   @   @   *   *   *\n");
    printf("           i = 4, (2*n-2 - 2*i-2)= 2*5-2 - 2*4-2 = 2 (space) *   *   *   *   @   @   *   *   *   *\n");
    printf("           i = 5, (2*n-2 - 2*i-2)= 2*5-2 - 2*5-2 = 0 (space) *   *   *   *   *   *   *   *   *   *\n");

    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("CODE:\n");
    printf("\n");

    printf("for(i=1; i<=n; i++)");
    printf("{\n");
    printf("    for(j=1; j<=i; j++)\n");
    printf("    {\n");
    printf("        printf(\"*\");\n");
    printf("    }\n");
    printf("    for(space=(2*i-2); space<(2*n-2); space++)\n");
    printf("    {\n");
    printf("        printf(\" \");\n");
    printf("    }\n");
    printf("    for(j=1; j<=i; j++)\n");
    printf("    {\n");
    printf("        printf(\"*\");\n");
    printf("    }\n");
    printf("    printf(\"\\n\");\n");
    printf("}\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("1.\n");
    printf("\n");
    printf("           FOR Example, n = 5\n");
    printf("                      |[j(1)------------------|-----------------------------------------------------------------------------------------------------------------------------|-------------| \n");
    printf("           i = 1      |[j1(           *  )    | j2(   *  )   j3(  *  )    j4(   *  )    j5(     *   )    j6(     *   )    j7(     *   )    j8(     *   )    j9(     *   )   |j10(   *  )] | \n");
    printf("                      |-----------------------|-----------------------------------------------------------------------------------------------------------------------------|-------------| \n");
    printf("           i = 2      |[j1(              )    | j2(      )   j3(     )    j4(      )    j5(         )    j6(         )    j7(         )    j8(         )    j9(         )   |j10(      )] | \n");
    printf("           i = 3      |[j1(              )    | j2(      )   j3(     )    j4(      )    j5(         )    j6(         )    j7(         )    j8(         )    j9(         )   |j10(      )] | \n");
    printf("           i = 4      |[j1(              )    | j2(      )   j3(     )    j4(      )    j5(         )    j6(         )    j7(         )    j8(         )    j9(         )   |j10(      )] | \n");
    printf("                      |-----------------------|-----------------------------------------------------------------------------------------------------------------------------|-------------| \n");
    printf("           i = 5(n)   |[j1(              )    | j2(      )   j3(     )    j4(      )    j5(         )    j6(         )    j7(         )    j8(         )    j9(         )   |j10(      )] | \n");
    printf("                      |-----------------------|-----------------------------------------------------------------------------------------------------------------------------|-------------| \n");


    printf("\n");
    printf("\n");
    printf("2.\n");
    printf("\n");
    printf("           FOR Example, n = 5\n");
    printf("                      |[j(1)------------------|-----------------------------------------------------------------------------------------------------------------------------|-------------| \n");
    printf("           i = 1      |[j1(           *  )    | j2(   *  )   j3(  *  )    j4(   *  )    j5(     *   )    j6(     *   )    j7(     *   )    j8(     *   )    j9(     *   )   |j10(   *  )] | \n");
    printf("                      |-----------------------|-----------------------------------------------------------------------------------------------------------------------------|-------------| \n");
    printf("           i = 2      |[j1(           *  )    | j2(   *  )   j3(  *  )    j4(   *  )    j5(     @   )    j6(     @   )    j7(     *   )    j8(     *   )    j9(     *   )   |j10(   *  )] | \n");
    printf("           i = 3      |[j1(              )    | j2(      )   j3(     )    j4(      )    j5(         )    j6(         )    j7(         )    j8(         )    j9(         )   |j10(      )] | \n");
    printf("           i = 4      |[j1(              )    | j2(      )   j3(     )    j4(      )    j5(         )    j6(         )    j7(         )    j8(         )    j9(         )   |j10(      )] | \n");
    printf("                      |-----------------------|-----------------------------------------------------------------------------------------------------------------------------|-------------| \n");
    printf("           i = 5(n)   |[j1(              )    | j2(      )   j3(     )    j4(      )    j5(         )    j6(         )    j7(         )    j8(         )    j9(         )   |j10(      )] | \n");
    printf("                      |-----------------------|-----------------------------------------------------------------------------------------------------------------------------|-------------| \n");

    printf("\n");
    printf("\n");
    printf("3.\n");
    printf("\n");
    printf("           FOR Example, n = 5\n");
    printf("                      |[j(1)------------------|-----------------------------------------------------------------------------------------------------------------------------|-------------| \n");
    printf("           i = 1      |[j1(           *  )    | j2(   *  )   j3(  *  )    j4(   *  )    j5(     *   )    j6(     *   )    j7(     *   )    j8(     *   )    j9(     *   )   |j10(   *  )] | \n");
    printf("                      |-----------------------|-----------------------------------------------------------------------------------------------------------------------------|-------------| \n");
    printf("           i = 2      |[j1(           *  )    | j2(   *  )   j3(  *  )    j4(   *  )    j5(     @   )    j6(     @   )    j7(     *   )    j8(     *   )    j9(     *   )   |j10(   *  )] | \n");
    printf("           i = 3      |[j1(           *  )    | j2(   *  )   j3(  *  )    j4(   @  )    j5(     @   )    j6(     @   )    j7(     @   )    j8(     *   )    j9(     *   )   |j10(   *  )] | \n");
    printf("           i = 4      |[j1(              )    | j2(      )   j3(     )    j4(      )    j5(         )    j6(         )    j7(         )    j8(         )    j9(         )   |j10(      )] | \n");
    printf("                      |-----------------------|-----------------------------------------------------------------------------------------------------------------------------|-------------| \n");
    printf("           i = 5(n)   |[j1(              )    | j2(      )   j3(     )    j4(      )    j5(         )    j6(         )    j7(         )    j8(         )    j9(         )   |j10(      )] | \n");
    printf("                      |-----------------------|-----------------------------------------------------------------------------------------------------------------------------|-------------| \n");

    printf("\n");
    printf("\n");
    printf("4.\n");
    printf("\n");
    printf("           FOR Example, n = 5\n");
    printf("                      |[j(1)------------------|-----------------------------------------------------------------------------------------------------------------------------|-------------| \n");
    printf("           i = 1      |[j1(           *  )    | j2(   *  )   j3(  *  )    j4(   *  )    j5(     *   )    j6(     *   )    j7(     *   )    j8(     *   )    j9(     *   )   |j10(   *  )] | \n");
    printf("                      |-----------------------|-----------------------------------------------------------------------------------------------------------------------------|-------------| \n");
    printf("           i = 2      |[j1(           *  )    | j2(   *  )   j3(  *  )    j4(   *  )    j5(     @   )    j6(     @   )    j7(     *   )    j8(     *   )    j9(     *   )   |j10(   *  )] | \n");
    printf("           i = 3      |[j1(           *  )    | j2(   *  )   j3(  *  )    j4(   @  )    j5(     @   )    j6(     @   )    j7(     @   )    j8(     *   )    j9(     *   )   |j10(   *  )] | \n");
    printf("           i = 4      |[j1(           *  )    | j2(   *  )   j3(  @  )    j4(   @  )    j5(     @   )    j6(     @   )    j7(     @   )    j8(     @   )    j9(     *   )   |j10(   *  )] | \n");
    printf("                      |-----------------------|-----------------------------------------------------------------------------------------------------------------------------|-------------| \n");
    printf("           i = 5(n)   |[j1(              )    | j2(      )   j3(     )    j4(      )    j5(         )    j6(         )    j7(         )    j8(         )    j9(         )   |j10(      )] | \n");
    printf("                      |-----------------------|-----------------------------------------------------------------------------------------------------------------------------|-------------| \n");

    printf("\n");
    printf("\n");
    printf("5.\n");
    printf("\n");
    printf("           FOR Example, n = 5\n");
    printf("                      |[j(1)------------------|-----------------------------------------------------------------------------------------------------------------------------|-------------| \n");
    printf("           i = 1      |[j1(           *  )    | j2(   *  )   j3(  *  )    j4(   *  )    j5(     *   )    j6(     *   )    j7(     *   )    j8(     *   )    j9(     *   )   |j10(   *  )] | \n");
    printf("                      |-----------------------|-----------------------------------------------------------------------------------------------------------------------------|-------------| \n");
    printf("           i = 2      |[j1(           *  )    | j2(   *  )   j3(  *  )    j4(   *  )    j5(     @   )    j6(     @   )    j7(     *   )    j8(     *   )    j9(     *   )   |j10(   *  )] | \n");
    printf("           i = 3      |[j1(           *  )    | j2(   *  )   j3(  *  )    j4(   @  )    j5(     @   )    j6(     @   )    j7(     @   )    j8(     *   )    j9(     *   )   |j10(   *  )] | \n");
    printf("           i = 4      |[j1(           *  )    | j2(   *  )   j3(  @  )    j4(   @  )    j5(     @   )    j6(     @   )    j7(     @   )    j8(     @   )    j9(     *   )   |j10(   *  )] | \n");
    printf("                      |-----------------------|-----------------------------------------------------------------------------------------------------------------------------|-------------| \n");
    printf("           i = 5(n)   |[j1(           *  )    | j2(   @  )   j3(  @  )    j4(   @  )    j5(     @   )    j6(     @   )    j7(     @   )    j8(     @   )    j9(     @   )   |j10(   *  )] | \n");
    printf("                      |-----------------------|-----------------------------------------------------------------------------------------------------------------------------|-------------| \n");


    printf("\n");
    printf("                                             This is a GAP  for understanding.\n");
    printf("\n");

    printf("\n");
    printf("\n");
    printf("6.\n");
    printf("\n");
    printf("           FOR Example, n = 5\n");
    printf("                      |[j(1)------------------|-----------------------------------------------------------------------------------------------------------------------------|-------------| \n");
    printf("           i = 1      |[j1(           *  )    | j2(   @  )   j3(  @  )    j4(   @  )    j5(     @   )    j6(     @   )    j7(     @   )    j8(     @   )    j9(     @   )   |j10(   *  )] | \n");
    printf("                      |-----------------------|-----------------------------------------------------------------------------------------------------------------------------|-------------| \n");
    printf("           i = 2      |[j1(              )    | j2(      )   j3(     )    j4(      )    j5(         )    j6(         )    j7(         )    j8(         )    j9(         )   |j10(      )] | \n");
    printf("           i = 3      |[j1(              )    | j2(      )   j3(     )    j4(      )    j5(         )    j6(         )    j7(         )    j8(         )    j9(         )   |j10(      )] | \n");
    printf("           i = 4      |[j1(              )    | j2(      )   j3(     )    j4(      )    j5(         )    j6(         )    j7(         )    j8(         )    j9(         )   |j10(      )] | \n");
    printf("                      |-----------------------|-----------------------------------------------------------------------------------------------------------------------------|-------------| \n");
    printf("           i = 5(n)   |[j1(              )    | j2(      )   j3(     )    j4(      )    j5(         )    j6(         )    j7(         )    j8(         )    j9(         )   |j10(      )] | \n");
    printf("                      |-----------------------|-----------------------------------------------------------------------------------------------------------------------------|-------------| \n");

    printf("\n");
    printf("\n");
    printf("7.\n");
    printf("\n");
    printf("           FOR Example, n = 5\n");
    printf("                      |[j(1)------------------|-----------------------------------------------------------------------------------------------------------------------------|-------------| \n");
    printf("           i = 1      |[j1(           *  )    | j2(   @  )   j3(  @  )    j4(   @  )    j5(     @   )    j6(     @   )    j7(     @   )    j8(     @   )    j9(     @   )   |j10(   *  )] | \n");
    printf("                      |-----------------------|-----------------------------------------------------------------------------------------------------------------------------|-------------| \n");
    printf("           i = 2      |[j1(           *  )    | j2(   *  )   j3(  @  )    j4(   @  )    j5(     @   )    j6(     @   )    j7(     @   )    j8(     @   )    j9(     *   )   |j10(   *  )] | \n");
    printf("           i = 3      |[j1(              )    | j2(      )   j3(     )    j4(      )    j5(         )    j6(         )    j7(         )    j8(         )    j9(         )   |j10(      )] | \n");
    printf("           i = 4      |[j1(              )    | j2(      )   j3(     )    j4(      )    j5(         )    j6(         )    j7(         )    j8(         )    j9(         )   |j10(      )] | \n");
    printf("                      |-----------------------|-----------------------------------------------------------------------------------------------------------------------------|-------------| \n");
    printf("           i = 5(n)   |[j1(              )    | j2(      )   j3(     )    j4(      )    j5(         )    j6(         )    j7(         )    j8(         )    j9(         )   |j10(      )] | \n");
    printf("                      |-----------------------|-----------------------------------------------------------------------------------------------------------------------------|-------------| \n");

    printf("\n");
    printf("\n");
    printf("8.\n");
    printf("\n");
    printf("           FOR Example, n = 5\n");
    printf("                      |[j(1)------------------|-----------------------------------------------------------------------------------------------------------------------------|-------------| \n");
    printf("           i = 1      |[j1(           *  )    | j2(   @  )   j3(  @  )    j4(   @  )    j5(     @   )    j6(     @   )    j7(     @   )    j8(     @   )    j9(     @   )   |j10(   *  )] | \n");
    printf("                      |-----------------------|-----------------------------------------------------------------------------------------------------------------------------|-------------| \n");
    printf("           i = 2      |[j1(           *  )    | j2(   *  )   j3(  @  )    j4(   @  )    j5(     @   )    j6(     @   )    j7(     @   )    j8(     @   )    j9(     *   )   |j10(   *  )] | \n");
    printf("           i = 3      |[j1(           *  )    | j2(   *  )   j3(  *  )    j4(   @  )    j5(     @   )    j6(     @   )    j7(     @   )    j8(     *   )    j9(     *   )   |j10(   *  )] | \n");
    printf("           i = 4      |[j1(              )    | j2(      )   j3(     )    j4(      )    j5(         )    j6(         )    j7(         )    j8(         )    j9(         )   |j10(      )] | \n");
    printf("                      |-----------------------|-----------------------------------------------------------------------------------------------------------------------------|-------------| \n");
    printf("           i = 5(n)   |[j1(              )    | j2(      )   j3(     )    j4(      )    j5(         )    j6(         )    j7(         )    j8(         )    j9(         )   |j10(      )] | \n");
    printf("                      |-----------------------|-----------------------------------------------------------------------------------------------------------------------------|-------------| \n");


    printf("\n");
    printf("\n");
    printf("9.\n");
    printf("\n");
    printf("           FOR Example, n = 5\n");
    printf("                      |[j(1)------------------|-----------------------------------------------------------------------------------------------------------------------------|-------------| \n");
    printf("           i = 1      |[j1(           *  )    | j2(   @  )   j3(  @  )    j4(   @  )    j5(     @   )    j6(     @   )    j7(     @   )    j8(     @   )    j9(     @   )   |j10(   *  )] | \n");
    printf("                      |-----------------------|-----------------------------------------------------------------------------------------------------------------------------|-------------| \n");
    printf("           i = 2      |[j1(           *  )    | j2(   *  )   j3(  @  )    j4(   @  )    j5(     @   )    j6(     @   )    j7(     @   )    j8(     @   )    j9(     *   )   |j10(   *  )] | \n");
    printf("           i = 3      |[j1(           *  )    | j2(   *  )   j3(  *  )    j4(   @  )    j5(     @   )    j6(     @   )    j7(     @   )    j8(     *   )    j9(     *   )   |j10(   *  )] | \n");
    printf("           i = 4      |[j1(           *  )    | j2(   *  )   j3(  *  )    j4(   *  )    j5(     @   )    j6(     @   )    j7(     *   )    j8(     *   )    j9(     *   )   |j10(   *  )] | \n");
    printf("                      |-----------------------|-----------------------------------------------------------------------------------------------------------------------------|-------------| \n");
    printf("           i = 5(n)   |[j1(              )    | j2(      )   j3(     )    j4(      )    j5(         )    j6(         )    j7(         )    j8(         )    j9(         )   |j10(      )] | \n");
    printf("                      |-----------------------|-----------------------------------------------------------------------------------------------------------------------------|-------------| \n");

    printf("\n");
    printf("\n");
    printf("10.\n");
    printf("\n");
    printf("           FOR Example, n = 5\n");
    printf("                      |[j(1)------------------|-----------------------------------------------------------------------------------------------------------------------------|-------------| \n");
    printf("           i = 1      |[j1(           *  )    | j2(   @  )   j3(  @  )    j4(   @  )    j5(     @   )    j6(     @   )    j7(     @   )    j8(     @   )    j9(     @   )   |j10(   *  )] | \n");
    printf("                      |-----------------------|-----------------------------------------------------------------------------------------------------------------------------|-------------| \n");
    printf("           i = 2      |[j1(           *  )    | j2(   *  )   j3(  @  )    j4(   @  )    j5(     @   )    j6(     @   )    j7(     @   )    j8(     @   )    j9(     *   )   |j10(   *  )] | \n");
    printf("           i = 3      |[j1(           *  )    | j2(   *  )   j3(  *  )    j4(   @  )    j5(     @   )    j6(     @   )    j7(     @   )    j8(     *   )    j9(     *   )   |j10(   *  )] | \n");
    printf("           i = 4      |[j1(           *  )    | j2(   *  )   j3(  *  )    j4(   *  )    j5(     @   )    j6(     @   )    j7(     *   )    j8(     *   )    j9(     *   )   |j10(   *  )] | \n");
    printf("                      |-----------------------|-----------------------------------------------------------------------------------------------------------------------------|-------------| \n");
    printf("           i = 5(n)   |[j1(           *  )    | j2(   *  )   j3(  *  )    j4(   *  )    j5(     *   )    j6(     *   )    j7(     *   )    j8(     *   )    j9(     *   )   |j10(   *  )] | \n");
    printf("                      |-----------------------|-----------------------------------------------------------------------------------------------------------------------------|-------------| \n");

}

void pyramids()
{
    clearScreen();
    printAsciiArt();
    printf("\n\n\n");
    printf("           This is a pyramids.\n");
    printf("           In this pattern, 1st space is printed for space<=n-i\n");
    printf("           And then * is printed for j<=2*i-1\n");
    printf("\n");
    printf("           Each column starts with n-i+1 because space printed for n-i and then for +1 that's where the column starts printing stars.\n");
    printf("\n");

    printf("           i = 1, space<=n-i = 1 <= 5-1=4 (true)(space) j(column) = 5 - 1 + 1 = 5(column), j(stars) = 2 x 1 - 1 = 1(stars) SPACE  SPACE  SPACE  SPACE  *                  \n");
    printf("           i = 2, space<=n-i = 1 <= 5-2=3 (true)(space) j(column) = 5 - 2 + 1 = 4(column), j(stars) = 2 x 2 - 1 = 3(stars) SPACE  SPACE  SPACE     *   *   *              \n");
    printf("           i = 3, space<=n-i = 1 <= 5-3=2 (true)(space) j(column) = 5 - 3 + 1 = 3(column), j(stars) = 2 x 3 - 1 = 5(stars) SPACE  SPACE        *   *   *   *   *          \n");
    printf("           i = 4, space<=n-i = 1 <= 5-4=1 (true)(space) j(column) = 5 - 4 + 1 = 2(column), j(stars) = 2 x 4 - 1 = 7(stars) SPACE           *   *   *   *   *   *   *      \n");
    printf("           i = 5, space<=n-i = 1 <= 5-4=1 (true)(space) j(column) = 5 - 5 + 1 = 1(column), j(stars) = 2 x 5 - 1 = 9(stars)             *   *   *   *   *   *   *   *   *  \n");

    printf("\n");
    printf("\n");
    printf("CODE:\n");
    printf("\n");
    printf("\n");


    printf("for (i = 1; i <= n; i++)\n");
    printf("{\n");
    printf("    // Print spaces\n");
    printf("    for (space = 1; space <= n - i; space++)\n");
    printf("    {\n");
    printf("        printf(\" \");\n");
    printf("    }\n");
    printf("    // Print stars\n");
    printf("    for (j = 1; j <= 2*i-1; j++)\n");
    printf("    {\n");
    printf("        printf(\"*\");\n");
    printf("    }\n");
    printf("    printf(\"\\n\");\n");
    printf("}\n");
    printf("\n");

    printf("\n");
    printf("1.\n");
    printf("\n");
    printf("           FOR Example, n = 5\n");
    printf("                      |-j(1)-----|----------------------------------------------------------------------------|-j=(2*n-1)-| \n");
    printf("           i = 1      |[j1(SPACE)| j2(SPACE) j3(SPACE)  j4(SPACE)  j5(  *  )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("           i = 2      |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("           i = 3      |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("           i = 4      |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("           i = 5(n)   |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("\n");
    printf("2.\n");
    printf("\n");

    printf("           FOR Example, n = 5\n");
    printf("                      |-j(1)-----|----------------------------------------------------------------------------|-j=(2*n-1)-| \n");
    printf("           i = 1      |[j1(SPACE)| j2(SPACE) j3(SPACE)  j4(SPACE)  j5(  *  )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("           i = 2      |[j1(SPACE)| j2(SPACE) j3(SPACE)  j4(  *  )  j5(  *  )  j6(  *  )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("           i = 3      |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("           i = 4      |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("           i = 5(n)   |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("\n");
    printf("3.\n");
    printf("\n");

    printf("           FOR Example, n = 5\n");
    printf("                      |-j(1)-----|----------------------------------------------------------------------------|-j=(2*n-1)-| \n");
    printf("           i = 1      |[j1(SPACE)| j2(SPACE) j3(SPACE)  j4(SPACE)  j5(  *  )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("           i = 2      |[j1(SPACE)| j2(SPACE) j3(SPACE)  j4(  *  )  j5(  *  )  j6(  *  )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("           i = 3      |[j1(SPACE)| j2(SPACE) j3(  *  )  j4(  *  )  j5(  *  )  j6(  *  )  j7(  *  )  j8(     ) | j9(     )]| \n");
    printf("           i = 4      |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("           i = 5(n)   |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");

    printf("\n");
    printf("4.\n");
    printf("\n");

    printf("           FOR Example, n = 5\n");
    printf("                      |-j(1)-----|----------------------------------------------------------------------------|-j=(2*n-1)-| \n");
    printf("           i = 1      |[j1(SPACE)| j2(SPACE) j3(SPACE)  j4(SPACE)  j5(  *  )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("           i = 2      |[j1(SPACE)| j2(SPACE) j3(SPACE)  j4(  *  )  j5(  *  )  j6(  *  )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("           i = 3      |[j1(SPACE)| j2(SPACE) j3(  *  )  j4(  *  )  j5(  *  )  j6(  *  )  j7(  *  )  j8(     ) | j9(     )]| \n");
    printf("           i = 4      |[j1(SPACE)| j2(  *  ) j3(  *  )  j4(  *  )  j5(  *  )  j6(  *  )  j7(  *  )  j8(  *  ) | j9(     )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("           i = 5(n)   |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");

    printf("\n");
    printf("5.\n");
    printf("\n");

    printf("           FOR Example, n = 5\n");
    printf("                      |-j(1)-----|----------------------------------------------------------------------------|-j=(2*n-1)-| \n");
    printf("           i = 1      |[j1(SPACE)| j2(SPACE) j3(SPACE)  j4(SPACE)  j5(  *  )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("           i = 2      |[j1(SPACE)| j2(SPACE) j3(SPACE)  j4(  *  )  j5(  *  )  j6(  *  )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("           i = 3      |[j1(SPACE)| j2(SPACE) j3(  *  )  j4(  *  )  j5(  *  )  j6(  *  )  j7(  *  )  j8(     ) | j9(     )]| \n");
    printf("           i = 4      |[j1(SPACE)| j2(  *  ) j3(  *  )  j4(  *  )  j5(  *  )  j6(  *  )  j7(  *  )  j8(  *  ) | j9(     )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("           i = 5(n)   |[j1(  *  )| j2(  *  ) j3(  *  )  j4(  *  )  j5(  *  )  j6(  *  )  j7(  *  )  j8(  *  ) | j9(  *  )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");


}

void hollowpyra()
{
    clearScreen();
    printAsciiArt();
    printf("\n\n\n");
    printf("           This is a hollow pyramids.\n");
    printf("           In this pattern, 1st space is printed for space<=n-i\n");
    printf("           And then * is printed for j<=2*i-1\n");
    printf("\n");
    printf("           Each column starts with n-i+1 because space printed for n-i and then for +1 that's where the column starts printing stars.\n");
    printf("\n");
    printf("           If the condition for j is 1 or j is 2*i-1 or i is not met then it will be hollow space inside pyramids\n");

    printf("     i = 1, space<=n-i = 1 <= 5-1=4 (true)(space) j(column) = 5 - 1 + 1 = 5(column), j(stars) = 2 x 1 - 1 = 1(stars) SPACE  SPACE  SPACE  SPACE  *                  \n");
    printf("     i = 2, space<=n-i = 1 <= 5-2=3 (true)(space) j(column) = 5 - 2 + 1 = 4(column), j(stars) = 2 x 2 - 1 = 3(stars) SPACE  SPACE  SPACE     *       *              \n");
    printf("     i = 3, space<=n-i = 1 <= 5-3=2 (true)(space) j(column) = 5 - 3 + 1 = 3(column), j(stars) = 2 x 3 - 1 = 5(stars) SPACE  SPACE        *               *          \n");
    printf("     i = 4, space<=n-i = 1 <= 5-4=1 (true)(space) j(column) = 5 - 4 + 1 = 2(column), j(stars) = 2 x 4 - 1 = 7(stars) SPACE           *                       *      \n");
    printf("     i = 5, space<=n-i = 1 <= 5-4=1 (true)(space) j(column) = 5 - 5 + 1 = 1(column), j(stars) = 2 x 5 - 1 = 9(stars)             *   *   *   *   *   *   *   *   *  \n");


    printf("\n");
    printf("\n");
    printf("CODE:\n");
    printf("\n");
    printf("\n");

    printf("for (i = 1; i <= n; i++)");
    printf(" {\n");
    printf("     // Print spaces\n");
    printf("     for (space = 1; space <= n - i; space++) {\n");
    printf("         printf(\" \");\n");
    printf("                }\n");
    printf("     // Print stars and spaces in between\n");
    printf("     for (j = 1; j <= 2 * i - 1; j++) {\n");
    printf("         if (j == 1 || j == 2 * i - 1 || i == n)\n");
    printf("             printf(\"*\");\n");
    printf("         else\n");
    printf("             printf(\" \");\n");
    printf("     }\n");
    printf("     printf(\"\\n\");\n");
    printf(" }\n");
    printf("\n");

    printf("\n");
    printf("1.\n");
    printf("\n");
    printf("           FOR Example, n = 5\n");
    printf("                      |-j(1)-----|----------------------------------------------------------------------------|-j=(2*n-1)-| \n");
    printf("           i = 1      |[j1(SPACE)| j2(SPACE) j3(SPACE)  j4(SPACE)  j5(  *  )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("           i = 2      |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("           i = 3      |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("           i = 4      |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("           i = 5(n)   |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("\n");
    printf("2.\n");
    printf("\n");

    printf("           FOR Example, n = 5\n");
    printf("                      |-j(1)-----|----------------------------------------------------------------------------|-j=(2*n-1)-| \n");
    printf("           i = 1      |[j1(SPACE)| j2(SPACE) j3(SPACE)  j4(SPACE)  j5(  *  )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("           i = 2      |[j1(SPACE)| j2(SPACE) j3(SPACE)  j4(  *  )  j5(else )  j6(  *  )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("           i = 3      |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("           i = 4      |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("           i = 5(n)   |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("\n");
    printf("3.\n");
    printf("\n");

    printf("           FOR Example, n = 5\n");
    printf("                      |-j(1)-----|----------------------------------------------------------------------------|-j=(2*n-1)-| \n");
    printf("           i = 1      |[j1(SPACE)| j2(SPACE) j3(SPACE)  j4(SPACE)  j5(  *  )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("           i = 2      |[j1(SPACE)| j2(SPACE) j3(SPACE)  j4(  *  )  j5(else )  j6(  *  )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("           i = 3      |[j1(SPACE)| j2(SPACE) j3(  *  )  j4(else )  j5(else )  j6(else )  j7(  *  )  j8(     ) | j9(     )]| \n");
    printf("           i = 4      |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("           i = 5(n)   |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");

    printf("\n");
    printf("4.\n");
    printf("\n");

    printf("           FOR Example, n = 5\n");
    printf("                      |-j(1)-----|----------------------------------------------------------------------------|-j=(2*n-1)-| \n");
    printf("           i = 1      |[j1(SPACE)| j2(SPACE) j3(SPACE)  j4(SPACE)  j5(  *  )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("           i = 2      |[j1(SPACE)| j2(SPACE) j3(SPACE)  j4(  *  )  j5(else )  j6(  *  )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("           i = 3      |[j1(SPACE)| j2(SPACE) j3(  *  )  j4(else )  j5(else )  j6(else )  j7(  *  )  j8(     ) | j9(     )]| \n");
    printf("           i = 4      |[j1(SPACE)| j2(  *  ) j3(else )  j4(else )  j5(else )  j6(else )  j7(else )  j8(  *  ) | j9(     )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("           i = 5(n)   |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");

    printf("\n");
    printf("5.\n");
    printf("\n");

    printf("           FOR Example, n = 5\n");
    printf("                      |-j(1)-----|----------------------------------------------------------------------------|-j=(2*n-1)-| \n");
    printf("           i = 1      |[j1(SPACE)| j2(SPACE) j3(SPACE)  j4(SPACE)  j5(  *  )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("           i = 2      |[j1(SPACE)| j2(SPACE) j3(SPACE)  j4(  *  )  j5(else )  j6(  *  )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("           i = 3      |[j1(SPACE)| j2(SPACE) j3(  *  )  j4(else )  j5(else )  j6(else )  j7(  *  )  j8(     ) | j9(     )]| \n");
    printf("           i = 4      |[j1(SPACE)| j2(  *  ) j3(  *  )  j4(else )  j5(else )  j6(else )  j7(else )  j8(  *  ) | j9(     )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("           i = 5(n)   |[j1(  *  )| j2(  *  ) j3(  *  )  j4(  *  )  j5(  *  )  j6(  *  )  j7(  *  )  j8(  *  ) | j9(  *  )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");

}

void mirrorpyra()
{
    clearScreen();
    printAsciiArt();
    printf("\n\n\n");
    printf("Reverse pyramids:\n");
    printf("\n");

    printf("This is a reverse pyramids.\n");
    printf("For row starts from n to 1 and i >= 1 \n");
    printf("In this pattern, 1st *(stars) is printed for j<=2*i-1 \n");
    printf("And then space for space <= n - i\n");

    printf("\n");
    printf("\n");
    printf("CODE:\n");
    printf("\n");
    printf("\n");

    printf("i = 5, space<=n-i <= 5-5=0       (space) j(stars) = 2 x 5 - 1 = 9(stars)                 *   *   *   *   *   *   *   *   *  \n");
    printf("i = 4, space<=n-i <= 5-4=1       (space) j(stars) = 2 x 4 - 1 = 7(stars) SPACE               *   *   *   *   *   *   *      \n");
    printf("i = 3, space<=n-i <= 5-3=2       (space) j(stars) = 2 x 3 - 1 = 5(stars) SPACE  SPACE            *   *   *   *   *          \n");
    printf("i = 2, space<=n-i <= 5-2=3       (space) j(stars) = 2 x 2 - 1 = 3(stars) SPACE  SPACE  SPACE         *   *   *              \n");
    printf("i = 1, space<=n-i <= 5-1=4       (space) j(stars) = 2 x 1 - 1 = 1(stars) SPACE  SPACE  SPACE  SPACE      *                  \n");


    printf("for (i = n; i >= 1; i--)");
    printf("{\n");
    printf("    // Print spaces\n");
    printf("    for (space = 1; space <= n - i; space++)\n");
    printf("    {\n");
    printf("        printf(\" \");\n");
    printf("    }\n");
    printf("    // Print stars\n");
    printf("    for (j = 1; j <= 2 * i - 1; j++)\n");
    printf("    {\n");
    printf("        printf(\"*\");\n");
    printf("    }\n");
    printf("    printf(\"\\n\");\n");
    printf("}\n");
    printf("\n");
    printf("\n");
    printf("This is a Gap \nfor understanding.\n");
    printf("\n");
    printf("\n");

    printf("Pyramids:\n");
    printf("\n");
    printf("This is a pyramids.\n");
    printf("In this pattern, 1st space is printed for space<=n-i\n");
    printf("And then * is printed for j<=2*i-1\n");
    printf("\n");
    printf("Each column starts with n-i+1 because space printed for n-i and then for +1 that's where the column starts printing stars.\n");
    printf("\n");

    printf("i = 1, space<=n-i <= 5-1=4       (space) j(column) = 5 - 1 + 1 = 5(column), j(stars) = 2 x 1 - 1 = 1(stars) SPACE  SPACE  SPACE  SPACE  *                  \n");
    printf("i = 2, space<=n-i <= 5-2=3       (space) j(column) = 5 - 2 + 1 = 4(column), j(stars) = 2 x 2 - 1 = 3(stars) SPACE  SPACE  SPACE     *   *   *              \n");
    printf("i = 3, space<=n-i <= 5-3=2       (space) j(column) = 5 - 3 + 1 = 3(column), j(stars) = 2 x 3 - 1 = 5(stars) SPACE  SPACE        *   *   *   *   *          \n");
    printf("i = 4, space<=n-i <= 5-4=1       (space) j(column) = 5 - 4 + 1 = 2(column), j(stars) = 2 x 4 - 1 = 7(stars) SPACE           *   *   *   *   *   *   *      \n");
    printf("i = 5, space<=n-i <= 5-4=0       (space) j(column) = 5 - 5 + 1 = 1(column), j(stars) = 2 x 5 - 1 = 9(stars)             *   *   *   *   *   *   *   *   *  \n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("CODE:\n");
    printf("\n");
    printf("\n");


    printf("for (i = 1; i <= n; i++)\n");
    printf("{\n");
    printf("    // Print spaces\n");
    printf("    for (space = 1; space <= n - i; space++)\n");
    printf("    {\n");
    printf("        printf(\" \");\n");
    printf("    }\n");
    printf("    // Print stars\n");
    printf("    for (j = 1; j <= 2*i-1; j++)\n");
    printf("    {\n");
    printf("        printf(\"*\");\n");
    printf("    }\n");
    printf("    printf(\"\\n\");\n");
    printf("}\n");
    printf("\n");
    printf("\n");
    printf("\n");



    printf("Result:  \n");
    printf("\n");
    printf("\n");
    printf("                                        *  *  *  *  *  *  *  *  *\n");
    printf("                                           *  *  *  *  *  *  *\n");
    printf("                                              *  *  *  *  *\n");
    printf("                                                 *  *  *  \n");
    printf("                                                    *  \n");
    printf("                                                    *\n");
    printf("                                                 *  *  *\n");
    printf("                                              *  *  *  *  *\n");
    printf("                                           *  *  *  *  *  *  *\n");
    printf("                                        *  *  *  *  *  *  *  *  *\n");
    printf("\n\n\n");

    printf("\n");
    printf("1.\n");
    printf("\n");
    printf("FOR Example, n = 5\n");
    printf("           |-j(1)-----|----------------------------------------------------------------------------|-j=(2*n-1)-| \n");
    printf("i = 1      |[j1(  *  )| j2(  *  ) j3(  *  )  j4(  *  )  j5(  *  )  j6(  *  )  j7(  *  )  j8(  *  ) | j9(  *  )]| \n");
    printf("           |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("i = 2      |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("i = 3      |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("i = 4      |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("           |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("i = 5(n)   |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("           |----------|----------------------------------------------------------------------------|-----------| \n");


    printf("\n");
    printf("2.\n");
    printf("\n");

    printf("FOR Example, n = 5\n");
    printf("           |-j(1)-----|----------------------------------------------------------------------------|-j=(2*n-1)-| \n");
    printf("i = 1      |[j1(  *  )| j2(  *  ) j3(  *  )  j4(  *  )  j5(  *  )  j6(  *  )  j7(  *  )  j8(  *  ) | j9(  *  )]| \n");
    printf("           |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("i = 2      |[j1(SPACE)| j2(  *  ) j3(  *  )  j4(  *  )  j5(  *  )  j6(  *  )  j7(  *  )  j8(  *  ) | j9(     )]| \n");
    printf("i = 3      |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("i = 4      |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("           |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("i = 5(n)   |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("           |----------|----------------------------------------------------------------------------|-----------| \n");


    printf("\n");
    printf("3.\n");
    printf("\n");

    printf("FOR Example, n = 5\n");
    printf("           |-j(1)-----|----------------------------------------------------------------------------|-j=(2*n-1)-| \n");
    printf("i = 1      |[j1(  *  )| j2(  *  ) j3(  *  )  j4(  *  )  j5(  *  )  j6(  *  )  j7(  *  )  j8(  *  ) | j9(  *  )]| \n");
    printf("           |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("i = 2      |[j1(SPACE)| j2(  *  ) j3(  *  )  j4(  *  )  j5(  *  )  j6(  *  )  j7(  *  )  j8(  *  ) | j9(     )]| \n");
    printf("i = 3      |[j1(SPACE)| j2(SPACE) j3(  *  )  j4(  *  )  j5(  *  )  j6(  *  )  j7(  *  )  j8(     ) | j9(     )]| \n");
    printf("i = 4      |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("           |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("i = 5(n)   |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("           |----------|----------------------------------------------------------------------------|-----------| \n");

    printf("\n");
    printf("4.\n");
    printf("\n");

    printf("FOR Example, n = 5\n");
    printf("           |-j(1)-----|----------------------------------------------------------------------------|-j=(2*n-1)-| \n");
    printf("i = 1      |[j1(  *  )| j2(  *  ) j3(  *  )  j4(  *  )  j5(  *  )  j6(  *  )  j7(  *  )  j8(  *  ) | j9(  *  )]| \n");
    printf("           |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("i = 2      |[j1(SPACE)| j2(  *  ) j3(  *  )  j4(  *  )  j5(  *  )  j6(  *  )  j7(  *  )  j8(  *  ) | j9(     )]| \n");
    printf("i = 3      |[j1(SPACE)| j2(SPACE) j3(  *  )  j4(  *  )  j5(  *  )  j6(  *  )  j7(  *  )  j8(     ) | j9(     )]| \n");
    printf("i = 4      |[j1(SPACE)| j2(SPACE) j3(SPACE)  j4(  *  )  j5(  *  )  j6(  *  )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("           |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("i = 5(n)   |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("           |----------|----------------------------------------------------------------------------|-----------| \n");

    printf("\n");
    printf("5.\n");
    printf("\n");

    printf("FOR Example, n = 5\n");
    printf("           |-j(1)-----|----------------------------------------------------------------------------|-j=(2*n-1)-| \n");
    printf("i = 1      |[j1(  *  )| j2(  *  ) j3(  *  )  j4(  *  )  j5(  *  )  j6(  *  )  j7(  *  )  j8(  *  ) | j9(  *  )]| \n");
    printf("           |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("i = 2      |[j1(SPACE)| j2(  *  ) j3(  *  )  j4(  *  )  j5(  *  )  j6(  *  )  j7(  *  )  j8(  *  ) | j9(     )]| \n");
    printf("i = 3      |[j1(SPACE)| j2(SPACE) j3(  *  )  j4(  *  )  j5(  *  )  j6(  *  )  j7(  *  )  j8(     ) | j9(     )]| \n");
    printf("i = 4      |[j1(SPACE)| j2(SPACE) j3(SPACE)  j4(  *  )  j5(  *  )  j6(  *  )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("           |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("i = 5(n)   |[j1(SPACE)| j2(SPACE) j3(SPACE)  j4(SPACE)  j5(  *  )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("           |----------|----------------------------------------------------------------------------|-----------| \n");


    printf("\n");
    printf("6.\n");
    printf("\n");
    printf("FOR Example, n = 5\n");
    printf("           |-j(1)-----|----------------------------------------------------------------------------|-j=(2*n-1)-| \n");
    printf("i = 1      |[j1(SPACE)| j2(SPACE) j3(SPACE)  j4(SPACE)  j5(  *  )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("           |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("i = 2      |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("i = 3      |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("i = 4      |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("           |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("i = 5(n)   |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("           |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("\n");
    printf("7.\n");
    printf("\n");

    printf("FOR Example, n = 5\n");
    printf("           |-j(1)-----|----------------------------------------------------------------------------|-j=(2*n-1)-| \n");
    printf("i = 1      |[j1(SPACE)| j2(SPACE) j3(SPACE)  j4(SPACE)  j5(  *  )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("           |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("i = 2      |[j1(SPACE)| j2(SPACE) j3(SPACE)  j4(  *  )  j5(  *  )  j6(  *  )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("i = 3      |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("i = 4      |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("           |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("i = 5(n)   |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("           |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("\n");
    printf("8.\n");
    printf("\n");

    printf("FOR Example, n = 5\n");
    printf("           |-j(1)-----|----------------------------------------------------------------------------|-j=(2*n-1)-| \n");
    printf("i = 1      |[j1(SPACE)| j2(SPACE) j3(SPACE)  j4(SPACE)  j5(  *  )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("           |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("i = 2      |[j1(SPACE)| j2(SPACE) j3(SPACE)  j4(  *  )  j5(  *  )  j6(  *  )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("i = 3      |[j1(SPACE)| j2(SPACE) j3(  *  )  j4(  *  )  j5(  *  )  j6(  *  )  j7(  *  )  j8(     ) | j9(     )]| \n");
    printf("i = 4      |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("           |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("i = 5(n)   |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("           |----------|----------------------------------------------------------------------------|-----------| \n");

    printf("\n");
    printf("9.\n");
    printf("\n");

    printf("FOR Example, n = 5\n");
    printf("           |-j(1)-----|----------------------------------------------------------------------------|-j=(2*n-1)-| \n");
    printf("i = 1      |[j1(SPACE)| j2(SPACE) j3(SPACE)  j4(SPACE)  j5(  *  )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("           |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("i = 2      |[j1(SPACE)| j2(SPACE) j3(SPACE)  j4(  *  )  j5(  *  )  j6(  *  )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("i = 3      |[j1(SPACE)| j2(SPACE) j3(  *  )  j4(  *  )  j5(  *  )  j6(  *  )  j7(  *  )  j8(     ) | j9(     )]| \n");
    printf("i = 4      |[j1(SPACE)| j2(  *  ) j3(  *  )  j4(  *  )  j5(  *  )  j6(  *  )  j7(  *  )  j8(  *  ) | j9(     )]| \n");
    printf("           |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("i = 5(n)   |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("           |----------|----------------------------------------------------------------------------|-----------| \n");

    printf("\n");
    printf("10.\n");
    printf("\n");

    printf("FOR Example, n = 5\n");
    printf("           |-j(1)-----|----------------------------------------------------------------------------|-j=(2*n-1)-| \n");
    printf("i = 1      |[j1(SPACE)| j2(SPACE) j3(SPACE)  j4(SPACE)  j5(  *  )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("           |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("i = 2      |[j1(SPACE)| j2(SPACE) j3(SPACE)  j4(  *  )  j5(  *  )  j6(  *  )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("i = 3      |[j1(SPACE)| j2(SPACE) j3(  *  )  j4(  *  )  j5(  *  )  j6(  *  )  j7(  *  )  j8(     ) | j9(     )]| \n");
    printf("i = 4      |[j1(SPACE)| j2(  *  ) j3(  *  )  j4(  *  )  j5(  *  )  j6(  *  )  j7(  *  )  j8(  *  ) | j9(     )]| \n");
    printf("           |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("i = 5(n)   |[j1(  *  )| j2(  *  ) j3(  *  )  j4(  *  )  j5(  *  )  j6(  *  )  j7(  *  )  j8(  *  ) | j9(  *  )]| \n");
    printf("           |----------|----------------------------------------------------------------------------|-----------| \n");

    printf("\n");
    printf("\n");

}

void reversepyra()
{
    clearScreen();
    printAsciiArt();
    printf("\n\n\n");
    printf("           This is a reverse pyramids.\n");
    printf("           For row starts from n to 1 and i >= 1 \n");
    printf("           In this pattern, 1st *(stars) is printed for j<=2*i-1 \n");
    printf("           And then space for space <= n - i\n");
    printf("\n");
    printf("\n");
    printf("     i = 5, space<=n-i = 1 <= 5-5=0 (true)(space) j(stars) = 2 x 5 - 1 = 9(stars)                 *   *   *   *   *   *   *   *   *  \n");
    printf("     i = 4, space<=n-i = 1 <= 5-4=1 (true)(space) j(stars) = 2 x 4 - 1 = 7(stars) SPACE               *   *   *   *   *   *   *      \n");
    printf("     i = 3, space<=n-i = 1 <= 5-3=2 (true)(space) j(stars) = 2 x 3 - 1 = 5(stars) SPACE  SPACE            *   *   *   *   *          \n");
    printf("     i = 2, space<=n-i = 1 <= 5-2=3 (true)(space) j(stars) = 2 x 2 - 1 = 3(stars) SPACE  SPACE  SPACE         *   *   *              \n");
    printf("     i = 1, space<=n-i = 1 <= 5-1=4 (true)(space) j(stars) = 2 x 1 - 1 = 1(stars) SPACE  SPACE  SPACE  SPACE      *                  \n");
    printf("CODE:\n");
    printf("\n");
    printf("\n");
    printf("for (i = n; i >= 1; i--)");
    printf("{\n");
    printf("    // Print spaces\n");
    printf("    for (space = 1; space <= n - i; space++)\n");
    printf("    {\n");
    printf("        printf(\" \");\n");
    printf("    }\n");
    printf("    // Print stars\n");
    printf("    for (j = 1; j <= 2 * i - 1; j++)\n");
    printf("    {\n");
    printf("        printf(\"*\");\n");
    printf("    }\n");
    printf("    printf(\"\\n\");\n");
    printf("}\n");

    printf("\n");
    printf("1.\n");
    printf("\n");
    printf("           FOR Example, n = 5\n");
    printf("                      |-j(1)-----|----------------------------------------------------------------------------|-j=(2*n-1)-| \n");
    printf("           i = 1      |[j1(  *  )| j2(  *  ) j3(  *  )  j4(  *  )  j5(  *  )  j6(  *  )  j7(  *  )  j8(  *  ) | j9(  *  )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("           i = 2      |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("           i = 3      |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("           i = 4      |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("           i = 5(n)   |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");


    printf("\n");
    printf("2.\n");
    printf("\n");

    printf("           FOR Example, n = 5\n");
    printf("                      |-j(1)-----|----------------------------------------------------------------------------|-j=(2*n-1)-| \n");
    printf("           i = 1      |[j1(  *  )| j2(  *  ) j3(  *  )  j4(  *  )  j5(  *  )  j6(  *  )  j7(  *  )  j8(  *  ) | j9(  *  )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("           i = 2      |[j1(SPACE)| j2(  *  ) j3(  *  )  j4(  *  )  j5(  *  )  j6(  *  )  j7(  *  )  j8(  *  ) | j9(     )]| \n");
    printf("           i = 3      |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("           i = 4      |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("           i = 5(n)   |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");


    printf("\n");
    printf("3.\n");
    printf("\n");

    printf("           FOR Example, n = 5\n");
    printf("                      |-j(1)-----|----------------------------------------------------------------------------|-j=(2*n-1)-| \n");
    printf("           i = 1      |[j1(  *  )| j2(  *  ) j3(  *  )  j4(  *  )  j5(  *  )  j6(  *  )  j7(  *  )  j8(  *  ) | j9(  *  )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("           i = 2      |[j1(SPACE)| j2(  *  ) j3(  *  )  j4(  *  )  j5(  *  )  j6(  *  )  j7(  *  )  j8(  *  ) | j9(     )]| \n");
    printf("           i = 3      |[j1(SPACE)| j2(SPACE) j3(  *  )  j4(  *  )  j5(  *  )  j6(  *  )  j7(  *  )  j8(     ) | j9(     )]| \n");
    printf("           i = 4      |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("           i = 5(n)   |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");

    printf("\n");
    printf("4.\n");
    printf("\n");

    printf("           FOR Example, n = 5\n");
    printf("                      |-j(1)-----|----------------------------------------------------------------------------|-j=(2*n-1)-| \n");
    printf("           i = 1      |[j1(  *  )| j2(  *  ) j3(  *  )  j4(  *  )  j5(  *  )  j6(  *  )  j7(  *  )  j8(  *  ) | j9(  *  )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("           i = 2      |[j1(SPACE)| j2(  *  ) j3(  *  )  j4(  *  )  j5(  *  )  j6(  *  )  j7(  *  )  j8(  *  ) | j9(     )]| \n");
    printf("           i = 3      |[j1(SPACE)| j2(SPACE) j3(  *  )  j4(  *  )  j5(  *  )  j6(  *  )  j7(  *  )  j8(     ) | j9(     )]| \n");
    printf("           i = 4      |[j1(SPACE)| j2(SPACE) j3(SPACE)  j4(  *  )  j5(  *  )  j6(  *  )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("           i = 5(n)   |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");

    printf("\n");
    printf("5.\n");
    printf("\n");

    printf("           FOR Example, n = 5\n");
    printf("                      |-j(1)-----|----------------------------------------------------------------------------|-j=(2*n-1)-| \n");
    printf("           i = 1      |[j1(  *  )| j2(  *  ) j3(  *  )  j4(  *  )  j5(  *  )  j6(  *  )  j7(  *  )  j8(  *  ) | j9(  *  )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("           i = 2      |[j1(SPACE)| j2(  *  ) j3(  *  )  j4(  *  )  j5(  *  )  j6(  *  )  j7(  *  )  j8(  *  ) | j9(     )]| \n");
    printf("           i = 3      |[j1(SPACE)| j2(SPACE) j3(  *  )  j4(  *  )  j5(  *  )  j6(  *  )  j7(  *  )  j8(     ) | j9(     )]| \n");
    printf("           i = 4      |[j1(SPACE)| j2(SPACE) j3(SPACE)  j4(  *  )  j5(  *  )  j6(  *  )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("           i = 5(n)   |[j1(SPACE)| j2(SPACE) j3(SPACE)  j4(SPACE)  j5(  *  )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");


}

void reversehollowpyra()
{
    clearScreen();
    printAsciiArt();
    printf("\n\n\n");
    printf("           This is a reverse hollow pyramids.\n");
    printf("           For row starts from n to 1 and i >= 1 \n");
    printf("           In this pattern, 1st *(stars) is printed for j<=2*i-1 \n");
    printf("           And then space for space <= n - i\n");
    printf("           Finally hollow space will be printed if the condition is not met j==1, j==2*i-1,i==n\n");

    printf("\n");
    printf("\n");

    printf("     i = 5, space<=n-i = 1 <= 5-5=0 (true)(space) j(stars) = 2 x 5 - 1 = 9(stars)                 *   *   *   *   *   *   *   *   *  \n");
    printf("     i = 4, space<=n-i = 1 <= 5-4=1 (true)(space) j(stars) = 2 x 4 - 1 = 7(stars) SPACE               *                       *      \n");
    printf("     i = 3, space<=n-i = 1 <= 5-3=2 (true)(space) j(stars) = 2 x 3 - 1 = 5(stars) SPACE  SPACE            *               *          \n");
    printf("     i = 2, space<=n-i = 1 <= 5-2=3 (true)(space) j(stars) = 2 x 2 - 1 = 3(stars) SPACE  SPACE  SPACE         *       *              \n");
    printf("     i = 1, space<=n-i = 1 <= 5-1=4 (true)(space) j(stars) = 2 x 1 - 1 = 1(stars) SPACE  SPACE  SPACE  SPACE      *                  \n");

    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("CODE:\n");
    printf("\n");
    printf("\n");

    printf("for (i = n; i >= 1; i--)");
    printf("{\n");
    printf("    // Print spaces\n");
    printf("    for (space = 1; space <= n - i; space++)\n");
    printf("    {\n");
    printf("        printf(\" \");\n");
    printf("    }\n");
    printf("    // Print stars\n");
    printf("    for (j = 1; j <= 2 * i - 1; j++)\n");
    printf("    {\n");
    printf("        if (j == 1 || j == 2 * i - 1 || i == n)\n");
    printf("            printf(\"*\");\n");
    printf("        else\n");
    printf("            printf(\" \");\n");
    printf("    }\n");
    printf("    printf(\"\\n\");\n");
    printf("}\n");

    printf("\n");
    printf("1.\n");
    printf("\n");
    printf("           FOR Example, n = 5\n");
    printf("                      |-j(1)-----|----------------------------------------------------------------------------|-j=(2*n-1)-| \n");
    printf("           i = 1      |[j1(  *  )| j2(  *  ) j3(  *  )  j4(  *  )  j5(  *  )  j6(  *  )  j7(  *  )  j8(  *  ) | j9(  *  )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("           i = 2      |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("           i = 3      |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("           i = 4      |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("           i = 5(n)   |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");


    printf("\n");
    printf("2.\n");
    printf("\n");

    printf("           FOR Example, n = 5\n");
    printf("                      |-j(1)-----|----------------------------------------------------------------------------|-j=(2*n-1)-| \n");
    printf("           i = 1      |[j1(  *  )| j2(  *  ) j3(  *  )  j4(  *  )  j5(  *  )  j6(  *  )  j7(  *  )  j8(  *  ) | j9(  *  )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("           i = 2      |[j1(SPACE)| j2(  *  ) j3( else)  j4( else)  j5( else)  j6( else)  j7(  *  )  j8(  *  ) | j9(     )]| \n");
    printf("           i = 3      |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("           i = 4      |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("           i = 5(n)   |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");


    printf("\n");
    printf("3.\n");
    printf("\n");

    printf("           FOR Example, n = 5\n");
    printf("                      |-j(1)-----|----------------------------------------------------------------------------|-j=(2*n-1)-| \n");
    printf("           i = 1      |[j1(  *  )| j2(  *  ) j3(  *  )  j4(  *  )  j5(  *  )  j6(  *  )  j7(  *  )  j8(  *  ) | j9(  *  )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("           i = 2      |[j1(SPACE)| j2(  *  ) j3( else)  j4( else)  j5( else)  j6( else)  j7( else)  j8(  *  ) | j9(     )]| \n");
    printf("           i = 3      |[j1(SPACE)| j2(SPACE) j3(  *  )  j4( else)  j5( else)  j6( else)  j7(  *  )  j8(     ) | j9(     )]| \n");
    printf("           i = 4      |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("           i = 5(n)   |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");

    printf("\n");
    printf("4.\n");
    printf("\n");

    printf("           FOR Example, n = 5\n");
    printf("                      |-j(1)-----|----------------------------------------------------------------------------|-j=(2*n-1)-| \n");
    printf("           i = 1      |[j1(  *  )| j2(  *  ) j3(  *  )  j4(  *  )  j5(  *  )  j6(  *  )  j7(  *  )  j8(  *  ) | j9(  *  )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("           i = 2      |[j1(SPACE)| j2(  *  ) j3( else)  j4( else)  j5( else)  j6( else)  j7( else)  j8(  *  ) | j9(     )]| \n");
    printf("           i = 3      |[j1(SPACE)| j2(SPACE) j3(  *  )  j4( else)  j5( else)  j6( else)  j7(  *  )  j8(     ) | j9(     )]| \n");
    printf("           i = 4      |[j1(SPACE)| j2(SPACE) j3(SPACE)  j4(  *  )  j5( else)  j6(  *  )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("           i = 5(n)   |[j1(     )| j2(     ) j3(     )  j4(     )  j5(     )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");

    printf("\n");
    printf("5.\n");
    printf("\n");

    printf("           FOR Example, n = 5\n");
    printf("                      |-j(1)-----|----------------------------------------------------------------------------|-j=(2*n-1)-| \n");
    printf("           i = 1      |[j1(  *  )| j2(  *  ) j3(  *  )  j4(  *  )  j5(  *  )  j6(  *  )  j7(  *  )  j8(  *  ) | j9(  *  )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("           i = 2      |[j1(SPACE)| j2(  *  ) j3( else)  j4( else)  j5( else)  j6( else)  j7( else)  j8(  *  ) | j9(     )]| \n");
    printf("           i = 3      |[j1(SPACE)| j2(SPACE) j3(  *  )  j4( else)  j5( else)  j6( else)  j7(  *  )  j8(     ) | j9(     )]| \n");
    printf("           i = 4      |[j1(SPACE)| j2(SPACE) j3(SPACE)  j4(  *  )  j5( else)  j6(  *  )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");
    printf("           i = 5(n)   |[j1(SPACE)| j2(SPACE) j3(SPACE)  j4(SPACE)  j5(  *  )  j6(     )  j7(     )  j8(     ) | j9(     )]| \n");
    printf("                      |----------|----------------------------------------------------------------------------|-----------| \n");


}

                 void starsquare()
                 {  int square;
                    while(1)
                    {
                     clearScreen();
                     printAsciiArt();
                     printf("\n\n\n");
                     printf("     Selected Level One\n\n");
                     printf("     1. Cross\n\n     2. Cross Square\n\n     3. Hollow Square\n\n     4. Hollow Star and Plus 1\n\n     5. Hollow Star and Plus 2\n\n     6. Star and Plus 1\n\n     7. Star and Plus Cross\n\n     8. Odd Square\n\n     9.Back\n\n");
                     printf("     Enter Your Choice: ");
                     scanf("%d", &square);
                     printf("\n\n");
                     switch(square)
                     {
                        case 1:
                         cross();
                        break;
                        case 2:
                         crosssquare();
                        break;
                        case 3:
                         hollowsquare();
                        break;
                        case 4:
                         holostarandplus1();
                        break;
                        case 5:
                        holostarandplus2();
                        break;
                        case 6:
                        starandplus1();
                        break;
                        case 7:
                        starandpluscross();
                        break;
                        case 8:
                        oddsquare();
                        break;
                        case 9:
                        return;
                        default:
                        printf("     Invalid Number Bruh!!!\n\n");
                     }
                     printf("       Press Enter to Continue...T-T\n");
                     getchar();
                     getchar();


                    }
                 }
                 void startriangle()
                 {
                    int tri;
                    while(1)
                    {
                     clearScreen();
                     printAsciiArt();
                     printf("\n\n\n");
                     printf("     Selected Level One\n\n");
                     printf("     1. Left Triangle\n\n     2. Reverse Left Triangle\n\n     3. Reverse Left Hollow Triangle\n\n     4. Right Triangle\n\n     5. Reverse Right Triangle\n\n     6. Back\n\n");
                     printf("     Enter Your Choice: ");
                     scanf("%d", &tri);
                     printf("\n\n");
                     switch(tri)
                     {
                        case 1:
                         lefttriangle();
                        break;
                        case 2:
                         reverselefttriangle();
                        break;
                        case 3:
                         reversehollowlefttriangle();
                        break;
                        case 4:
                         righttriangle();
                        break;
                        case 5:
                        reverserighttriangle();
                        case 6:
                        return;
                        default:
                        printf("     Invalid Number Bruh!!!\n\n");
                     }
                     printf("       Press Enter to Continue...T-T\n");
                     getchar();
                     getchar();
                    }

                 }
                 void starrectangle()
                 {
                    int recta;
                    while(1)
                    {
                     clearScreen();
                     printAsciiArt();
                     printf("\n\n\n");
                     printf("     Selected Level Two\n\n");
                     printf("     1. Rectangle\n\n     2. Hollow Rec\n\n     3. Mirror\n\n     4. Mirror Hollow\n\n     5. Back\n\n");
                     printf("     Enter Your Choice: ");
                     scanf("%d", &recta);
                     printf("\n\n");
                     switch(recta)
                     {
                        case 1:
                         rectangle();
                        break;
                        case 2:
                         hollowrec();
                        break;
                        case 3:
                         mirror();
                        break;
                        case 4:
                         mirrorhollow();
                        break;
                        case 5:
                        return;
                        default:
                        printf("     Invalid Number Bruh!!!\n\n");
                     }
                     printf("       Press Enter to Continue...T-T\n");
                     getchar();
                     getchar();
                    }


                 }
                 void starpyramid()
                 {  int pyra;
                    while(1)
                    {
                     clearScreen();
                     printAsciiArt();
                     printf("\n\n\n");
                     printf("     Selected Level Three\n\n");
                     printf("     1. Pyramids\n\n     2. Hollow Pyra\n\n     3. Mirror Pyra\n\n     4. Reverse Pyra\n\n     5. Reverse Hollow Pyra\n\n     6. Back\n\n");
                     printf("     Enter Your Choice: ");
                     scanf("%d", &pyra);
                     printf("\n\n");
                     switch(pyra)
                     {
                        case 1:
                         pyramids();
                        break;
                        case 2:
                         hollowpyra();
                        break;
                        case 3:
                         mirrorpyra();
                        break;
                        case 4:
                         reversepyra();
                        break;
                        case 5:
                        reversehollowpyra();
                        break;
                        case 6:
                        return;
                        default:
                        printf("     Invalid Number Bruh!!!\n\n");
                     }
                     printf("       Press Enter to Continue...T-T\n");
                     getchar();
                     getchar();

                    }
                }
                 void stardiamond()
                 {  int dia;
                    while(1)
                    {
                     clearScreen();
                     printAsciiArt();
                     printf("\n\n\n");
                     printf("     Selected Level Three\n\n");
                     printf("     1. Diamonds\n\n     2. Hollow Dia\n\n     3. Box Inside Dia\n\n     4. Back\n\n");
                     printf("     Enter Your Choice: ");
                     scanf("%d", &dia);
                     printf("\n\n");
                     switch(dia)
                     {
                        case 1:
                         diamonds();
                        break;
                        case 2:
                         hollowdia();
                        break;
                        case 3:
                         boxinsidedia();
                        break;
                        case 4:
                        return;
                        default:
                        printf("     Invalid Number Bruh!!!\n\n");
                     }
                        printf("       Press Enter to Continue...T-T\n");
                     getchar();
                     getchar();

                    }
                }

 void numbersquare()
 { printf("\n\n     Selected Number Square.\n\n\n");}
                 void nsquare1()
                 {  clearScreen();
                    printAsciiArt();
                    printf("\n");
                    printf("\n");
                    printf("CODE:\n");
                    printf("\n");
                    printf("\n");

                    printf("for( i=1;i<=n;i++)\n");
                    printf("{\n");
                    printf("        for(j=1;j<=n;j++)\n");
                    printf("            {\n");
                    printf("                printf(\"1\");\n");
                    printf("            }\n");
                    printf("   printf(\"\\n\");\n");
                    printf("}\n");
                    printf("\n");

                    printf("\n");
                    printf("\n");
                    printf("           This is a number pattern for a square.\n");
                    printf("           The square pattern is a pattern that consists of a square shape and print 1.\n");
                    printf("           Logic is similiar to square star pattern\n");
                    printf("\n");
                    printf("\n");



                    printf("1.\n");
                    printf("           FOR Example, n = 4\n");
                    printf("                      |-j(1)-|-------------|-j(n)-| \n");
                    printf("           i = 1      |[j1(1)| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 2      |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("           i = 3      |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("\n");
                    printf("\n");

                    printf("2.\n");
                    printf("\n");
                    printf("                      |-j(1)-|-------------|-j(n)-| \n");
                    printf("           i = 1      |[j1(1)| j2(1) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 2      |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("           i = 3      |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("\n");
                    printf("3.\n");
                    printf("\n");

                    printf("                      |-j(1)-|-------------|-j(n)-| \n");
                    printf("           i = 1      |[j1(1)| j2(1) j3(1) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 2      |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("           i = 3      |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");

                    printf("\n");
                    printf("4.\n");
                    printf("\n");

                    printf("                      |-j(1)-|-------------|-j(n)-| \n");
                    printf("           i = 1      |[j1(1)| j2(1) j3(1) |j4(1)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 2      |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("           i = 3      |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");

                    printf("\n");
                    printf("5.\n");
                    printf("\n");

                    printf("                      |-j(1)-|-------------|-j(n)-| \n");
                    printf("           i = 1      |[j1(1)| j2(1) j3(1) |j4(1)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 2      |[j1(1)| j2( ) j3( ) |j4( )]| \n");
                    printf("           i = 3      |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");

                    printf("\n");
                    printf("6.\n");
                    printf("\n");

                    printf("                      |-j(1)-|-------------|-j(n)-| \n");
                    printf("           i = 1      |[j1(1)| j2(1) j3(1) |j4(1)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 2      |[j1(1)| j2(1) j3( ) |j4( )]| \n");
                    printf("           i = 3      |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");

                    printf("\n");
                    printf("7.\n");
                    printf("\n");

                    printf("                      |-j(1)-|-------------|-j(n)-| \n");
                    printf("           i = 1      |[j1(1)| j2(1) j3(1) |j4(1)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 2      |[j1(1)| j2(1) j3(1) |j4( )]| \n");
                    printf("           i = 3      |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");

                    printf("\n");
                    printf("8.\n");
                    printf("\n");

                    printf("                      |-j(1)-|-------------|-j(n)-| \n");
                    printf("           i = 1      |[j1(1)| j2(1) j3(1) |j4(1)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 2      |[j1(1)| j2(1) j3(1) |j4(1)]| \n");
                    printf("           i = 3      |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");

                    printf("\n");
                    printf("9.\n");
                    printf("\n");

                    printf("                      |-j(1)-|-------------|-j(n)-| \n");
                    printf("           i = 1      |[j1(1)| j2(1) j3(1) |j4(1)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 2      |[j1(1)| j2(1) j3(1) |j4(1)]| \n");
                    printf("           i = 3      |[j1(1)| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");

                    printf("\n");
                    printf("10.\n");
                    printf("\n");

                    printf("                      |-j(1)-|-------------|-j(n)-| \n");
                    printf("           i = 1      |[j1(1)| j2(1) j3(1) |j4(1)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 2      |[j1(1)| j2(1) j3(1) |j4(1)]| \n");
                    printf("           i = 3      |[j1(1)| j2(1) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");

                    printf("\n");
                    printf("11.\n");
                    printf("\n");

                    printf("                      |-j(1)-|-------------|-j(n)-| \n");
                    printf("           i = 1      |[j1(1)| j2(1) j3(1) |j4(1)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 2      |[j1(1)| j2(1) j3(1) |j4(1)]| \n");
                    printf("           i = 3      |[j1(1)| j2(1) j3(1) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");

                    printf("\n");
                    printf("12.\n");
                    printf("\n");

                    printf("                      |-j(1)-|-------------|-j(n)-| \n");
                    printf("           i = 1      |[j1(1)| j2(1) j3(1) |j4(1)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 2      |[j1(1)| j2(1) j3(1) |j4(1)]| \n");
                    printf("           i = 3      |[j1(1)| j2(1) j3(1) |j4(1)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");

                    printf("\n");
                    printf("13.\n");
                    printf("\n");

                    printf("                      |-j(1)-|-------------|-j(n)-| \n");
                    printf("           i = 1      |[j1(1)| j2(1) j3(1) |j4(1)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 2      |[j1(1)| j2(1) j3(1) |j4(1)]| \n");
                    printf("           i = 3      |[j1(1)| j2(1) j3(1) |j4(1)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 4(n)   |[j1(1)| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");

                    printf("\n");
                    printf("14.\n");
                    printf("\n");

                    printf("                      |-j(1)-|-------------|-j(n)-| \n");
                    printf("           i = 1      |[j1(1)| j2(1) j3(1) |j4(1)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 2      |[j1(1)| j2(1) j3(1) |j4(1)]| \n");
                    printf("           i = 3      |[j1(1)| j2(1) j3(1) |j4(1)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 4(n)   |[j1(1)| j2(1) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");

                    printf("\n");
                    printf("15.\n");
                    printf("\n");

                    printf("                      |-j(1)-|-------------|-j(n)-| \n");
                    printf("           i = 1      |[j1(1)| j2(1) j3(1) |j4(1)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 2      |[j1(1)| j2(1) j3(1) |j4(1)]| \n");
                    printf("           i = 3      |[j1(1)| j2(1) j3(1) |j4(1)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 4(n)   |[j1(1)| j2(1) j3(1) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");

                    printf("\n");
                    printf("16.\n");
                    printf("\n");

                    printf("                      |-j(1)-|-------------|-j(n)-| \n");
                    printf("           i = 1      |[j1(1)| j2(1) j3(1) |j4(1)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 2      |[j1(1)| j2(1) j3(1) |j4(1)]| \n");
                    printf("           i = 3      |[j1(1)| j2(1) j3(1) |j4(1)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 4(n)   |[j1(1)| j2(1) j3(1) |j4(1)]| \n");
                    printf("                      |------|-------------|------| \n");




                   }
                 void nsquare2()

                 {  clearScreen();
                    printAsciiArt();
                    printf("\n");
                    printf("\n");
                    printf("CODE:\n");
                    printf("\n");
                    printf("\n");

                    printf("for( i=1;i<=n;i++)\n");
                    printf("   {\n");
                    printf("        for(j=1;j<=n;j++)\n");
                    printf("           {\n");
                    printf("                printf((\"percentage d \"), j);\n");
                    printf("           }\n");
                    printf("           printf(\"\\n\");\n");
                    printf("   }\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("           This is a number pattern for a square.\n");
                    printf("           The square pattern is a pattern that consists of a square shape and print as the j increases the number.\n");
                    printf("           Logic is similiar to square star pattern\n");
                    printf("\n");
                    printf("\n");



                    printf("1.\n");
                    printf("           FOR Example, n = 4\n");
                    printf("                      |-j(1)-|-------------|-j(n)-| \n");
                    printf("           i = 1      |[j1(1)| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 2      |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("           i = 3      |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("\n");
                    printf("\n");

                    printf("2.\n");
                    printf("\n");
                    printf("                      |-j(1)-|-------------|-j(n)-| \n");
                    printf("           i = 1      |[j1(1)| j2(2) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 2      |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("           i = 3      |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("\n");
                    printf("3.\n");
                    printf("\n");

                    printf("                      |-j(1)-|-------------|-j(n)-| \n");
                    printf("           i = 1      |[j1(1)| j2(2) j3(3) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 2      |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("           i = 3      |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");

                    printf("\n");
                    printf("4.\n");
                    printf("\n");

                    printf("                      |-j(1)-|-------------|-j(n)-| \n");
                    printf("           i = 1      |[j1(1)| j2(2) j3(3) |j4(4)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 2      |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("           i = 3      |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");

                    printf("\n");
                    printf("5.\n");
                    printf("\n");

                    printf("                      |-j(1)-|-------------|-j(n)-| \n");
                    printf("           i = 1      |[j1(1)| j2(2) j3(3) |j4(4)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 2      |[j1(1)| j2( ) j3( ) |j4( )]| \n");
                    printf("           i = 3      |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");

                    printf("\n");
                    printf("6.\n");
                    printf("\n");

                    printf("                      |-j(1)-|-------------|-j(n)-| \n");
                    printf("           i = 1      |[j1(1)| j2(2) j3(3) |j4(4)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 2      |[j1(1)| j2(2) j3( ) |j4( )]| \n");
                    printf("           i = 3      |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");

                    printf("\n");
                    printf("7.\n");
                    printf("\n");

                    printf("                      |-j(1)-|-------------|-j(n)-| \n");
                    printf("           i = 1      |[j1(1)| j2(2) j3(3) |j4(4)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 2      |[j1(1)| j2(2) j3(3) |j4( )]| \n");
                    printf("           i = 3      |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");

                    printf("\n");
                    printf("8.\n");
                    printf("\n");

                    printf("                      |-j(1)-|-------------|-j(n)-| \n");
                    printf("           i = 1      |[j1(1)| j2(2) j3(3) |j4(4)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 2      |[j1(1)| j2(2) j3(3) |j4(4)]| \n");
                    printf("           i = 3      |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");

                    printf("\n");
                    printf("9.\n");
                    printf("\n");

                    printf("                      |-j(1)-|-------------|-j(n)-| \n");
                    printf("           i = 1      |[j1(1)| j2(2) j3(3) |j4(4)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 2      |[j1(1)| j2(2) j3(3) |j4(4)]| \n");
                    printf("           i = 3      |[j1(1)| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");

                    printf("\n");
                    printf("10.\n");
                    printf("\n");

                    printf("                      |-j(1)-|-------------|-j(n)-| \n");
                    printf("           i = 1      |[j1(1)| j2(2) j3(3) |j4(4)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 2      |[j1(1)| j2(2) j3(3) |j4(4)]| \n");
                    printf("           i = 3      |[j1(1)| j2(2) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");

                    printf("\n");
                    printf("11.\n");
                    printf("\n");

                    printf("                      |-j(1)-|-------------|-j(n)-| \n");
                    printf("           i = 1      |[j1(1)| j2(2) j3(3) |j4(4)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 2      |[j1(1)| j2(2) j3(3) |j4(4)]| \n");
                    printf("           i = 3      |[j1(1)| j2(2) j3(3) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");

                    printf("\n");
                    printf("12.\n");
                    printf("\n");

                    printf("                      |-j(1)-|-------------|-j(n)-| \n");
                    printf("           i = 1      |[j1(1)| j2(2) j3(3) |j4(4)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 2      |[j1(1)| j2(2) j3(3) |j4(4)]| \n");
                    printf("           i = 3      |[j1(1)| j2(2) j3(3) |j4(4)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");

                    printf("\n");
                    printf("13.\n");
                    printf("\n");

                    printf("                      |-j(1)-|-------------|-j(n)-| \n");
                    printf("           i = 1      |[j1(1)| j2(2) j3(3) |j4(4)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 2      |[j1(1)| j2(2) j3(3) |j4(4)]| \n");
                    printf("           i = 3      |[j1(1)| j2(2) j3(3) |j4(4)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 4(n)   |[j1(1)| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");

                    printf("\n");
                    printf("14.\n");
                    printf("\n");

                    printf("                      |-j(1)-|-------------|-j(n)-| \n");
                    printf("           i = 1      |[j1(1)| j2(2) j3(3) |j4(4)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 2      |[j1(1)| j2(2) j3(3) |j4(4)]| \n");
                    printf("           i = 3      |[j1(1)| j2(2) j3(3) |j4(4)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 4(n)   |[j1(1)| j2(2) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");

                    printf("\n");
                    printf("15.\n");
                    printf("\n");

                    printf("                      |-j(1)-|-------------|-j(n)-| \n");
                    printf("           i = 1      |[j1(1)| j2(2) j3(3) |j4(4)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 2      |[j1(1)| j2(2) j3(3) |j4(4)]| \n");
                    printf("           i = 3      |[j1(1)| j2(2) j3(3) |j4(4)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 4(n)   |[j1(1)| j2(2) j3(3) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");

                    printf("\n");
                    printf("16.\n");
                    printf("\n");

                    printf("                      |-j(1)-|-------------|-j(n)-| \n");
                    printf("           i = 1      |[j1(1)| j2(2) j3(3) |j4(4)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 2      |[j1(1)| j2(2) j3(3) |j4(4)]| \n");
                    printf("           i = 3      |[j1(1)| j2(2) j3(3) |j4(4)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 4(n)   |[j1(1)| j2(2) j3(3) |j4(4)]| \n");
                    printf("                      |------|-------------|------| \n");

                }
                 void nsquare3()
                 {
                    clearScreen();
                    printAsciiArt();
                    printf("\n");
                    printf("\n");
                    printf("CODE:\n");
                    printf("\n");
                    printf("\n");

                    printf("for( i=1;i<=n;i++)\n");
                    printf("{\n");
                    printf("    for(j=1;j<=n;j++)\n");
                    printf("       {\n");
                    printf("          printf((\" percentage d \"), i);\n");
                    printf("       }\n");
                    printf("  printf(\"\\n\");\n");
                    printf("}\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("           This is a number pattern for a square.\n");
                    printf("           The square pattern is a pattern that consists of a square shape and print as the j increases the number.\n");
                    printf("           Logic is similiar to square star pattern\n");
                    printf("\n");
                    printf("\n");
                    printf("1.\n");
                    printf("           FOR Example, n = 4\n");
                    printf("                      |-j(1)-|-------------|-j(n)-| \n");
                    printf("           i = 1      |[j1(1)| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 2      |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("           i = 3      |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("\n");
                    printf("\n");
                    printf("2.\n");
                    printf("\n");
                    printf("                      |-j(1)-|-------------|-j(n)-| \n");
                    printf("           i = 1      |[j1(1)| j2(1) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 2      |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("           i = 3      |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("\n");
                    printf("3.\n");
                    printf("\n");

                    printf("                      |-j(1)-|-------------|-j(n)-| \n");
                    printf("           i = 1      |[j1(1)| j2(1) j3(1) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 2      |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("           i = 3      |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");

                    printf("\n");
                    printf("4.\n");
                    printf("\n");

                    printf("                      |-j(1)-|-------------|-j(n)-| \n");
                    printf("           i = 1      |[j1(1)| j2(1) j3(1) |j4(1)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 2      |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("           i = 3      |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");

                    printf("\n");
                    printf("5.\n");
                    printf("\n");

                    printf("                      |-j(1)-|-------------|-j(n)-| \n");
                    printf("           i = 1      |[j1(1)| j2(1) j3(1) |j4(1)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 2      |[j1(2)| j2( ) j3( ) |j4( )]| \n");
                    printf("           i = 3      |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");

                    printf("\n");
                    printf("6.\n");
                    printf("\n");

                    printf("                      |-j(1)-|-------------|-j(n)-| \n");
                    printf("           i = 1      |[j1(1)| j2(1) j3(1) |j4(1)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 2      |[j1(2)| j2(2) j3( ) |j4( )]| \n");
                    printf("           i = 3      |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");

                    printf("\n");
                    printf("7.\n");
                    printf("\n");

                    printf("                      |-j(1)-|-------------|-j(n)-| \n");
                    printf("           i = 1      |[j1(1)| j2(1) j3(1) |j4(1)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 2      |[j1(2)| j2(2) j3(2) |j4( )]| \n");
                    printf("           i = 3      |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");

                    printf("\n");
                    printf("8.\n");
                    printf("\n");

                    printf("                      |-j(1)-|-------------|-j(n)-| \n");
                    printf("           i = 1      |[j1(1)| j2(1) j3(1) |j4(1)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 2      |[j1(2)| j2(2) j3(2) |j4(2)]| \n");
                    printf("           i = 3      |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");

                    printf("\n");
                    printf("9.\n");
                    printf("\n");

                    printf("                      |-j(1)-|-------------|-j(n)-| \n");
                    printf("           i = 1      |[j1(1)| j2(1) j3(1) |j4(1)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 2      |[j1(2)| j2(2) j3(2) |j4(2)]| \n");
                    printf("           i = 3      |[j1(3)| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");

                    printf("\n");
                    printf("10.\n");
                    printf("\n");

                    printf("                      |-j(1)-|-------------|-j(n)-| \n");
                    printf("           i = 1      |[j1(1)| j2(1) j3(1) |j4(1)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 2      |[j1(2)| j2(2) j3(2) |j4(2)]| \n");
                    printf("           i = 3      |[j1(3)| j2(3) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");

                    printf("\n");
                    printf("11.\n");
                    printf("\n");

                    printf("                      |-j(1)-|-------------|-j(n)-| \n");
                    printf("           i = 1      |[j1(1)| j2(1) j3(1) |j4(1)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 2      |[j1(2)| j2(2) j3(2) |j4(2)]| \n");
                    printf("           i = 3      |[j1(3)| j2(3) j3(3) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");

                    printf("\n");
                    printf("12.\n");
                    printf("\n");

                    printf("                      |-j(1)-|-------------|-j(n)-| \n");
                    printf("           i = 1      |[j1(1)| j2(1) j3(1) |j4(1)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 2      |[j1(2)| j2(2) j3(2) |j4(2)]| \n");
                    printf("           i = 3      |[j1(3)| j2(3) j3(3) |j4(3)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");

                    printf("\n");
                    printf("13.\n");
                    printf("\n");

                    printf("                      |-j(1)-|-------------|-j(n)-| \n");
                    printf("           i = 1      |[j1(1)| j2(1) j3(1) |j4(1)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 2      |[j1(2)| j2(2) j3(2) |j4(2)]| \n");
                    printf("           i = 3      |[j1(3)| j2(3) j3(3) |j4(3)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 4(n)   |[j1(4)| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");

                    printf("\n");
                    printf("14.\n");
                    printf("\n");

                    printf("                      |-j(1)-|-------------|-j(n)-| \n");
                    printf("           i = 1      |[j1(1)| j2(1) j3(1) |j4(1)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 2      |[j1(2)| j2(2) j3(2) |j4(2)]| \n");
                    printf("           i = 3      |[j1(3)| j2(3) j3(3) |j4(3)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 4(n)   |[j1(4)| j2(4) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");

                    printf("\n");
                    printf("15.\n");
                    printf("\n");

                    printf("                      |-j(1)-|-------------|-j(n)-| \n");
                    printf("           i = 1      |[j1(1)| j2(1) j3(1) |j4(1)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 2      |[j1(2)| j2(2) j3(2) |j4(2)]| \n");
                    printf("           i = 3      |[j1(3)| j2(3) j3(3) |j4(3)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 4(n)   |[j1(4)| j2(4) j3(4) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");

                    printf("\n");
                    printf("16.\n");
                    printf("\n");

                    printf("                      |-j(1)-|-------------|-j(n)-| \n");
                    printf("           i = 1      |[j1(1)| j2(1) j3(1) |j4(1)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 2      |[j1(2)| j2(2) j3(2) |j4(2)]| \n");
                    printf("           i = 3      |[j1(3)| j2(3) j3(3) |j4(3)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 4(n)   |[j1(4)| j2(4) j3(4) |j4(4)]| \n");
                    printf("                      |------|-------------|------| \n");
                 }



 void alphabetssquare()
 { printf("\n\n     Selected Alphabets Square.\n\n\n");}
                 void asquare1()
                 {  clearScreen();
                    printAsciiArt();
                    printf("\n");
                    printf("\n");
                    printf("CODE:\n");
                    printf("\n");
                    printf("\n");

                    printf("for( i=1;i<=n;i++)\n");
                    printf(" {\n");
                    printf("     alphabets = 'A';\n");
                    printf("     for(j=1;j<=n;j++)\n");
                    printf("        {\n");
                    printf("            printf(\"percentage c\", alphabets);\n");
                    printf("            alphabets++;\n");
                    printf("        }\n");
                    printf("     printf(\"\\n\");\n");
                    printf(" }\n");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    printf("           This is a alphabet pattern for a square.\n");
                    printf("           The square pattern is a pattern that consists of a square shape and print alphabets in row wise serials.\n");
                    printf("           Logic is similiar to square star pattern\n");
                    printf("\n");
                    printf("\n");



                    printf("1.\n");
                    printf("           FOR Example, n = 4\n");
                    printf("                      |-j(1)-|-------------|-j(n)-| \n");
                    printf("           i = 1      |[j1(A)| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 2      |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("           i = 3      |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("\n");
                    printf("\n");

                    printf("2.\n");
                    printf("\n");
                    printf("                      |-j(1)-|-------------|-j(n)-| \n");
                    printf("           i = 1      |[j1(A)| j2(B) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 2      |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("           i = 3      |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("\n");
                    printf("3.\n");
                    printf("\n");

                    printf("                      |-j(1)-|-------------|-j(n)-| \n");
                    printf("           i = 1      |[j1(A)| j2(B) j3(C) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 2      |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("           i = 3      |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("           |------|-------------|------| \n");

                    printf("\n");
                    printf("4.\n");
                    printf("\n");

                    printf("                      |-j(1)-|-------------|-j(n)-| \n");
                    printf("           i = 1      |[j1(A)| j2(B) j3(C) |j4(D)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 2      |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("           i = 3      |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");

                    printf("\n");
                    printf("5.\n");
                    printf("\n");

                    printf("                      |-j(1)-|-------------|-j(n)-| \n");
                    printf("           i = 1      |[j1(A)| j2(B) j3(C) |j4(D)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 2      |[j1(A)| j2( ) j3( ) |j4( )]| \n");
                    printf("           i = 3      |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");

                    printf("\n");
                    printf("6.\n");
                    printf("\n");

                    printf("                      |-j(1)-|-------------|-j(n)-| \n");
                    printf("           i = 1      |[j1(A)| j2(B) j3(C) |j4(D)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 2      |[j1(A)| j2(B) j3( ) |j4( )]| \n");
                    printf("           i = 3      |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");

                    printf("\n");
                    printf("7.\n");
                    printf("\n");

                    printf("                      |-j(1)-|-------------|-j(n)-| \n");
                    printf("           i = 1      |[j1(A)| j2(B) j3(C) |j4(D)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 2      |[j1(A)| j2(B) j3(C) |j4( )]| \n");
                    printf("           i = 3      |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");

                    printf("\n");
                    printf("8.\n");
                    printf("\n");

                    printf("                      |-j(1)-|-------------|-j(n)-| \n");
                    printf("           i = 1      |[j1(A)| j2(B) j3(C) |j4(D)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 2      |[j1(A)| j2(B) j3(C) |j4(D)]| \n");
                    printf("           i = 3      |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");

                    printf("\n");
                    printf("9.\n");
                    printf("\n");

                    printf("                      |-j(1)-|-------------|-j(n)-| \n");
                    printf("           i = 1      |[j1(A)| j2(B) j3(C) |j4(D)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 2      |[j1(A)| j2(B) j3(C) |j4(D)]| \n");
                    printf("           i = 3      |[j1(A)| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");

                    printf("\n");
                    printf("10.\n");
                    printf("\n");

                    printf("                      |-j(1)-|-------------|-j(n)-| \n");
                    printf("           i = 1      |[j1(A)| j2(B) j3(C) |j4(D)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 2      |[j1(A)| j2(B) j3(C) |j4(D)]| \n");
                    printf("           i = 3      |[j1(A)| j2(B) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");

                    printf("\n");
                    printf("11.\n");
                    printf("\n");

                    printf("                      |-j(1)-|-------------|-j(n)-| \n");
                    printf("           i = 1      |[j1(A)| j2(B) j3(C) |j4(D)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 2      |[j1(A)| j2(B) j3(C) |j4(D)]| \n");
                    printf("           i = 3      |[j1(A)| j2(B) j3(C) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");

                    printf("\n");
                    printf("12.\n");
                    printf("\n");

                    printf("                      |-j(1)-|-------------|-j(n)-| \n");
                    printf("           i = 1      |[j1(A)| j2(B) j3(C) |j4(D)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 2      |[j1(A)| j2(B) j3(C) |j4(D)]| \n");
                    printf("           i = 3      |[j1(A)| j2(B) j3(C) |j4(D)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");

                    printf("\n");
                    printf("13.\n");
                    printf("\n");

                    printf("                      |-j(1)-|-------------|-j(n)-| \n");
                    printf("           i = 1      |[j1(A)| j2(B) j3(C) |j4(D)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 2      |[j1(A)| j2(B) j3(C) |j4(D)]| \n");
                    printf("           i = 3      |[j1(A)| j2(B) j3(C) |j4(D)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 4(n)   |[j1(A)| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");

                    printf("\n");
                    printf("14.\n");
                    printf("\n");

                    printf("                      |-j(1)-|-------------|-j(n)-| \n");
                    printf("           i = 1      |[j1(A)| j2(B) j3(C) |j4(D)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 2      |[j1(A)| j2(B) j3(C) |j4(D)]| \n");
                    printf("           i = 3      |[j1(A)| j2(B) j3(C) |j4(D)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 4(n)   |[j1(A)| j2(B) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");

                    printf("\n");
                    printf("15.\n");
                    printf("\n");

                    printf("                      |-j(1)-|-------------|-j(n)-| \n");
                    printf("           i = 1      |[j1(A)| j2(B) j3(C) |j4(D)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 2      |[j1(A)| j2(B) j3(C) |j4(D)]| \n");
                    printf("           i = 3      |[j1(A)| j2(B) j3(C) |j4(D)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 4(n)   |[j1(A)| j2(B) j3(C) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");

                    printf("\n");
                    printf("16.\n");
                    printf("\n");

                    printf("                      |-j(1)-|-------------|-j(n)-| \n");
                    printf("           i = 1      |[j1(A)| j2(B) j3(C) |j4(D)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 2      |[j1(A)| j2(B) j3(C) |j4(D)]| \n");
                    printf("           i = 3      |[j1(A)| j2(B) j3(C) |j4(D)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 4(n)   |[j1(A)| j2(B) j3(C) |j4(D)]| \n");
                    printf("                      |------|-------------|------| \n");
                }
                 void asquare2()
                 {  clearScreen();
                    printAsciiArt();
                    printf("\n");
                    printf("\n");
                    printf("           This is a alphabet pattern for a square.\n");
                    printf("           The square pattern is a pattern that consists of a square shape and print alphabets in column wise serials.\n");
                    printf("           Logic is similiar to square star pattern\n");
                    printf("\n");
                    printf("\n");



                    printf("1.\n");
                    printf("           FOR Example, n = 4\n");
                    printf("                      |-j(1)-|-------------|-j(n)-| \n");
                    printf("           i = 1      |[j1(A)| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 2      |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("           i = 3      |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("\n");
                    printf("\n");

                    printf("2.\n");
                    printf("\n");
                    printf("                      |-j(1)-|-------------|-j(n)-| \n");
                    printf("           i = 1      |[j1(A)| j2(A) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 2      |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("           i = 3      |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("\n");
                    printf("3.\n");
                    printf("\n");

                    printf("                      |-j(1)-|-------------|-j(n)-| \n");
                    printf("           i = 1      |[j1(A)| j2(A) j3(A) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 2      |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("           i = 3      |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");

                    printf("\n");
                    printf("4.\n");
                    printf("\n");

                    printf("                      |-j(1)-|-------------|-j(n)-| \n");
                    printf("           i = 1      |[j1(A)| j2(A) j3(A) |j4(A)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 2      |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("           i = 3      |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");

                    printf("\n");
                    printf("5.\n");
                    printf("\n");

                    printf("                      |-j(1)-|-------------|-j(n)-| \n");
                    printf("           i = 1      |[j1(A)| j2(A) j3(A) |j4(A)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 2      |[j1(B)| j2( ) j3( ) |j4( )]| \n");
                    printf("           i = 3      |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");

                    printf("\n");
                    printf("6.\n");
                    printf("\n");

                    printf("                      |-j(1)-|-------------|-j(n)-| \n");
                    printf("           i = 1      |[j1(A)| j2(A) j3(A) |j4(A)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 2      |[j1(B)| j2(B) j3( ) |j4( )]| \n");
                    printf("           i = 3      |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");

                    printf("\n");
                    printf("7.\n");
                    printf("\n");

                    printf("                      |-j(1)-|-------------|-j(n)-| \n");
                    printf("           i = 1      |[j1(A)| j2(A) j3(A) |j4(A)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 2      |[j1(B)| j2(B) j3(B) |j4( )]| \n");
                    printf("           i = 3      |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");

                    printf("\n");
                    printf("8.\n");
                    printf("\n");

                    printf("                      |-j(1)-|-------------|-j(n)-| \n");
                    printf("           i = 1      |[j1(A)| j2(A) j3(A) |j4(A)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 2      |[j1(B)| j2(B) j3(B) |j4(B)]| \n");
                    printf("           i = 3      |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");

                    printf("\n");
                    printf("9.\n");
                    printf("\n");

                    printf("                      |-j(1)-|-------------|-j(n)-| \n");
                    printf("           i = 1      |[j1(A)| j2(A) j3(A) |j4(A)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 2      |[j1(B)| j2(B) j3(B) |j4(B)]| \n");
                    printf("           i = 3      |[j1(C)| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");

                    printf("\n");
                    printf("10.\n");
                    printf("\n");

                    printf("                      |-j(1)-|-------------|-j(n)-| \n");
                    printf("           i = 1      |[j1(A)| j2(A) j3(A) |j4(A)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 2      |[j1(B)| j2(B) j3(B) |j4(B)]| \n");
                    printf("           i = 3      |[j1(C)| j2(C) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");

                    printf("\n");
                    printf("11.\n");
                    printf("\n");

                    printf("                      |-j(1)-|-------------|-j(n)-| \n");
                    printf("           i = 1      |[j1(A)| j2(A) j3(A) |j4(A)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 2      |[j1(B)| j2(B) j3(B) |j4(B)]| \n");
                    printf("           i = 3      |[j1(C)| j2(C) j3(C) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");

                    printf("\n");
                    printf("12.\n");
                    printf("\n");

                    printf("                      |-j(1)-|-------------|-j(n)-| \n");
                    printf("           i = 1      |[j1(A)| j2(A) j3(A) |j4(A)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 2      |[j1(B)| j2(B) j3(B) |j4(B)]| \n");
                    printf("           i = 3      |[j1(C)| j2(C) j3(C) |j4(C)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");

                    printf("\n");
                    printf("13.\n");
                    printf("\n");

                    printf("                      |-j(1)-|-------------|-j(n)-| \n");
                    printf("           i = 1      |[j1(A)| j2(A) j3(A) |j4(A)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 2      |[j1(B)| j2(B) j3(B) |j4(B)]| \n");
                    printf("           i = 3      |[j1(C)| j2(C) j3(C) |j4(C)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 4(n)   |[j1(D)| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");

                    printf("\n");
                    printf("14.\n");
                    printf("\n");

                    printf("                      |-j(1)-|-------------|-j(n)-| \n");
                    printf("           i = 1      |[j1(A)| j2(A) j3(A) |j4(A)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 2      |[j1(B)| j2(B) j3(B) |j4(B)]| \n");
                    printf("           i = 3      |[j1(C)| j2(C) j3(C) |j4(C)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 4(n)   |[j1(D)| j2(D) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");

                    printf("\n");
                    printf("15.\n");
                    printf("\n");

                    printf("                      |-j(1)-|-------------|-j(n)-| \n");
                    printf("           i = 1      |[j1(A)| j2(A) j3(A) |j4(A)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 2      |[j1(B)| j2(B) j3(B) |j4(B)]| \n");
                    printf("           i = 3      |[j1(C)| j2(C) j3(C) |j4(C)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 4(n)   |[j1(D)| j2(D) j3(D) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");

                    printf("\n");
                    printf("16.\n");
                    printf("\n");

                    printf("                      |-j(1)-|-------------|-j(n)-| \n");
                    printf("           i = 1      |[j1(A)| j2(A) j3(A) |j4(A)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 2      |[j1(B)| j2(B) j3(B) |j4(B)]| \n");
                    printf("           i = 3      |[j1(C)| j2(C) j3(C) |j4(C)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 4(n)   |[j1(D)| j2(D) j3(D) |j4(D)]| \n");
                    printf("                      |------|-------------|------| \n");}
                 void asquare3()
                 {
                    clearScreen();
                    printAsciiArt();
                    printf("\n");
                    printf("\n");
                    printf("CODE:\n");
                    printf("\n");
                    printf("\n");

                    printf("alphabets = 'A';\n");
                    printf("\n");
                    printf("\n");


                    printf("for( i=1;i<=n;i++)\n");
                    printf("   {\n");
                    printf("       for(j=1;j<=n;j++)\n");
                    printf("          {\n");
                    printf("              printf(\"percentage c\", alphabets);\n");
                    printf("              alphabets++;\n");
                    printf("          }\n");
                    printf("      printf(\"\\n\");\n");
                    printf("    }\n");
                    printf("\n");

                    printf("\n");
                    printf("\n");
                    printf("           This is a alphabet pattern for a square.\n");
                    printf("           The square pattern is a pattern that consists of a square shape and print alphabets in serials.\n");
                    printf("           Logic is similiar to square star pattern\n");
                    printf("\n");
                    printf("\n");



                    printf("1.\n");
                    printf("           FOR Example, n = 4\n");
                    printf("                      |-j(1)-|-------------|-j(n)-| \n");
                    printf("           i = 1      |[j1(A)| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 2      |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("           i = 3      |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("\n");
                    printf("\n");

                    printf("2.\n");
                    printf("\n");
                    printf("                      |-j(1)-|-------------|-j(n)-| \n");
                    printf("           i = 1      |[j1(A)| j2(B) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 2      |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("           i = 3      |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("\n");
                    printf("3.\n");
                    printf("\n");

                    printf("                      |-j(1)-|-------------|-j(n)-| \n");
                    printf("           i = 1      |[j1(A)| j2(B) j3(C) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 2      |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("           i = 3      |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");

                    printf("\n");
                    printf("4.\n");
                    printf("\n");

                    printf("                      |-j(1)-|-------------|-j(n)-| \n");
                    printf("           i = 1      |[j1(A)| j2(B) j3(C) |j4(D)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 2      |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("           i = 3      |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");

                    printf("\n");
                    printf("5.\n");
                    printf("\n");

                    printf("                      |-j(1)-|-------------|-j(n)-| \n");
                    printf("           i = 1      |[j1(A)| j2(B) j3(C) |j4(D)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 2      |[j1(E)| j2( ) j3( ) |j4( )]| \n");
                    printf("           i = 3      |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");

                    printf("\n");
                    printf("6.\n");
                    printf("\n");

                    printf("                      |-j(1)-|-------------|-j(n)-| \n");
                    printf("           i = 1      |[j1(A)| j2(B) j3(C) |j4(D)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 2      |[j1(E)| j2(F) j3( ) |j4( )]| \n");
                    printf("           i = 3      |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");

                    printf("\n");
                    printf("7.\n");
                    printf("\n");

                    printf("                      |-j(1)-|-------------|-j(n)-| \n");
                    printf("           i = 1      |[j1(A)| j2(B) j3(C) |j4(D)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 2      |[j1(E)| j2(F) j3(G) |j4( )]| \n");
                    printf("           i = 3      |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");

                    printf("\n");
                    printf("8.\n");
                    printf("\n");

                    printf("                      |-j(1)-|-------------|-j(n)-| \n");
                    printf("           i = 1      |[j1(A)| j2(B) j3(C) |j4(D)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 2      |[j1(E)| j2(F) j3(G) |j4(H)]| \n");
                    printf("           i = 3      |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");

                    printf("\n");
                    printf("9.\n");
                    printf("\n");

                    printf("                      |-j(1)-|-------------|-j(n)-| \n");
                    printf("           i = 1      |[j1(A)| j2(B) j3(C) |j4(D)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 2      |[j1(E)| j2(F) j3(G) |j4(H)]| \n");
                    printf("           i = 3      |[j1(I)| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");

                    printf("\n");
                    printf("10.\n");
                    printf("\n");

                    printf("                      |-j(1)-|-------------|-j(n)-| \n");
                    printf("           i = 1      |[j1(A)| j2(B) j3(C) |j4(D)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 2      |[j1(E)| j2(F) j3(G) |j4(H)]| \n");
                    printf("           i = 3      |[j1(I)| j2(J) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");

                    printf("\n");
                    printf("11.\n");
                    printf("\n");

                    printf("                      |-j(1)-|-------------|-j(n)-| \n");
                    printf("           i = 1      |[j1(A)| j2(B) j3(C) |j4(D)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 2      |[j1(E)| j2(F) j3(G) |j4(H)]| \n");
                    printf("           i = 3      |[j1(I)| j2(J) j3(K) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");

                    printf("\n");
                    printf("12.\n");
                    printf("\n");

                    printf("                      |-j(1)-|-------------|-j(n)-| \n");
                    printf("           i = 1      |[j1(A)| j2(B) j3(C) |j4(D)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 2      |[j1(E)| j2(F) j3(G) |j4(H)]| \n");
                    printf("           i = 3      |[j1(I)| j2(J) j3(K) |j4(L)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 4(n)   |[j1( )| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");

                    printf("\n");
                    printf("13.\n");
                    printf("\n");

                    printf("                      |-j(1)-|-------------|-j(n)-| \n");
                    printf("           i = 1      |[j1(A)| j2(B) j3(C) |j4(D)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 2      |[j1(E)| j2(F) j3(G) |j4(H)]| \n");
                    printf("           i = 3      |[j1(I)| j2(J) j3(K) |j4(L)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 4(n)   |[j1(M)| j2( ) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");

                    printf("\n");
                    printf("14.\n");
                    printf("\n");

                    printf("                      |-j(1)-|-------------|-j(n)-| \n");
                    printf("           i = 1      |[j1(A)| j2(B) j3(C) |j4(D)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 2      |[j1(E)| j2(F) j3(G) |j4(H)]| \n");
                    printf("           i = 3      |[j1(I)| j2(J) j3(K) |j4(L)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 4(n)   |[j1(M)| j2(N) j3( ) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");

                    printf("\n");
                    printf("15.\n");
                    printf("\n");

                    printf("                      |-j(1)-|-------------|-j(n)-| \n");
                    printf("           i = 1      |[j1(A)| j2(B) j3(C) |j4(D)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 2      |[j1(E)| j2(F) j3(G) |j4(H)]| \n");
                    printf("           i = 3      |[j1(I)| j2(J) j3(K) |j4(L)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 4(n)   |[j1(M)| j2(N) j3(O) |j4( )]| \n");
                    printf("                      |------|-------------|------| \n");

                    printf("\n");
                    printf("16.\n");
                    printf("\n");

                    printf("                      |-j(1)-|-------------|-j(n)-| \n");
                    printf("           i = 1      |[j1(A)| j2(B) j3(C) |j4(D)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 2      |[j1(E)| j2(F) j3(G) |j4(H)]| \n");
                    printf("           i = 3      |[j1(I)| j2(J) j3(K) |j4(L)]| \n");
                    printf("                      |------|-------------|------| \n");
                    printf("           i = 4(n)   |[j1(M)| j2(N) j3(O) |j4(P)]| \n");
                    printf("                      |------|-------------|------| \n");
                }








void starpattern() {
    int level;
    int sublevel;

    while (1) {
        clearScreen();
        printAsciiArt();

        printf("\n\nYou have selected Star pattern.\n\n");
        printf("     1. Level 1\n\n");
        printf("     2. Level 2\n\n");
        printf("     3. Level 3\n\n");
        printf("     4. Back\n\n");
        printf("     Enter your choice: ");
        scanf("%d", &level);
        while ((getchar()) != '\n');

        printf("\n");

        if (level == 1) {
            printf("     Selected Level One\n\n");
            printf("     1. Star Square\n\n");
            printf("     2. Star Triangle\n\n");
            printf("     3. Back\n\n");
            printf("     Enter your choice: ");
            scanf("%d", &sublevel);
            while ((getchar()) != '\n');

            if (sublevel == 1)
                starsquare();
            else if (sublevel == 2)
                startriangle();
            else if (sublevel == 3)
                continue;
            else
                printf("Invalid Bro\n");

        } else if (level == 2) {
            printf("     Selected Level Two\n\n");
            printf("     1. Star Rectangle\n\n");
            printf("     2. Back\n\n");
            printf("     Enter your choice: ");
            scanf("%d", &sublevel);
            while ((getchar()) != '\n');

            if (sublevel == 1)
                starrectangle();
            else if (sublevel == 2)
                continue;
            else
                printf("Invalid Bro\n");

        } else if (level == 3) {
            printf("     Selected Level Three\n\n");
            printf("     1. Star Pyramid\n\n");
            printf("     2. Star Diamond\n\n");
            printf("     3. Back\n\n");
            printf("     Enter your choice: ");
            scanf("%d", &sublevel);
            while ((getchar()) != '\n');

            if (sublevel == 1)
                starpyramid();
            else if (sublevel == 2)
                stardiamond();
            else if (sublevel == 3)
                continue;
            else
                printf("Invalid Bro\n");

        } else if (level == 4) {
            break;
        } else {
            printf("     Invalid Number Bruh!!!\n\n");
        }

        printf("\n     Press Enter to Continue...T-T\n");
        getchar();
    }
}


void numberpattern()
{ int number;



  while(1)
  {
  clearScreen();
  printAsciiArt();
  printf("\n\n\n\n");
  printf("You have selected Number pattern.\n\n\n");
  printf("     1. nSquare1\n\n     2. nSquare2 \n\n     3. nSquare3\n\n     4. Back\n\n");
  printf("     Enter your choice:  ");
  scanf("%d",&number);
  printf("\n\n");

  switch(number)
  {
    case 1:
    nsquare1();
    break;
    case 2:
    nsquare2();
    break;
    case 3:
    nsquare3();
    break;
    case 4:
    return;
    default:
    printf("     Invalid Number Bruh!!!\n\n");

  }
    printf("\n     Press Enter to Continue...T-T\n");
    getchar();
    getchar();

  }



}

void alphabetspattern()
{ int alphabets;
    printf("\n\n\n\n");

    while(1)
    {
        clearScreen();
        printAsciiArt();
        printf("\n\n\n\n");
        printf("     You have selected Alphabets pattern.\n\n\n");
        printf("     1. aSquare1 \n\n     2. aSquare2 \n\n     3. aSquare3\n\n     4. Back\n\n");
        printf("     Enter your choice:  ");
        scanf("%d",&alphabets);
        printf("\n\n");

        switch(alphabets)
        {
          case 1:
          asquare1();
          break;
          case 2:
          asquare2();
          break;
          case 3:
          asquare3();
          break;
          case 4:
          return;

          default:
          printf("     Invalid Choice Bruh!!!\n\n");

        }

        printf("\n     Press Enter to Continue...T-T\n");
        getchar();
        getchar();

    }



}



int main()

{
    int rolechoice;

    home();

    while(1)
    {
        clearScreen();
        printAsciiArt();
        printf("\n\n\n\n");
        printf("     1. Stars (*,+)\n");
        printf("\n");
        printf("\n");
        printf("     2. Number (1,2,3) \n");
        printf("\n");
        printf("\n");
        printf("     3. Alphabets (A,B,C,D)\n");
        printf("\n");
        printf("\n");
        printf("     4. Exit  \n");
        printf("\n");
        printf("\n");
        printf("     Enter your choice:  ");
        scanf("%d", &rolechoice);
        switch (rolechoice)
        {
            case 1:
                starpattern();

                 break;

            case 2:
                numberpattern();

                 break;
            case 3:
                alphabetspattern();

                 break;


            case 4:
                 printf("\n\n     EXITING PROGRAM.  BYE BYE \\(-_-)/\n\n");
                 printf("\n\n");

                  return 0;
            default:
                 printf("     Invalid choice! Please try again. \n");
                 printf("\n");
                 printf("     I belive you can do it!!\n");
                 printf("\n");
                 printf("     Press Enter to continue!\n");
                 getch();
        }


    }



}
