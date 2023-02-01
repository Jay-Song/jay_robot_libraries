#include "jay_math_define.h"

using namespace jay;

LinkPose::LinkPose()
{
  position_.fill(0);
  orientation_ = Eigen::Matrix3d::Identity();
  transform_ = Eigen::Matrix4d::Identity();
}

LinkPose::~LinkPose()
{    }