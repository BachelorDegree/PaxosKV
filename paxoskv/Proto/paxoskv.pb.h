// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: paxoskv.proto

#ifndef PROTOBUF_INCLUDED_paxoskv_2eproto
#define PROTOBUF_INCLUDED_paxoskv_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_paxoskv_2eproto 

namespace protobuf_paxoskv_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[6];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_paxoskv_2eproto
namespace paxoskv {
class DelReq;
class DelReqDefaultTypeInternal;
extern DelReqDefaultTypeInternal _DelReq_default_instance_;
class DelResp;
class DelRespDefaultTypeInternal;
extern DelRespDefaultTypeInternal _DelResp_default_instance_;
class GetReq;
class GetReqDefaultTypeInternal;
extern GetReqDefaultTypeInternal _GetReq_default_instance_;
class GetResp;
class GetRespDefaultTypeInternal;
extern GetRespDefaultTypeInternal _GetResp_default_instance_;
class SetReq;
class SetReqDefaultTypeInternal;
extern SetReqDefaultTypeInternal _SetReq_default_instance_;
class SetResp;
class SetRespDefaultTypeInternal;
extern SetRespDefaultTypeInternal _SetResp_default_instance_;
}  // namespace paxoskv
namespace google {
namespace protobuf {
template<> ::paxoskv::DelReq* Arena::CreateMaybeMessage<::paxoskv::DelReq>(Arena*);
template<> ::paxoskv::DelResp* Arena::CreateMaybeMessage<::paxoskv::DelResp>(Arena*);
template<> ::paxoskv::GetReq* Arena::CreateMaybeMessage<::paxoskv::GetReq>(Arena*);
template<> ::paxoskv::GetResp* Arena::CreateMaybeMessage<::paxoskv::GetResp>(Arena*);
template<> ::paxoskv::SetReq* Arena::CreateMaybeMessage<::paxoskv::SetReq>(Arena*);
template<> ::paxoskv::SetResp* Arena::CreateMaybeMessage<::paxoskv::SetResp>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace paxoskv {

// ===================================================================

class GetReq : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:paxoskv.GetReq) */ {
 public:
  GetReq();
  virtual ~GetReq();

  GetReq(const GetReq& from);

