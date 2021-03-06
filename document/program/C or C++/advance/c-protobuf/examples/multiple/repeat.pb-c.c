/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: repeat.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "repeat.pb-c.h"
void   umessage__init
                     (UMessage         *message)
{
  static UMessage init_value = UMESSAGE__INIT;
  *message = init_value;
}
size_t umessage__get_packed_size
                     (const UMessage *message)
{
  assert(message->base.descriptor == &umessage__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t umessage__pack
                     (const UMessage *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &umessage__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t umessage__pack_to_buffer
                     (const UMessage *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &umessage__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
UMessage *
       umessage__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (UMessage *)
     protobuf_c_message_unpack (&umessage__descriptor,
                                allocator, len, data);
}
void   umessage__free_unpacked
                     (UMessage *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &umessage__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   head__init
                     (Head         *message)
{
  static Head init_value = HEAD__INIT;
  *message = init_value;
}
size_t head__get_packed_size
                     (const Head *message)
{
  assert(message->base.descriptor == &head__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t head__pack
                     (const Head *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &head__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t head__pack_to_buffer
                     (const Head *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &head__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Head *
       head__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Head *)
     protobuf_c_message_unpack (&head__descriptor,
                                allocator, len, data);
}
void   head__free_unpacked
                     (Head *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &head__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   stats_data__init
                     (StatsData         *message)
{
  static StatsData init_value = STATS_DATA__INIT;
  *message = init_value;
}
size_t stats_data__get_packed_size
                     (const StatsData *message)
{
  assert(message->base.descriptor == &stats_data__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t stats_data__pack
                     (const StatsData *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &stats_data__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t stats_data__pack_to_buffer
                     (const StatsData *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &stats_data__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
StatsData *
       stats_data__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (StatsData *)
     protobuf_c_message_unpack (&stats_data__descriptor,
                                allocator, len, data);
}
void   stats_data__free_unpacked
                     (StatsData *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &stats_data__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   record_stats_request__init
                     (RecordStatsRequest         *message)
{
  static RecordStatsRequest init_value = RECORD_STATS_REQUEST__INIT;
  *message = init_value;
}
size_t record_stats_request__get_packed_size
                     (const RecordStatsRequest *message)
{
  assert(message->base.descriptor == &record_stats_request__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t record_stats_request__pack
                     (const RecordStatsRequest *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &record_stats_request__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t record_stats_request__pack_to_buffer
                     (const RecordStatsRequest *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &record_stats_request__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
RecordStatsRequest *
       record_stats_request__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (RecordStatsRequest *)
     protobuf_c_message_unpack (&record_stats_request__descriptor,
                                allocator, len, data);
}
void   record_stats_request__free_unpacked
                     (RecordStatsRequest *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &record_stats_request__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor umessage__field_descriptors[2] =
{
  {
    "head",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(UMessage, head),
    &head__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "body",
    2,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(UMessage, body),
    &record_stats_request__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned umessage__field_indices_by_name[] = {
  1,   /* field[1] = body */
  0,   /* field[0] = head */
};
static const ProtobufCIntRange umessage__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor umessage__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "UMessage",
  "UMessage",
  "UMessage",
  "",
  sizeof(UMessage),
  2,
  umessage__field_descriptors,
  umessage__field_indices_by_name,
  1,  umessage__number_ranges,
  (ProtobufCMessageInit) umessage__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor head__field_descriptors[1] =
{
  {
    "version",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(Head, version),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned head__field_indices_by_name[] = {
  0,   /* field[0] = version */
};
static const ProtobufCIntRange head__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor head__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "Head",
  "Head",
  "Head",
  "",
  sizeof(Head),
  1,
  head__field_descriptors,
  head__field_indices_by_name,
  1,  head__number_ranges,
  (ProtobufCMessageInit) head__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor stats_data__field_descriptors[1] =
{
  {
    "num",
    16,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(StatsData, num),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned stats_data__field_indices_by_name[] = {
  0,   /* field[0] = num */
};
static const ProtobufCIntRange stats_data__number_ranges[1 + 1] =
{
  { 16, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor stats_data__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "StatsData",
  "StatsData",
  "StatsData",
  "",
  sizeof(StatsData),
  1,
  stats_data__field_descriptors,
  stats_data__field_indices_by_name,
  1,  stats_data__number_ranges,
  (ProtobufCMessageInit) stats_data__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor record_stats_request__field_descriptors[1] =
{
  {
    "stats_data_list",
    10,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(RecordStatsRequest, n_stats_data_list),
    offsetof(RecordStatsRequest, stats_data_list),
    &stats_data__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned record_stats_request__field_indices_by_name[] = {
  0,   /* field[0] = stats_data_list */
};
static const ProtobufCIntRange record_stats_request__number_ranges[1 + 1] =
{
  { 10, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor record_stats_request__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "RecordStatsRequest",
  "RecordStatsRequest",
  "RecordStatsRequest",
  "",
  sizeof(RecordStatsRequest),
  1,
  record_stats_request__field_descriptors,
  record_stats_request__field_indices_by_name,
  1,  record_stats_request__number_ranges,
  (ProtobufCMessageInit) record_stats_request__init,
  NULL,NULL,NULL    /* reserved[123] */
};
