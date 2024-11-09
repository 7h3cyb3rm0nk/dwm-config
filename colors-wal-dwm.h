static const char norm_fg[] = "#c7d8ee";
static const char norm_bg[] = "#020202";
static const char norm_border[] = "#8b97a6";

static const char sel_fg[] = "#c7d8ee";
static const char sel_bg[] = "#4A5352";
static const char sel_border[] = "#c7d8ee";

static const char urg_fg[] = "#c7d8ee";
static const char urg_bg[] = "#2B4564";
static const char urg_border[] = "#2B4564";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
