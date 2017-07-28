#ifndef PLATFORM__PLATFORM_H
#define PLATFORM__PLATFORM_H

/* This interface is designed to allow BBL/PK to be portable to multiple target
 * platforms.  The current interface has been hacked up based on SiFive's fork
 * of pk that runs on our FPGA boards.  The idea here is that rather than
 * forking pk and touching things all over the tree, changes should be local to
 * the target directory.
 *
 * This interface isn't meant to be stable or sane, just better than what we
 * had before.
 */

/* Returns a pointer to what's expected to be a staticly allocated logo string.
 * This will be printed when BBL boots. */
const char *platform__get_logo(void);

/* Returns TRUE if it's valid to use the HTIF */
int platform__use_htif(void);

#endif
