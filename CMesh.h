#ifndef CMESH_H
#define CMESH_H


#include<d3d9.h>
#include<d3dx9.h>


// include the Direct3D Library files
#pragma comment (lib, "d3d9.lib")
#pragma comment (lib, "d3dx9.lib")

class CMesh
{
public:
    CMesh();
    ~CMesh() { Release(); }
    BOOL Load( LPDIRECT3DDEVICE9 d3ddev, char* file ,HWND hWnd);
    void Release(); 

    LPD3DXMESH GetMesh() { return m_pMesh; }
    DWORD GetNumMaterials() { return m_numMaterials; }
    D3DMATERIAL9* GetMeshMaterial( int i ) { return &m_pMeshMaterials[i]; }
    LPDIRECT3DTEXTURE9 GetMeshTexture( int i ) { return m_ppMeshTextures[i]; } 

private:
    LPD3DXMESH m_pMesh;
    DWORD m_numMaterials;
    D3DMATERIAL9 *m_pMeshMaterials;
    LPDIRECT3DTEXTURE9 *m_ppMeshTextures;

	HWND hWnd;
};


#endif