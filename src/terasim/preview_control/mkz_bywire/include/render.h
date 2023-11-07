#ifndef OBJLOADER_H
#define OBJLOADER_H

#include <string>

#include <QString>
#include <QVector>
#include <QVector3D>
#include <QVector4D>
#include <GL/glu.h>
#include "XMath.h"
#include "RNDF.h"


#define L_BACKGROUND  -0.1
#define L_COORDINATE  0.0
#define L_ROADNETWORK 0.0
#define L_TRAJECTORY  0.1
#define L_PATH        0.2
#define L_VEHICLE     0.25

class ObjLoader
{
public:
    ObjLoader();

    bool Load(QString objFile,QString textureFile);
    int loadObjFile(QString pathToFile);
    int loadTexture(QString textureFile);
    void resize(float k);

    // final rendering
    void Render_Texture(float sx, float sy, float sz, float vehx, float vehy, float veheading);
    void Render(float sx, float sy, float sz,
        float posx, float posy, float posheading,
        float r, float g, float b,
        float theta);

private:
    unsigned int targetTexture;
    std::vector<Vertex> mVertices;
    std::vector<Normal> mNormals;
    std::vector<Texture> mTextures;
    std::vector<Face> mFaces;
    float max_x, min_x, max_y, min_y, max_z, min_z;
    float size_x, size_y, size_z;
};

class XRender
{
public:
    XRender();
    void render_map(
        RNDF * rndf,
        std::vector<Traffic_L> & spatVec,
        bool mode_local);

    void render_obj(float sx, float sy, float sz,
        float posx, float posy, float posheading,
        float r, float g, float b,
        float theta, int type);

    void ini();
    void ini_view(
        float vehx, float vehy, float veheading, 
        bool mode_local, int mode);

    ObjLoader lexus_obj; //
    ObjLoader cube_obj;

    //simple
    void drawOneGL_QUADS(float x, float y, float size, float level);
    void drawOneCircle(float x, float y, float r, int num, float level, bool filled);
    void drawOneTriangle(float x,float y,float h,float hg,float size, float level);
    void drawOnePT(float x1, float y1, float h1, float x2, float y3, float h2 , float size, float level);
    void drawRoundedRectanges(float obj_cx, float obj_cy, float obj_sx, float obj_sy, float obj_heading, float z_level,
    float r_circle, int N_circle, bool filled);
    void setRandomColor(int num);
    bool  iniRandomColor = false;

private:
    bool load_flag = false;
    void drawBackground(RNDF * rndf);
    void drawOneLine(Lane_marking type, Lane * lane, 
        float offset, float offset_angle, float line_width);
    void crosswalks(RNDF * rndf);
    void drawSegments(RNDF * rndf, std::vector<Traffic_L> & spatVec);

    void load_img(std::string path, GLuint &mTexture);
    void loadGLTexture();

    float colorData[50][3];
    GLuint mTexture;
    GLfloat lightpos[4]; //set the position of light-1
};

#endif // OBJLOADER_H
