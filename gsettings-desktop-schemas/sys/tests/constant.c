// This file was generated by gir (https://github.com/gtk-rs/gir)
// from gir-files (https://github.com/gtk-rs/gir-files.git)
// DO NOT EDIT

#include "manual.h"
#include <stdio.h>

#define PRINT_CONSTANT(CONSTANT_NAME) \
    printf("%s;", #CONSTANT_NAME); \
    printf(_Generic((CONSTANT_NAME), \
                    char *: "%s", \
                    const char *: "%s", \
                    char: "%c", \
                    signed char: "%hhd", \
                    unsigned char: "%hhu", \
                    short int: "%hd", \
                    unsigned short int: "%hu", \
                    int: "%d", \
                    unsigned int: "%u", \
                    long: "%ld", \
                    unsigned long: "%lu", \
                    long long: "%lld", \
                    unsigned long long: "%llu", \
                    float: "%f", \
                    double: "%f", \
                    long double: "%ld"), \
           CONSTANT_NAME); \
    printf("\n");

int main() {
    PRINT_CONSTANT((gint) G_DESKTOP_BACKGROUND_SHADING_HORIZONTAL);
    PRINT_CONSTANT((gint) G_DESKTOP_BACKGROUND_SHADING_SOLID);
    PRINT_CONSTANT((gint) G_DESKTOP_BACKGROUND_SHADING_VERTICAL);
    PRINT_CONSTANT((gint) G_DESKTOP_BACKGROUND_STYLE_CENTERED);
    PRINT_CONSTANT((gint) G_DESKTOP_BACKGROUND_STYLE_NONE);
    PRINT_CONSTANT((gint) G_DESKTOP_BACKGROUND_STYLE_SCALED);
    PRINT_CONSTANT((gint) G_DESKTOP_BACKGROUND_STYLE_SPANNED);
    PRINT_CONSTANT((gint) G_DESKTOP_BACKGROUND_STYLE_STRETCHED);
    PRINT_CONSTANT((gint) G_DESKTOP_BACKGROUND_STYLE_WALLPAPER);
    PRINT_CONSTANT((gint) G_DESKTOP_BACKGROUND_STYLE_ZOOM);
    PRINT_CONSTANT((gint) G_DESKTOP_CLOCK_FORMAT_12H);
    PRINT_CONSTANT((gint) G_DESKTOP_CLOCK_FORMAT_24H);
    PRINT_CONSTANT((gint) G_DESKTOP_COLOR_SCHEME_DEFAULT);
    PRINT_CONSTANT((gint) G_DESKTOP_COLOR_SCHEME_PREFER_DARK);
    PRINT_CONSTANT((gint) G_DESKTOP_COLOR_SCHEME_PREFER_LIGHT);
    PRINT_CONSTANT((gint) G_DESKTOP_DEVICE_SEND_EVENTS_DISABLED);
    PRINT_CONSTANT((gint) G_DESKTOP_DEVICE_SEND_EVENTS_DISABLED_ON_EXTERNAL_MOUSE);
    PRINT_CONSTANT((gint) G_DESKTOP_DEVICE_SEND_EVENTS_ENABLED);
    PRINT_CONSTANT((gint) G_DESKTOP_FOCUS_MODE_CLICK);
    PRINT_CONSTANT((gint) G_DESKTOP_FOCUS_MODE_MOUSE);
    PRINT_CONSTANT((gint) G_DESKTOP_FOCUS_MODE_SLOPPY);
    PRINT_CONSTANT((gint) G_DESKTOP_FOCUS_NEW_WINDOWS_SMART);
    PRINT_CONSTANT((gint) G_DESKTOP_FOCUS_NEW_WINDOWS_STRICT);
    PRINT_CONSTANT((gint) G_DESKTOP_FONT_ANTIALIASING_MODE_GRAYSCALE);
    PRINT_CONSTANT((gint) G_DESKTOP_FONT_ANTIALIASING_MODE_NONE);
    PRINT_CONSTANT((gint) G_DESKTOP_FONT_ANTIALIASING_MODE_RGBA);
    PRINT_CONSTANT((gint) G_DESKTOP_FONT_HINTING_FULL);
    PRINT_CONSTANT((gint) G_DESKTOP_FONT_HINTING_MEDIUM);
    PRINT_CONSTANT((gint) G_DESKTOP_FONT_HINTING_NONE);
    PRINT_CONSTANT((gint) G_DESKTOP_FONT_HINTING_SLIGHT);
    PRINT_CONSTANT((gint) G_DESKTOP_FONT_RGBA_ORDER_BGR);
    PRINT_CONSTANT((gint) G_DESKTOP_FONT_RGBA_ORDER_RGB);
    PRINT_CONSTANT((gint) G_DESKTOP_FONT_RGBA_ORDER_RGBA);
    PRINT_CONSTANT((gint) G_DESKTOP_FONT_RGBA_ORDER_VBGR);
    PRINT_CONSTANT((gint) G_DESKTOP_FONT_RGBA_ORDER_VRGB);
    PRINT_CONSTANT((gint) G_DESKTOP_LOCATION_ACCURACY_LEVEL_CITY);
    PRINT_CONSTANT((gint) G_DESKTOP_LOCATION_ACCURACY_LEVEL_COUNTRY);
    PRINT_CONSTANT((gint) G_DESKTOP_LOCATION_ACCURACY_LEVEL_EXACT);
    PRINT_CONSTANT((gint) G_DESKTOP_LOCATION_ACCURACY_LEVEL_NEIGHBORHOOD);
    PRINT_CONSTANT((gint) G_DESKTOP_LOCATION_ACCURACY_LEVEL_STREET);
    PRINT_CONSTANT((gint) G_DESKTOP_MAGNIFIER_CARET_TRACKING_MODE_CENTERED);
    PRINT_CONSTANT((gint) G_DESKTOP_MAGNIFIER_CARET_TRACKING_MODE_NONE);
    PRINT_CONSTANT((gint) G_DESKTOP_MAGNIFIER_CARET_TRACKING_MODE_PROPORTIONAL);
    PRINT_CONSTANT((gint) G_DESKTOP_MAGNIFIER_CARET_TRACKING_MODE_PUSH);
    PRINT_CONSTANT((gint) G_DESKTOP_MAGNIFIER_FOCUS_TRACKING_MODE_CENTERED);
    PRINT_CONSTANT((gint) G_DESKTOP_MAGNIFIER_FOCUS_TRACKING_MODE_NONE);
    PRINT_CONSTANT((gint) G_DESKTOP_MAGNIFIER_FOCUS_TRACKING_MODE_PROPORTIONAL);
    PRINT_CONSTANT((gint) G_DESKTOP_MAGNIFIER_FOCUS_TRACKING_MODE_PUSH);
    PRINT_CONSTANT((gint) G_DESKTOP_MAGNIFIER_MOUSE_TRACKING_MODE_CENTERED);
    PRINT_CONSTANT((gint) G_DESKTOP_MAGNIFIER_MOUSE_TRACKING_MODE_NONE);
    PRINT_CONSTANT((gint) G_DESKTOP_MAGNIFIER_MOUSE_TRACKING_MODE_PROPORTIONAL);
    PRINT_CONSTANT((gint) G_DESKTOP_MAGNIFIER_MOUSE_TRACKING_MODE_PUSH);
    PRINT_CONSTANT((gint) G_DESKTOP_MAGNIFIER_SCREEN_POSITION_BOTTOM_HALF);
    PRINT_CONSTANT((gint) G_DESKTOP_MAGNIFIER_SCREEN_POSITION_FULL_SCREEN);
    PRINT_CONSTANT((gint) G_DESKTOP_MAGNIFIER_SCREEN_POSITION_LEFT_HALF);
    PRINT_CONSTANT((gint) G_DESKTOP_MAGNIFIER_SCREEN_POSITION_NONE);
    PRINT_CONSTANT((gint) G_DESKTOP_MAGNIFIER_SCREEN_POSITION_RIGHT_HALF);
    PRINT_CONSTANT((gint) G_DESKTOP_MAGNIFIER_SCREEN_POSITION_TOP_HALF);
    PRINT_CONSTANT((gint) G_DESKTOP_MOUSE_DWELL_DIRECTION_DOWN);
    PRINT_CONSTANT((gint) G_DESKTOP_MOUSE_DWELL_DIRECTION_LEFT);
    PRINT_CONSTANT((gint) G_DESKTOP_MOUSE_DWELL_DIRECTION_RIGHT);
    PRINT_CONSTANT((gint) G_DESKTOP_MOUSE_DWELL_DIRECTION_UP);
    PRINT_CONSTANT((gint) G_DESKTOP_MOUSE_DWELL_MODE_GESTURE);
    PRINT_CONSTANT((gint) G_DESKTOP_MOUSE_DWELL_MODE_WINDOW);
    PRINT_CONSTANT((gint) G_DESKTOP_PAD_BUTTON_ACTION_HELP);
    PRINT_CONSTANT((gint) G_DESKTOP_PAD_BUTTON_ACTION_KEYBINDING);
    PRINT_CONSTANT((gint) G_DESKTOP_PAD_BUTTON_ACTION_NONE);
    PRINT_CONSTANT((gint) G_DESKTOP_PAD_BUTTON_ACTION_SWITCH_MONITOR);
    PRINT_CONSTANT((gint) G_DESKTOP_POINTER_ACCEL_PROFILE_ADAPTIVE);
    PRINT_CONSTANT((gint) G_DESKTOP_POINTER_ACCEL_PROFILE_DEFAULT);
    PRINT_CONSTANT((gint) G_DESKTOP_POINTER_ACCEL_PROFILE_FLAT);
    PRINT_CONSTANT((gint) G_DESKTOP_POINTING_STICK_SCROLL_METHOD_DEFAULT);
    PRINT_CONSTANT((gint) G_DESKTOP_POINTING_STICK_SCROLL_METHOD_NONE);
    PRINT_CONSTANT((gint) G_DESKTOP_POINTING_STICK_SCROLL_METHOD_ON_BUTTON_DOWN);
    PRINT_CONSTANT((gint) G_DESKTOP_PROXY_MODE_AUTO);
    PRINT_CONSTANT((gint) G_DESKTOP_PROXY_MODE_MANUAL);
    PRINT_CONSTANT((gint) G_DESKTOP_PROXY_MODE_NONE);
    PRINT_CONSTANT((gint) G_DESKTOP_SCREENSAVER_MODE_BLANK_ONLY);
    PRINT_CONSTANT((gint) G_DESKTOP_SCREENSAVER_MODE_RANDOM);
    PRINT_CONSTANT((gint) G_DESKTOP_SCREENSAVER_MODE_SINGLE);
    PRINT_CONSTANT((gint) G_DESKTOP_STYLUS_BUTTON_ACTION_BACK);
    PRINT_CONSTANT((gint) G_DESKTOP_STYLUS_BUTTON_ACTION_DEFAULT);
    PRINT_CONSTANT((gint) G_DESKTOP_STYLUS_BUTTON_ACTION_FORWARD);
    PRINT_CONSTANT((gint) G_DESKTOP_STYLUS_BUTTON_ACTION_MIDDLE);
    PRINT_CONSTANT((gint) G_DESKTOP_STYLUS_BUTTON_ACTION_RIGHT);
    PRINT_CONSTANT((gint) G_DESKTOP_TABLET_MAPPING_ABSOLUTE);
    PRINT_CONSTANT((gint) G_DESKTOP_TABLET_MAPPING_RELATIVE);
    PRINT_CONSTANT((gint) G_DESKTOP_TITLEBAR_ACTION_LOWER);
    PRINT_CONSTANT((gint) G_DESKTOP_TITLEBAR_ACTION_MENU);
    PRINT_CONSTANT((gint) G_DESKTOP_TITLEBAR_ACTION_MINIMIZE);
    PRINT_CONSTANT((gint) G_DESKTOP_TITLEBAR_ACTION_NONE);
    PRINT_CONSTANT((gint) G_DESKTOP_TITLEBAR_ACTION_TOGGLE_MAXIMIZE);
    PRINT_CONSTANT((gint) G_DESKTOP_TITLEBAR_ACTION_TOGGLE_MAXIMIZE_HORIZONTALLY);
    PRINT_CONSTANT((gint) G_DESKTOP_TITLEBAR_ACTION_TOGGLE_MAXIMIZE_VERTICALLY);
    PRINT_CONSTANT((gint) G_DESKTOP_TITLEBAR_ACTION_TOGGLE_SHADE);
    PRINT_CONSTANT((gint) G_DESKTOP_TOOLBAR_ICON_SIZE_LARGE);
    PRINT_CONSTANT((gint) G_DESKTOP_TOOLBAR_ICON_SIZE_SMALL);
    PRINT_CONSTANT((gint) G_DESKTOP_TOOLBAR_STYLE_BOTH);
    PRINT_CONSTANT((gint) G_DESKTOP_TOOLBAR_STYLE_BOTH_HORIZ);
    PRINT_CONSTANT((gint) G_DESKTOP_TOOLBAR_STYLE_ICONS);
    PRINT_CONSTANT((gint) G_DESKTOP_TOOLBAR_STYLE_TEXT);
    PRINT_CONSTANT((gint) G_DESKTOP_TOUCHPAD_BUTTON_TAP_MAP_DEFAULT);
    PRINT_CONSTANT((gint) G_DESKTOP_TOUCHPAD_BUTTON_TAP_MAP_LMR);
    PRINT_CONSTANT((gint) G_DESKTOP_TOUCHPAD_BUTTON_TAP_MAP_LRM);
    PRINT_CONSTANT((gint) G_DESKTOP_TOUCHPAD_CLICK_METHOD_AREAS);
    PRINT_CONSTANT((gint) G_DESKTOP_TOUCHPAD_CLICK_METHOD_DEFAULT);
    PRINT_CONSTANT((gint) G_DESKTOP_TOUCHPAD_CLICK_METHOD_FINGERS);
    PRINT_CONSTANT((gint) G_DESKTOP_TOUCHPAD_CLICK_METHOD_NONE);
    PRINT_CONSTANT((gint) G_DESKTOP_TOUCHPAD_HANDEDNESS_LEFT);
    PRINT_CONSTANT((gint) G_DESKTOP_TOUCHPAD_HANDEDNESS_MOUSE);
    PRINT_CONSTANT((gint) G_DESKTOP_TOUCHPAD_HANDEDNESS_RIGHT);
    PRINT_CONSTANT((gint) G_DESKTOP_USB_PROTECTION_ALWAYS);
    PRINT_CONSTANT((gint) G_DESKTOP_USB_PROTECTION_LOCKSCREEN);
    PRINT_CONSTANT((gint) G_DESKTOP_VISUAL_BELL_FRAME_FLASH);
    PRINT_CONSTANT((gint) G_DESKTOP_VISUAL_BELL_FULLSCREEN_FLASH);
    return 0;
}
