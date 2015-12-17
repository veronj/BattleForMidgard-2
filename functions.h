/*
** functions.h for  in /home/jb-veron/C/Midgard
** 
** Made by VERON Jean-baptiste
** Login   <veron_j@etna-alternance.net>
** 
** Started on  Wed Dec 16 10:48:04 2015 VERON Jean-baptiste
** Last update Wed Dec 16 21:44:37 2015 VERON Jean-baptiste
*/

#ifndef FUNCTIONS_H_
# define FUNCTIONS_H_

typedef struct  s_creature
{
  char          *name;
  int           lvl;
  int           pv;
  int           pvmax;
  int           pm;
  int           pmmax;
}               t_creature;

typedef struct		s_player
{
  char			*name;
  struct t_histo	*list_crea;
}			t_player;



int		aff_list(t_creature *list);
int		add_crea(t_creature **list, t_creature **creature);
t_creature	*getCreature();
void		my_welcome_msg(char *name);
void		my_mode_msg();
void		my_oob_msg();
void		my_ib_msg();
void		my_optionOoB_msg();
int		capture(t_creature **creature);
int		choices();
int		mode();
int		start(char *name);
void		my_oob();
int		my_get_option();
void	pikachu_first_part();
void	pikachu_second_part();

#endif /* FUNCTIONS_H_ */
