#ifndef __LIBXFCE4UI_VISIBILITY_H__
#define __LIBXFCE4UI_VISIBILITY_H__
#if __GNUC__ >= 4
#define LIBXFCE4UI_EXPORT __attribute__((visibility("default")))
#define LIBXFCE4UI_NO_EXPORT __attribute__((visibility("hidden")))
#else
#define LIBXFCE4UI_EXPORT
#define LIBXFCE4UI_NO_EXPORT
#endif
#endif /* __LIBXFCE4UI_VISIBILITY_H__ */
