// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ich9_hda.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_ich9_5fhda_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_ich9_5fhda_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3019000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3019004 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_ich9_5fhda_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_ich9_5fhda_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ich9_5fhda_2eproto;
class Ich9HdaState;
struct Ich9HdaStateDefaultTypeInternal;
extern Ich9HdaStateDefaultTypeInternal _Ich9HdaState_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::Ich9HdaState* Arena::CreateMaybeMessage<::Ich9HdaState>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class Ich9HdaState final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Ich9HdaState) */ {
 public:
  inline Ich9HdaState() : Ich9HdaState(nullptr) {}
  ~Ich9HdaState() override;
  explicit constexpr Ich9HdaState(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Ich9HdaState(const Ich9HdaState& from);
  Ich9HdaState(Ich9HdaState&& from) noexcept
    : Ich9HdaState() {
    *this = ::std::move(from);
  }

  inline Ich9HdaState& operator=(const Ich9HdaState& from) {
    CopyFrom(from);
    return *this;
  }
  inline Ich9HdaState& operator=(Ich9HdaState&& from) noexcept {
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
  static const Ich9HdaState& default_instance() {
    return *internal_default_instance();
  }
  static inline const Ich9HdaState* internal_default_instance() {
    return reinterpret_cast<const Ich9HdaState*>(
               &_Ich9HdaState_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Ich9HdaState& a, Ich9HdaState& b) {
    a.Swap(&b);
  }
  inline void Swap(Ich9HdaState* other) {
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
  void UnsafeArenaSwap(Ich9HdaState* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Ich9HdaState* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Ich9HdaState>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Ich9HdaState& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const Ich9HdaState& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Ich9HdaState* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Ich9HdaState";
  }
  protected:
  explicit Ich9HdaState(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kHdaRegistersFieldNumber = 1,
    kWallClockCounterFieldNumber = 3,
    kRirbCounterFieldNumber = 2,
  };
  // bytes hda_registers = 1;
  void clear_hda_registers();
  const std::string& hda_registers() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_hda_registers(ArgT0&& arg0, ArgT... args);
  std::string* mutable_hda_registers();
  PROTOBUF_NODISCARD std::string* release_hda_registers();
  void set_allocated_hda_registers(std::string* hda_registers);
  private:
  const std::string& _internal_hda_registers() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_hda_registers(const std::string& value);
  std::string* _internal_mutable_hda_registers();
  public:

  // uint64 wall_clock_counter = 3;
  void clear_wall_clock_counter();
  uint64_t wall_clock_counter() const;
  void set_wall_clock_counter(uint64_t value);
  private:
  uint64_t _internal_wall_clock_counter() const;
  void _internal_set_wall_clock_counter(uint64_t value);
  public:

  // uint32 rirb_counter = 2;
  void clear_rirb_counter();
  uint32_t rirb_counter() const;
  void set_rirb_counter(uint32_t value);
  private:
  uint32_t _internal_rirb_counter() const;
  void _internal_set_rirb_counter(uint32_t value);
  public:

  // @@protoc_insertion_point(class_scope:Ich9HdaState)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr hda_registers_;
  uint64_t wall_clock_counter_;
  uint32_t rirb_counter_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_ich9_5fhda_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Ich9HdaState

// bytes hda_registers = 1;
inline void Ich9HdaState::clear_hda_registers() {
  hda_registers_.ClearToEmpty();
}
inline const std::string& Ich9HdaState::hda_registers() const {
  // @@protoc_insertion_point(field_get:Ich9HdaState.hda_registers)
  return _internal_hda_registers();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Ich9HdaState::set_hda_registers(ArgT0&& arg0, ArgT... args) {
 
 hda_registers_.SetBytes(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:Ich9HdaState.hda_registers)
}
inline std::string* Ich9HdaState::mutable_hda_registers() {
  std::string* _s = _internal_mutable_hda_registers();
  // @@protoc_insertion_point(field_mutable:Ich9HdaState.hda_registers)
  return _s;
}
inline const std::string& Ich9HdaState::_internal_hda_registers() const {
  return hda_registers_.Get();
}
inline void Ich9HdaState::_internal_set_hda_registers(const std::string& value) {
  
  hda_registers_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* Ich9HdaState::_internal_mutable_hda_registers() {
  
  return hda_registers_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* Ich9HdaState::release_hda_registers() {
  // @@protoc_insertion_point(field_release:Ich9HdaState.hda_registers)
  return hda_registers_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void Ich9HdaState::set_allocated_hda_registers(std::string* hda_registers) {
  if (hda_registers != nullptr) {
    
  } else {
    
  }
  hda_registers_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), hda_registers,
      GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (hda_registers_.IsDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited())) {
    hda_registers_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:Ich9HdaState.hda_registers)
}

// uint32 rirb_counter = 2;
inline void Ich9HdaState::clear_rirb_counter() {
  rirb_counter_ = 0u;
}
inline uint32_t Ich9HdaState::_internal_rirb_counter() const {
  return rirb_counter_;
}
inline uint32_t Ich9HdaState::rirb_counter() const {
  // @@protoc_insertion_point(field_get:Ich9HdaState.rirb_counter)
  return _internal_rirb_counter();
}
inline void Ich9HdaState::_internal_set_rirb_counter(uint32_t value) {
  
  rirb_counter_ = value;
}
inline void Ich9HdaState::set_rirb_counter(uint32_t value) {
  _internal_set_rirb_counter(value);
  // @@protoc_insertion_point(field_set:Ich9HdaState.rirb_counter)
}

// uint64 wall_clock_counter = 3;
inline void Ich9HdaState::clear_wall_clock_counter() {
  wall_clock_counter_ = uint64_t{0u};
}
inline uint64_t Ich9HdaState::_internal_wall_clock_counter() const {
  return wall_clock_counter_;
}
inline uint64_t Ich9HdaState::wall_clock_counter() const {
  // @@protoc_insertion_point(field_get:Ich9HdaState.wall_clock_counter)
  return _internal_wall_clock_counter();
}
inline void Ich9HdaState::_internal_set_wall_clock_counter(uint64_t value) {
  
  wall_clock_counter_ = value;
}
inline void Ich9HdaState::set_wall_clock_counter(uint64_t value) {
  _internal_set_wall_clock_counter(value);
  // @@protoc_insertion_point(field_set:Ich9HdaState.wall_clock_counter)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_ich9_5fhda_2eproto