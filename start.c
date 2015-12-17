/*
** start.c for  in /home/jb-veron/C/Midgard
** 
** Made by VERON Jean-baptiste
** Login   <veron_j@etna-alternance.net>
** 
** Started on  Wed Dec 16 10:50:58 2015 VERON Jean-baptiste
** Last update Wed Dec 16 19:09:59 2015 VERON Jean-baptiste
*/

#include <unistd.h>
#include "functions.h"
#include "my_lib.h"

int		start(char *name)
{
  int			state;
  //t_creature	*creature;
  
  //creature = NULL;
  my_welcome_msg(name);
  my_mode_msg();
  state = 0;
  while (state != -1)
    {
	state = mode();
	if (state == -1)
    {
      my_putstr("\n\nThanks, see you soon!\n");
    }
	else if (state == 0) {
	  my_oob();
	  state = -1;
	}
	else if (state == 1)
	  my_ib_msg();
    }
  return (0);
}

void	my_oob()
{
  int	state;
  
  my_oob_msg();
  state = 0;
  while (state != -1)
  {
    state = my_get_option();
    if (state == -1)
      {
	my_putstr("\n\nThanks, see you soon!\n");
      }
    else if (state == 0) {
      my_putstr("\n\nTEAM!\n");
    }
    else if (state == 2) {
      my_putstr("\n\nyou are the chosen one!\n");
    }
    else if (state == 3) {
      my_putstr("\n\nlet's fight!\n");
    }
  }
}

int	my_get_option()
{
  int	test;
  char	*option;
  
  test = 0;
  my_putstr(BOLDWHITE);
  while (test == 0)
    {
      test = 1;
      my_putstr("\nWhich option do you choose? ");
      my_putstr(BOLDBLUE);
      option = readLine();
      my_putstr(RESET);
      if (my_strcmp(option, "quit") == 0)
	return (-1);
      else if (my_strcmp(option, "team") == 0)
	return (0);
      else if (my_strcmp(option, "you are the chosen one") == 0)
	return (1);
      else if (my_strcmp(option, "let's fight") == 0)
	return (2);
      else {
	test = 0;
	my_putstr("Wrong answer ...\n");
      }
    }
  return (-1);
}

int	mode()
{
  int	test;
  char	*mode;
  
  test = 0;
  my_putstr(BOLDWHITE);
  while (test == 0)
    {
      test = 1;
      my_putstr("\nWhich mode do you choose? ");
      my_putstr(BOLDBLUE);
      mode = readLine();
      my_putstr(RESET);
      if (my_strcmp(mode, "quit") == 0)
	return (-1);
      else if (my_strcmp(mode, "OoB") == 0)
	return (0);
      else if (my_strcmp(mode, "IB") == 0)
	return (1);
      else {
	test = 0;
	my_putstr("Wrong answer ...\n");
      }
    }
  return (-1);
}

int	choices()
{
  int	test;
  char	*choice;
  
  my_putstr(BOLDWHITE);
  do {
    test = 1;
    my_putstr("\nQue faites vous?\nFuir(help me !!!), Capturer(magic catch), Quitter le jeu(quit).\n");
    my_putstr(BOLDBLUE);
    choice = readLine();
    my_putstr(BOLDWHITE);
    if (my_strcmp(choice, "quit") == 0)
      return (-1);
    else if (my_strcmp(choice, "help me !!!") == 0)
      return (0);
    else if (my_strcmp(choice, "magic catch") == 0)
      return (1);
    else {
      test = 0;
      my_putstr("Wrong answer ...\n");
    }
  } while (test != 1);
  my_putstr(RESET);
  return (-1);
}
