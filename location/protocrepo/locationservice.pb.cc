// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protocrepo/locationservice.proto

#include "protocrepo/locationservice.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
class PointDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Point> _instance;
} _Point_default_instance_;
static void InitDefaultsscc_info_Point_protocrepo_2flocationservice_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_Point_default_instance_;
    new (ptr) ::Point();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::Point::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Point_protocrepo_2flocationservice_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_Point_protocrepo_2flocationservice_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_protocrepo_2flocationservice_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_protocrepo_2flocationservice_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_protocrepo_2flocationservice_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_protocrepo_2flocationservice_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::Point, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::Point, latitude_),
  PROTOBUF_FIELD_OFFSET(::Point, longitude_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::Point)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_Point_default_instance_),
};

const char descriptor_table_protodef_protocrepo_2flocationservice_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n protocrepo/locationservice.proto\",\n\005Po"
  "int\022\020\n\010latitude\030\001 \001(\005\022\021\n\tlongitude\030\002 \001(\005"
  "2.\n\nRouteGuide\022 \n\014ConvertPoint\022\006.Point\032\006"
  ".Point\"\000b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_protocrepo_2flocationservice_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_protocrepo_2flocationservice_2eproto_sccs[1] = {
  &scc_info_Point_protocrepo_2flocationservice_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_protocrepo_2flocationservice_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_protocrepo_2flocationservice_2eproto = {
  false, false, descriptor_table_protodef_protocrepo_2flocationservice_2eproto, "protocrepo/locationservice.proto", 136,
  &descriptor_table_protocrepo_2flocationservice_2eproto_once, descriptor_table_protocrepo_2flocationservice_2eproto_sccs, descriptor_table_protocrepo_2flocationservice_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_protocrepo_2flocationservice_2eproto::offsets,
  file_level_metadata_protocrepo_2flocationservice_2eproto, 1, file_level_enum_descriptors_protocrepo_2flocationservice_2eproto, file_level_service_descriptors_protocrepo_2flocationservice_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_protocrepo_2flocationservice_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_protocrepo_2flocationservice_2eproto)), true);

// ===================================================================

void Point::InitAsDefaultInstance() {
}
class Point::_Internal {
 public:
};

Point::Point(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:Point)
}
Point::Point(const Point& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&latitude_, &from.latitude_,
    static_cast<size_t>(reinterpret_cast<char*>(&longitude_) -
    reinterpret_cast<char*>(&latitude_)) + sizeof(longitude_));
  // @@protoc_insertion_point(copy_constructor:Point)
}

void Point::SharedCtor() {
  ::memset(&latitude_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&longitude_) -
      reinterpret_cast<char*>(&latitude_)) + sizeof(longitude_));
}

Point::~Point() {
  // @@protoc_insertion_point(destructor:Point)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void Point::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
}

void Point::ArenaDtor(void* object) {
  Point* _this = reinterpret_cast< Point* >(object);
  (void)_this;
}
void Point::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Point::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Point& Point::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Point_protocrepo_2flocationservice_2eproto.base);
  return *internal_default_instance();
}


void Point::Clear() {
// @@protoc_insertion_point(message_clear_start:Point)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&latitude_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&longitude_) -
      reinterpret_cast<char*>(&latitude_)) + sizeof(longitude_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Point::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // int32 latitude = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          latitude_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int32 longitude = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          longitude_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* Point::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Point)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 latitude = 1;
  if (this->latitude() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_latitude(), target);
  }

  // int32 longitude = 2;
  if (this->longitude() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(2, this->_internal_longitude(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Point)
  return target;
}

size_t Point::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Point)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // int32 latitude = 1;
  if (this->latitude() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_latitude());
  }

  // int32 longitude = 2;
  if (this->longitude() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_longitude());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Point::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:Point)
  GOOGLE_DCHECK_NE(&from, this);
  const Point* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Point>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:Point)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:Point)
    MergeFrom(*source);
  }
}

void Point::MergeFrom(const Point& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Point)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.latitude() != 0) {
    _internal_set_latitude(from._internal_latitude());
  }
  if (from.longitude() != 0) {
    _internal_set_longitude(from._internal_longitude());
  }
}

void Point::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:Point)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Point::CopyFrom(const Point& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Point)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Point::IsInitialized() const {
  return true;
}

void Point::InternalSwap(Point* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Point, longitude_)
      + sizeof(Point::longitude_)
      - PROTOBUF_FIELD_OFFSET(Point, latitude_)>(
          reinterpret_cast<char*>(&latitude_),
          reinterpret_cast<char*>(&other->latitude_));
}

::PROTOBUF_NAMESPACE_ID::Metadata Point::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::Point* Arena::CreateMaybeMessage< ::Point >(Arena* arena) {
  return Arena::CreateMessageInternal< ::Point >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>