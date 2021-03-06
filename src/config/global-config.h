/* @(#) $Id: ./src/config/global-config.h, 2011/09/08 dcid Exp $
 */

/* Copyright (C) 2009 Trend Micro Inc.
 * All right reserved.
 *
 * This program is a free software; you can redistribute it
 * and/or modify it under the terms of the GNU General Public
 * License (version 2) as published by the FSF - Free Software
 * Foundation
 */

 

#ifndef _CCONFIG__H
#define _CCONFIG__H
#include "shared.h"


/* Configuration structure */
typedef struct __Config
{
    u_int8_t logall;
    u_int8_t stats;
    u_int8_t integrity;
    u_int8_t syscheck_auto_ignore;
    u_int8_t syscheck_alert_new;
    u_int8_t rootcheck;
    u_int8_t hostinfo;
    u_int8_t mailbylevel;
    u_int8_t logbylevel;
    u_int8_t logfw;
    
    /* Prelude support */
    u_int8_t prelude;
    /* which min. level the alert must be sent to prelude */
    u_int8_t prelude_log_level;
    /* prelude profile name */
    char *prelude_profile;

    /* GeoIP db */
    char *geoipdb_file;

    /* Picviz support */
    u_int8_t picviz;
    char *picviz_socket;

    /* Not currently used */
    u_int8_t keeplogdate;

    /* Mail alerting */
    short int mailnotify;
    
    /* For the active response */  
    int ar;
    
    /* For the correlation */
    int memorysize;
   
    /* List of files to ignore (syscheck) */ 
    char **syscheck_ignore;

    /* List of ips to never block */
    os_ip **white_list;

    /* List of hostnames to never block */
    OSMatch **hostname_white_list;

    /* List of rules */
    char **includes;

    /* List of Lists */
    char **lists;

    /* List of decoders */
    char **decoders;

    /* Global rule hash. */
    void *g_rules_hash;

}_Config;


#endif
