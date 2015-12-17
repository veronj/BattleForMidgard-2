#include "my_lib.h"
#include "functions.h"

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