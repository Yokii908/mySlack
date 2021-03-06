#ifndef __INCLUDES_SERVER_H__
#define __INCLUDES_SERVER_H__

/* Constants */
#define MAX_LEN 2048
#define NICKNAME_MAX_LEN 128

/* Libs */
#include <stdlib.h>
#include <netinet/in.h>
#include <sys/select.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

/* Common includes */
#include "color.h"
#include "display.h"
#include "libmy.h"
#include "common.h"

/* Structures */
#include "client.h"
#include "clients_list.h"
#include "server.h"

/* Functions */
#include "init_client.h"
#include "init_server.h"
#include "sending.h"
#include "manage_lists.h"
#include "config.h"
#include "utils.h"
#include "server_functions.h"
#include "command.h"
#include "server_command.h"
#include "channel.h"

#endif
