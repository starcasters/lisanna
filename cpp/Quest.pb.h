// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Quest.proto

#ifndef PROTOBUF_Quest_2eproto__INCLUDED
#define PROTOBUF_Quest_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2004001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_message_reflection.h>
#include "Items.pb.h"
// @@protoc_insertion_point(includes)

namespace D3 {
namespace Quests {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_Quest_2eproto();
void protobuf_AssignDesc_Quest_2eproto();
void protobuf_ShutdownFile_Quest_2eproto();

class QuestReward;
class QuestStepComplete;

// ===================================================================

class QuestReward : public ::google::protobuf::Message {
 public:
  QuestReward();
  virtual ~QuestReward();
  
  QuestReward(const QuestReward& from);
  
  inline QuestReward& operator=(const QuestReward& from) {
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
  static const QuestReward& default_instance();
  
  void Swap(QuestReward* other);
  
  // implements Message ----------------------------------------------
  
  QuestReward* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const QuestReward& from);
  void MergeFrom(const QuestReward& from);
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
  
  // optional int32 xp_granted = 1;
  inline bool has_xp_granted() const;
  inline void clear_xp_granted();
  static const int kXpGrantedFieldNumber = 1;
  inline ::google::protobuf::int32 xp_granted() const;
  inline void set_xp_granted(::google::protobuf::int32 value);
  
  // optional int32 gold_granted = 2;
  inline bool has_gold_granted() const;
  inline void clear_gold_granted();
  static const int kGoldGrantedFieldNumber = 2;
  inline ::google::protobuf::int32 gold_granted() const;
  inline void set_gold_granted(::google::protobuf::int32 value);
  
  // optional .D3.Items.Generator item = 3;
  inline bool has_item() const;
  inline void clear_item();
  static const int kItemFieldNumber = 3;
  inline const ::D3::Items::Generator& item() const;
  inline ::D3::Items::Generator* mutable_item();
  inline ::D3::Items::Generator* release_item();
  
  // @@protoc_insertion_point(class_scope:D3.Quests.QuestReward)
 private:
  inline void set_has_xp_granted();
  inline void clear_has_xp_granted();
  inline void set_has_gold_granted();
  inline void clear_has_gold_granted();
  inline void set_has_item();
  inline void clear_has_item();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::google::protobuf::int32 xp_granted_;
  ::google::protobuf::int32 gold_granted_;
  ::D3::Items::Generator* item_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];
  
  friend void  protobuf_AddDesc_Quest_2eproto();
  friend void protobuf_AssignDesc_Quest_2eproto();
  friend void protobuf_ShutdownFile_Quest_2eproto();
  
  void InitAsDefaultInstance();
  static QuestReward* default_instance_;
};
// -------------------------------------------------------------------

class QuestStepComplete : public ::google::protobuf::Message {
 public:
  QuestStepComplete();
  virtual ~QuestStepComplete();
  
  QuestStepComplete(const QuestStepComplete& from);
  
  inline QuestStepComplete& operator=(const QuestStepComplete& from) {
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
  static const QuestStepComplete& default_instance();
  
  void Swap(QuestStepComplete* other);
  
  // implements Message ----------------------------------------------
  
  QuestStepComplete* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const QuestStepComplete& from);
  void MergeFrom(const QuestStepComplete& from);
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
  
  // required bool is_quest_complete = 1;
  inline bool has_is_quest_complete() const;
  inline void clear_is_quest_complete();
  static const int kIsQuestCompleteFieldNumber = 1;
  inline bool is_quest_complete() const;
  inline void set_is_quest_complete(bool value);
  
  // optional .D3.Quests.QuestReward reward = 2;
  inline bool has_reward() const;
  inline void clear_reward();
  static const int kRewardFieldNumber = 2;
  inline const ::D3::Quests::QuestReward& reward() const;
  inline ::D3::Quests::QuestReward* mutable_reward();
  inline ::D3::Quests::QuestReward* release_reward();
  
  // @@protoc_insertion_point(class_scope:D3.Quests.QuestStepComplete)
 private:
  inline void set_has_is_quest_complete();
  inline void clear_has_is_quest_complete();
  inline void set_has_reward();
  inline void clear_has_reward();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::D3::Quests::QuestReward* reward_;
  bool is_quest_complete_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];
  
