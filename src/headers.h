#ifndef HEADERS_H
#define HEADERS_H

// std library includes
#include "stdlib.h"
#include "stdio.h"
#include "string.h"
#include "math.h"
#include "ctype.h"

// SDL include
#include "SDL2/SDL.h"
#include "SDL2/SDL_image.h"
#include "SDL2/SDL_ttf.h"

// local includes
#include "defs.h"
#include "structs.h"

extern void		push	(Queue	*q,
						 Coord	pos);
extern Coord	pop		(Queue	*q);
extern void		clear	(Queue	*q);

#endif