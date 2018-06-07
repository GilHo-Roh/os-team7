
#ifndef _LINUX_GPS_H
#define _LINUX_GPS_H

struct gps_location {
  int lat_integer;
  int lat_fractional;
  int lng_integer;
  int lng_fractional;
  int accuracy;
};

extern struct gps_location current_location;
extern spinlock_t current_location_lock;

#endif
