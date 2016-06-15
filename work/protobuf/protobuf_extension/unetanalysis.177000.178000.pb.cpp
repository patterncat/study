// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "unetanalysis.177000.178000.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace ucloud {
namespace unetanalysis {

namespace {

const ::google::protobuf::Descriptor* StatsData_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  StatsData_reflection_ = NULL;
const ::google::protobuf::Descriptor* RecordStatsRequest_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  RecordStatsRequest_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* MessageType_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_unetanalysis_2e177000_2e178000_2eproto() {
  protobuf_AddDesc_unetanalysis_2e177000_2e178000_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "unetanalysis.177000.178000.proto");
  GOOGLE_CHECK(file != NULL);
  StatsData_descriptor_ = file->message_type(0);
  static const int StatsData_offsets_[6] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(StatsData, uuid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(StatsData, item_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(StatsData, region_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(StatsData, isp_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(StatsData, value_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(StatsData, time_),
  };
  StatsData_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      StatsData_descriptor_,
      StatsData::default_instance_,
      StatsData_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(StatsData, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(StatsData, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(StatsData));
  RecordStatsRequest_descriptor_ = file->message_type(1);
  static const int RecordStatsRequest_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RecordStatsRequest, stats_data_list_),
  };
  RecordStatsRequest_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      RecordStatsRequest_descriptor_,
      RecordStatsRequest::default_instance_,
      RecordStatsRequest_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RecordStatsRequest, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RecordStatsRequest, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(RecordStatsRequest));
  MessageType_descriptor_ = file->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_unetanalysis_2e177000_2e178000_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    StatsData_descriptor_, &StatsData::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    RecordStatsRequest_descriptor_, &RecordStatsRequest::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_unetanalysis_2e177000_2e178000_2eproto() {
  delete StatsData::default_instance_;
  delete StatsData_reflection_;
  delete RecordStatsRequest::default_instance_;
  delete RecordStatsRequest_reflection_;
}

void protobuf_AddDesc_unetanalysis_2e177000_2e178000_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::ucloud::protobuf_AddDesc_ucloud_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n unetanalysis.177000.178000.proto\022\023uclo"
    "ud.unetanalysis\032\014ucloud.proto\"j\n\tStatsDa"
    "ta\022\014\n\004uuid\030\n \002(\t\022\017\n\007item_id\030\024 \002(\r\022\021\n\treg"
    "ion_id\030\036 \002(\r\022\016\n\006isp_id\030( \002(\r\022\r\n\005value\0302 "
    "\002(\004\022\014\n\004time\030< \002(\r\"M\n\022RecordStatsRequest\022"
    "7\n\017stats_data_list\030\n \003(\0132\036.ucloud.unetan"
    "alysis.StatsData*N\n\013MessageType\022\022\n\014BEGIN"
    "NING_ID\020\350\346\n\022\032\n\024RECORD_STATS_REQUEST\020\351\346\n\022"
    "\017\n\tENDING_ID\020\320\356\n:U\n\024record_stats_request"
    "\022\014.ucloud.Body\030\351\346\n \001(\0132\'.ucloud.unetanal"
    "ysis.RecordStatsRequest", 423);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "unetanalysis.177000.178000.proto", &protobuf_RegisterTypes);
  StatsData::default_instance_ = new StatsData();
  RecordStatsRequest::default_instance_ = new RecordStatsRequest();
  ::google::protobuf::internal::ExtensionSet::RegisterMessageExtension(
    &::ucloud::Body::default_instance(),
    177001, 11, false, false,
    &::ucloud::unetanalysis::RecordStatsRequest::default_instance());
  StatsData::default_instance_->InitAsDefaultInstance();
  RecordStatsRequest::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_unetanalysis_2e177000_2e178000_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_unetanalysis_2e177000_2e178000_2eproto {
  StaticDescriptorInitializer_unetanalysis_2e177000_2e178000_2eproto() {
    protobuf_AddDesc_unetanalysis_2e177000_2e178000_2eproto();
  }
} static_descriptor_initializer_unetanalysis_2e177000_2e178000_2eproto_;

const ::google::protobuf::EnumDescriptor* MessageType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MessageType_descriptor_;
}
bool MessageType_IsValid(int value) {
  switch(value) {
    case 177000:
    case 177001:
    case 178000:
      return true;
    default:
      return false;
  }
}


// ===================================================================

#ifndef _MSC_VER
const int StatsData::kUuidFieldNumber;
const int StatsData::kItemIdFieldNumber;
const int StatsData::kRegionIdFieldNumber;
const int StatsData::kIspIdFieldNumber;
const int StatsData::kValueFieldNumber;
const int StatsData::kTimeFieldNumber;
#endif  // !_MSC_VER

StatsData::StatsData()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void StatsData::InitAsDefaultInstance() {
}

StatsData::StatsData(const StatsData& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void StatsData::SharedCtor() {
  _cached_size_ = 0;
  uuid_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  item_id_ = 0u;
  region_id_ = 0u;
  isp_id_ = 0u;
  value_ = GOOGLE_ULONGLONG(0);
  time_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

StatsData::~StatsData() {
  SharedDtor();
}

void StatsData::SharedDtor() {
  if (uuid_ != &::google::protobuf::internal::kEmptyString) {
    delete uuid_;
  }
  if (this != default_instance_) {
  }
}

void StatsData::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* StatsData::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return StatsData_descriptor_;
}

const StatsData& StatsData::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_unetanalysis_2e177000_2e178000_2eproto();  return *default_instance_;
}

StatsData* StatsData::default_instance_ = NULL;

StatsData* StatsData::New() const {
  return new StatsData;
}

void StatsData::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_uuid()) {
      if (uuid_ != &::google::protobuf::internal::kEmptyString) {
        uuid_->clear();
      }
    }
    item_id_ = 0u;
    region_id_ = 0u;
    isp_id_ = 0u;
    value_ = GOOGLE_ULONGLONG(0);
    time_ = 0u;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool StatsData::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string uuid = 10;
      case 10: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_uuid()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->uuid().data(), this->uuid().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(160)) goto parse_item_id;
        break;
      }
      
      // required uint32 item_id = 20;
      case 20: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_item_id:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &item_id_)));
          set_has_item_id();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(240)) goto parse_region_id;
        break;
      }
      
      // required uint32 region_id = 30;
      case 30: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_region_id:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &region_id_)));
          set_has_region_id();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(320)) goto parse_isp_id;
        break;
      }
      
      // required uint32 isp_id = 40;
      case 40: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_isp_id:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &isp_id_)));
          set_has_isp_id();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(400)) goto parse_value;
        break;
      }
      
      // required uint64 value = 50;
      case 50: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_value:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &value_)));
          set_has_value();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(480)) goto parse_time;
        break;
      }
      
      // required uint32 time = 60;
      case 60: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_time:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &time_)));
          set_has_time();
        } else {
          goto handle_uninterpreted;
        }
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

