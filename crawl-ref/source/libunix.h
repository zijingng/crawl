#pragma once

#ifndef O_BINARY
#define O_BINARY 0
#endif

void fakecursorxy(int x, int y);
int unixcurses_get_vi_key(int keyin);

// This is implemented this way, as opposed to a #define, so that switching
// between a headless build and regular console requires only swapping .o files.
bool in_headless_mode();
