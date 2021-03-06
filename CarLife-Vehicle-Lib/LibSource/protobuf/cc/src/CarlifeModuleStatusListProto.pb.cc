// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CarlifeModuleStatusListProto.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "CarlifeModuleStatusListProto.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace com {
namespace baidu {
namespace carlife {
namespace protobuf {

namespace {

const ::google::protobuf::Descriptor* CarlifeModuleStatusList_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  CarlifeModuleStatusList_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_CarlifeModuleStatusListProto_2eproto() {
  protobuf_AddDesc_CarlifeModuleStatusListProto_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "CarlifeModuleStatusListProto.proto");
  GOOGLE_CHECK(file != NULL);
  CarlifeModuleStatusList_descriptor_ = file->message_type(0);
  static const int CarlifeModuleStatusList_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CarlifeModuleStatusList, cnt_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CarlifeModuleStatusList, modulestatus_),
  };
  CarlifeModuleStatusList_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      CarlifeModuleStatusList_descriptor_,
      CarlifeModuleStatusList::default_instance_,
      CarlifeModuleStatusList_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CarlifeModuleStatusList, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CarlifeModuleStatusList, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(CarlifeModuleStatusList));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_CarlifeModuleStatusListProto_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    CarlifeModuleStatusList_descriptor_, &CarlifeModuleStatusList::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_CarlifeModuleStatusListProto_2eproto() {
  delete CarlifeModuleStatusList::default_instance_;
  delete CarlifeModuleStatusList_reflection_;
}

void protobuf_AddDesc_CarlifeModuleStatusListProto_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::com::baidu::carlife::protobuf::protobuf_AddDesc_CarlifeModuleStatusProto_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\"CarlifeModuleStatusListProto.proto\022\032co"
    "m.baidu.carlife.protobuf\032\036CarlifeModuleS"
    "tatusProto.proto\"m\n\027CarlifeModuleStatusL"
    "ist\022\013\n\003cnt\030\001 \002(\005\022E\n\014moduleStatus\030\002 \003(\0132/"
    ".com.baidu.carlife.protobuf.CarlifeModul"
    "eStatus", 207);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "CarlifeModuleStatusListProto.proto", &protobuf_RegisterTypes);
  CarlifeModuleStatusList::default_instance_ = new CarlifeModuleStatusList();
  CarlifeModuleStatusList::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_CarlifeModuleStatusListProto_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_CarlifeModuleStatusListProto_2eproto {
  StaticDescriptorInitializer_CarlifeModuleStatusListProto_2eproto() {
    protobuf_AddDesc_CarlifeModuleStatusListProto_2eproto();
  }
} static_descriptor_initializer_CarlifeModuleStatusListProto_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int CarlifeModuleStatusList::kCntFieldNumber;
const int CarlifeModuleStatusList::kModuleStatusFieldNumber;
#endif  // !_MSC_VER

CarlifeModuleStatusList::CarlifeModuleStatusList()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void CarlifeModuleStatusList::InitAsDefaultInstance() {
}

CarlifeModuleStatusList::CarlifeModuleStatusList(const CarlifeModuleStatusList& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void CarlifeModuleStatusList::SharedCtor() {
  _cached_size_ = 0;
  cnt_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CarlifeModuleStatusList::~CarlifeModuleStatusList() {
  SharedDtor();
}

void CarlifeModuleStatusList::SharedDtor() {
  if (this != default_instance_) {
  }
}

void CarlifeModuleStatusList::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CarlifeModuleStatusList::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return CarlifeModuleStatusList_descriptor_;
}

const CarlifeModuleStatusList& CarlifeModuleStatusList::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_CarlifeModuleStatusListProto_2eproto();
  return *default_instance_;
}

CarlifeModuleStatusList* CarlifeModuleStatusList::default_instance_ = NULL;

CarlifeModuleStatusList* CarlifeModuleStatusList::New() const {
  return new CarlifeModuleStatusList;
}

void CarlifeModuleStatusList::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    cnt_ = 0;
  }
  modulestatus_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool CarlifeModuleStatusList::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 cnt = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &cnt_)));
          set_has_cnt();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_moduleStatus;
        break;
      }

      // repeated .com.baidu.carlife.protobuf.CarlifeModuleStatus moduleStatus = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_moduleStatus:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_modulestatus()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_moduleStatus;
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void CarlifeModuleStatusList::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required int32 cnt = 1;
  if (has_cnt()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->cnt(), output);
  }

  // repeated .com.baidu.carlife.protobuf.CarlifeModuleStatus moduleStatus = 2;
  for (int i = 0; i < this->modulestatus_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->modulestatus(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* CarlifeModuleStatusList::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required int32 cnt = 1;
  if (has_cnt()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->cnt(), target);
  }

  // repeated .com.baidu.carlife.protobuf.CarlifeModuleStatus moduleStatus = 2;
  for (int i = 0; i < this->modulestatus_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        2, this->modulestatus(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int CarlifeModuleStatusList::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required int32 cnt = 1;
    if (has_cnt()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->cnt());
    }

  }
  // repeated .com.baidu.carlife.protobuf.CarlifeModuleStatus moduleStatus = 2;
  total_size += 1 * this->modulestatus_size();
  for (int i = 0; i < this->modulestatus_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->modulestatus(i));
  }

  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void CarlifeModuleStatusList::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const CarlifeModuleStatusList* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const CarlifeModuleStatusList*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void CarlifeModuleStatusList::MergeFrom(const CarlifeModuleStatusList& from) {
  GOOGLE_CHECK_NE(&from, this);
  modulestatus_.MergeFrom(from.modulestatus_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_cnt()) {
      set_cnt(from.cnt());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CarlifeModuleStatusList::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CarlifeModuleStatusList::CopyFrom(const CarlifeModuleStatusList& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CarlifeModuleStatusList::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  for (int i = 0; i < modulestatus_size(); i++) {
    if (!this->modulestatus(i).IsInitialized()) return false;
  }
  return true;
}

void CarlifeModuleStatusList::Swap(CarlifeModuleStatusList* other) {
  if (other != this) {
    std::swap(cnt_, other->cnt_);
    modulestatus_.Swap(&other->modulestatus_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata CarlifeModuleStatusList::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = CarlifeModuleStatusList_descriptor_;
  metadata.reflection = CarlifeModuleStatusList_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace protobuf
}  // namespace carlife
}  // namespace baidu
}  // namespace com

// @@protoc_insertion_point(global_scope)
