#ifndef __obj_cylinder
#define __obj_cylinder

#define render_cylinder { \
    glInterleavedArrays (GL_N3F_V3F, 0, cylinderInterleavedQuadStrips); \
    for (int i = 0; i < cylinderNumQuadStrips; i++) { \
        glDrawArrays (GL_QUAD_STRIP, cylinderQuadStripIndices[i]/6, \
                        (cylinderQuadStripIndices[i+1] - cylinderQuadStripIndices[i])/6); \
    } \
}

static int cylinderNumQuadStrips = 16;

static int cylinderQuadStripIndices[17] = { 0, 120, 240, 360, 480, 600, 720, 840, 960, 1080, 1200, 1320, 1440, 1560, 1680, 1800, 1920 };

static float cylinderInterleavedQuadStrips[1920] = {
 0.000,  0.000, -1.000, -0.118,  0.284,  0.215,  0.000,  0.000, -1.000, -0.207,  0.499,  0.215,
 0.000,  0.000, -1.000,  0.118,  0.284,  0.215, 
 0.000,  0.000, -1.000,  0.207,  0.499,  0.215, 
-0.000,  0.000, -1.000,  0.285,  0.117,  0.215, 
-0.000,  0.000, -1.000,  0.500,  0.206,  0.215, 
-0.000,  0.000, -1.000,  0.285, -0.119,  0.215, 
-0.000,  0.000, -1.000,  0.500, -0.208,  0.215, 
-0.000,  0.000, -1.000,  0.118, -0.285,  0.215, 
-0.000,  0.000, -1.000,  0.207, -0.501,  0.215, 
-0.000,  0.000, -1.000, -0.118, -0.285,  0.215, 
-0.000,  0.000, -1.000, -0.207, -0.501,  0.215, 
 0.000,  0.000, -1.000, -0.285, -0.119,  0.215, 
 0.000,  0.000, -1.000, -0.500, -0.208,  0.215, 
 0.000,  0.000, -1.000, -0.285,  0.117,  0.215, 
 0.000,  0.000, -1.000, -0.500,  0.206,  0.215, 
 0.000,  0.000, -1.000, -0.118,  0.284,  0.215, 
 0.000,  0.000, -1.000, -0.207,  0.499,  0.215, 
 0.000,  0.000, -1.000,  0.118,  0.284,  0.215, 
 0.000,  0.000, -1.000,  0.207,  0.499,  0.215, 
-0.383, -0.924, -0.000,  0.118,  0.284,  0.315, -0.383, -0.924, -0.000,  0.118,  0.284,  0.215,
-0.924, -0.383, -0.000,  0.285,  0.117,  0.315, 
-0.924, -0.383, -0.000,  0.285,  0.117,  0.215, 
-0.924,  0.383,  0.000,  0.285, -0.119,  0.315, 
-0.924,  0.383,  0.000,  0.285, -0.119,  0.215, 
-0.383,  0.924,  0.000,  0.118, -0.285,  0.315, 
-0.383,  0.924,  0.000,  0.118, -0.285,  0.215, 
 0.383,  0.924,  0.000, -0.118, -0.285,  0.315, 
 0.383,  0.924,  0.000, -0.118, -0.285,  0.215, 
 0.924,  0.383,  0.000, -0.285, -0.119,  0.315, 
 0.924,  0.383,  0.000, -0.285, -0.119,  0.215, 
 0.924, -0.383, -0.000, -0.285,  0.117,  0.315, 
 0.924, -0.383, -0.000, -0.285,  0.117,  0.215, 
 0.383, -0.924, -0.000, -0.118,  0.284,  0.315, 
 0.383, -0.924, -0.000, -0.118,  0.284,  0.215, 
-0.383, -0.924, -0.000,  0.118,  0.284,  0.315, 
-0.383, -0.924, -0.000,  0.118,  0.284,  0.215, 
-0.924, -0.383, -0.000,  0.285,  0.117,  0.315, 
-0.924, -0.383, -0.000,  0.285,  0.117,  0.215, 
 0.000, -0.000,  1.000,  0.207,  0.499,  0.315,  0.000, -0.000,  1.000,  0.118,  0.284,  0.315,
 0.000, -0.000,  1.000,  0.500,  0.206,  0.315, 
 0.000, -0.000,  1.000,  0.285,  0.117,  0.315, 
-0.000, -0.000,  1.000,  0.500, -0.208,  0.315, 
-0.000, -0.000,  1.000,  0.285, -0.119,  0.315, 
-0.000, -0.000,  1.000,  0.207, -0.501,  0.315, 
-0.000, -0.000,  1.000,  0.118, -0.285,  0.315, 
 0.000, -0.000,  1.000, -0.207, -0.501,  0.315, 
 0.000, -0.000,  1.000, -0.118, -0.285,  0.315, 
-0.000, -0.000,  1.000, -0.500, -0.208,  0.315, 
-0.000, -0.000,  1.000, -0.285, -0.119,  0.315, 
 0.000, -0.000,  1.000, -0.500,  0.206,  0.315, 
 0.000, -0.000,  1.000, -0.285,  0.117,  0.315, 
-0.000, -0.000,  1.000, -0.207,  0.499,  0.315, 
-0.000, -0.000,  1.000, -0.118,  0.284,  0.315, 
 0.000, -0.000,  1.000,  0.207,  0.499,  0.315, 
 0.000, -0.000,  1.000,  0.118,  0.284,  0.315, 
 0.000, -0.000,  1.000,  0.500,  0.206,  0.315, 
 0.000, -0.000,  1.000,  0.285,  0.117,  0.315, 
-0.383,  0.924,  0.000, -0.207,  0.499,  0.215, -0.383,  0.924,  0.000, -0.207,  0.499,  0.315,
 0.383,  0.924,  0.000,  0.207,  0.499,  0.215, 
 0.383,  0.924,  0.000,  0.207,  0.499,  0.315, 
 0.924,  0.383,  0.000,  0.500,  0.206,  0.215, 
 0.924,  0.383,  0.000,  0.500,  0.206,  0.315, 
 0.924, -0.383, -0.000,  0.500, -0.208,  0.215, 
 0.924, -0.383, -0.000,  0.500, -0.208,  0.315, 
 0.383, -0.924, -0.000,  0.207, -0.501,  0.215, 
 0.383, -0.924, -0.000,  0.207, -0.501,  0.315, 
-0.383, -0.924, -0.000, -0.207, -0.501,  0.215, 
-0.383, -0.924, -0.000, -0.207, -0.501,  0.315, 
-0.924, -0.383, -0.000, -0.500, -0.208,  0.215, 
-0.924, -0.383, -0.000, -0.500, -0.208,  0.315, 
-0.924,  0.383,  0.000, -0.500,  0.206,  0.215, 
-0.924,  0.383,  0.000, -0.500,  0.206,  0.315, 
-0.383,  0.924,  0.000, -0.207,  0.499,  0.215, 
-0.383,  0.924,  0.000, -0.207,  0.499,  0.315, 
 0.383,  0.924,  0.000,  0.207,  0.499,  0.215, 
 0.383,  0.924,  0.000,  0.207,  0.499,  0.315, 
 0.000,  0.000, -1.000, -0.118,  0.284,  0.397,  0.000,  0.000, -1.000, -0.207,  0.499,  0.397,
 0.000,  0.000, -1.000,  0.118,  0.284,  0.397, 
 0.000,  0.000, -1.000,  0.207,  0.499,  0.397, 
-0.000,  0.000, -1.000,  0.285,  0.117,  0.397, 
-0.000,  0.000, -1.000,  0.500,  0.206,  0.397, 
-0.000,  0.000, -1.000,  0.285, -0.119,  0.397, 
-0.000,  0.000, -1.000,  0.500, -0.208,  0.397, 
-0.000,  0.000, -1.000,  0.118, -0.285,  0.397, 
-0.000,  0.000, -1.000,  0.207, -0.501,  0.397, 
-0.000,  0.000, -1.000, -0.118, -0.285,  0.397, 
-0.000,  0.000, -1.000, -0.207, -0.501,  0.397, 
 0.000,  0.000, -1.000, -0.285, -0.119,  0.397, 
 0.000,  0.000, -1.000, -0.500, -0.208,  0.397, 
 0.000,  0.000, -1.000, -0.285,  0.117,  0.397, 
 0.000,  0.000, -1.000, -0.500,  0.206,  0.397, 
 0.000,  0.000, -1.000, -0.118,  0.284,  0.397, 
 0.000,  0.000, -1.000, -0.207,  0.499,  0.397, 
 0.000,  0.000, -1.000,  0.118,  0.284,  0.397, 
 0.000,  0.000, -1.000,  0.207,  0.499,  0.397, 
-0.383, -0.924, -0.000,  0.118,  0.284,  0.497, -0.383, -0.924, -0.000,  0.118,  0.284,  0.397,
-0.924, -0.383, -0.000,  0.285,  0.117,  0.497, 
-0.924, -0.383, -0.000,  0.285,  0.117,  0.397, 
-0.924,  0.383,  0.000,  0.285, -0.119,  0.497, 
-0.924,  0.383,  0.000,  0.285, -0.119,  0.397, 
-0.383,  0.924,  0.000,  0.118, -0.285,  0.497, 
-0.383,  0.924,  0.000,  0.118, -0.285,  0.397, 
 0.383,  0.924,  0.000, -0.118, -0.285,  0.497, 
 0.383,  0.924,  0.000, -0.118, -0.285,  0.397, 
 0.924,  0.383,  0.000, -0.285, -0.119,  0.497, 
 0.924,  0.383,  0.000, -0.285, -0.119,  0.397, 
 0.924, -0.383, -0.000, -0.285,  0.117,  0.497, 
 0.924, -0.383, -0.000, -0.285,  0.117,  0.397, 
 0.383, -0.924, -0.000, -0.118,  0.284,  0.497, 
 0.383, -0.924, -0.000, -0.118,  0.284,  0.397, 
-0.383, -0.924, -0.000,  0.118,  0.284,  0.497, 
-0.383, -0.924, -0.000,  0.118,  0.284,  0.397, 
-0.924, -0.383, -0.000,  0.285,  0.117,  0.497, 
-0.924, -0.383, -0.000,  0.285,  0.117,  0.397, 
 0.000, -0.000,  1.000,  0.207,  0.499,  0.497,  0.000, -0.000,  1.000,  0.118,  0.284,  0.497,
-0.000, -0.000,  1.000,  0.500,  0.206,  0.497, 
-0.000, -0.000,  1.000,  0.285,  0.117,  0.497, 
 0.000, -0.000,  1.000,  0.500, -0.208,  0.497, 
 0.000, -0.000,  1.000,  0.285, -0.119,  0.497, 
-0.000, -0.000,  1.000,  0.207, -0.501,  0.497, 
-0.000, -0.000,  1.000,  0.118, -0.285,  0.497, 
 0.000, -0.000,  1.000, -0.207, -0.501,  0.497, 
 0.000, -0.000,  1.000, -0.118, -0.285,  0.497, 
 0.000, -0.000,  1.000, -0.500, -0.208,  0.497, 
 0.000, -0.000,  1.000, -0.285, -0.119,  0.497, 
-0.000, -0.000,  1.000, -0.500,  0.206,  0.497, 
-0.000, -0.000,  1.000, -0.285,  0.117,  0.497, 
-0.000, -0.000,  1.000, -0.207,  0.499,  0.497, 
-0.000, -0.000,  1.000, -0.118,  0.284,  0.497, 
 0.000, -0.000,  1.000,  0.207,  0.499,  0.497, 
 0.000, -0.000,  1.000,  0.118,  0.284,  0.497, 
-0.000, -0.000,  1.000,  0.500,  0.206,  0.497, 
-0.000, -0.000,  1.000,  0.285,  0.117,  0.497, 
-0.383,  0.924,  0.000, -0.207,  0.499,  0.397, -0.383,  0.924,  0.000, -0.207,  0.499,  0.497,
 0.383,  0.924,  0.000,  0.207,  0.499,  0.397, 
 0.383,  0.924,  0.000,  0.207,  0.499,  0.497, 
 0.924,  0.383,  0.000,  0.500,  0.206,  0.397, 
 0.924,  0.383,  0.000,  0.500,  0.206,  0.497, 
 0.924, -0.383, -0.000,  0.500, -0.208,  0.397, 
 0.924, -0.383, -0.000,  0.500, -0.208,  0.497, 
 0.383, -0.924, -0.000,  0.207, -0.501,  0.397, 
 0.383, -0.924, -0.000,  0.207, -0.501,  0.497, 
-0.383, -0.924, -0.000, -0.207, -0.501,  0.397, 
-0.383, -0.924, -0.000, -0.207, -0.501,  0.497, 
-0.924, -0.383, -0.000, -0.500, -0.208,  0.397, 
-0.924, -0.383, -0.000, -0.500, -0.208,  0.497, 
-0.924,  0.383,  0.000, -0.500,  0.206,  0.397, 
-0.924,  0.383,  0.000, -0.500,  0.206,  0.497, 
-0.383,  0.924,  0.000, -0.207,  0.499,  0.397, 
-0.383,  0.924,  0.000, -0.207,  0.499,  0.497, 
 0.383,  0.924,  0.000,  0.207,  0.499,  0.397, 
 0.383,  0.924,  0.000,  0.207,  0.499,  0.497, 
-0.385,  0.923,  0.000, -0.208,  0.498,  0.050, -0.385,  0.923,  0.000, -0.208,  0.498,  0.133,
 0.380,  0.925,  0.000,  0.206,  0.499,  0.050, 
 0.380,  0.925,  0.000,  0.206,  0.499,  0.133, 
 0.923,  0.385,  0.000,  0.499,  0.207,  0.050, 
 0.923,  0.385,  0.000,  0.499,  0.207,  0.133, 
 0.925, -0.380, -0.000,  0.500, -0.207,  0.050, 
 0.925, -0.380, -0.000,  0.500, -0.207,  0.133, 
 0.385, -0.923, -0.000,  0.208, -0.500,  0.050, 
 0.385, -0.923, -0.000,  0.208, -0.500,  0.133, 
-0.380, -0.925, -0.000, -0.206, -0.501,  0.050, 
-0.380, -0.925, -0.000, -0.206, -0.501,  0.133, 
-0.923, -0.385, -0.000, -0.499, -0.209,  0.050, 
-0.923, -0.385, -0.000, -0.499, -0.209,  0.133, 
-0.925,  0.380,  0.000, -0.500,  0.205,  0.050, 
-0.925,  0.380,  0.000, -0.500,  0.205,  0.133, 
-0.385,  0.923,  0.000, -0.208,  0.498,  0.050, 
-0.385,  0.923,  0.000, -0.208,  0.498,  0.133, 
 0.380,  0.925,  0.000,  0.206,  0.499,  0.050, 
 0.380,  0.925,  0.000,  0.206,  0.499,  0.133, 
 0.281,  0.684, -0.673,  0.148,  0.360, -0.116,  0.281,  0.684, -0.673,  0.206,  0.499,  0.050,
 0.683,  0.285, -0.673,  0.360,  0.149, -0.116, 
 0.683,  0.285, -0.673,  0.499,  0.207,  0.050, 
 0.684, -0.281, -0.673,  0.360, -0.149, -0.116, 
 0.684, -0.281, -0.673,  0.500, -0.207,  0.050, 
 0.285, -0.683, -0.673,  0.150, -0.361, -0.116, 
 0.285, -0.683, -0.673,  0.208, -0.500,  0.050, 
-0.281, -0.684, -0.673, -0.148, -0.361, -0.116, 
-0.281, -0.684, -0.673, -0.206, -0.501,  0.050, 
-0.683, -0.285, -0.673, -0.360, -0.151, -0.116, 
-0.683, -0.285, -0.673, -0.499, -0.209,  0.050, 
-0.684,  0.281, -0.673, -0.360,  0.147, -0.116, 
-0.684,  0.281, -0.673, -0.500,  0.205,  0.050, 
-0.285,  0.683, -0.673, -0.150,  0.359, -0.116, 
-0.285,  0.683, -0.673, -0.208,  0.498,  0.050, 
 0.281,  0.684, -0.673,  0.148,  0.360, -0.116, 
 0.281,  0.684, -0.673,  0.206,  0.499,  0.050, 
 0.683,  0.285, -0.673,  0.360,  0.149, -0.116, 
 0.683,  0.285, -0.673,  0.499,  0.207,  0.050, 
 0.001,  0.002,  1.000,  0.206,  0.499, -0.327,  0.001,  0.002,  1.000,  0.148,  0.360, -0.327,
 0.002,  0.001,  1.000,  0.499,  0.207, -0.327, 
 0.002,  0.001,  1.000,  0.360,  0.149, -0.327, 
 0.002, -0.001,  1.000,  0.500, -0.207, -0.327, 
 0.002, -0.001,  1.000,  0.361, -0.149, -0.327, 
 0.001, -0.002,  1.000,  0.208, -0.500, -0.327, 
 0.001, -0.002,  1.000,  0.150, -0.361, -0.327, 
-0.001, -0.002,  1.000, -0.206, -0.501, -0.327, 
-0.001, -0.002,  1.000, -0.148, -0.362, -0.327, 
-0.002, -0.001,  1.000, -0.499, -0.209, -0.327, 
-0.002, -0.001,  1.000, -0.360, -0.151, -0.327, 
-0.002,  0.001,  1.000, -0.500,  0.205, -0.327, 
-0.002,  0.001,  1.000, -0.361,  0.148, -0.327, 
-0.001,  0.002,  1.000, -0.208,  0.498, -0.327, 
-0.001,  0.002,  1.000, -0.150,  0.359, -0.327, 
 0.001,  0.002,  1.000,  0.206,  0.499, -0.327, 
 0.001,  0.002,  1.000,  0.148,  0.360, -0.327, 
 0.002,  0.001,  1.000,  0.499,  0.207, -0.327, 
 0.002,  0.001,  1.000,  0.360,  0.149, -0.327, 
 0.380,  0.925,  0.004,  0.148,  0.360, -0.327,  0.380,  0.925,  0.004,  0.148,  0.360, -0.116,
 0.923,  0.385,  0.004,  0.360,  0.149, -0.327, 
 0.923,  0.385,  0.004,  0.360,  0.149, -0.116, 
 0.925, -0.380,  0.004,  0.361, -0.149, -0.327, 
 0.925, -0.380,  0.004,  0.360, -0.149, -0.116, 
 0.385, -0.923,  0.004,  0.150, -0.361, -0.327, 
 0.385, -0.923,  0.004,  0.150, -0.361, -0.116, 
-0.380, -0.925,  0.004, -0.148, -0.362, -0.327, 
-0.380, -0.925,  0.004, -0.148, -0.361, -0.116, 
-0.923, -0.385,  0.004, -0.360, -0.151, -0.327, 
-0.923, -0.385,  0.004, -0.360, -0.151, -0.116, 
-0.925,  0.380,  0.004, -0.361,  0.148, -0.327, 
-0.925,  0.380,  0.004, -0.360,  0.147, -0.116, 
-0.385,  0.923,  0.004, -0.150,  0.359, -0.327, 
-0.385,  0.923,  0.004, -0.150,  0.359, -0.116, 
 0.380,  0.925,  0.004,  0.148,  0.360, -0.327, 
 0.380,  0.925,  0.004,  0.148,  0.360, -0.116, 
 0.923,  0.385,  0.004,  0.360,  0.149, -0.327, 
 0.923,  0.385,  0.004,  0.360,  0.149, -0.116, 
 0.380,  0.925,  0.000,  0.206,  0.499, -0.494,  0.380,  0.925,  0.000,  0.206,  0.499, -0.327,
 0.923,  0.385,  0.000,  0.499,  0.207, -0.494, 
 0.923,  0.385,  0.000,  0.499,  0.207, -0.327, 
 0.925, -0.380, -0.000,  0.500, -0.207, -0.494, 
 0.925, -0.380, -0.000,  0.500, -0.207, -0.327, 
 0.385, -0.923, -0.000,  0.208, -0.500, -0.494, 
 0.385, -0.923, -0.000,  0.208, -0.500, -0.327, 
-0.380, -0.925, -0.000, -0.206, -0.501, -0.494, 
-0.380, -0.925, -0.000, -0.206, -0.501, -0.327, 
-0.923, -0.385, -0.000, -0.499, -0.209, -0.494, 
-0.923, -0.385, -0.000, -0.499, -0.209, -0.327, 
-0.925,  0.380,  0.000, -0.500,  0.205, -0.494, 
-0.925,  0.380,  0.000, -0.500,  0.205, -0.327, 
-0.385,  0.923,  0.000, -0.208,  0.498, -0.494, 
-0.385,  0.923,  0.000, -0.208,  0.498, -0.327, 
 0.380,  0.925,  0.000,  0.206,  0.499, -0.494, 
 0.380,  0.925,  0.000,  0.206,  0.499, -0.327, 
 0.923,  0.385,  0.000,  0.499,  0.207, -0.494, 
 0.923,  0.385,  0.000,  0.499,  0.207, -0.327, 
 0.000,  0.000, -1.000, -0.119,  0.284, -0.494,  0.000,  0.000, -1.000, -0.208,  0.498, -0.494,
-0.000,  0.000, -1.000,  0.118,  0.285, -0.494, 
-0.000,  0.000, -1.000,  0.206,  0.499, -0.494, 
-0.000,  0.000, -1.000,  0.285,  0.118, -0.494, 
-0.000,  0.000, -1.000,  0.499,  0.207, -0.494, 
-0.000,  0.000, -1.000,  0.286, -0.118, -0.494, 
-0.000,  0.000, -1.000,  0.500, -0.207, -0.494, 
-0.000,  0.000, -1.000,  0.119, -0.286, -0.494, 
-0.000,  0.000, -1.000,  0.208, -0.500, -0.494, 
 0.000,  0.000, -1.000, -0.118, -0.287, -0.494, 
 0.000,  0.000, -1.000, -0.206, -0.501, -0.494, 
 0.000,  0.000, -1.000, -0.285, -0.120, -0.494, 
 0.000,  0.000, -1.000, -0.499, -0.209, -0.494, 
 0.000,  0.000, -1.000, -0.286,  0.117, -0.494, 
 0.000,  0.000, -1.000, -0.500,  0.205, -0.494, 
 0.000,  0.000, -1.000, -0.119,  0.284, -0.494, 
 0.000,  0.000, -1.000, -0.208,  0.498, -0.494, 
-0.000,  0.000, -1.000,  0.118,  0.285, -0.494, 
-0.000,  0.000, -1.000,  0.206,  0.499, -0.494, 
-0.380, -0.925, -0.000,  0.118,  0.285,  0.133, -0.380, -0.925, -0.000,  0.118,  0.285, -0.494,
-0.923, -0.385, -0.000,  0.285,  0.118,  0.133, 
-0.923, -0.385, -0.000,  0.285,  0.118, -0.494, 
-0.925,  0.380,  0.000,  0.286, -0.119,  0.133, 
-0.925,  0.380,  0.000,  0.286, -0.118, -0.494, 
-0.385,  0.923,  0.000,  0.119, -0.286,  0.133, 
-0.385,  0.923,  0.000,  0.119, -0.286, -0.494, 
 0.380,  0.925,  0.000, -0.118, -0.287,  0.133, 
 0.380,  0.925,  0.000, -0.118, -0.287, -0.494, 
 0.923,  0.385,  0.000, -0.285, -0.120,  0.133, 
 0.923,  0.385,  0.000, -0.285, -0.120, -0.494, 
 0.925, -0.380, -0.000, -0.286,  0.117,  0.133, 
 0.925, -0.380, -0.000, -0.286,  0.117, -0.494, 
 0.385, -0.923, -0.000, -0.119,  0.284,  0.133, 
 0.385, -0.923, -0.000, -0.119,  0.284, -0.494, 
-0.380, -0.925, -0.000,  0.118,  0.285,  0.133, 
-0.380, -0.925, -0.000,  0.118,  0.285, -0.494, 
-0.923, -0.385, -0.000,  0.285,  0.118,  0.133, 
-0.923, -0.385, -0.000,  0.285,  0.118, -0.494, 
-0.000, -0.000,  1.000,  0.206,  0.499,  0.133, -0.000, -0.000,  1.000,  0.118,  0.285,  0.133,
-0.000, -0.000,  1.000,  0.499,  0.207,  0.133, 
-0.000, -0.000,  1.000,  0.285,  0.118,  0.133, 
-0.000, -0.000,  1.000,  0.500, -0.207,  0.133, 
-0.000, -0.000,  1.000,  0.286, -0.119,  0.133, 
 0.000, -0.000,  1.000,  0.208, -0.500,  0.133, 
 0.000, -0.000,  1.000,  0.119, -0.286,  0.133, 
 0.000, -0.000,  1.000, -0.206, -0.501,  0.133, 
 0.000, -0.000,  1.000, -0.118, -0.287,  0.133, 
 0.000, -0.000,  1.000, -0.499, -0.209,  0.133, 
 0.000, -0.000,  1.000, -0.285, -0.120,  0.133, 
 0.000, -0.000,  1.000, -0.500,  0.205,  0.133, 
 0.000, -0.000,  1.000, -0.286,  0.117,  0.133, 
 0.000, -0.000,  1.000, -0.208,  0.498,  0.133, 
 0.000, -0.000,  1.000, -0.119,  0.284,  0.133, 
-0.000, -0.000,  1.000,  0.206,  0.499,  0.133, 
-0.000, -0.000,  1.000,  0.118,  0.285,  0.133, 
-0.000, -0.000,  1.000,  0.499,  0.207,  0.133, 
-0.000, -0.000,  1.000,  0.285,  0.118,  0.133, 
};

#endif // __obj_cylinder