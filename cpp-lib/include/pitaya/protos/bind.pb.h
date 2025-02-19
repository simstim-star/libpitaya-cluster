// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: bind.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_bind_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_bind_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021006 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_bind_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_bind_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_bind_2eproto;
namespace protos {
class BindMsg;
struct BindMsgDefaultTypeInternal;
extern BindMsgDefaultTypeInternal _BindMsg_default_instance_;
}  // namespace protos
PROTOBUF_NAMESPACE_OPEN
template<> ::protos::BindMsg* Arena::CreateMaybeMessage<::protos::BindMsg>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace protos {

// ===================================================================

class BindMsg final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:protos.BindMsg) */ {
 public:
  inline BindMsg() : BindMsg(nullptr) {}
  ~BindMsg() override;
  explicit PROTOBUF_CONSTEXPR BindMsg(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  BindMsg(const BindMsg& from);
  BindMsg(BindMsg&& from) noexcept
    : BindMsg() {
    *this = ::std::move(from);
  }

  inline BindMsg& operator=(const BindMsg& from) {
    CopyFrom(from);
    return *this;
  }
  inline BindMsg& operator=(BindMsg&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const BindMsg& default_instance() {
    return *internal_default_instance();
  }
  static inline const BindMsg* internal_default_instance() {
    return reinterpret_cast<const BindMsg*>(
               &_BindMsg_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(BindMsg& a, BindMsg& b) {
    a.Swap(&b);
  }
  inline void Swap(BindMsg* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(BindMsg* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  BindMsg* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<BindMsg>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const BindMsg& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const BindMsg& from) {
    BindMsg::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(BindMsg* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "protos.BindMsg";
  }
  protected:
  explicit BindMsg(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kUidFieldNumber = 1,
    kFidFieldNumber = 2,
  };
  // string uid = 1;
  void clear_uid();
  const std::string& uid() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_uid(ArgT0&& arg0, ArgT... args);
  std::string* mutable_uid();
  PROTOBUF_NODISCARD std::string* release_uid();
  void set_allocated_uid(std::string* uid);
  private:
  const std::string& _internal_uid() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_uid(const std::string& value);
  std::string* _internal_mutable_uid();
  public:

  // string fid = 2;
  void clear_fid();
  const std::string& fid() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_fid(ArgT0&& arg0, ArgT... args);
  std::string* mutable_fid();
  PROTOBUF_NODISCARD std::string* release_fid();
  void set_allocated_fid(std::string* fid);
  private:
  const std::string& _internal_fid() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_fid(const std::string& value);
  std::string* _internal_mutable_fid();
  public:

  // @@protoc_insertion_point(class_scope:protos.BindMsg)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr uid_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr fid_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_bind_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// BindMsg

// string uid = 1;
inline void BindMsg::clear_uid() {
  _impl_.uid_.ClearToEmpty();
}
inline const std::string& BindMsg::uid() const {
  // @@protoc_insertion_point(field_get:protos.BindMsg.uid)
  return _internal_uid();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void BindMsg::set_uid(ArgT0&& arg0, ArgT... args) {
 
 _impl_.uid_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:protos.BindMsg.uid)
}
inline std::string* BindMsg::mutable_uid() {
  std::string* _s = _internal_mutable_uid();
  // @@protoc_insertion_point(field_mutable:protos.BindMsg.uid)
  return _s;
}
inline const std::string& BindMsg::_internal_uid() const {
  return _impl_.uid_.Get();
}
inline void BindMsg::_internal_set_uid(const std::string& value) {
  
  _impl_.uid_.Set(value, GetArenaForAllocation());
}
inline std::string* BindMsg::_internal_mutable_uid() {
  
  return _impl_.uid_.Mutable(GetArenaForAllocation());
}
inline std::string* BindMsg::release_uid() {
  // @@protoc_insertion_point(field_release:protos.BindMsg.uid)
  return _impl_.uid_.Release();
}
inline void BindMsg::set_allocated_uid(std::string* uid) {
  if (uid != nullptr) {
    
  } else {
    
  }
  _impl_.uid_.SetAllocated(uid, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.uid_.IsDefault()) {
    _impl_.uid_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:protos.BindMsg.uid)
}

// string fid = 2;
inline void BindMsg::clear_fid() {
  _impl_.fid_.ClearToEmpty();
}
inline const std::string& BindMsg::fid() const {
  // @@protoc_insertion_point(field_get:protos.BindMsg.fid)
  return _internal_fid();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void BindMsg::set_fid(ArgT0&& arg0, ArgT... args) {
 
 _impl_.fid_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:protos.BindMsg.fid)
}
inline std::string* BindMsg::mutable_fid() {
  std::string* _s = _internal_mutable_fid();
  // @@protoc_insertion_point(field_mutable:protos.BindMsg.fid)
  return _s;
}
inline const std::string& BindMsg::_internal_fid() const {
  return _impl_.fid_.Get();
}
inline void BindMsg::_internal_set_fid(const std::string& value) {
  
  _impl_.fid_.Set(value, GetArenaForAllocation());
}
inline std::string* BindMsg::_internal_mutable_fid() {
  
  return _impl_.fid_.Mutable(GetArenaForAllocation());
}
inline std::string* BindMsg::release_fid() {
  // @@protoc_insertion_point(field_release:protos.BindMsg.fid)
  return _impl_.fid_.Release();
}
inline void BindMsg::set_allocated_fid(std::string* fid) {
  if (fid != nullptr) {
    
  } else {
    
  }
  _impl_.fid_.SetAllocated(fid, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.fid_.IsDefault()) {
    _impl_.fid_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:protos.BindMsg.fid)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace protos

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_bind_2eproto
