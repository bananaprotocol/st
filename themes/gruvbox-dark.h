/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {
     	/* 8 normal colors */
     	"#282828",
     	"#cc241d",
     	"#98971a",
     	"#d79921",
     	"#458588",
     	"#b16286",
     	"#689d6a",
     	"#a89984",
     
     	/* 8 bright colors */
     	"#928374",
     	"#fb4934",
     	"#b8bb26",
     	"#fabd2f",
     	"#83a598",
     	"#d3869b",
     	"#8ec07c",
     	"#ebdbb2",
     
     	[255] = 0,
     
     	/* more colors can be added after 255 to use with DefaultXX */
        "#282828",
     	"#ebdbb2",
};
     
     
/*
 * Default colors (colorname index)
 * foreground, background, cursor, reverse cursor
 */
unsigned int defaultfg = 257;
unsigned int defaultbg = 256;
static unsigned int defaultcs = 257;
static unsigned int defaultrcs = 256;
