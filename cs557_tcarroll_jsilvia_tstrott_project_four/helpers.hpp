/**********************************************************************
 *
 * P2P with TLS
 *
 * Written by: Tyler Carroll, James Silvia, Tom Strott
 * In completion of: CS557 Project 4
 *
 * A secure P2P storage system
 *
 * helpers.hpp
 *
 **********************************************************************/

#include <iostream>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <sstream>
#include <fstream>

#define PORT_START  10311

using namespace std;

int get_index_value(int index, string in_string);
int get_index(int index, string in_string);
string get_stored_user(string in_string);
string get_stored_group(string in_string);
bool check_for_group(string directory, string group);
bool check_group_for_user(string user, string group, string group_dir);
bool check_for_peer(string peer, string peerlist_loc);
int get_port_for_peer(string peer, string peerlist_loc);
bool add_peer(string peer, int port, string peerlist_loc);
int get_next_port(string peerlist_loc);
bool check_pw_complexity(string password);
bool check_for_datastore(const char *fileName);
int bytes2str(unsigned char *in_bytes, int count, char *out_string);
int str2bytes(char *in_string, int count, unsigned char *out_bytes); 
