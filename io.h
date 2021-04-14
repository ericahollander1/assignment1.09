#ifndef IO_H
# define IO_H

class dungeon;

void io_init_terminal(void);
void io_reset_terminal(void);
void io_display(dungeon *d);
void io_handle_input(dungeon *d);
void io_queue_message(const char *format, ...);
uint32_t io_monster_desc(dungeon *d);
void io_display_carry_description(dungeon *d, int index);
void io_display_carry(dungeon *d);

#endif