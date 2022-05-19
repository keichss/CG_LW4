

#ifndef CUBEMAP_H
#define	CUBEMAP_H

#include <string>
#include <GL/glew.h>
#include <Magick++.h>
//#include <Magick++/Blob.h>
//#include <Magick++/Image.h>

using namespace std;

class CubemapTexture /*Этот класс включает в себя реализацию кубической текстуры и 
                     предоставляет простой интерфейс для ее загрузки и использования*/
{
public:
    
    CubemapTexture(const string& Directory,
                   const string& PosXFilename,
                   const string& NegXFilename,
                   const string& PosYFilename,
                   const string& NegYFilename,
                   const string& PosZFilename,
                   const string& NegZFilename);

    ~CubemapTexture();
    
    bool Load();

    void Bind(GLenum TextureUnit);

private:
   
    string m_fileNames[6];
    GLuint m_textureObj;
};

#endif	/* CUBEMAP_H */

