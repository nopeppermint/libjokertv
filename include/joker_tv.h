/* 
 * Access to Joker TV
 * https://jokersys.com
 * (c) Abylay Ospan, 2017
 * aospan@jokersys.com
 * GPLv2
 */

#include <stdio.h>
#include <libusb.h>

#ifndef _JOKER_TV
#define _JOKER_TV 1

#define FNAME_LEN 512

/* main pointer to Joker TV */
struct joker_t {
  void * libusb_opaque;
  void * i2c_opaque;
  int verbose;
  int libusb_verbose;
};

#ifdef __cplusplus
extern "C" {
#endif

/* simple logging */
void jdebug(const char *fmt, ...);

/* open Joker TV on USB
 * return negative error code if fail
 * or 0 if success
 */
int joker_open(struct joker_t *joker);

/* release Joker TV device */
int joker_close(struct joker_t *joker);

#ifdef __cplusplus
}
#endif

#endif /* end */
