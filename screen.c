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
  pikachu_first_part();
  pikachu_second_part();
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

void	pikachu_first_part()
{
my_putstr("\n                             ¶¶\n");
my_putstr("                            ¶¶¶¶\n");
my_putstr("                           ¶¶¶¶¶¶\n");
my_putstr("                          ¶¶¥¥¥¶¶¶\n");
my_putstr("                         ¶¶¥¥¥¥¥¶¶¶                    \n");
my_putstr("                         ¶¶¥¥¥¥¥¥¶¶¶                   \n");
my_putstr("                         ¶¶¥¥¥¥¥¥ƒƒ¶¶                  \n");
my_putstr("                         ¶¶¥¥¥¥ƒƒƒƒƒ¶¶                 \n");
my_putstr("                         ¶¶¶ƒƒƒƒƒƒƒƒ§¶¶                \n");
my_putstr("                          ¶¶¶ƒƒƒƒƒƒ§§¶¶                \n");
my_putstr("                            ¶¶ƒƒƒƒƒ§§¶¶                \n");
my_putstr("                             ¶¶ƒƒ§§§§¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶\n");
my_putstr("                              ¶¶§§§§§§§ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ\n");
my_putstr("                               ¶¶§§§ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ\n");
my_putstr("                             ¶¶ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ\n");
my_putstr("                           ¶¶ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ¶¶¶¶¶\n");
my_putstr("                          ¶¶ƒƒ¶¶¶¶¶ƒƒƒƒƒƒƒƒƒƒƒƒƒƒ¶¶__¶¶\n");
my_putstr("                         ¶¶ƒƒ¶¶__¶¶ƒƒƒƒƒƒƒƒƒƒƒƒƒƒ¶¶¶¶¶¶\n");
my_putstr("                        ¶¶ƒƒƒ¶¶¶¶¶¶ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ¶¶¶¶¶\n");
my_putstr("                        ¶¶ƒƒƒƒ¶¶¶¶ƒƒƒƒƒ¥¥¥ƒƒƒƒƒƒƒƒƒƒƒƒƒ\n");
my_putstr("                        ¶¶###ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ¥¥ƒƒƒƒƒƒ\n");
my_putstr("                        ¶¶####ƒƒƒƒƒƒƒƒ¥¥¥¥¥¥¥¥¥¥¥ƒƒƒƒƒƒ\n");
my_putstr("                     ¶¶¶¶¶¶###ƒƒƒƒƒƒƒƒƒ¥¥¥#####¥ƒƒƒƒƒƒƒ\n");
my_putstr("                   ¶¶¶ƒƒ¶¶¶¶#ƒƒƒƒƒƒƒƒƒƒ¥¥####¥¥ƒƒƒƒƒƒƒƒ\n");
my_putstr("                  ¶¶ƒƒ¶ƒƒƒƒ¶¶ƒƒƒƒƒƒƒƒƒƒƒƒ¥¥¥¥ƒƒƒƒƒƒƒƒƒƒ\n");
}

void	pikachu_second_part()
{
my_putstr("                 ¶¶ƒƒƒƒƒƒ§§§§¶¶ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ\n");
my_putstr("                   ¶¶ƒƒ§§§§§§¶¶¶¶ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ\n");
my_putstr("                     ¶¶§§§§§§§¶¶ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ\n");
my_putstr("                       ¶¶§§§§§§ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ\n");
my_putstr("                         ¶¶¶§ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ\n");
my_putstr("                          ¶¶ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ\n");
my_putstr("                          ¶¶ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ\n");
my_putstr("                         ¶¶ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ\n");
my_putstr("                         ¶¶ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ\n");
my_putstr("                   ¶¶¶¶¶¶¶¶¶ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ\n");
my_putstr("                  ¶¶ƒƒ¶¶ƒƒƒ¶¶ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ\n");
my_putstr("                  ¶¶ƒƒƒ¶¶ƒƒƒ¶¶ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ§\n");
my_putstr("                   ¶¶§§§§§§§§¶¶ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ§§§§\n");
my_putstr("                    ¶¶§§§§§§§§¶¶ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒ§§§§§§§\n");
my_putstr("                     ¶¶§§§§§§§§¶¶§§§§ƒƒƒƒƒƒƒ§§§§§§§§§§§\n");
my_putstr("                      ¶¶§§§§§§§¶¶§§§§§§§§§§§§§§§§§§§§§§\n");
my_putstr("                        ¶¶¶¶¶¶¶§§§§§§§§§§§§§§§§§§§§§§§§\n");
my_putstr("                               ¶¶¶¶¶¶¶¶¶¶§§§§§§§§§§§§§§\n");
my_putstr("                                         ¶¶¶¶¶¶§§§§§§§§\n");
my_putstr("                                             ¶¶¶¶§§§§¶¶");

}  