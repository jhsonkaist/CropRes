#ifndef TriMesh_hpp
#define TriMesh_hpp

#include <Eigen/Eigen>

#include <set>
#include <array>

namespace CropRes {

  class TriMesh {
  public:
    Eigen::MatrixXd V;
    Eigen::MatrixXi F;

  public:
    double test;

  public:
    TriMesh(void);
    TriMesh(const Eigen::MatrixXd& V, const Eigen::MatrixXi& F);

  };

}

#endif /* TriMesh_hpp */