void StatsData::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required string uuid = 10;
  if (has_uuid()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->uuid().data(), this->uuid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      10, this->uuid(), output);
  }
  
  // required uint32 item_id = 20;
  if (has_item_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(20, this->item_id(), output);
  }
  
  // required uint32 region_id = 30;
  if (has_region_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(30, this->region_id(), output);
  }
  
  // required uint32 isp_id = 40;
  if (has_isp_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(40, this->isp_id(), output);
  }
  
  // required uint64 value = 50;
  if (has_value()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(50, this->value(), output);
  }
  
  // required uint32 time = 60;
  if (has_time()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(60, this->time(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* StatsData::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required string uuid = 10;
  if (has_uuid()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->uuid().data(), this->uuid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        10, this->uuid(), target);
  }
  
  // required uint32 item_id = 20;
  if (has_item_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(20, this->item_id(), target);
  }
  
  // required uint32 region_id = 30;
  if (has_region_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(30, this->region_id(), target);
  }
  
  // required uint32 isp_id = 40;
  if (has_isp_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(40, this->isp_id(), target);
  }
  
  // required uint64 value = 50;
  if (has_value()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(50, this->value(), target);
  }
  
  // required uint32 time = 60;
  if (has_time()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(60, this->time(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int StatsData::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string uuid = 10;
    if (has_uuid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->uuid());
    }
    
    // required uint32 item_id = 20;
    if (has_item_id()) {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->item_id());
    }
    
    // required uint32 region_id = 30;
    if (has_region_id()) {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->region_id());
    }
    
    // required uint32 isp_id = 40;
    if (has_isp_id()) {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->isp_id());
    }
    
    // required uint64 value = 50;
    if (has_value()) {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->value());
    }
    
    // required uint32 time = 60;
    if (has_time()) {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->time());
    }
    
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

