//Board weights for N-Queens of board sizes of: 8, 12, 14, 16, 20 and 28
//Weights obtained from: http://www1.aucegypt.edu/faculty/abdelbar/cs525.html

int weights_6[6][6] = {
	{283, 286, 177, 115, 293, 235},
	{249, 121,  62, 127, 290, 259},
	{240, 126, 172, 136,  11,  68},
	{182, 230,  62, 223,  67, 235},
	{222, 258, 269, 267, 193, 256},
	{129, 273,  21, 119, 284,  37}};

int weights_8[8][8] = {
	{283, 286, 177, 115, 293, 235, 286, 192},
	{249, 121,  62, 127, 290, 259, 263, 226},
	{240, 126, 172, 136,  11,  68, 267, 129},
	{182, 230,  62, 223,  67, 235,  29, 102},
	{222, 258, 269, 267, 193, 256, 211, 142},
	{129, 273,  21, 119, 284,  37,  98, 224},
	{215, 270, 113, 226,  91,  80,  56, 273},
	{62, 170, 196, 181, 105, 225, 284,  27}};

int weights_12[12][12] = {
	{283, 286, 177, 115, 293, 235, 286, 192, 249, 121,  62, 127},
	{290, 259, 263, 226, 240, 126, 172, 136,  11,  68, 267, 129},
	{182, 230,  62, 223,  67, 235,  29, 102, 222, 258, 269, 267},
	{193, 256, 211, 142, 129, 273,  21, 119, 284,  37,  98, 224},
	{215, 270, 113, 226,  91,  80,  56, 273,  62, 170, 196, 181},
	{105, 225, 284,  27, 236,   5,  46, 129,  13, 257,  24, 195},
	{282,  45,  14, 267, 134, 164, 243,  50, 187, 108, 276, 278},
	{188,  84,   3, 251, 254, 199, 132,  60, 176, 168, 139, 112},
	{226, 186, 294, 239, 195,  70, 134, 178, 167, 201, 197,   2},
	{117, 192,  52,  56,   1,  80,  86, 241, 165,  89, 244, 119},
	{ 40, 129, 231, 217, 297,  71,  81, 275,   9, 127, 267, 256},
	{197, 153, 186,  65, 106,  83, 119, 224,  28, 171,  32,  29}};

int weights_14[14][14] = {
	{283, 286, 177, 115, 293, 235, 286, 192, 249, 121,  62, 127, 290, 259},
	{263, 226, 240, 126, 172, 136,  11,  68, 267, 129, 182, 230,  62, 223},
	{ 67, 235,  29, 102, 222, 258, 269, 267, 193, 256, 211, 142, 129, 273},
	{ 21, 119, 284,  37,  98, 224, 215, 270, 113, 226,  91,  80,  56, 273},
	{ 62, 170, 196, 181, 105, 225, 284,  27, 236,   5,  46, 129,  13, 257},
	{ 24, 195, 282,  45,  14, 267, 134, 164, 243,  50, 187, 108, 276, 278},
	{188,  84,   3, 251, 254, 199, 132,  60, 176, 168, 139, 112, 226, 186},
	{294, 239, 195,  70, 134, 178, 167, 201, 197,   2, 117, 192,  52,  56},
	{  1,  80,  86, 241, 165,  89, 244, 119,  40, 129, 231, 217, 297,  71},
	{ 81, 275,   9, 127, 267, 256, 197, 153, 186,  65, 106,  83, 119, 224},
	{ 28, 171,  32,  29,   3, 119, 270, 168, 208, 215,  40, 249,  96,  23},
	{218, 145, 146,  51, 121, 155, 179,  88, 164, 128, 241,  50, 193, 100},
	{134,  64,  24, 214, 287,  56, 243, 291, 227, 265, 159, 136, 232, 251},
	{137,  28, 275, 107, 174, 121, 158, 295,  29,  37, 135, 193, 218, 128}};


