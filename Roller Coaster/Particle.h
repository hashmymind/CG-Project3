#pragma once
#include <QtOpenGL/qgl.h>
#include <vector>

using namespace std;

struct Particle {
public:
    GLfloat xpos;//(xpos,ypos,zpos)��particle��position
    GLfloat ypos;
    GLfloat zpos;
    GLfloat xspeed;//(xspeed,yspeed,zspeed)��particle��speed
    GLfloat yspeed;
    GLfloat zspeed;
    GLfloat r;//(r,g,b)��particle��color
    GLfloat g;
    GLfloat b;
    GLfloat life;// particle���ةR
    GLfloat fade;// particle���I��t��
    GLfloat size;// particle���j�p
    GLbyte  bFire; // �O�_������
    GLbyte  nExpl;//����particle�ĪG
    GLbyte  bAddParts;// particle�O�_�t������
    GLfloat AddSpeed;//���ڲɤl���[�t��
    GLfloat AddCount;//���ڲɤl���W�[�q
    GLfloat rotX, rotY, rotZ; // ����

    Particle() {
        xpos = ypos = zpos = xspeed = yspeed = zspeed = r = g = b = life = fade = size = nExpl = bAddParts = AddSpeed = AddCount = rotX = rotY = rotZ = 0;
    }
};
class ParticleSystem {
public:
    vector<Particle> Particles;
    UINT nOfFires;
    UINT Tick1, Tick2;
    float DTick;
    const GLfloat grav = 0.00003f;
    GLuint textureID;

    ParticleSystem();

    void InitParticle(Particle& ep);
    void ProcessParticles();
    void DrawParticles();

    void Explosion1(const Particle& par);
    void Explosion2(const Particle& par);
    void Explosion3(const Particle& par);
    void Explosion4(const Particle& par);
    void Explosion5(const Particle& par);
    void Explosion6(const Particle& par);
    void Explosion7(const Particle& par);
};