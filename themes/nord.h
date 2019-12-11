/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {
     	/* 8 normal colors */
     	"#3b4252",
     	"#bf616a",
     	"#a3be8c",
     	"#ebcb8b",
     	"#81a1c1",
     	"#b48ead",
     	"#88c0d0",
     	"#e5e9f0",
     
     	/* 8 bright colors */
     	"#4c566a",
     	"#bf616a",
     	"#a3be8c",
     	"#ebcb8b",
     	"#81a1c1",
     	"#b48ead",
     	"#8fbcbb",
     	"#eceff4",
     
     	[255] = 0,
     
     	/* more colors can be added after 255 to use with DefaultXX */
        "#2e3440",
     	"#d8dee9",
};
     
     
/*
 * Default colors (colorname index)
 * foreground, background, cursor, reverse cursor
 */
unsigned int defaultfg = 257;
unsigned int defaultbg = 256;
static unsigned int defaultcs = 257;
static unsigned int defaultrcs = 256;
