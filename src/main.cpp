#include "TriMesh.hpp"

#include <igl/readOBJ.h>
#include <igl/writeOBJ.h>
#include <iostream>


Eigen::MatrixXd V;
Eigen::MatrixXi F;

int main(int argc, char *argv[])
{
  // Load a mesh in OFF format
  igl::readOBJ("input/wang10benchmark/bunny.obj", V, F);

  CropRes::TriMesh *temp = new CropRes::TriMesh(V, F);
  std::cout << temp->test << std::endl;

  // Print the vertices and faces matrices
  //std::cout << "Vertices: " << std::endl << V << std::endl;
  //std::cout << "Faces:    " << std::endl << F << std::endl;

  // Save the mesh in OBJ format
  igl::writeOBJ("temp.obj",V,F);
}
