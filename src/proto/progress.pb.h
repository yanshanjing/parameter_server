// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/progress.proto

#ifndef PROTOBUF_proto_2fprogress_2eproto__INCLUDED
#define PROTOBUF_proto_2fprogress_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_proto_2fprogress_2eproto();
void protobuf_AssignDesc_proto_2fprogress_2eproto();
void protobuf_ShutdownFile_proto_2fprogress_2eproto();

class Progress;

// ===================================================================

class Progress : public ::google::protobuf::Message {
 public:
  Progress();
  virtual ~Progress();

  Progress(const Progress& from);

  inline Progress& operator=(const Progress& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Progress& default_instance();

  void Swap(Progress* other);

  // implements Message ----------------------------------------------

  Progress* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Progress& from);
  void MergeFrom(const Progress& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional bool finish = 1 [default = false];
  inline bool has_finish() const;
  inline void clear_finish();
  static const int kFinishFieldNumber = 1;
  inline bool finish() const;
  inline void set_finish(bool value);

  // optional double obj_value = 2 [default = 0];
  inline bool has_obj_value() const;
  inline void clear_obj_value();
  static const int kObjValueFieldNumber = 2;
  inline double obj_value() const;
  inline void set_obj_value(double value);

  // optional int64 nonzere_weight = 3 [default = 0];
  inline bool has_nonzere_weight() const;
  inline void clear_nonzere_weight();
  static const int kNonzereWeightFieldNumber = 3;
  inline ::google::protobuf::int64 nonzere_weight() const;
  inline void set_nonzere_weight(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:Progress)
 private:
  inline void set_has_finish();
  inline void clear_has_finish();
  inline void set_has_obj_value();
  inline void clear_has_obj_value();
  inline void set_has_nonzere_weight();
  inline void clear_has_nonzere_weight();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  double obj_value_;
  ::google::protobuf::int64 nonzere_weight_;
  bool finish_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  friend void  protobuf_AddDesc_proto_2fprogress_2eproto();
  friend void protobuf_AssignDesc_proto_2fprogress_2eproto();
  friend void protobuf_ShutdownFile_proto_2fprogress_2eproto();

  void InitAsDefaultInstance();
  static Progress* default_instance_;
};
// ===================================================================


// ===================================================================

// Progress

// optional bool finish = 1 [default = false];
inline bool Progress::has_finish() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Progress::set_has_finish() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Progress::clear_has_finish() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Progress::clear_finish() {
  finish_ = false;
  clear_has_finish();
}
inline bool Progress::finish() const {
  return finish_;
}
inline void Progress::set_finish(bool value) {
  set_has_finish();
  finish_ = value;
}

// optional double obj_value = 2 [default = 0];
inline bool Progress::has_obj_value() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Progress::set_has_obj_value() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Progress::clear_has_obj_value() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Progress::clear_obj_value() {
  obj_value_ = 0;
  clear_has_obj_value();
}
inline double Progress::obj_value() const {
  return obj_value_;
}
inline void Progress::set_obj_value(double value) {
  set_has_obj_value();
  obj_value_ = value;
}

// optional int64 nonzere_weight = 3 [default = 0];
inline bool Progress::has_nonzere_weight() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Progress::set_has_nonzere_weight() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Progress::clear_has_nonzere_weight() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Progress::clear_nonzere_weight() {
  nonzere_weight_ = GOOGLE_LONGLONG(0);
  clear_has_nonzere_weight();
}
inline ::google::protobuf::int64 Progress::nonzere_weight() const {
  return nonzere_weight_;
}
inline void Progress::set_nonzere_weight(::google::protobuf::int64 value) {
  set_has_nonzere_weight();
  nonzere_weight_ = value;
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_proto_2fprogress_2eproto__INCLUDED