void StatsData::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const StatsData* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const StatsData*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void StatsData::MergeFrom(const StatsData& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_uuid()) {
      set_uuid(from.uuid());
    }
    if (from.has_item_id()) {
      set_item_id(from.item_id());
    }
    if (from.has_region_id()) {
      set_region_id(from.region_id());
    }
    if (from.has_isp_id()) {
      set_isp_id(from.isp_id());
    }
    if (from.has_value()) {
      set_value(from.value());
    }
    if (from.has_time()) {
      set_time(from.time());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void StatsData::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void StatsData::CopyFrom(const StatsData& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool StatsData::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000003f) != 0x0000003f) return false;
  
  return true;
}

void StatsData::Swap(StatsData* other) {
  if (other != this) {
    std::swap(uuid_, other->uuid_);
    std::swap(item_id_, other->item_id_);
    std::swap(region_id_, other->region_id_);
    std::swap(isp_id_, other->isp_id_);
    std::swap(value_, other->value_);
    std::swap(time_, other->time_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata StatsData::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = StatsData_descriptor_;
  metadata.reflection = StatsData_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int RecordStatsRequest::kStatsDataListFieldNumber;
#endif  // !_MSC_VER

RecordStatsRequest::RecordStatsRequest()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void RecordStatsRequest::InitAsDefaultInstance() {
}

RecordStatsRequest::RecordStatsRequest(const RecordStatsRequest& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void RecordStatsRequest::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

RecordStatsRequest::~RecordStatsRequest() {
  SharedDtor();
}

void RecordStatsRequest::SharedDtor() {
  if (this != default_instance_) {
  }
}

void RecordStatsRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* RecordStatsRequest::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RecordStatsRequest_descriptor_;
}

const RecordStatsRequest& RecordStatsRequest::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_unetanalysis_2e177000_2e178000_2eproto();  return *default_instance_;
}

RecordStatsRequest* RecordStatsRequest::default_instance_ = NULL;

RecordStatsRequest* RecordStatsRequest::New() const {
  return new RecordStatsRequest;
}

void RecordStatsRequest::Clear() {
  stats_data_list_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool RecordStatsRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .ucloud.unetanalysis.StatsData stats_data_list = 10;
      case 10: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_stats_data_list:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_stats_data_list()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(82)) goto parse_stats_data_list;
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

void RecordStatsRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated .ucloud.unetanalysis.StatsData stats_data_list = 10;
  for (int i = 0; i < this->stats_data_list_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      10, this->stats_data_list(i), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* RecordStatsRequest::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // repeated .ucloud.unetanalysis.StatsData stats_data_list = 10;
  for (int i = 0; i < this->stats_data_list_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        10, this->stats_data_list(i), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int RecordStatsRequest::ByteSize() const {
  int total_size = 0;
  
  // repeated .ucloud.unetanalysis.StatsData stats_data_list = 10;
  total_size += 1 * this->stats_data_list_size();
  for (int i = 0; i < this->stats_data_list_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->stats_data_list(i));
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

void RecordStatsRequest::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const RecordStatsRequest* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const RecordStatsRequest*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void RecordStatsRequest::MergeFrom(const RecordStatsRequest& from) {
  GOOGLE_CHECK_NE(&from, this);
  stats_data_list_.MergeFrom(from.stats_data_list_);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void RecordStatsRequest::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RecordStatsRequest::CopyFrom(const RecordStatsRequest& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RecordStatsRequest::IsInitialized() const {
  
  for (int i = 0; i < stats_data_list_size(); i++) {
    if (!this->stats_data_list(i).IsInitialized()) return false;
  }
  return true;
}

void RecordStatsRequest::Swap(RecordStatsRequest* other) {
  if (other != this) {
    stats_data_list_.Swap(&other->stats_data_list_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata RecordStatsRequest::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = RecordStatsRequest_descriptor_;
  metadata.reflection = RecordStatsRequest_reflection_;
  return metadata;
}

::google::protobuf::internal::ExtensionIdentifier< ::ucloud::Body,
    ::google::protobuf::internal::MessageTypeTraits< ::ucloud::unetanalysis::RecordStatsRequest >, 11, false >
  record_stats_request(kRecordStatsRequestFieldNumber, ::ucloud::unetanalysis::RecordStatsRequest::default_instance());

// @@protoc_insertion_point(namespace_scope)

}  // namespace unetanalysis
}  // namespace ucloud

// @@protoc_insertion_point(global_scope)
