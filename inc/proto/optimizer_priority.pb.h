// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: optimizer_priority.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_optimizer_5fpriority_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_optimizer_5fpriority_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3013000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3013000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_optimizer_5fpriority_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_optimizer_5fpriority_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_optimizer_5fpriority_2eproto;
namespace ge {
namespace optimizers {
class Priority;
class PriorityDefaultTypeInternal;
extern PriorityDefaultTypeInternal _Priority_default_instance_;
}  // namespace optimizers
}  // namespace ge
PROTOBUF_NAMESPACE_OPEN
template<> ::ge::optimizers::Priority* Arena::CreateMaybeMessage<::ge::optimizers::Priority>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace ge {
namespace optimizers {

// ===================================================================

class Priority PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:ge.optimizers.Priority) */ {
 public:
  inline Priority() : Priority(nullptr) {}
  virtual ~Priority();

  Priority(const Priority& from);
  Priority(Priority&& from) noexcept
    : Priority() {
    *this = ::std::move(from);
  }

  inline Priority& operator=(const Priority& from) {
    CopyFrom(from);
    return *this;
  }
  inline Priority& operator=(Priority&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Priority& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Priority* internal_default_instance() {
    return reinterpret_cast<const Priority*>(
               &_Priority_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Priority& a, Priority& b) {
    a.Swap(&b);
  }
  inline void Swap(Priority* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Priority* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Priority* New() const final {
    return CreateMaybeMessage<Priority>(nullptr);
  }

  Priority* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Priority>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Priority& from);
  void MergeFrom(const Priority& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Priority* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "ge.optimizers.Priority";
  }
  protected:
  explicit Priority(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_optimizer_5fpriority_2eproto);
    return ::descriptor_table_optimizer_5fpriority_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kOptimizerFieldNumber = 1,
  };
  // repeated string optimizer = 1;
  int optimizer_size() const;
  private:
  int _internal_optimizer_size() const;
  public:
  void clear_optimizer();
  const std::string& optimizer(int index) const;
  std::string* mutable_optimizer(int index);
  void set_optimizer(int index, const std::string& value);
  void set_optimizer(int index, std::string&& value);
  void set_optimizer(int index, const char* value);
  void set_optimizer(int index, const char* value, size_t size);
  std::string* add_optimizer();
  void add_optimizer(const std::string& value);
  void add_optimizer(std::string&& value);
  void add_optimizer(const char* value);
  void add_optimizer(const char* value, size_t size);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& optimizer() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* mutable_optimizer();
  private:
  const std::string& _internal_optimizer(int index) const;
  std::string* _internal_add_optimizer();
  public:

  // @@protoc_insertion_point(class_scope:ge.optimizers.Priority)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> optimizer_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_optimizer_5fpriority_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Priority

// repeated string optimizer = 1;
inline int Priority::_internal_optimizer_size() const {
  return optimizer_.size();
}
inline int Priority::optimizer_size() const {
  return _internal_optimizer_size();
}
inline void Priority::clear_optimizer() {
  optimizer_.Clear();
}
inline std::string* Priority::add_optimizer() {
  // @@protoc_insertion_point(field_add_mutable:ge.optimizers.Priority.optimizer)
  return _internal_add_optimizer();
}
inline const std::string& Priority::_internal_optimizer(int index) const {
  return optimizer_.Get(index);
}
inline const std::string& Priority::optimizer(int index) const {
  // @@protoc_insertion_point(field_get:ge.optimizers.Priority.optimizer)
  return _internal_optimizer(index);
}
inline std::string* Priority::mutable_optimizer(int index) {
  // @@protoc_insertion_point(field_mutable:ge.optimizers.Priority.optimizer)
  return optimizer_.Mutable(index);
}
inline void Priority::set_optimizer(int index, const std::string& value) {
  // @@protoc_insertion_point(field_set:ge.optimizers.Priority.optimizer)
  optimizer_.Mutable(index)->assign(value);
}
inline void Priority::set_optimizer(int index, std::string&& value) {
  // @@protoc_insertion_point(field_set:ge.optimizers.Priority.optimizer)
  optimizer_.Mutable(index)->assign(std::move(value));
}
inline void Priority::set_optimizer(int index, const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  optimizer_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:ge.optimizers.Priority.optimizer)
}
inline void Priority::set_optimizer(int index, const char* value, size_t size) {
  optimizer_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:ge.optimizers.Priority.optimizer)
}
inline std::string* Priority::_internal_add_optimizer() {
  return optimizer_.Add();
}
inline void Priority::add_optimizer(const std::string& value) {
  optimizer_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:ge.optimizers.Priority.optimizer)
}
inline void Priority::add_optimizer(std::string&& value) {
  optimizer_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:ge.optimizers.Priority.optimizer)
}
inline void Priority::add_optimizer(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  optimizer_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:ge.optimizers.Priority.optimizer)
}
inline void Priority::add_optimizer(const char* value, size_t size) {
  optimizer_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:ge.optimizers.Priority.optimizer)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
Priority::optimizer() const {
  // @@protoc_insertion_point(field_list:ge.optimizers.Priority.optimizer)
  return optimizer_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>*
Priority::mutable_optimizer() {
  // @@protoc_insertion_point(field_mutable_list:ge.optimizers.Priority.optimizer)
  return &optimizer_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace optimizers
}  // namespace ge

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_optimizer_5fpriority_2eproto
