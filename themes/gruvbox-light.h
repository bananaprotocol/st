/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {
     	/* 8 normal colors */
     	"#fbf1c7",
     	"#cc241d",
     	"#98971a",
     	"#d79921",
     	"#458588",
     	"#b16286",
     	"#689d6a",
     	"#7c6f64",
     
     	/* 8 bright colors */
     	"#928374",
     	"#9d0006",
     	"#79740e",
     	"#b57614",
     	"#076678",
     	"#8f3f71",
     	"#427b58",
     	"#3c3836",
     
     	[255] = 0,
     
     	/* more colors can be added after 255 to use with DefaultXX */
        "#fbf1c7",
     	"#3c3836",
};
     
     
/*
 * Default colors (colorname index)
 * foreground, background, cursor, reverse cursor
 */
unsigned int defaultfg = 257;
unsigned int defaultbg = 256;
static unsigned int defaultcs = 257;
static unsigned int defaultrcs = 0;
