#ifndef __obj_kolben
#define __obj_kolben

#define render_kolben { \
    glInterleavedArrays (GL_N3F_V3F, 0, kolbenInterleavedQuads); \
    glDrawArrays (GL_QUADS, 0, kolbenNumQuads*4); \
    glInterleavedArrays (GL_N3F_V3F, 0, kolbenInterleavedQuadStrips); \
    for (int i = 0; i < kolbenNumQuadStrips; i++) { \
        glDrawArrays (GL_QUAD_STRIP, kolbenQuadStripIndices[i]/6, \
                        (kolbenQuadStripIndices[i+1] - kolbenQuadStripIndices[i])/6); \
    } \
    glInterleavedArrays (GL_N3F_V3F, 0, kolbenInterleavedTriangleFans); \
    for (int ii = 0; ii < kolbenNumTriangleFans; ii++) { \
        glDrawArrays (GL_TRIANGLE_FAN, kolbenTriangleFanIndices[ii]/6, \
                        (kolbenTriangleFanIndices[ii+1] - kolbenTriangleFanIndices[ii])/6); \
    } \
}

static int kolbenNumQuads = 4;
static float kolbenInterleavedQuads[96] = {
-0.000, -0.000,  1.000,-0.102,  0.246,  0.496,
-0.000, -0.000,  1.000,-0.246,  0.102,  0.496,
-0.000, -0.000,  1.000,-0.246, -0.102,  0.496,
-0.000, -0.000,  1.000,-0.102, -0.246,  0.496,

-0.000, -0.000,  1.000, 0.246,  0.102,  0.496,
-0.000, -0.000,  1.000, 0.102,  0.246,  0.496,
-0.000, -0.000,  1.000, 0.102, -0.246,  0.496,
-0.000, -0.000,  1.000, 0.246, -0.102,  0.496,

 0.000,  0.000, -1.000,-0.102, -0.246, -0.004,
 0.000,  0.000, -1.000,-0.246, -0.102, -0.004,
 0.000,  0.000, -1.000, 0.246, -0.102, -0.004,
 0.000,  0.000, -1.000, 0.102, -0.246, -0.004,

 0.000,  0.000, -1.000, 0.102,  0.246, -0.004,
 0.000,  0.000, -1.000, 0.246,  0.102, -0.004,
 0.000,  0.000, -1.000,-0.246,  0.102, -0.004,
 0.000,  0.000, -1.000,-0.102,  0.246, -0.004,

};

static int kolbenNumQuadStrips = 1;

static int kolbenQuadStripIndices[2] = { 0, 120 };

static float kolbenInterleavedQuadStrips[120] = {
 0.383,  0.924,  0.000,  0.102,  0.246, -0.004,  0.383,  0.924,  0.000,  0.102,  0.246,  0.496,
 0.924,  0.383,  0.000,  0.246,  0.102, -0.004, 
 0.924,  0.383,  0.000,  0.246,  0.102,  0.496, 
 0.924, -0.383,  0.000,  0.246, -0.102, -0.004, 
 0.924, -0.383,  0.000,  0.246, -0.102,  0.496, 
 0.383, -0.924, -0.000,  0.102, -0.246, -0.004, 
 0.383, -0.924, -0.000,  0.102, -0.246,  0.496, 
-0.383, -0.924, -0.000, -0.102, -0.246, -0.004, 
-0.383, -0.924, -0.000, -0.102, -0.246,  0.496, 
-0.924, -0.383, -0.000, -0.246, -0.102, -0.004, 
-0.924, -0.383, -0.000, -0.246, -0.102,  0.496, 
-0.924,  0.383,  0.000, -0.246,  0.102, -0.004, 
-0.924,  0.383,  0.000, -0.246,  0.102,  0.496, 
-0.383,  0.924,  0.000, -0.102,  0.246, -0.004, 
-0.383,  0.924,  0.000, -0.102,  0.246,  0.496, 
 0.383,  0.924,  0.000,  0.102,  0.246, -0.004, 
 0.383,  0.924,  0.000,  0.102,  0.246,  0.496, 
 0.924,  0.383,  0.000,  0.246,  0.102, -0.004, 
 0.924,  0.383,  0.000,  0.246,  0.102,  0.496, 
};

static int kolbenNumTriangleFans = 2;

static int kolbenTriangleFanIndices[3] = { 0, 24, 48 };

static float kolbenInterleavedTriangleFans[48] = {
-0.000, -0.000,  1.000, -0.102, -0.246,  0.496, -0.000, -0.000,  1.000,  0.102, -0.246,  0.496, 
-0.000, -0.000,  1.000,  0.102,  0.246,  0.496, 
-0.000, -0.000,  1.000, -0.102,  0.246,  0.496, 
 0.000,  0.000, -1.000, -0.246, -0.102, -0.004,  0.000,  0.000, -1.000, -0.246,  0.102, -0.004, 
 0.000,  0.000, -1.000,  0.246,  0.102, -0.004, 
 0.000,  0.000, -1.000,  0.246, -0.102, -0.004, 
};

#endif // __obj_kolben

