/* Generated file epicsVersion.h */

#ifndef INC_epicsVersion_H
#define INC_epicsVersion_H

#define EPICS_VERSION        7
#define EPICS_REVISION       0
#define EPICS_MODIFICATION   3
#define EPICS_PATCH_LEVEL    1
#define EPICS_DEV_SNAPSHOT   ""
#define EPICS_SITE_VERSION   "E3-7.0.3.1-patch"

#define EPICS_VERSION_SHORT  "7.0.3.1"
#define EPICS_VERSION_FULL   "7.0.3.1-E3-7.0.3.1-patch"
#define EPICS_VERSION_STRING "EPICS 7.0.3.1-E3-7.0.3.1-patch"
#define epicsReleaseVersion  "EPICS R7.0.3.1-E3-7.0.3.1-patch"

#ifndef VERSION_INT
#  define VERSION_INT(V,R,M,P) ( ((V)<<24) | ((R)<<16) | ((M)<<8) | (P))
#endif
#define EPICS_VERSION_INT VERSION_INT(7, 0, 3, 1)

#endif /* INC_epicsVersion_H */
