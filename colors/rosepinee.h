static const char *colorname[] = {
    [0]  = "#26233a",
    [1]  = "#eb6f92",
    [2]  = "#9ccfd8",
    [3]  = "#f6c177",
    [4]  = "#31748f",
    [5]  = "#c4a7e7",
    [6]  = "#ebbcba",
    [7]  = "#e0def4",
    [8]  = "#6e6a86",
    [9]  = "#eb6f92",
    [10] = "#9ccfd8",
    [11] = "#f6c177",
    [12] = "#31748f",
    [13] = "#c4a7e7",
    [14] = "#ebbcba",
    [15] = "#e0def4",

    /* more colors can be added after 255 to use with DefaultXX */
    [256] = "#000000",
    [257] = "#f8f8f2",
};


/*
 * Default colors (colorname index)
 * foreground, background, cursor, reverse cursor
 */
unsigned int defaultbg = 256;
unsigned int defaultfg = 257;
unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
