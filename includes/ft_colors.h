/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colors.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 17:56:34 by marvin            #+#    #+#             */
/*   Updated: 2025/04/14 17:56:34 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_COLORS_H
# define FT_COLORS_H

/* ══════════════════════════════════════════════════════════════════════════ */
/*                              FOREGROUND COLORS                             */
/* ══════════════════════════════════════════════════════════════════════════ */

/* Reset all text formatting */
# ifndef RESET
#  define RESET				"\033[0m"
# endif

/* Black text */
# ifndef BLACK
#  define BLACK				"\033[30m"
# endif

/* Red text */
# ifndef RED
#  define RED				"\033[31m"
# endif

/* Green text */
# ifndef GREEN
#  define GREEN				"\033[32m"
# endif

/* Yellow text */
# ifndef YELLOW
#  define YELLOW			"\033[33m"
# endif

/* Blue text */
# ifndef BLUE
#  define BLUE				"\033[34m"
# endif

/* Magenta text */
# ifndef MAGENTA
#  define MAGENTA			"\033[35m"
# endif

/* Cyan text */
# ifndef CYAN
#  define CYAN				"\033[36m"
# endif

/* White text */
# ifndef WHITE
#  define WHITE				"\033[37m"
# endif

/* Bright black text */
# ifndef BRIGHT_BLACK
#  define BRIGHT_BLACK		"\033[90m"
# endif

/* Bright red text */
# ifndef BRIGHT_RED
#  define BRIGHT_RED		"\033[91m"
# endif

/* ══════════════════════════════════════════════════════════════════════════ */
/*                              BACKGROUND COLORS                             */
/* ══════════════════════════════════════════════════════════════════════════ */

/* Black background */
# ifndef BG_BLACK
#  define BG_BLACK			"\033[40m"
# endif

/* Red background */
# ifndef BG_RED
#  define BG_RED			"\033[41m"
# endif

/* Green background */
# ifndef BG_GREEN
#  define BG_GREEN			"\033[42m"
# endif

/* Yellow background */
# ifndef BG_YELLOW
#  define BG_YELLOW			"\033[43m"
# endif

/* Blue background */
# ifndef BG_BLUE
#  define BG_BLUE			"\033[44m"
# endif

/* Magenta background */
# ifndef BG_MAGENTA
#  define BG_MAGENTA		"\033[45m"
# endif

/* Cyan background */
# ifndef BG_CYAN
#  define BG_CYAN			"\033[46m"
# endif

/* White background */
# ifndef BG_WHITE
#  define BG_WHITE			"\033[47m"
# endif

/* Bright black background */
# ifndef BG_BRIGHT_BLACK
#  define BG_BRIGHT_BLACK	"\033[100m"
# endif

/* Bright red background */
# ifndef BG_BRIGHT_RED
#  define BG_BRIGHT_RED		"\033[101m"
# endif

/* Bright green background */
# ifndef BG_BRIGHT_GREEN
#  define BG_BRIGHT_GREEN	"\033[102m"
# endif

/* Bright yellow background */
# ifndef BG_BRIGHT_YELLOW
#  define BG_BRIGHT_YELLOW	"\033[103m"
# endif

/* Bright blue background */
# ifndef BG_BRIGHT_BLUE
#  define BG_BRIGHT_BLUE	"\033[104m"
# endif

/* Bright magenta background */
# ifndef BG_BRIGHT_MAGENTA
#  define BG_BRIGHT_MAGENTA	"\033[105m"
# endif

/* Bright cyan background */
# ifndef BG_BRIGHT_CYAN
#  define BG_BRIGHT_CYAN	"\033[106m"
# endif

/* Bright white background */
# ifndef BG_BRIGHT_WHITE
#  define BG_BRIGHT_WHITE	"\033[107m"
# endif

/* ══════════════════════════════════════════════════════════════════════════ */
/*                               RGB COLORS                              */
/* ══════════════════════════════════════════════════════════════════════════ */

/* RGB black */
# ifndef OX_BLACK
#  define OX_BLACK			0x000000
# endif

/* RGB black */
# ifndef OX_GRAY
#  define OX_GRAY			0x808080
# endif

/* RGB white */
# ifndef OX_WHITE
#  define OX_WHITE			0xFFFFFF
# endif

/* RGB red */
# ifndef OX_RED
#  define OX_RED			0xFF0000
# endif

/* RGB green */
# ifndef OX_GREEN
#  define OX_GREEN			0x00FF00
# endif

/* RGB blue */
# ifndef OX_BLUE
#  define OX_BLUE			0x0000FF
# endif

/* RGB yellow */
# ifndef OX_YELLOW
#  define OX_YELLOW			0xFFFF00
# endif

/* RGB magenta */
# ifndef OX_MAGENTA
#  define OX_MAGENTA		0xFF00FF
# endif

/* RGB cyan */
# ifndef OX_CYAN
#  define OX_CYAN			0x00FFFF
# endif

#endif
