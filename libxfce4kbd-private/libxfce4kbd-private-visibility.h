#ifndef __LIBXFCE4KBD_PRIVATE_VISIBILITY_H__
#define __LIBXFCE4KBD_PRIVATE_VISIBILITY_H__
#if __GNUC__ >= 4
#define LIBXFCE4KBD_PRIVATE_EXPORT __attribute__((visibility("default")))
#define LIBXFCE4KBD_PRIVATE_NO_EXPORT __attribute__((visibility("hidden")))
#else
#define LIBXFCE4KBD_PRIVATE_EXPORT
#define LIBXFCE4KBD_PRIVATE_NO_EXPORT
#endif
#endif /* __LIBXFCE4KBD_PRIVATE_VISIBILITY_H__ */