  inline GetReq& operator=(const GetReq& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  GetReq(GetReq&& from) noexcept
    : GetReq() {
    *this = ::std::move(from);
  }

  inline GetReq& operator=(GetReq&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const GetReq& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const GetReq* internal_default_instance() {
    return reinterpret_cast<const GetReq*>(
               &_GetReq_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(GetReq* other);
  friend void swap(GetReq& a, GetReq& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline GetReq* New() const final {
    return CreateMaybeMessage<GetReq>(NULL);
  }

  GetReq* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<GetReq>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const GetReq& from);
  void MergeFrom(const GetReq& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(GetReq* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // bytes key = 1;
  void clear_key();
  static const int kKeyFieldNumber = 1;
  const ::std::string& key() const;
  void set_key(const ::std::string& value);
  #if LANG_CXX11
  void set_key(::std::string&& value);
  #endif
  void set_key(const char* value);
  void set_key(const void* value, size_t size);
  ::std::string* mutable_key();
  ::std::string* release_key();
  void set_allocated_key(::std::string* key);

  // @@protoc_insertion_point(class_scope:paxoskv.GetReq)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr key_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_paxoskv_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class GetResp : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:paxoskv.GetResp) */ {
 public:
  GetResp();
  virtual ~GetResp();

  GetResp(const GetResp& from);

  inline GetResp& operator=(const GetResp& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  GetResp(GetResp&& from) noexcept
    : GetResp() {
    *this = ::std::move(from);
  }

  inline GetResp& operator=(GetResp&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const GetResp& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const GetResp* internal_default_instance() {
    return reinterpret_cast<const GetResp*>(
               &_GetResp_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(GetResp* other);
  friend void swap(GetResp& a, GetResp& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline GetResp* New() const final {
    return CreateMaybeMessage<GetResp>(NULL);
  }

  GetResp* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<GetResp>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const GetResp& from);
  void MergeFrom(const GetResp& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(GetResp* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // bytes value = 1;
  void clear_value();
  static const int kValueFieldNumber = 1;
  const ::std::string& value() const;
  void set_value(const ::std::string& value);
  #if LANG_CXX11
  void set_value(::std::string&& value);
  #endif
  void set_value(const char* value);
  void set_value(const void* value, size_t size);
  ::std::string* mutable_value();
  ::std::string* release_value();
  void set_allocated_value(::std::string* value);

  // @@protoc_insertion_point(class_scope:paxoskv.GetResp)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr value_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_paxoskv_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class SetReq : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:paxoskv.SetReq) */ {
 public:
  SetReq();
  virtual ~SetReq();

  SetReq(const SetReq& from);

  inline SetReq& operator=(const SetReq& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  SetReq(SetReq&& from) noexcept
    : SetReq() {
    *this = ::std::move(from);
  }

  inline SetReq& operator=(SetReq&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const SetReq& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SetReq* internal_default_instance() {
    return reinterpret_cast<const SetReq*>(
               &_SetReq_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  void Swap(SetReq* other);
  friend void swap(SetReq& a, SetReq& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline SetReq* New() const final {
    return CreateMaybeMessage<SetReq>(NULL);
  }

  SetReq* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<SetReq>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const SetReq& from);
  void MergeFrom(const SetReq& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(SetReq* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // bytes key = 1;
  void clear_key();
  static const int kKeyFieldNumber = 1;
  const ::std::string& key() const;
  void set_key(const ::std::string& value);
  #if LANG_CXX11
  void set_key(::std::string&& value);
  #endif
  void set_key(const char* value);
  void set_key(const void* value, size_t size);
  ::std::string* mutable_key();
  ::std::string* release_key();
  void set_allocated_key(::std::string* key);

  // bytes value = 2;
  void clear_value();
  static const int kValueFieldNumber = 2;
  const ::std::string& value() const;
  void set_value(const ::std::string& value);
  #if LANG_CXX11
  void set_value(::std::string&& value);
  #endif
  void set_value(const char* value);
  void set_value(const void* value, size_t size);
  ::std::string* mutable_value();
  ::std::string* release_value();
  void set_allocated_value(::std::string* value);

  // @@protoc_insertion_point(class_scope:paxoskv.SetReq)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr key_;
  ::google::protobuf::internal::ArenaStringPtr value_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_paxoskv_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class SetResp : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:paxoskv.SetResp) */ {
 public:
  SetResp();
  virtual ~SetResp();

  SetResp(const SetResp& from);

  inline SetResp& operator=(const SetResp& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  SetResp(SetResp&& from) noexcept
    : SetResp() {
    *this = ::std::move(from);
  }

  inline SetResp& operator=(SetResp&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const SetResp& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SetResp* internal_default_instance() {
    return reinterpret_cast<const SetResp*>(
               &_SetResp_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    3;

  void Swap(SetResp* other);
  friend void swap(SetResp& a, SetResp& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline SetResp* New() const final {
    return CreateMaybeMessage<SetResp>(NULL);
  }

  SetResp* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<SetResp>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const SetResp& from);
  void MergeFrom(const SetResp& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(SetResp* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:paxoskv.SetResp)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_paxoskv_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class DelReq : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:paxoskv.DelReq) */ {
 public:
  DelReq();
  virtual ~DelReq();

  DelReq(const DelReq& from);

  inline DelReq& operator=(const DelReq& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  DelReq(DelReq&& from) noexcept
    : DelReq() {
    *this = ::std::move(from);
  }

  inline DelReq& operator=(DelReq&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const DelReq& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const DelReq* internal_default_instance() {
    return reinterpret_cast<const DelReq*>(
               &_DelReq_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    4;

  void Swap(DelReq* other);
  friend void swap(DelReq& a, DelReq& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline DelReq* New() const final {
    return CreateMaybeMessage<DelReq>(NULL);
  }

  DelReq* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<DelReq>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const DelReq& from);
  void MergeFrom(const DelReq& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(DelReq* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // bytes key = 1;
  void clear_key();
  static const int kKeyFieldNumber = 1;
  const ::std::string& key() const;
  void set_key(const ::std::string& value);
  #if LANG_CXX11
  void set_key(::std::string&& value);
  #endif
  void set_key(const char* value);
  void set_key(const void* value, size_t size);
  ::std::string* mutable_key();
  ::std::string* release_key();
  void set_allocated_key(::std::string* key);

  // @@protoc_insertion_point(class_scope:paxoskv.DelReq)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr key_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_paxoskv_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class DelResp : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:paxoskv.DelResp) */ {
 public:
  DelResp();
  virtual ~DelResp();

  DelResp(const DelResp& from);

  inline DelResp& operator=(const DelResp& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  DelResp(DelResp&& from) noexcept
    : DelResp() {
    *this = ::std::move(from);
  }

  inline DelResp& operator=(DelResp&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const DelResp& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const DelResp* internal_default_instance() {
    return reinterpret_cast<const DelResp*>(
               &_DelResp_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    5;

  void Swap(DelResp* other);
  friend void swap(DelResp& a, DelResp& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline DelResp* New() const final {
    return CreateMaybeMessage<DelResp>(NULL);
  }

  DelResp* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<DelResp>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const DelResp& from);
  void MergeFrom(const DelResp& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(DelResp* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:paxoskv.DelResp)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_paxoskv_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// GetReq

// bytes key = 1;
inline void GetReq::clear_key() {
  key_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& GetReq::key() const {
  // @@protoc_insertion_point(field_get:paxoskv.GetReq.key)
  return key_.GetNoArena();
}
inline void GetReq::set_key(const ::std::string& value) {
  
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:paxoskv.GetReq.key)
}
#if LANG_CXX11
inline void GetReq::set_key(::std::string&& value) {
  
  key_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:paxoskv.GetReq.key)
}
#endif
inline void GetReq::set_key(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:paxoskv.GetReq.key)
}
inline void GetReq::set_key(const void* value, size_t size) {
  
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:paxoskv.GetReq.key)
}
inline ::std::string* GetReq::mutable_key() {
  
  // @@protoc_insertion_point(field_mutable:paxoskv.GetReq.key)
  return key_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* GetReq::release_key() {
  // @@protoc_insertion_point(field_release:paxoskv.GetReq.key)
  
  return key_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void GetReq::set_allocated_key(::std::string* key) {
  if (key != NULL) {
    
  } else {
    
  }
  key_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), key);
  // @@protoc_insertion_point(field_set_allocated:paxoskv.GetReq.key)
}

// -------------------------------------------------------------------

// GetResp

// bytes value = 1;
inline void GetResp::clear_value() {
  value_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& GetResp::value() const {
  // @@protoc_insertion_point(field_get:paxoskv.GetResp.value)
  return value_.GetNoArena();
}
inline void GetResp::set_value(const ::std::string& value) {
  
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:paxoskv.GetResp.value)
}
#if LANG_CXX11
inline void GetResp::set_value(::std::string&& value) {
  
  value_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:paxoskv.GetResp.value)
}
#endif
inline void GetResp::set_value(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:paxoskv.GetResp.value)
}
inline void GetResp::set_value(const void* value, size_t size) {
  
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:paxoskv.GetResp.value)
}
inline ::std::string* GetResp::mutable_value() {
  
  // @@protoc_insertion_point(field_mutable:paxoskv.GetResp.value)
  return value_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* GetResp::release_value() {
  // @@protoc_insertion_point(field_release:paxoskv.GetResp.value)
  
  return value_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void GetResp::set_allocated_value(::std::string* value) {
  if (value != NULL) {
    
  } else {
    
  }
  value_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set_allocated:paxoskv.GetResp.value)
}

// -------------------------------------------------------------------

// SetReq

// bytes key = 1;
inline void SetReq::clear_key() {
  key_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& SetReq::key() const {
  // @@protoc_insertion_point(field_get:paxoskv.SetReq.key)
  return key_.GetNoArena();
}
inline void SetReq::set_key(const ::std::string& value) {
  
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:paxoskv.SetReq.key)
}
#if LANG_CXX11
inline void SetReq::set_key(::std::string&& value) {
  
  key_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:paxoskv.SetReq.key)
}
#endif
inline void SetReq::set_key(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:paxoskv.SetReq.key)
}
inline void SetReq::set_key(const void* value, size_t size) {
  
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:paxoskv.SetReq.key)
}
inline ::std::string* SetReq::mutable_key() {
  
  // @@protoc_insertion_point(field_mutable:paxoskv.SetReq.key)
  return key_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* SetReq::release_key() {
  // @@protoc_insertion_point(field_release:paxoskv.SetReq.key)
  
  return key_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void SetReq::set_allocated_key(::std::string* key) {
  if (key != NULL) {
    
  } else {
    
  }
  key_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), key);
  // @@protoc_insertion_point(field_set_allocated:paxoskv.SetReq.key)
}

// bytes value = 2;
inline void SetReq::clear_value() {
  value_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& SetReq::value() const {
  // @@protoc_insertion_point(field_get:paxoskv.SetReq.value)
  return value_.GetNoArena();
}
inline void SetReq::set_value(const ::std::string& value) {
  
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:paxoskv.SetReq.value)
}
#if LANG_CXX11
inline void SetReq::set_value(::std::string&& value) {
  
  value_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:paxoskv.SetReq.value)
}
#endif
inline void SetReq::set_value(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:paxoskv.SetReq.value)
}
inline void SetReq::set_value(const void* value, size_t size) {
  
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:paxoskv.SetReq.value)
}
inline ::std::string* SetReq::mutable_value() {
  
  // @@protoc_insertion_point(field_mutable:paxoskv.SetReq.value)
  return value_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* SetReq::release_value() {
  // @@protoc_insertion_point(field_release:paxoskv.SetReq.value)
  
  return value_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void SetReq::set_allocated_value(::std::string* value) {
  if (value != NULL) {
    
  } else {
    
  }
  value_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set_allocated:paxoskv.SetReq.value)
}

// -------------------------------------------------------------------

// SetResp

// -------------------------------------------------------------------

// DelReq

// bytes key = 1;
inline void DelReq::clear_key() {
  key_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& DelReq::key() const {
  // @@protoc_insertion_point(field_get:paxoskv.DelReq.key)
  return key_.GetNoArena();
}
inline void DelReq::set_key(const ::std::string& value) {
  
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:paxoskv.DelReq.key)
}
#if LANG_CXX11
inline void DelReq::set_key(::std::string&& value) {
  
  key_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:paxoskv.DelReq.key)
}
#endif
inline void DelReq::set_key(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:paxoskv.DelReq.key)
}
inline void DelReq::set_key(const void* value, size_t size) {
  
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:paxoskv.DelReq.key)
}
inline ::std::string* DelReq::mutable_key() {
  
  // @@protoc_insertion_point(field_mutable:paxoskv.DelReq.key)
  return key_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* DelReq::release_key() {
  // @@protoc_insertion_point(field_release:paxoskv.DelReq.key)
  
  return key_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void DelReq::set_allocated_key(::std::string* key) {
  if (key != NULL) {
    
  } else {
    
  }
  key_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), key);
  // @@protoc_insertion_point(field_set_allocated:paxoskv.DelReq.key)
}

// -------------------------------------------------------------------

// DelResp

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace paxoskv

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_paxoskv_2eproto
