#include <stdio.h>
#include <string.h>
#include "colored_msg.h"

void make_line(char *color) {
    printf("| ");
    printf("%s%s%s | ", RESET_STYLE, color, "Default" RESET_STYLE);
    printf("%s%s%s | ", BOLD, color, "Bold" RESET_STYLE);
    printf("%s%s%s | ", ITALIC, color, "Italic" RESET_STYLE);
    printf("%s%s%s | ", UNDERLINE, color, "Underline" RESET_STYLE);
    printf("%s%s%s | ", BOLD ITALIC, color, "Bold Italic" RESET_STYLE);
    printf("%s%s%s | ", BOLD UNDERLINE, color, "Bold Underline" RESET_STYLE);
    printf("%s%s%s | ", ITALIC UNDERLINE, color, "Italic Underline" RESET_STYLE);
    printf("%s%s%s | ", BOLD ITALIC UNDERLINE, color, "Bold Italic Underline" RESET_STYLE);
    printf("\n");
}

int main(void) {

    printf("\n");
    make_line(RESET_STYLE);
    make_line(T_BLACK);
    make_line(T_LBLACK);
    make_line(T_YELLOW);
    make_line(T_LYELLOW);
    make_line(T_GREEN);
    make_line(T_LGREEN);
    make_line(T_RED);
    make_line(T_LRED);
    make_line(T_BLUE);
    make_line(T_LBLUE);
    make_line(T_MAGENTA);
    make_line(T_LMAGENTA);
    make_line(T_CYAN);
    make_line(T_LCYAN);
    make_line(T_WHITE);
    make_line(T_LWHITE);

    printf("\n");
    make_line(BG_BLACK);
    make_line(BG_LBLACK);
    make_line(BG_YELLOW);
    make_line(BG_LYELLOW);
    make_line(BG_GREEN);
    make_line(BG_LGREEN);
    make_line(BG_RED);
    make_line(BG_LRED);
    make_line(BG_BLUE);
    make_line(BG_LBLUE);
    make_line(BG_MAGENTA);
    make_line(BG_LMAGENTA);
    make_line(BG_CYAN);
    make_line(BG_LCYAN);
    make_line(BG_WHITE);
    make_line(BG_LWHITE);
    
    printf("\n");
    make_line(BG_BLACK);
    make_line(BG_BLACK T_BLACK);
    make_line(BG_BLACK T_LBLACK);
    make_line(BG_BLACK T_YELLOW);
    make_line(BG_BLACK T_LYELLOW);
    make_line(BG_BLACK T_GREEN);
    make_line(BG_BLACK T_LGREEN);
    make_line(BG_BLACK T_RED);
    make_line(BG_BLACK T_LRED);
    make_line(BG_BLACK T_BLUE);
    make_line(BG_BLACK T_LBLUE);
    make_line(BG_BLACK T_MAGENTA);
    make_line(BG_BLACK T_LMAGENTA);
    make_line(BG_BLACK T_CYAN);
    make_line(BG_BLACK T_LCYAN);
    make_line(BG_BLACK T_WHITE);
    make_line(BG_BLACK T_LWHITE);
    
    printf("\n");
    make_line(BG_LBLACK);
    make_line(BG_LBLACK T_BLACK);
    make_line(BG_LBLACK T_LBLACK);
    make_line(BG_LBLACK T_YELLOW);
    make_line(BG_LBLACK T_LYELLOW);
    make_line(BG_LBLACK T_GREEN);
    make_line(BG_LBLACK T_LGREEN);
    make_line(BG_LBLACK T_RED);
    make_line(BG_LBLACK T_LRED);
    make_line(BG_LBLACK T_BLUE);
    make_line(BG_LBLACK T_LBLUE);
    make_line(BG_LBLACK T_MAGENTA);
    make_line(BG_LBLACK T_LMAGENTA);
    make_line(BG_LBLACK T_CYAN);
    make_line(BG_LBLACK T_LCYAN);
    make_line(BG_LBLACK T_WHITE);
    make_line(BG_LBLACK T_LWHITE);
    
    printf("\n");
    make_line(BG_YELLOW);
    make_line(BG_YELLOW T_BLACK);
    make_line(BG_YELLOW T_LBLACK);
    make_line(BG_YELLOW T_YELLOW);
    make_line(BG_YELLOW T_LYELLOW);
    make_line(BG_YELLOW T_GREEN);
    make_line(BG_YELLOW T_LGREEN);
    make_line(BG_YELLOW T_RED);
    make_line(BG_YELLOW T_LRED);
    make_line(BG_YELLOW T_BLUE);
    make_line(BG_YELLOW T_LBLUE);
    make_line(BG_YELLOW T_MAGENTA);
    make_line(BG_YELLOW T_LMAGENTA);
    make_line(BG_YELLOW T_CYAN);
    make_line(BG_YELLOW T_LCYAN);
    make_line(BG_YELLOW T_WHITE);
    make_line(BG_YELLOW T_LWHITE);
    
    printf("\n");
    make_line(BG_LYELLOW);
    make_line(BG_LYELLOW T_BLACK);
    make_line(BG_LYELLOW T_LBLACK);
    make_line(BG_LYELLOW T_YELLOW);
    make_line(BG_LYELLOW T_LYELLOW);
    make_line(BG_LYELLOW T_GREEN);
    make_line(BG_LYELLOW T_LGREEN);
    make_line(BG_LYELLOW T_RED);
    make_line(BG_LYELLOW T_LRED);
    make_line(BG_LYELLOW T_BLUE);
    make_line(BG_LYELLOW T_LBLUE);
    make_line(BG_LYELLOW T_MAGENTA);
    make_line(BG_LYELLOW T_LMAGENTA);
    make_line(BG_LYELLOW T_CYAN);
    make_line(BG_LYELLOW T_LCYAN);
    make_line(BG_LYELLOW T_WHITE);
    make_line(BG_LYELLOW T_LWHITE);

    printf("\n");
    make_line(BG_GREEN);
    make_line(BG_GREEN T_BLACK);
    make_line(BG_GREEN T_LBLACK);
    make_line(BG_GREEN T_YELLOW);
    make_line(BG_GREEN T_LYELLOW);
    make_line(BG_GREEN T_GREEN);
    make_line(BG_GREEN T_LGREEN);
    make_line(BG_GREEN T_RED);
    make_line(BG_GREEN T_LRED);
    make_line(BG_GREEN T_BLUE);
    make_line(BG_GREEN T_LBLUE);
    make_line(BG_GREEN T_MAGENTA);
    make_line(BG_GREEN T_LMAGENTA);
    make_line(BG_GREEN T_CYAN);
    make_line(BG_GREEN T_LCYAN);
    make_line(BG_GREEN T_WHITE);
    make_line(BG_GREEN T_LWHITE);
    
    printf("\n");
    make_line(BG_LGREEN);
    make_line(BG_LGREEN T_BLACK);
    make_line(BG_LGREEN T_LBLACK);
    make_line(BG_LGREEN T_YELLOW);
    make_line(BG_LGREEN T_LYELLOW);
    make_line(BG_LGREEN T_GREEN);
    make_line(BG_LGREEN T_LGREEN);
    make_line(BG_LGREEN T_RED);
    make_line(BG_LGREEN T_LRED);
    make_line(BG_LGREEN T_BLUE);
    make_line(BG_LGREEN T_LBLUE);
    make_line(BG_LGREEN T_MAGENTA);
    make_line(BG_LGREEN T_LMAGENTA);
    make_line(BG_LGREEN T_CYAN);
    make_line(BG_LGREEN T_LCYAN);
    make_line(BG_LGREEN T_WHITE);
    make_line(BG_LGREEN T_LWHITE);

    printf("\n");
    make_line(BG_RED);
    make_line(BG_RED T_BLACK);
    make_line(BG_RED T_LBLACK);
    make_line(BG_RED T_YELLOW);
    make_line(BG_RED T_LYELLOW);
    make_line(BG_RED T_GREEN);
    make_line(BG_RED T_LGREEN);
    make_line(BG_RED T_RED);
    make_line(BG_RED T_LRED);
    make_line(BG_RED T_BLUE);
    make_line(BG_RED T_LBLUE);
    make_line(BG_RED T_MAGENTA);
    make_line(BG_RED T_LMAGENTA);
    make_line(BG_RED T_CYAN);
    make_line(BG_RED T_LCYAN);
    make_line(BG_RED T_WHITE);
    make_line(BG_RED T_LWHITE);
    
    printf("\n");
    make_line(BG_LRED);
    make_line(BG_LRED T_BLACK);
    make_line(BG_LRED T_LBLACK);
    make_line(BG_LRED T_YELLOW);
    make_line(BG_LRED T_LYELLOW);
    make_line(BG_LRED T_GREEN);
    make_line(BG_LRED T_LGREEN);
    make_line(BG_LRED T_RED);
    make_line(BG_LRED T_LRED);
    make_line(BG_LRED T_BLUE);
    make_line(BG_LRED T_LBLUE);
    make_line(BG_LRED T_MAGENTA);
    make_line(BG_LRED T_LMAGENTA);
    make_line(BG_LRED T_CYAN);
    make_line(BG_LRED T_LCYAN);
    make_line(BG_LRED T_WHITE);
    make_line(BG_LRED T_LWHITE);

    printf("\n");
    make_line(BG_BLUE);
    make_line(BG_BLUE T_BLACK);
    make_line(BG_BLUE T_LBLACK);
    make_line(BG_BLUE T_YELLOW);
    make_line(BG_BLUE T_LYELLOW);
    make_line(BG_BLUE T_GREEN);
    make_line(BG_BLUE T_LGREEN);
    make_line(BG_BLUE T_RED);
    make_line(BG_BLUE T_LRED);
    make_line(BG_BLUE T_BLUE);
    make_line(BG_BLUE T_LBLUE);
    make_line(BG_BLUE T_MAGENTA);
    make_line(BG_BLUE T_LMAGENTA);
    make_line(BG_BLUE T_CYAN);
    make_line(BG_BLUE T_LCYAN);
    make_line(BG_BLUE T_WHITE);
    make_line(BG_BLUE T_LWHITE);
    
    printf("\n");
    make_line(BG_LBLUE);
    make_line(BG_LBLUE T_BLACK);
    make_line(BG_LBLUE T_LBLACK);
    make_line(BG_LBLUE T_YELLOW);
    make_line(BG_LBLUE T_LYELLOW);
    make_line(BG_LBLUE T_GREEN);
    make_line(BG_LBLUE T_LGREEN);
    make_line(BG_LBLUE T_RED);
    make_line(BG_LBLUE T_LRED);
    make_line(BG_LBLUE T_BLUE);
    make_line(BG_LBLUE T_LBLUE);
    make_line(BG_LBLUE T_MAGENTA);
    make_line(BG_LBLUE T_LMAGENTA);
    make_line(BG_LBLUE T_CYAN);
    make_line(BG_LBLUE T_LCYAN);
    make_line(BG_LBLUE T_WHITE);
    make_line(BG_LBLUE T_LWHITE);

    printf("\n");
    make_line(BG_MAGENTA);
    make_line(BG_MAGENTA T_BLACK);
    make_line(BG_MAGENTA T_LBLACK);
    make_line(BG_MAGENTA T_YELLOW);
    make_line(BG_MAGENTA T_LYELLOW);
    make_line(BG_MAGENTA T_GREEN);
    make_line(BG_MAGENTA T_LGREEN);
    make_line(BG_MAGENTA T_RED);
    make_line(BG_MAGENTA T_LRED);
    make_line(BG_MAGENTA T_BLUE);
    make_line(BG_MAGENTA T_LBLUE);
    make_line(BG_MAGENTA T_MAGENTA);
    make_line(BG_MAGENTA T_LMAGENTA);
    make_line(BG_MAGENTA T_CYAN);
    make_line(BG_MAGENTA T_LCYAN);
    make_line(BG_MAGENTA T_WHITE);
    make_line(BG_MAGENTA T_LWHITE);
    
    printf("\n");
    make_line(BG_LMAGENTA);
    make_line(BG_LMAGENTA T_BLACK);
    make_line(BG_LMAGENTA T_LBLACK);
    make_line(BG_LMAGENTA T_YELLOW);
    make_line(BG_LMAGENTA T_LYELLOW);
    make_line(BG_LMAGENTA T_GREEN);
    make_line(BG_LMAGENTA T_LGREEN);
    make_line(BG_LMAGENTA T_RED);
    make_line(BG_LMAGENTA T_LRED);
    make_line(BG_LMAGENTA T_BLUE);
    make_line(BG_LMAGENTA T_LBLUE);
    make_line(BG_LMAGENTA T_MAGENTA);
    make_line(BG_LMAGENTA T_LMAGENTA);
    make_line(BG_LMAGENTA T_CYAN);
    make_line(BG_LMAGENTA T_LCYAN);
    make_line(BG_LMAGENTA T_WHITE);
    make_line(BG_LMAGENTA T_LWHITE);

    printf("\n");
    make_line(BG_CYAN);
    make_line(BG_CYAN T_BLACK);
    make_line(BG_CYAN T_LBLACK);
    make_line(BG_CYAN T_YELLOW);
    make_line(BG_CYAN T_LYELLOW);
    make_line(BG_CYAN T_GREEN);
    make_line(BG_CYAN T_LGREEN);
    make_line(BG_CYAN T_RED);
    make_line(BG_CYAN T_LRED);
    make_line(BG_CYAN T_BLUE);
    make_line(BG_CYAN T_LBLUE);
    make_line(BG_CYAN T_MAGENTA);
    make_line(BG_CYAN T_LMAGENTA);
    make_line(BG_CYAN T_CYAN);
    make_line(BG_CYAN T_LCYAN);
    make_line(BG_CYAN T_WHITE);
    make_line(BG_CYAN T_LWHITE);
    
    printf("\n");
    make_line(BG_LCYAN);
    make_line(BG_LCYAN T_BLACK);
    make_line(BG_LCYAN T_LBLACK);
    make_line(BG_LCYAN T_YELLOW);
    make_line(BG_LCYAN T_LYELLOW);
    make_line(BG_LCYAN T_GREEN);
    make_line(BG_LCYAN T_LGREEN);
    make_line(BG_LCYAN T_RED);
    make_line(BG_LCYAN T_LRED);
    make_line(BG_LCYAN T_BLUE);
    make_line(BG_LCYAN T_LBLUE);
    make_line(BG_LCYAN T_MAGENTA);
    make_line(BG_LCYAN T_LMAGENTA);
    make_line(BG_LCYAN T_CYAN);
    make_line(BG_LCYAN T_LCYAN);
    make_line(BG_LCYAN T_WHITE);
    make_line(BG_LCYAN T_LWHITE);

    printf("\n");
    make_line(BG_WHITE);
    make_line(BG_WHITE T_BLACK);
    make_line(BG_WHITE T_LBLACK);
    make_line(BG_WHITE T_YELLOW);
    make_line(BG_WHITE T_LYELLOW);
    make_line(BG_WHITE T_GREEN);
    make_line(BG_WHITE T_LGREEN);
    make_line(BG_WHITE T_RED);
    make_line(BG_WHITE T_LRED);
    make_line(BG_WHITE T_BLUE);
    make_line(BG_WHITE T_LBLUE);
    make_line(BG_WHITE T_MAGENTA);
    make_line(BG_WHITE T_LMAGENTA);
    make_line(BG_WHITE T_CYAN);
    make_line(BG_WHITE T_LCYAN);
    make_line(BG_WHITE T_WHITE);
    make_line(BG_WHITE T_LWHITE);
    
    printf("\n");
    make_line(BG_LWHITE);
    make_line(BG_LWHITE T_BLACK);
    make_line(BG_LWHITE T_LBLACK);
    make_line(BG_LWHITE T_YELLOW);
    make_line(BG_LWHITE T_LYELLOW);
    make_line(BG_LWHITE T_GREEN);
    make_line(BG_LWHITE T_LGREEN);
    make_line(BG_LWHITE T_RED);
    make_line(BG_LWHITE T_LRED);
    make_line(BG_LWHITE T_BLUE);
    make_line(BG_LWHITE T_LBLUE);
    make_line(BG_LWHITE T_MAGENTA);
    make_line(BG_LWHITE T_LMAGENTA);
    make_line(BG_LWHITE T_CYAN);
    make_line(BG_LWHITE T_LCYAN);
    make_line(BG_LWHITE T_WHITE);
    make_line(BG_LWHITE T_LWHITE);

    printf("\n");
    print_success("Success message\n");
    print_warning("Warning message\n");
    print_error("Error message\n");
    print_debug("Debug message\n");
    print_directory("This/is/a/directory/file.txt");
    printf("\n\n");

    char *colored_msg = T_LGREEN "Green text " T_LMAGENTA "magenta text " T_LYELLOW "yellow text " T_LRED "red text.\n" RESET_STYLE;

    printf("Remove color test:\n");
    printf("Colored message: %s", colored_msg);
    char *uncolored_msg = remove_ansi_escape_codes(colored_msg);
    printf("Uncolored message: %s", uncolored_msg);

    free(uncolored_msg);
}