int weights_16[16][16] = {
	{283,  286,  177,  115,  293,  235,  286,  192,  249,  121,   62,  127,  290,  259,  263,  226},
	{240,  126,  172,  136,   11,   68,  267,  129,  182,  230,   62,  223,   67,  235,   29,  102},
	{222,  258,  269,  267,  193,  256,  211,  142,  129,  273,   21,  119,  284,   37,   98,  224},
	{215,  270,  113,  226,   91,   80,   56,  273,   62,  170,  196,  181,  105,  225,  284,   27},
	{236,    5,   46,  129,   13,  257,   24,  195,  282,   45,   14,  267,  134,  164,  243,   50},
	{187,  108,  276,  278,  188,   84,    3,  251,  254,  199,  132,   60,  176,  168,  139,  112},
	{226,  186,  294,  239,  195,   70,  134,  178,  167,  201,  197,    2,  117,  192,   52,   56},
	{  1,   80,   86,  241,  165,   89,  244,  119,   40,  129,  231,  217,  297,   71,   81,  275},
	{  9,  127,  267,  256,  197,  153,  186,   65,  106,   83,  119,  224,   28,  171,   32,   29},
	{  3,  119,  270,  168,  208,  215,   40,  249,   96,   23,  218,  145,  146,   51,  121,  155},
	{179,   88,  164,  128,  241,   50,  193,  100,  134,   64,   24,  214,  287,   56,  243,  291},
	{227,  265,  159,  136,  232,  251,  137,   28,  275,  107,  174,  121,  158,  295,   29,   37},
	{135,  193,  218,  128,  243,  111,  228,  129,  176,    4,   43,  163,  113,   38,  206,   40},
	{  4,  118,  228,  288,   69,  117,   17,   96,  224,  243,  270,   83,  290,  299,  172,  125},
	{244,   90,    5,  239,  254,  286,   69,  182,   42,  164,   97,  207,  255,    4,  248,   11},
	{122,  228,  299,  243,   46,   68,   40,   22,   11,   10,  105,    1,   61,   30,  178,    5}};

int weights_20[20][20] = {
	{283, 286, 177, 115, 293, 235, 286, 192, 249, 121,  62, 127, 290, 259, 263, 226, 240, 126, 172, 136},
	{ 11,  68, 267, 129, 182, 230,  62, 223,  67, 235,  29, 102, 222, 258, 269, 267, 193, 256, 211, 142},
	{129, 273,  21, 119, 284,  37,  98, 224, 215, 270, 113, 226,  91,  80,  56, 273,  62, 170, 196, 181},
	{105, 225, 284,  27, 236,   5,  46, 129,  13, 257,  24, 195, 282,  45,  14, 267, 134, 164, 243,  50},
	{187, 108, 276, 278, 188,  84,   3, 251, 254, 199, 132,  60, 176, 168, 139, 112, 226, 186, 294, 239},
	{195,  70, 134, 178, 167, 201, 197,   2, 117, 192,  52,  56,   1,  80,  86, 241, 165,  89, 244, 119},
	{ 40, 129, 231, 217, 297,  71,  81, 275,   9, 127, 267, 256, 197, 153, 186,  65, 106,  83, 119, 224},
	{ 28, 171,  32,  29,   3, 119, 270, 168, 208, 215,  40, 249,  96,  23, 218, 145, 146,  51, 121, 155},
	{179,  88, 164, 128, 241,  50, 193, 100, 134,  64,  24, 214, 287,  56, 243, 291, 227, 265, 159, 136},
	{232, 251, 137,  28, 275, 107, 174, 121, 158, 295,  29,  37, 135, 193, 218, 128, 243, 111, 228, 129},
	{176,   4,  43, 163, 113,  38, 206,  40,   4, 118, 228, 288,  69, 117,  17,  96, 224, 243, 270,  83},
	{290, 299, 172, 125, 244,  90,   5, 239, 254, 286,  69, 182,  42, 164,  97, 207, 255,   4, 248,  11},
	{122, 228, 299, 243,  46,  68,  40,  22,  11,  10, 105,   1,  61,  30, 178,   5, 120, 236, 244, 126},
	{222,  65,   8,  16, 282, 158, 224, 237, 162, 224,   0,  36, 152, 299, 279, 250,  68,  71, 273, 131},
	{ 81, 130, 133, 194, 160,  63, 199, 281, 299, 196, 159, 273,  13, 168, 290, 295,  26, 266, 284, 240},
	{190, 284, 276,  42,  36,   7,  45, 156,  79,  18, 287, 212, 148, 172, 159,   9, 236, 110,  42, 287},
	{  6, 201,  13,  72, 121,  55, 119, 199,  21, 104, 139, 211, 140, 167,   5, 228, 227,  50,  84,  58},
	{120, 124,  22, 269, 296, 181,  30, 284, 292,  72, 272,  50,  25, 285, 122, 199,  40, 242,  98, 113},
	{ 98, 290,  24, 290, 209,  81, 219, 136, 132,  55, 194,   4, 179, 269, 273, 176, 150,  55, 160, 142},
	{179, 184, 193, 205, 221,  67, 104,  13,  61, 254, 126, 159, 244, 202, 202, 206, 284, 121,  42, 168}};

