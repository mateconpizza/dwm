// tagsrules.h

#define TERMCLASS "St"

static const Rule rules[] = {
    /* xprop(1):
     *  WM_CLASS(STRING) = instance, class
     *  WM_NAME(STRING) = title

       xprop | awk '
    /^WM_CLASS/{sub(/.* =/, "instance:"); sub(/,/, "\nclass:"); print}
    /^WM_NAME/{sub(/.* =/, "title:"); print}'
    */

    /* ------------------------------------------------------------------------------------------------ */
    /*                                              BROWSER                                             */
    /* ------------------------------------------------------------------------------------------------ */
    /* class                instance            title               tags mask   iscentered  isfloating  monitor */
    { "qutebrowser",        NULL,               NULL,                   1 << 8,     0,          0,          -1 },
    { "Firefox",            NULL,               NULL,                   1 << 8,     0,          0,          -1 },
    { "Firefox",            NULL,               "About Mozilla Firefox",1 << 8,     1,          1,          -1 },
    { "floorp",             NULL,               NULL,                   1 << 8,     0,          0,          -1 },
    { "floorp",             NULL,               "About Ablaze",         1 << 8,     1,          1,          -1 },
    { "icecat-default",     NULL,               NULL,                   1 << 8,     0,          0,          -1 },
    { "icecat-default",     NULL,               "About GNU IceCat",     1 << 8,     1,          1,          -1 },
    { "zen",                NULL,               NULL,                   1 << 8,     0,          0,          -1 },
    { "zen",                NULL,               "About Zen Browser",    1 << 8,     1,          1,          -1 },
    { "Chromium",           "web.whatsapp.com", "web.whatsapp.com",     1 << 6,     0,          0,          -1 },
    { "Chromium",           "chromium",         NULL,                   1 << 7,     0,          0,          -1 },
    { "Tor Browser",        NULL,               NULL,                   1 << 7,     0,          0,          -1 },
    { "Tor Browser",        NULL,               "About Tor Browser",    1 << 7,     1,          1,          -1 },

    /* ------------------------------------------------------------------------------------------------ */
    /*                                              APPs                                                */
    /* ------------------------------------------------------------------------------------------------ */
    /* class                instance            title               tags mask   iscentered  isfloating  monitor */
    { "Gimp",               NULL,               NULL,                   0,          0,          1,          -1 },
    { "TelegramDesktop",    NULL,               NULL,                   1 << 6,     0,          0,          -1 },
    { "WhatsApp",           "whatsapp",         "WhatsApp",             1 << 6,     0,          0,          -1 },
    { "Signal",             NULL,               NULL,                   1 << 6,     0,          0,          -1 },
    { "mpv",                NULL,               NULL,                   1 << 5,     0,          0,          -1 },
    { "tidal-hifi",         "tidal-hifi",       NULL,                   1 << 3,     0,          0,          -1 },
    { "obs",                "obs",              NULL,                   1 << 4,     0,          0,          -1 },
    { "vesktop",            "vesktop",          NULL,                   1 << 4,     0,          0,          -1 },
    { "Galculator",         "galculator",       NULL,                   0,          0,          1,          -1 },
    { "Gucharmap",          NULL,               NULL,                   0,          1,          1,          -1 },
    { "Peek",               "peek",             NULL,                   0,          0,          1,          -1 },
    { "Tk",                 "tk",               NULL,                   0,          1,          1,          -1 },
    { "Sxiv",               NULL,               NULL,                   0,          0,          1,          -1 },
    { "Nitrogen",           NULL,               NULL,                   0,          1,          1,          -1 },
    { "Nsxiv",              NULL,               NULL,                   0,          0,          1,          -1 },
    { "GoWindow",           NULL,               NULL,                   0,          0,          1,          -1 },
    { NULL,                 "screensaver",      NULL,                   0,          0,          0,          -1 },
    { NULL,                 "splogs",           "splogs",               0,          1,          1,          -1 },
    { "Display",            "display",          NULL,                   0,          1,          1,          -1 },
    { "Nsxiv",              "nsxiv",            NULL,                   0,          1,          1,          -1 },
    { "Nsxiv",              "fontpreview",      NULL,                   0,          0,          0,          -1 },
    { "Dragon-drop",        "dragon-drop",      NULL,                   ~0,         0,          0,          -1 },
    { "Gcr-prompter",       "gcr-prompter",     NULL,                   0,          1,          1,          -1 },

    { "chatty-Chatty",      "chatty-Chatty",    NULL,                   1 << 5,     0,          0,          -1 },
    { "chatty-Chatty",      "chatty-Chatty",    "win",                  1 << 5,     0,          1,          -1 },
    { "chatty-Chatty",      "chatty-Chatty",    "Settings",             1 << 5,     1,          1,          -1 },

    /* ------------------------------------------------------------------------------------------------ */
    /*                                              SCRATCHPADS                                         */
    /* ------------------------------------------------------------------------------------------------ */
    /* class                instance        title               tags mask   iscentered  isfloating  monitor */
    { NULL,                 "spterm",       NULL,               SPTAG(0),   0,          1,          -1 },
    { NULL,                 "spfm",         NULL,               SPTAG(1),   0,          1,          -1 },
    { NULL,                 "spmusic",      NULL,               SPTAG(2),   1,          1,          -1 },
    { NULL,                 "spnews",       NULL,               SPTAG(3),   0,          1,          -1 },
    { NULL,                 "sphtop",       NULL,               SPTAG(4),   0,          1,          -1 },
    { NULL,                 "spmarks",      NULL,               SPTAG(5),   1,          1,          -1 },
    { TERMCLASS,            "spcalc",       NULL,               SPTAG(6),   1,          1,          -1 },
    { NULL,                 "spai",         NULL,               SPTAG(7),   0,          1,          -1 },
    { NULL,                 "spsf",         NULL,               SPTAG(8),   0,          1,          -1 },
    { NULL,                 "spsf",         NULL,               SPTAG(9),   0,          1,          -1 },
    { NULL,                 "spvim",        NULL,               SPTAG(10),  1,          1,          -1 },
    { NULL,                 "sptransen",    NULL,               SPTAG(11),  1,          1,          -1 },
    { NULL,                 "sptranses",    NULL,               SPTAG(12),  1,          1,          -1 },
    { NULL,                 "spdefine",     NULL,               SPTAG(13),  1,          1,          -1 },
    { NULL,                 "spdefinees",   NULL,               SPTAG(14),  1,          1,          -1 },
    { NULL,                 "sptrans",      "term-trans.sh",    0,          1,          1,          -1 },
    { "spfloat",            "spfloat",      NULL,               0,          1,          1,          -1 },
};
