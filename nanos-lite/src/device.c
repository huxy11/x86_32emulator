#include "common.h"
#include <amdev.h>
#include <klib.h>
#include "fs.h"

size_t serial_write(const void *buf, size_t offset, size_t len) {
	int i;
	for (i = 0; i < len; ++i)
		_putc(*(char *)(buf + i));
  return i;
}

#define NAME(key) \
  [_KEY_##key] = #key,

static const char *keyname[256] __attribute__((used)) = {
  [_KEY_NONE] = "NONE",
  _KEYS(NAME)
};

size_t events_read(void *buf, size_t offset, size_t len) {
	int ret;
	ret = read_key();
	if ((ret&0x7fff) != _KEY_NONE){
		sprintf(buf,"k%c %s\n", ret&0x8000 ? 'd' : 'u', keyname[ret&0x7fff]);
		return strlen(buf);
	}
	ret = uptime();
	sprintf(buf,"t %d\n", ret);
  return strlen(buf);
}

static char dispinfo[128] __attribute__((used)) = {};

size_t dispinfo_read(void *buf, size_t offset, size_t len) {
  return 0;
}

size_t fb_write(const void *buf, size_t offset, size_t len) {
  return 0;
}

size_t fbsync_write(const void *buf, size_t offset, size_t len) {
  return 0;
}

void init_device() {
  Log("Initializing devices...");
  _ioe_init();

  // TODO: print the string to array `dispinfo` with the format
  // described in the Navy-apps convention
}