int weights_24[24][24] = {
	{283, 286, 177, 115, 293, 235, 286, 192, 249, 121,  62, 127, 290, 259, 263, 226, 240, 126, 172, 136,  11,  68, 267, 129},
	{182, 230,  62, 223,  67, 235,  29, 102, 222, 258, 269, 267, 193, 256, 211, 142, 129, 273,  21, 119, 284,  37,  98, 224},
	{215, 270, 113, 226,  91,  80,  56, 273,  62, 170, 196, 181, 105, 225, 284,  27, 236,   5,  46, 129,  13, 257,  24, 195},
	{282,  45,  14, 267, 134, 164, 243,  50, 187, 108, 276, 278, 188,  84,   3, 251, 254, 199, 132,  60, 176, 168, 139, 112},
	{226, 186, 294, 239, 195,  70, 134, 178, 167, 201, 197,   2, 117, 192,  52,  56,   1,  80,  86, 241, 165,  89, 244, 119},
	{ 40, 129, 231, 217, 297,  71,  81, 275,   9,  27, 267, 256, 197, 153, 186,  65, 106,  83, 119, 224,  28, 171,  32,  29},
	{  3, 119, 270, 168, 208, 215,  40, 249,  96,  23, 218, 145, 146,  51, 121, 155, 179,  88, 164, 128, 241,  50, 193, 100},
	{134,  64,  24, 214, 287,  56, 243, 291, 227, 265, 159, 136, 232, 251, 137,  28, 275, 107, 174, 121, 158, 295,  29,  37},
	{135, 193, 218, 128, 243, 111, 228, 129, 176,   4,  43, 163, 113,  38, 206,  40,   4, 118, 228, 288,  69, 117,  17,  96},
	{224, 243, 270,  83, 290, 299, 172, 125, 244,  90,   5, 239, 254, 286,  69, 182,  42, 164,  97, 207, 255,   4, 248,  11},
	{122, 228, 299, 243,  46,  68,  40,  22,  11,  10, 105,   1,  61,  30, 178,   5, 120, 236, 244, 126, 222,  65,   8,  16},
	{282, 158, 224, 237, 162, 224,   0,  36, 152, 299, 279, 250,  68,  71, 273, 131,  81, 130, 133, 194, 160,  63, 199, 281},
	{299, 196, 159, 273,  13, 168, 290, 295,  26, 266, 284, 240, 190, 284, 276,  42,  36,   7,  45, 156,  79,  18, 287, 212},
	{148, 172, 159,   9, 236, 110,  42, 287,   6, 201,  13,  72, 121,  55, 119, 199,  21, 104, 139, 211, 140, 167,   5, 228},
	{227,  50,  84,  58, 120, 124,  22, 269, 296, 181,  30, 284, 292,  72, 272,  50,  25, 285, 122, 199,  40, 242,  98, 113},
	{ 98, 290,  24, 290, 209,  81, 219, 136, 132,  55, 194,   4, 179, 269, 273, 176, 150,  55, 160, 142, 179, 184, 193, 205},
	{221,  67, 104,  13,  61, 254, 126, 159, 244, 202, 202, 206, 284, 121,  42, 168, 228, 289, 172, 108, 258, 198,  36, 108},
	{253, 248,   3, 133, 133, 248,  90,  54,  67, 246,  68, 129, 200, 246, 288, 197, 149, 190, 103, 133,  63, 197,  53, 292},
	{186, 225, 152, 196, 175, 188,  57, 129, 136,  60,  14,  21,  60, 104, 128, 127,  50, 248, 256,   2, 194, 297, 199,  43},
	{239,   2, 228,   3, 200, 281,  47, 138, 259, 251,  35, 134, 139,  92,  15,  27, 204,  29,  49, 264, 185, 229, 143, 235},
	{177, 100, 238,  71, 149, 189, 167,  88, 192,  95, 143, 144, 129, 190, 282, 140, 141,  69,  26,  32, 161,  42,  60, 117},
	{123, 161,  81,   9,  90, 225, 296, 267,  77, 234,  90, 226, 124, 257,  14,  68, 105, 158, 212, 286, 100, 246, 126, 294},
	{ 16, 152,  78, 229, 246, 190,  47,  70,  51, 180, 131, 193, 157, 127, 212, 286, 114,  55, 212, 290,  12, 279, 110, 169},
	{189,  74, 155,  41,  20,  33,  87,  88, 238, 166,  70, 184,  56, 117,   6, 160,  49, 137, 105, 259,  17,  18, 245, 183}};

