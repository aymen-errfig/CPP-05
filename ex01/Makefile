# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aerrfig <aerrfig@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/05 15:42:11 by aerrfig           #+#    #+#              #
#    Updated: 2025/02/03 16:41:53 by aerrfig          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = B
FLAGS = -Wall -Wextra -Werror -std=c++98
CP = c++
srcs = Bureaucrat.cpp Form.cpp main.cpp
heads = Bureaucrat.hpp Form.hpp
objs = ${srcs:.cpp=.o}
RM = rm -f

all: $(NAME)

%.o: %.cpp $(heads)
	$(CP) $(FLAGS) -c $< -o $@

$(NAME): $(objs)
	$(CP) $(FLAGS) $(objs) -o $(NAME)

clean:
	$(RM) $(objs)

fclean: clean
	$(RM) $(NAME)

re: fclean all