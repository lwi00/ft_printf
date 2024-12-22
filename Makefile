# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ldoidy <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/21 13:14:15 by ldoidy            #+#    #+#              #
#    Updated: 2024/11/21 13:14:15 by ldoidy           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Nom de la bibliothèque générée
NAME = libftprintf.a

# Commandes de compilation et de nettoyage
CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

# Détection des fichiers sources
SRCS = $(wildcard *.c)      # Tous les fichiers .c dans le répertoire courant
OBJS = $(SRCS:.c=.o)        # Fichiers objets correspondants

# Règle par défaut : compile tout
all: $(NAME)

# Création de la bibliothèque
$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

# Compilation des fichiers objets
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Nettoyage des fichiers objets
clean:
	$(RM) $(OBJS)

# Nettoyage complet (objets + bibliothèque)
fclean: clean
	$(RM) $(NAME)

# Recompile tout à partir de zéro
re: fclean all

# Rendre ces cibles "PHONY" (pas des fichiers réels)
.PHONY: all clean fclean re