int weights_28[28][28] = {
	{283, 286, 177, 115, 293, 235, 286, 192, 249, 121,  62, 127, 290, 259, 263, 226, 240, 126, 172, 136,  11,  68, 267, 129, 182, 230,  62, 223},
	{ 67, 235,  29, 102, 222, 258, 269, 267, 193, 256, 211, 142, 129, 273,  21, 119, 284,  37,  98, 224, 215, 270, 113, 226,  91,  80,  56, 273},
	{62, 170, 196, 181, 105, 225, 284,  27, 236,   5,  46, 129,  13, 257,  24, 195, 282,  45,  14, 267, 134, 164, 243,  50, 187, 108, 276, 278},
	{188,  84,   3, 251, 254, 199, 132,  60, 176, 168, 139, 112, 226, 186, 294, 239, 195,  70, 134, 178, 167, 201, 197,   2, 117, 192,  52,  56},
	{  1,  80,  86, 241, 165,  89, 244, 119,  40, 129, 231, 217, 297,  71,  81, 275,   9, 127, 267, 256, 197, 153, 186,  65, 106,  83, 119, 224},
	{ 28, 171,  32,  29,   3, 119, 270, 168, 208, 215,  40, 249,  96,  23, 218, 145, 146,  51, 121, 155, 179,  88, 164, 128, 241,  50, 193, 100},
	{134,  64,  24, 214, 287,  56, 243, 291, 227, 265, 159, 136, 232, 251, 137,  28, 275, 107, 174, 121, 158, 295,  29,  37, 135, 193, 218, 128},
	{243, 111, 228, 129, 176,   4,  43, 163, 113,  38, 206,  40,   4, 118, 228, 288,  69, 117,  17,  96, 224, 243, 270,  83, 290, 299, 172, 125},
	{244,  90,   5, 239, 254, 286,  69, 182,  42, 164,  97, 207, 255,   4, 248,  11, 122, 228, 299, 243,  46,  68,  40,  22, 11,  10, 105,   1},
	{ 61,  30, 178,   5, 120, 236, 244, 126, 222,  65,   8,  16, 282, 158, 224, 237, 162, 224,   0,  36, 152, 299, 279, 250,  68,  71, 273, 131},
	{ 81, 130, 133, 194, 160,  63, 199, 281, 299, 196, 159, 273,  13, 168, 290, 295,  26, 266, 284, 240, 190, 284, 276,  42,  36,   7,  45, 156},
	{ 79,  18, 287, 212, 148, 172, 159,   9, 236, 110,  42, 287,   6, 201,  13,  72, 121,  55, 119, 199,  21, 104, 139, 211, 140, 167,   5, 228},
	{227,  50,  84,  58, 120, 124,  22, 269, 296, 181,  30, 284, 292,  72, 272,  50,  25, 285, 122, 199,  40, 242,  98, 113,  98, 290,  24, 290},
	{209,  81, 219, 136, 132,  55, 194,   4, 179, 269, 273, 176, 150,  55, 160, 142, 179, 184, 193, 205, 221,  67, 104,  13,  61, 254, 126, 159},
	{244, 202, 202, 206, 284, 121,  42, 168, 228, 289, 172, 108, 258, 198,  36, 108, 253, 248,   3, 133, 133, 248,  90,  54,  67, 246,  68, 129},
	{200, 246, 288, 197, 149, 190, 103, 133,  63, 197,  53, 292, 186, 225, 152, 196, 175, 188,  57, 129, 136,  60,  14,  21,  60, 104, 128, 127},
	{ 50, 248, 256,   2, 194, 297, 199,  43, 239,   2, 228,   3, 200, 281,  47, 138, 259, 251,  35, 134, 139,  92,  15,  27, 204,  29,  49, 264},
	{185, 229, 143, 235, 177, 100, 238,  71, 149, 189, 167,  88, 192,  95, 143, 144, 129, 190, 282, 140, 141,  69,  26,  32, 161,  42,  60, 117},
	{123, 161,  81,   9,  90, 225, 296, 267,  77, 234,  90, 226, 124, 257,  14,  68, 105, 158, 212, 286, 100, 246, 126, 294,  16, 152,  78, 229},
	{246, 190,  47,  70,  51, 180, 131, 193, 157, 127, 212, 286, 114,  55, 212, 290,  12, 279, 110, 169, 189,  74, 155,  41,  20,  33,  87,  88},
	{238, 166,  70, 184,  56, 117,   6, 160,  49, 137, 105, 259,  17,  18, 245, 183,  73, 158, 173, 137, 189, 283,   7,  78,  57, 214, 171, 129},
	{  0, 259, 218, 238, 125, 288, 174, 233, 157, 181,  93, 258,  70, 199, 217, 139, 269, 163,  22,  94,  73, 247, 231, 262, 282, 290,  92,  91},
	{257,  15, 221, 257, 274,  91, 247, 151, 231, 121, 137, 140,  54, 230,  98, 125, 181,  16,  16, 202, 231,  39, 296,   4,  38, 280,  18,  21},
	{270, 162, 112, 279, 177,  85, 236, 204, 276, 183, 107, 259,  57, 244,  99, 111, 227, 250, 236, 160,  18,   5,  63, 249,  44, 111,   5, 134},
	{ 91,  75, 155, 114, 289, 268,  93, 218, 105,  82, 122,  82,  17, 230,  93,  74, 226, 193, 186, 153, 143, 174,  14, 213, 179,  77, 162, 275},
	{188, 219, 110,  32, 294,  17, 146,  35,  37, 291, 253, 143,  73, 128, 225,  91, 110,  18, 217,  36, 263, 155, 190, 158,  30, 204,  71, 261},
	{ 33, 285, 289, 273, 204, 151,   5, 250, 168, 203, 285, 206, 195, 239,  49,  20,  67,  26, 163, 177,  96,  81, 265,  60, 236, 155, 270,  18},
	{111,  42,  32, 196,  79,  21, 170, 284, 172, 227, 234,  40, 183, 272, 298, 130, 263,  47, 150,  30,  73,  14, 259, 222, 147, 224, 282, 135}};

