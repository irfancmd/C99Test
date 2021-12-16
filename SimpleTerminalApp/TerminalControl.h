/* We can control different aspects of the terminal by 
printing the appropiate escape sequences */

#ifndef TerminalControl
#define TerminalControl

#include <sys/ioctl.h> // This header is needed for requesting various system calls

/* The definitions below refer to the escape sequences that
tells the kernel to switch terminal color.*/

// Regular colors
#define TC_NRM  "\x1B[0m" // Normal
#define TC_RED  "\x1B[1;31m"
#define TC_GRN  "\x1B[1;32m"
#define TC_YEL  "\x1B[1;33m"
#define TC_BLU  "\x1B[1;34m"
#define TC_MAG  "\x1B[1;35m"
#define TC_CYN  "\x1B[1;36m"
#define TC_WHT  "\x1B[1;37m"

// Bold colors
#define TC_B_NRM  "\x1B[0m" // Normal
#define TC_B_RED  "\x1B[0;31m"
#define TC_B_GRN  "\x1B[0;32m"
#define TC_B_YEL  "\x1B[0;33m"
#define TC_B_BLU  "\x1B[0;34m"
#define TC_B_MAG  "\x1B[0;35m"
#define TC_B_CYN  "\x1B[0;36m"
#define TC_B_WHT  "\x1B[0;37m"

// Background colors
#define TC_BG_NRM "\x1B[40m" // Normal
#define TC_BG_RED " \x1B[41m"
#define TC_BG_GRN "\x1B[42m"
#define TC_BG_YEL "\x1B[43m"
#define TC_BG_BLU "\x1B[44m"
#define TC_BG_MAG "\x1B[45m"
#define TC_BG_CYN "\x1B[46m"
#define TC_BG_WHT "\x1B[47m"

// This macro will clear the terminal by
// printing the clear escape sequence.
#define tc_clear_screen() puts("\x1B[2J")

// This macro will move the cursor
#define tc_move_cursor(X, Y) printf("\033[%d;%dH", Y, X)

#endif