#include "TriMesh.hpp"

namespace CropRes {
  TriMesh::TriMesh(void)
  {
    test = 0;
  }

  TriMesh::TriMesh(const Eigen::MatrixXd& V, const Eigen::MatrixXi& F) 
  {
    //this->V = V;
    //this->F = F;
    test = 1;
  }  

}