//Board weights are obtained from the above arrays according to the board size
int set_weights(int ** weights,int n)
{
    int i, j;
    
    switch(n)
    {
	case 6:
		for(i = 0; i < n; i++)
		    for(j = 0; j < n; j++)
		        weights[i][j] = weights_6[i][j];
			break;
	case 8:
		for(i = 0; i < n; i++)
		    for(j = 0; j < n; j++)
		        weights[i][j] = weights_8[i][j];
		break;
	case 12:
		for(i = 0; i < n; i++)
		    for(j = 0; j < n; j++)
		        weights[i][j] = weights_12[i][j];
		break;
	case 14:
		for(i = 0; i <n; i++)
		    for(j = 0; j <n; j++)
		        weights[i][j] = weights_14[i][j];
		break;
	case 16:
		for(i = 0; i <n; i++)
		    for(j = 0; j <n; j++)
		        weights[i][j] = weights_16[i][j];
		break;
	case 20:
		for(i = 0; i < n; i++)
		    for(j = 0; j < n; j++)
		        weights[i][j] = weights_20[i][j];
		break;
	case 24:
		for(i = 0; i < n; i++)
		    for(j = 0; j < n; j++)
		        weights[i][j] = weights_24[i][j];
		break;
	case 28:
		for(i = 0; i < n; i++)
		    for(j = 0; j < n; j++)
		        weights[i][j] = weights_28[i][j];
		break;
	default:
		return -1;
    }

    return 1;
}