  friend void  protobuf_AddDesc_Quest_2eproto();
  friend void protobuf_AssignDesc_Quest_2eproto();
  friend void protobuf_ShutdownFile_Quest_2eproto();
  
  void InitAsDefaultInstance();
  static QuestStepComplete* default_instance_;
};
// ===================================================================


// ===================================================================

// QuestReward

// optional int32 xp_granted = 1;
inline bool QuestReward::has_xp_granted() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void QuestReward::set_has_xp_granted() {
  _has_bits_[0] |= 0x00000001u;
}
inline void QuestReward::clear_has_xp_granted() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void QuestReward::clear_xp_granted() {
  xp_granted_ = 0;
  clear_has_xp_granted();
}
inline ::google::protobuf::int32 QuestReward::xp_granted() const {
  return xp_granted_;
}
inline void QuestReward::set_xp_granted(::google::protobuf::int32 value) {
  set_has_xp_granted();
  xp_granted_ = value;
}

// optional int32 gold_granted = 2;
inline bool QuestReward::has_gold_granted() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void QuestReward::set_has_gold_granted() {
  _has_bits_[0] |= 0x00000002u;
}
inline void QuestReward::clear_has_gold_granted() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void QuestReward::clear_gold_granted() {
  gold_granted_ = 0;
  clear_has_gold_granted();
}
inline ::google::protobuf::int32 QuestReward::gold_granted() const {
  return gold_granted_;
}
inline void QuestReward::set_gold_granted(::google::protobuf::int32 value) {
  set_has_gold_granted();
  gold_granted_ = value;
}

// optional .D3.Items.Generator item = 3;
inline bool QuestReward::has_item() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void QuestReward::set_has_item() {
  _has_bits_[0] |= 0x00000004u;
}
inline void QuestReward::clear_has_item() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void QuestReward::clear_item() {
  if (item_ != NULL) item_->::D3::Items::Generator::Clear();
  clear_has_item();
}
inline const ::D3::Items::Generator& QuestReward::item() const {
  return item_ != NULL ? *item_ : *default_instance_->item_;
}
inline ::D3::Items::Generator* QuestReward::mutable_item() {
  set_has_item();
  if (item_ == NULL) item_ = new ::D3::Items::Generator;
  return item_;
}
inline ::D3::Items::Generator* QuestReward::release_item() {
  clear_has_item();
  ::D3::Items::Generator* temp = item_;
  item_ = NULL;
  return temp;
}

// -------------------------------------------------------------------

// QuestStepComplete

// required bool is_quest_complete = 1;
inline bool QuestStepComplete::has_is_quest_complete() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void QuestStepComplete::set_has_is_quest_complete() {
  _has_bits_[0] |= 0x00000001u;
}
inline void QuestStepComplete::clear_has_is_quest_complete() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void QuestStepComplete::clear_is_quest_complete() {
  is_quest_complete_ = false;
  clear_has_is_quest_complete();
}
inline bool QuestStepComplete::is_quest_complete() const {
  return is_quest_complete_;
}
inline void QuestStepComplete::set_is_quest_complete(bool value) {
  set_has_is_quest_complete();
  is_quest_complete_ = value;
}

// optional .D3.Quests.QuestReward reward = 2;
inline bool QuestStepComplete::has_reward() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void QuestStepComplete::set_has_reward() {
  _has_bits_[0] |= 0x00000002u;
}
inline void QuestStepComplete::clear_has_reward() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void QuestStepComplete::clear_reward() {
  if (reward_ != NULL) reward_->::D3::Quests::QuestReward::Clear();
  clear_has_reward();
}
inline const ::D3::Quests::QuestReward& QuestStepComplete::reward() const {
  return reward_ != NULL ? *reward_ : *default_instance_->reward_;
}
inline ::D3::Quests::QuestReward* QuestStepComplete::mutable_reward() {
  set_has_reward();
  if (reward_ == NULL) reward_ = new ::D3::Quests::QuestReward;
  return reward_;
}
inline ::D3::Quests::QuestReward* QuestStepComplete::release_reward() {
  clear_has_reward();
  ::D3::Quests::QuestReward* temp = reward_;
  reward_ = NULL;
  return temp;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Quests
}  // namespace D3

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_Quest_2eproto__INCLUDED
