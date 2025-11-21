// scratchpads.h

/* constants */
#define TERMINAL "st"
#define TERMCLASS "St"
#define SHELL "bash"

typedef struct {
    const char *name;
    const void *cmd;
} Sp;
const char *spcmd0[] = {TERMINAL, "-n", "spterm", "-c", "spterm", "-g", "110x30", NULL };
const char *spcmd1[] = {TERMINAL, "-n", "spfm", "-g", "120x25", "-e", SHELL, "-c", "nnn.sh", NULL };
const char *spcmd2[] = {TERMINAL, "-n", "spmusic", "-c", "spmusic", "-g", "120x25", "-e", "ncmpcpp-ueberzug", NULL};
const char *spcmd3[] = {TERMINAL, "-n", "spnews", "-c", "spnews", "-g", "130x30", "-e", SHELL,  "-c", "newsboat", NULL};
const char *spcmd4[] = {TERMINAL, "-n", "sphtop", "-c", "sphtop", "-g", "130x30", "-e", SHELL, "-c", "htop", NULL };
const char *spcmd5[] = {TERMINAL, "-n", "spmarks", "-c", "spmarks", "-g", "110x22", "-e", SHELL, "-c", "gms", NULL };
const char *spcmd6[] = {TERMINAL, "-n", "spcalc", "-f", "monospace:size=16", "-g", "28x8", "-e", "bc", "-lq", NULL };
const char *spcmd7[] = {TERMINAL, "-n", "spai", "-c", "spai", "-g", "130x30", "-e", SHELL, "-ic", "ollama.sh", NULL };
const char *spcmd8[] = {TERMINAL, "-n", "spsf", "-g", "95x22", "-e", SHELL, "-c", "share-files", NULL };
const char *spcmd9[] = {TERMINAL, "-n", "spsf", "-g", "95x22", "-e", SHELL, "-c", "share-files --send", NULL };
const char *spcmd10[] = {TERMINAL, "-n", "spvim", "-g", "105x28", "-e", SHELL, "-c", "pad", NULL };
const char *spcmd11[] = {TERMINAL, "-n", "sptransen", "-g", "120x30", "-e", SHELL, "-ic", "translate 'en:es'", NULL };
const char *spcmd12[] = {TERMINAL, "-n", "sptranses", "-g", "120x30", "-e", SHELL, "-ic", "translate", NULL };
const char *spcmd13[] = {TERMINAL, "-n", "spdefine", "-g", "120x30", "-e", SHELL, "-ic", "define", NULL };
const char *spcmd14[] = {TERMINAL, "-n", "spdefinees", "-g", "120x30", "-e", SHELL, "-ic", "define es:", NULL };
static Sp scratchpads[] = {
    /* name          cmd  */
    {"spterm",      spcmd0},    // simple terminal
    {"spfm",        spcmd1},    // file manager
    {"spmusic",     spcmd2},    // music player
    {"spnews",      spcmd3},    // news reader
    {"sphtop",      spcmd4},    // interactive process viewer
    {"spmarks",     spcmd5},    // bookmark manager
    {"spcalc",      spcmd6},    // calculator
    {"spai",        spcmd7},    // chatbot
    {"spsf",        spcmd8},    // share-files with `nnn+dragondrop`
    {"spsf",        spcmd9},    // share-files with `localsend`
    {"spvim",       spcmd10},   // scratchpad for coding
    {"sptransen",   spcmd11},   // translate 'en->es' | interactive shell
    {"sptranses",   spcmd12},   // translate 'es->en' | interactive shell
    {"sptranses",   spcmd13},   // define 'en' | interactive shell
    {"sptranses",   spcmd14},   // define 'es' | interactive shell
};

enum {
    SP_TERM = 0,
    SP_FILE,
    SP_MUSIC,
    SP_NEWS,
    SP_HTOP,
    SP_MARKS,
    SP_CALC,
    SP_CHAT,
    SP_SHARE,
    SP_SHARESEND,
    SP_NVIM,
    SP_TRANS,
    SP_TRANSES,
    SP_DEFINE,
    SP_DEFINEES,
};

