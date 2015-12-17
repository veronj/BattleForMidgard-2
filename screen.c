/*
** screen.c for  in /home/jb-veron/C/Midgard
** 
** Made by VERON Jean-baptiste
** Login   <veron_j@etna-alternance.net>
** 
** Started on  Wed Dec 16 11:04:02 2015 VERON Jean-baptiste
** Last update Wed Dec 16 11:23:54 2015 VERON Jean-baptiste
*/

#include "my_lib.h"
#include "functions.h"

void	my_welcome_msg(char *name)
{
  my_putstr(BOLDWHITE);
  my_putstr("\n\n-------------------------------------------------------\n");
  my_putstr(RED);
  my_putstr("*******************************************************");
  my_putstr("\n*************");
  my_putstr(BOLDWHITE);
  my_putstr("Welcome to Battle for Midgard");
  my_putstr(BOLDRED);
  my_putstr("*************\n");
  my_putstr("*******************************************************\033[0m");
  my_putstr(BOLDWHITE);
  my_putstr("\n-------------------------------------------------------\n\n");
  my_putstr("\033[1;37mWelcome ");
  my_putstr(name);
  my_putstr(", a new adventure will start...\n\n\n\n");
  my_putstr(RESET);
}

void	my_mode_msg()
{
  my_putstr(RED);
  my_putstr("*******************************************************");
  my_putstr("\n*******************");
  my_putstr(BOLDWHITE);
  my_putstr("Choose your mode!");
  my_putstr(BOLDRED);
  my_putstr("*******************\n");
  my_putstr("*******************************************************\033[0m");
  my_putstr(BOLDYELLOW);
  my_putstr("\n\n      Out of Battle (OoB) | In Battle (IB)\n");
  my_putstr(RESET);
}

void	my_oob_msg()
{
  my_putstr(RED);
  my_putstr("\n\n*******************************************************");
  my_putstr("\n***********************");
  my_putstr(BOLDWHITE);
  my_putstr("MODE  OoB");
  my_putstr(BOLDRED);
  my_putstr("***********************\n***********");
  my_putstr("********************************************\033[0m\n\n");
  my_optionOoB_msg();
}

void	my_ib_msg()
{
  my_putstr(RED);
  my_putstr("*******************************************************");
  my_putstr("\n*******************");
  my_putstr(BOLDWHITE);
  my_putstr("MODE IB");
  my_putstr(BOLDRED);
  my_putstr("*******************\n");
  my_putstr("*******************************************************\n\n");
  my_putstr(RESET);
}

void	my_optionOoB_msg()
{
  my_putstr("-------------------------------------------------------");
  my_putstr(YELLOW);
  my_putstr("\n***************");
  my_putstr(BOLDYELLOW);
  my_putstr("Options available to you");
  my_putstr("****************\033[0m\n");
  my_putstr("-------------------------------------------------------\n\n");
  my_putstr("\033[1;33m>'team'\033[0;33m: Information about your team\n");
  my_putstr("\033[1;33m>'you are the chosen one'\033[0;33m: ");
  my_putstr("Fight with specific creature\n");
  my_putstr("\033[1;33m>'let's fight'\033[0;33m: Fight with random creature\n");
  my_putstr("\033[1;33m>'quit'\033[0;33m: Leave this game\n");
  my_putstr(RESET);
}