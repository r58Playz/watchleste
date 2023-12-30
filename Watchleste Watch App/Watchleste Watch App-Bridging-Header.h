//
//  Use this file to import your target's public headers that you would like to expose to Swift.
//

#ifndef WATCHLESTE_RUST_BRIDGE_H
#define WATCHLESTE_RUST_BRIDGE_H

void librustic_start(char* map, char* sprites, char* flags, char* fontatlas);
void librustic_next_tick();
void librustic_load_state();
void* librustic_render_screen();
void librustic_skip_level();
void librustic_set_btn(char btn, char val);

#endif
