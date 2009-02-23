// Generated by the protocol buffer compiler.  DO NOT EDIT!

#ifndef PROTOBUF_messages_5frobocup_5fssl_5fdetection_2eproto__INCLUDED
#define PROTOBUF_messages_5frobocup_5fssl_5fdetection_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>

class SSL_DetectionBall;
class SSL_DetectionRobot;
class SSL_DetectionFrame;

// ===================================================================

class SSL_DetectionBall : public ::google::protobuf::Message {
 public:
  SSL_DetectionBall();
  virtual ~SSL_DetectionBall();
  
  SSL_DetectionBall(const SSL_DetectionBall& from);
  
  inline SSL_DetectionBall& operator=(const SSL_DetectionBall& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline static const SSL_DetectionBall& default_instance() {
    return default_instance_;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _reflection_.unknown_fields();
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _reflection_.mutable_unknown_fields();
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  
  // implements Message ----------------------------------------------
  
  SSL_DetectionBall* New() const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SetCachedSize(int size) const { _cached_size_ = size; }
  public:
  
  const ::google::protobuf::Descriptor* GetDescriptor() const;
  const ::google::protobuf::Message::Reflection* GetReflection() const;
  ::google::protobuf::Message::Reflection* GetReflection();
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // required uint32 area = 1;
  inline bool has_area() const;
  inline void clear_area();
  inline ::google::protobuf::uint32 area() const;
  inline void set_area(::google::protobuf::uint32 value);
  
  // required float x = 2;
  inline bool has_x() const;
  inline void clear_x();
  inline float x() const;
  inline void set_x(float value);
  
  // required float y = 3;
  inline bool has_y() const;
  inline void clear_y();
  inline float y() const;
  inline void set_y(float value);
  
  // required sint32 pixel_x = 4;
  inline bool has_pixel_x() const;
  inline void clear_pixel_x();
  inline ::google::protobuf::int32 pixel_x() const;
  inline void set_pixel_x(::google::protobuf::int32 value);
  
  // required sint32 pixel_y = 5;
  inline bool has_pixel_y() const;
  inline void clear_pixel_y();
  inline ::google::protobuf::int32 pixel_y() const;
  inline void set_pixel_y(::google::protobuf::int32 value);
  
 private:
  ::google::protobuf::internal::GeneratedMessageReflection _reflection_;
  mutable int _cached_size_;
  
  ::google::protobuf::uint32 area_;
  float x_;
  float y_;
  ::google::protobuf::int32 pixel_x_;
  ::google::protobuf::int32 pixel_y_;
  
  static const SSL_DetectionBall default_instance_;
  static const int _offsets_[5];
  
  ::google::protobuf::uint32 _has_bits_[(5 + 31) / 32];
  
  // WHY DOES & HAVE LOWER PRECEDENCE THAN != !?
  inline bool _has_bit(int index) const {
    return (_has_bits_[index / 32] & (1u << (index % 32))) != 0;
  }
  inline void _set_bit(int index) {
    _has_bits_[index / 32] |= (1u << (index % 32));
  }
  inline void _clear_bit(int index) {
    _has_bits_[index / 32] &= ~(1u << (index % 32));
  }
};
// -------------------------------------------------------------------

class SSL_DetectionRobot : public ::google::protobuf::Message {
 public:
  SSL_DetectionRobot();
  virtual ~SSL_DetectionRobot();
  
  SSL_DetectionRobot(const SSL_DetectionRobot& from);
  
  inline SSL_DetectionRobot& operator=(const SSL_DetectionRobot& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline static const SSL_DetectionRobot& default_instance() {
    return default_instance_;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _reflection_.unknown_fields();
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _reflection_.mutable_unknown_fields();
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  
  // implements Message ----------------------------------------------
  
  SSL_DetectionRobot* New() const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SetCachedSize(int size) const { _cached_size_ = size; }
  public:
  
  const ::google::protobuf::Descriptor* GetDescriptor() const;
  const ::google::protobuf::Message::Reflection* GetReflection() const;
  ::google::protobuf::Message::Reflection* GetReflection();
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // required uint32 area = 1;
  inline bool has_area() const;
  inline void clear_area();
  inline ::google::protobuf::uint32 area() const;
  inline void set_area(::google::protobuf::uint32 value);
  
  // required float x = 2;
  inline bool has_x() const;
  inline void clear_x();
  inline float x() const;
  inline void set_x(float value);
  
  // required float y = 3;
  inline bool has_y() const;
  inline void clear_y();
  inline float y() const;
  inline void set_y(float value);
  
  // required sint32 pixel_x = 4;
  inline bool has_pixel_x() const;
  inline void clear_pixel_x();
  inline ::google::protobuf::int32 pixel_x() const;
  inline void set_pixel_x(::google::protobuf::int32 value);
  
  // required sint32 pixel_y = 5;
  inline bool has_pixel_y() const;
  inline void clear_pixel_y();
  inline ::google::protobuf::int32 pixel_y() const;
  inline void set_pixel_y(::google::protobuf::int32 value);
  
 private:
  ::google::protobuf::internal::GeneratedMessageReflection _reflection_;
  mutable int _cached_size_;
  
  ::google::protobuf::uint32 area_;
  float x_;
  float y_;
  ::google::protobuf::int32 pixel_x_;
  ::google::protobuf::int32 pixel_y_;
  
  static const SSL_DetectionRobot default_instance_;
  static const int _offsets_[5];
  
  ::google::protobuf::uint32 _has_bits_[(5 + 31) / 32];
  
  // WHY DOES & HAVE LOWER PRECEDENCE THAN != !?
  inline bool _has_bit(int index) const {
    return (_has_bits_[index / 32] & (1u << (index % 32))) != 0;
  }
  inline void _set_bit(int index) {
    _has_bits_[index / 32] |= (1u << (index % 32));
  }
  inline void _clear_bit(int index) {
    _has_bits_[index / 32] &= ~(1u << (index % 32));
  }
};
// -------------------------------------------------------------------

class SSL_DetectionFrame : public ::google::protobuf::Message {
 public:
  SSL_DetectionFrame();
  virtual ~SSL_DetectionFrame();
  
  SSL_DetectionFrame(const SSL_DetectionFrame& from);
  
  inline SSL_DetectionFrame& operator=(const SSL_DetectionFrame& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline static const SSL_DetectionFrame& default_instance() {
    return default_instance_;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _reflection_.unknown_fields();
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _reflection_.mutable_unknown_fields();
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  
  // implements Message ----------------------------------------------
  
  SSL_DetectionFrame* New() const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SetCachedSize(int size) const { _cached_size_ = size; }
  public:
  
  const ::google::protobuf::Descriptor* GetDescriptor() const;
  const ::google::protobuf::Message::Reflection* GetReflection() const;
  ::google::protobuf::Message::Reflection* GetReflection();
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // required uint32 frame_number = 1;
  inline bool has_frame_number() const;
  inline void clear_frame_number();
  inline ::google::protobuf::uint32 frame_number() const;
  inline void set_frame_number(::google::protobuf::uint32 value);
  
  // required uint64 timestamp = 2;
  inline bool has_timestamp() const;
  inline void clear_timestamp();
  inline ::google::protobuf::uint64 timestamp() const;
  inline void set_timestamp(::google::protobuf::uint64 value);
  
  // required uint32 camera_id = 3;
  inline bool has_camera_id() const;
  inline void clear_camera_id();
  inline ::google::protobuf::uint32 camera_id() const;
  inline void set_camera_id(::google::protobuf::uint32 value);
  
  // repeated .SSL_DetectionBall balls = 4;
  inline int balls_size() const;
  inline void clear_balls();
  inline const ::google::protobuf::RepeatedPtrField< ::SSL_DetectionBall >& balls() const;
  inline ::google::protobuf::RepeatedPtrField< ::SSL_DetectionBall >* mutable_balls();
  inline const ::SSL_DetectionBall& balls(int index) const;
  inline ::SSL_DetectionBall* mutable_balls(int index);
  inline ::SSL_DetectionBall* add_balls();
  
  // repeated .SSL_DetectionRobot robots = 5;
  inline int robots_size() const;
  inline void clear_robots();
  inline const ::google::protobuf::RepeatedPtrField< ::SSL_DetectionRobot >& robots() const;
  inline ::google::protobuf::RepeatedPtrField< ::SSL_DetectionRobot >* mutable_robots();
  inline const ::SSL_DetectionRobot& robots(int index) const;
  inline ::SSL_DetectionRobot* mutable_robots(int index);
  inline ::SSL_DetectionRobot* add_robots();
  
 private:
  ::google::protobuf::internal::GeneratedMessageReflection _reflection_;
  mutable int _cached_size_;
  
  ::google::protobuf::uint32 frame_number_;
  ::google::protobuf::uint64 timestamp_;
  ::google::protobuf::uint32 camera_id_;
  ::google::protobuf::RepeatedPtrField< ::SSL_DetectionBall > balls_;
  ::google::protobuf::RepeatedPtrField< ::SSL_DetectionRobot > robots_;
  
  static const SSL_DetectionFrame default_instance_;
  static const int _offsets_[5];
  
  ::google::protobuf::uint32 _has_bits_[(5 + 31) / 32];
  
  // WHY DOES & HAVE LOWER PRECEDENCE THAN != !?
  inline bool _has_bit(int index) const {
    return (_has_bits_[index / 32] & (1u << (index % 32))) != 0;
  }
  inline void _set_bit(int index) {
    _has_bits_[index / 32] |= (1u << (index % 32));
  }
  inline void _clear_bit(int index) {
    _has_bits_[index / 32] &= ~(1u << (index % 32));
  }
};
// ===================================================================


// ===================================================================


// ===================================================================

// SSL_DetectionBall

// required uint32 area = 1;
inline bool SSL_DetectionBall::has_area() const {
  return _has_bit(0);
}
inline void SSL_DetectionBall::clear_area() {
  area_ = 0u;
  _clear_bit(0);
}
inline ::google::protobuf::uint32 SSL_DetectionBall::area() const {
  return area_;
}
inline void SSL_DetectionBall::set_area(::google::protobuf::uint32 value) {
  _set_bit(0);
  area_ = value;
}

// required float x = 2;
inline bool SSL_DetectionBall::has_x() const {
  return _has_bit(1);
}
inline void SSL_DetectionBall::clear_x() {
  x_ = 0;
  _clear_bit(1);
}
inline float SSL_DetectionBall::x() const {
  return x_;
}
inline void SSL_DetectionBall::set_x(float value) {
  _set_bit(1);
  x_ = value;
}

// required float y = 3;
inline bool SSL_DetectionBall::has_y() const {
  return _has_bit(2);
}
inline void SSL_DetectionBall::clear_y() {
  y_ = 0;
  _clear_bit(2);
}
inline float SSL_DetectionBall::y() const {
  return y_;
}
inline void SSL_DetectionBall::set_y(float value) {
  _set_bit(2);
  y_ = value;
}

// required sint32 pixel_x = 4;
inline bool SSL_DetectionBall::has_pixel_x() const {
  return _has_bit(3);
}
inline void SSL_DetectionBall::clear_pixel_x() {
  pixel_x_ = 0;
  _clear_bit(3);
}
inline ::google::protobuf::int32 SSL_DetectionBall::pixel_x() const {
  return pixel_x_;
}
inline void SSL_DetectionBall::set_pixel_x(::google::protobuf::int32 value) {
  _set_bit(3);
  pixel_x_ = value;
}

// required sint32 pixel_y = 5;
inline bool SSL_DetectionBall::has_pixel_y() const {
  return _has_bit(4);
}
inline void SSL_DetectionBall::clear_pixel_y() {
  pixel_y_ = 0;
  _clear_bit(4);
}
inline ::google::protobuf::int32 SSL_DetectionBall::pixel_y() const {
  return pixel_y_;
}
inline void SSL_DetectionBall::set_pixel_y(::google::protobuf::int32 value) {
  _set_bit(4);
  pixel_y_ = value;
}

// -------------------------------------------------------------------

// SSL_DetectionRobot

// required uint32 area = 1;
inline bool SSL_DetectionRobot::has_area() const {
  return _has_bit(0);
}
inline void SSL_DetectionRobot::clear_area() {
  area_ = 0u;
  _clear_bit(0);
}
inline ::google::protobuf::uint32 SSL_DetectionRobot::area() const {
  return area_;
}
inline void SSL_DetectionRobot::set_area(::google::protobuf::uint32 value) {
  _set_bit(0);
  area_ = value;
}

// required float x = 2;
inline bool SSL_DetectionRobot::has_x() const {
  return _has_bit(1);
}
inline void SSL_DetectionRobot::clear_x() {
  x_ = 0;
  _clear_bit(1);
}
inline float SSL_DetectionRobot::x() const {
  return x_;
}
inline void SSL_DetectionRobot::set_x(float value) {
  _set_bit(1);
  x_ = value;
}

// required float y = 3;
inline bool SSL_DetectionRobot::has_y() const {
  return _has_bit(2);
}
inline void SSL_DetectionRobot::clear_y() {
  y_ = 0;
  _clear_bit(2);
}
inline float SSL_DetectionRobot::y() const {
  return y_;
}
inline void SSL_DetectionRobot::set_y(float value) {
  _set_bit(2);
  y_ = value;
}

// required sint32 pixel_x = 4;
inline bool SSL_DetectionRobot::has_pixel_x() const {
  return _has_bit(3);
}
inline void SSL_DetectionRobot::clear_pixel_x() {
  pixel_x_ = 0;
  _clear_bit(3);
}
inline ::google::protobuf::int32 SSL_DetectionRobot::pixel_x() const {
  return pixel_x_;
}
inline void SSL_DetectionRobot::set_pixel_x(::google::protobuf::int32 value) {
  _set_bit(3);
  pixel_x_ = value;
}

// required sint32 pixel_y = 5;
inline bool SSL_DetectionRobot::has_pixel_y() const {
  return _has_bit(4);
}
inline void SSL_DetectionRobot::clear_pixel_y() {
  pixel_y_ = 0;
  _clear_bit(4);
}
inline ::google::protobuf::int32 SSL_DetectionRobot::pixel_y() const {
  return pixel_y_;
}
inline void SSL_DetectionRobot::set_pixel_y(::google::protobuf::int32 value) {
  _set_bit(4);
  pixel_y_ = value;
}

// -------------------------------------------------------------------

// SSL_DetectionFrame

// required uint32 frame_number = 1;
inline bool SSL_DetectionFrame::has_frame_number() const {
  return _has_bit(0);
}
inline void SSL_DetectionFrame::clear_frame_number() {
  frame_number_ = 0u;
  _clear_bit(0);
}
inline ::google::protobuf::uint32 SSL_DetectionFrame::frame_number() const {
  return frame_number_;
}
inline void SSL_DetectionFrame::set_frame_number(::google::protobuf::uint32 value) {
  _set_bit(0);
  frame_number_ = value;
}

// required uint64 timestamp = 2;
inline bool SSL_DetectionFrame::has_timestamp() const {
  return _has_bit(1);
}
inline void SSL_DetectionFrame::clear_timestamp() {
  timestamp_ = GOOGLE_ULONGLONG(0);
  _clear_bit(1);
}
inline ::google::protobuf::uint64 SSL_DetectionFrame::timestamp() const {
  return timestamp_;
}
inline void SSL_DetectionFrame::set_timestamp(::google::protobuf::uint64 value) {
  _set_bit(1);
  timestamp_ = value;
}

// required uint32 camera_id = 3;
inline bool SSL_DetectionFrame::has_camera_id() const {
  return _has_bit(2);
}
inline void SSL_DetectionFrame::clear_camera_id() {
  camera_id_ = 0u;
  _clear_bit(2);
}
inline ::google::protobuf::uint32 SSL_DetectionFrame::camera_id() const {
  return camera_id_;
}
inline void SSL_DetectionFrame::set_camera_id(::google::protobuf::uint32 value) {
  _set_bit(2);
  camera_id_ = value;
}

// repeated .SSL_DetectionBall balls = 4;
inline int SSL_DetectionFrame::balls_size() const {
  return balls_.size();
}
inline void SSL_DetectionFrame::clear_balls() {
  balls_.Clear();
}
inline const ::google::protobuf::RepeatedPtrField< ::SSL_DetectionBall >&
SSL_DetectionFrame::balls() const {
  return balls_;
}
inline ::google::protobuf::RepeatedPtrField< ::SSL_DetectionBall >*
SSL_DetectionFrame::mutable_balls() {
  return &balls_;
}
inline const ::SSL_DetectionBall& SSL_DetectionFrame::balls(int index) const {
  return balls_.Get(index);
}
inline ::SSL_DetectionBall* SSL_DetectionFrame::mutable_balls(int index) {
  return balls_.Mutable(index);
}
inline ::SSL_DetectionBall* SSL_DetectionFrame::add_balls() {
  return balls_.Add();
}

// repeated .SSL_DetectionRobot robots = 5;
inline int SSL_DetectionFrame::robots_size() const {
  return robots_.size();
}
inline void SSL_DetectionFrame::clear_robots() {
  robots_.Clear();
}
inline const ::google::protobuf::RepeatedPtrField< ::SSL_DetectionRobot >&
SSL_DetectionFrame::robots() const {
  return robots_;
}
inline ::google::protobuf::RepeatedPtrField< ::SSL_DetectionRobot >*
SSL_DetectionFrame::mutable_robots() {
  return &robots_;
}
inline const ::SSL_DetectionRobot& SSL_DetectionFrame::robots(int index) const {
  return robots_.Get(index);
}
inline ::SSL_DetectionRobot* SSL_DetectionFrame::mutable_robots(int index) {
  return robots_.Mutable(index);
}
inline ::SSL_DetectionRobot* SSL_DetectionFrame::add_robots() {
  return robots_.Add();
}

#endif  // PROTOBUF_messages_5frobocup_5fssl_5fdetection_2eproto__INCLUDED
