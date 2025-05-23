#ifndef _ROS_dingo_control_Angle_h
#define _ROS_dingo_control_Angle_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace dingo_control
{

  class Angle : public ros::Msg
  {
    public:
      typedef float _theta1_type;
      _theta1_type theta1;
      typedef float _theta2_type;
      _theta2_type theta2;
      typedef float _theta3_type;
      _theta3_type theta3;

    Angle():
      theta1(0),
      theta2(0),
      theta3(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      union {
        float real;
        uint32_t base;
      } u_theta1;
      u_theta1.real = this->theta1;
      *(outbuffer + offset + 0) = (u_theta1.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_theta1.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_theta1.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_theta1.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->theta1);
      union {
        float real;
        uint32_t base;
      } u_theta2;
      u_theta2.real = this->theta2;
      *(outbuffer + offset + 0) = (u_theta2.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_theta2.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_theta2.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_theta2.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->theta2);
      union {
        float real;
        uint32_t base;
      } u_theta3;
      u_theta3.real = this->theta3;
      *(outbuffer + offset + 0) = (u_theta3.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_theta3.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_theta3.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_theta3.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->theta3);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      union {
        float real;
        uint32_t base;
      } u_theta1;
      u_theta1.base = 0;
      u_theta1.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_theta1.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_theta1.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_theta1.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->theta1 = u_theta1.real;
      offset += sizeof(this->theta1);
      union {
        float real;
        uint32_t base;
      } u_theta2;
      u_theta2.base = 0;
      u_theta2.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_theta2.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_theta2.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_theta2.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->theta2 = u_theta2.real;
      offset += sizeof(this->theta2);
      union {
        float real;
        uint32_t base;
      } u_theta3;
      u_theta3.base = 0;
      u_theta3.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_theta3.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_theta3.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_theta3.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->theta3 = u_theta3.real;
      offset += sizeof(this->theta3);
     return offset;
    }

    virtual const char * getType() override { return "dingo_control/Angle"; };
    virtual const char * getMD5() override { return "f6b72178218fbe6abc22ec5b1c7a40d8"; };

  };

}
#endif
