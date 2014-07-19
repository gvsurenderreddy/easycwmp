/*
 *	This program is free software: you can redistribute it and/or modify
 *	it under the terms of the GNU General Public License as published by
 *	the Free Software Foundation, either version 2 of the License, or
 *	(at your option) any later version.
 *
 *	Copyright (C) 2012-2014 PIVA SOFTWARE (www.pivasoftware.com)
 *		Author: Mohamed Kallel <mohamed.kallel@pivasoftware.com>
 *		Author: Anis Ellouze <anis.ellouze@pivasoftware.com>
 *	Copyright (C) 2011 Luka Perkov <freecwmp@lukaperkov.net>
 */

#ifndef _EASYCWMP_HTTP_H__
#define _EASYCWMP_HTTP_H__

#include <stdint.h>

#include <libubox/uloop.h>
#include <curl/curl.h>

struct http_client
{
	struct curl_slist *header_list;
	char *url;
};

struct http_server
{
	struct uloop_fd http_event;
};

int http_client_init(void);
void http_client_exit(void);
int8_t http_send_message(char *msg_out, char **msg_in);

void http_server_init(void);

#endif

