// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: company.proto

#include "company.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
extern PROTOBUF_INTERNAL_EXPORT_address_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_Address_address_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_name_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Name_name_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_phone_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Phone_phone_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_url_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Url_url_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_working_5ftime_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_WorkingTime_working_5ftime_2eproto;
namespace YellowPages {
class CompanyDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Company> _instance;
} _Company_default_instance_;
}  // namespace YellowPages
static void InitDefaultsscc_info_Company_company_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::YellowPages::_Company_default_instance_;
    new (ptr) ::YellowPages::Company();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::YellowPages::Company::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<5> scc_info_Company_company_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 5, InitDefaultsscc_info_Company_company_2eproto}, {
      &scc_info_Address_address_2eproto.base,
      &scc_info_Name_name_2eproto.base,
      &scc_info_Phone_phone_2eproto.base,
      &scc_info_Url_url_2eproto.base,
      &scc_info_WorkingTime_working_5ftime_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_company_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_company_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_company_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_company_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::YellowPages::Company, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::YellowPages::Company, address_),
  PROTOBUF_FIELD_OFFSET(::YellowPages::Company, names_),
  PROTOBUF_FIELD_OFFSET(::YellowPages::Company, phones_),
  PROTOBUF_FIELD_OFFSET(::YellowPages::Company, urls_),
  PROTOBUF_FIELD_OFFSET(::YellowPages::Company, working_time_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::YellowPages::Company)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::YellowPages::_Company_default_instance_),
};

const char descriptor_table_protodef_company_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\rcompany.proto\022\013YellowPages\032\raddress.pr"
  "oto\032\nname.proto\032\013phone.proto\032\022working_ti"
  "me.proto\032\turl.proto\"\306\001\n\007Company\022%\n\007addre"
  "ss\030\001 \001(\0132\024.YellowPages.Address\022 \n\005names\030"
  "\002 \003(\0132\021.YellowPages.Name\022\"\n\006phones\030\003 \003(\013"
  "2\022.YellowPages.Phone\022\036\n\004urls\030\004 \003(\0132\020.Yel"
  "lowPages.Url\022.\n\014working_time\030\006 \001(\0132\030.Yel"
  "lowPages.WorkingTimeb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_company_2eproto_deps[5] = {
  &::descriptor_table_address_2eproto,
  &::descriptor_table_name_2eproto,
  &::descriptor_table_phone_2eproto,
  &::descriptor_table_url_2eproto,
  &::descriptor_table_working_5ftime_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_company_2eproto_sccs[1] = {
  &scc_info_Company_company_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_company_2eproto_once;
static bool descriptor_table_company_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_company_2eproto = {
  &descriptor_table_company_2eproto_initialized, descriptor_table_protodef_company_2eproto, "company.proto", 308,
  &descriptor_table_company_2eproto_once, descriptor_table_company_2eproto_sccs, descriptor_table_company_2eproto_deps, 1, 5,
  schemas, file_default_instances, TableStruct_company_2eproto::offsets,
  file_level_metadata_company_2eproto, 1, file_level_enum_descriptors_company_2eproto, file_level_service_descriptors_company_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_company_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_company_2eproto), true);
namespace YellowPages {

// ===================================================================

void Company::InitAsDefaultInstance() {
  ::YellowPages::_Company_default_instance_._instance.get_mutable()->address_ = const_cast< ::YellowPages::Address*>(
      ::YellowPages::Address::internal_default_instance());
  ::YellowPages::_Company_default_instance_._instance.get_mutable()->working_time_ = const_cast< ::YellowPages::WorkingTime*>(
      ::YellowPages::WorkingTime::internal_default_instance());
}
class Company::_Internal {
 public:
  static const ::YellowPages::Address& address(const Company* msg);
  static const ::YellowPages::WorkingTime& working_time(const Company* msg);
};

const ::YellowPages::Address&
Company::_Internal::address(const Company* msg) {
  return *msg->address_;
}
const ::YellowPages::WorkingTime&
Company::_Internal::working_time(const Company* msg) {
  return *msg->working_time_;
}
void Company::clear_address() {
  if (GetArenaNoVirtual() == nullptr && address_ != nullptr) {
    delete address_;
  }
  address_ = nullptr;
}
void Company::clear_names() {
  names_.Clear();
}
void Company::clear_phones() {
  phones_.Clear();
}
void Company::clear_urls() {
  urls_.Clear();
}
void Company::clear_working_time() {
  if (GetArenaNoVirtual() == nullptr && working_time_ != nullptr) {
    delete working_time_;
  }
  working_time_ = nullptr;
}
Company::Company()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:YellowPages.Company)
}
Company::Company(const Company& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      names_(from.names_),
      phones_(from.phones_),
      urls_(from.urls_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_address()) {
    address_ = new ::YellowPages::Address(*from.address_);
  } else {
    address_ = nullptr;
  }
  if (from.has_working_time()) {
    working_time_ = new ::YellowPages::WorkingTime(*from.working_time_);
  } else {
    working_time_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:YellowPages.Company)
}

void Company::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_Company_company_2eproto.base);
  ::memset(&address_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&working_time_) -
      reinterpret_cast<char*>(&address_)) + sizeof(working_time_));
}

Company::~Company() {
  // @@protoc_insertion_point(destructor:YellowPages.Company)
  SharedDtor();
}

void Company::SharedDtor() {
  if (this != internal_default_instance()) delete address_;
  if (this != internal_default_instance()) delete working_time_;
}

void Company::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Company& Company::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Company_company_2eproto.base);
  return *internal_default_instance();
}


void Company::Clear() {
// @@protoc_insertion_point(message_clear_start:YellowPages.Company)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  names_.Clear();
  phones_.Clear();
  urls_.Clear();
  if (GetArenaNoVirtual() == nullptr && address_ != nullptr) {
    delete address_;
  }
  address_ = nullptr;
  if (GetArenaNoVirtual() == nullptr && working_time_ != nullptr) {
    delete working_time_;
  }
  working_time_ = nullptr;
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* Company::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // .YellowPages.Address address = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ctx->ParseMessage(mutable_address(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated .YellowPages.Name names = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(add_names(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<::PROTOBUF_NAMESPACE_ID::uint8>(ptr) == 18);
        } else goto handle_unusual;
        continue;
      // repeated .YellowPages.Phone phones = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(add_phones(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<::PROTOBUF_NAMESPACE_ID::uint8>(ptr) == 26);
        } else goto handle_unusual;
        continue;
      // repeated .YellowPages.Url urls = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(add_urls(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<::PROTOBUF_NAMESPACE_ID::uint8>(ptr) == 34);
        } else goto handle_unusual;
        continue;
      // .YellowPages.WorkingTime working_time = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 50)) {
          ptr = ctx->ParseMessage(mutable_working_time(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
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
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool Company::MergePartialFromCodedStream(
    ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::PROTOBUF_NAMESPACE_ID::uint32 tag;
  // @@protoc_insertion_point(parse_start:YellowPages.Company)
  for (;;) {
    ::std::pair<::PROTOBUF_NAMESPACE_ID::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .YellowPages.Address address = 1;
      case 1: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (10 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadMessage(
               input, mutable_address()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .YellowPages.Name names = 2;
      case 2: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (18 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadMessage(
                input, add_names()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .YellowPages.Phone phones = 3;
      case 3: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (26 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadMessage(
                input, add_phones()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .YellowPages.Url urls = 4;
      case 4: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (34 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadMessage(
                input, add_urls()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .YellowPages.WorkingTime working_time = 6;
      case 6: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (50 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadMessage(
               input, mutable_working_time()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:YellowPages.Company)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:YellowPages.Company)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void Company::SerializeWithCachedSizes(
    ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:YellowPages.Company)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .YellowPages.Address address = 1;
  if (this->has_address()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, _Internal::address(this), output);
  }

  // repeated .YellowPages.Name names = 2;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->names_size()); i < n; i++) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteMessageMaybeToArray(
      2,
      this->names(static_cast<int>(i)),
      output);
  }

  // repeated .YellowPages.Phone phones = 3;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->phones_size()); i < n; i++) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteMessageMaybeToArray(
      3,
      this->phones(static_cast<int>(i)),
      output);
  }

  // repeated .YellowPages.Url urls = 4;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->urls_size()); i < n; i++) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteMessageMaybeToArray(
      4,
      this->urls(static_cast<int>(i)),
      output);
  }

  // .YellowPages.WorkingTime working_time = 6;
  if (this->has_working_time()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteMessageMaybeToArray(
      6, _Internal::working_time(this), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:YellowPages.Company)
}

::PROTOBUF_NAMESPACE_ID::uint8* Company::InternalSerializeWithCachedSizesToArray(
    ::PROTOBUF_NAMESPACE_ID::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:YellowPages.Company)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .YellowPages.Address address = 1;
  if (this->has_address()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, _Internal::address(this), target);
  }

  // repeated .YellowPages.Name names = 2;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->names_size()); i < n; i++) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessageToArray(
        2, this->names(static_cast<int>(i)), target);
  }

  // repeated .YellowPages.Phone phones = 3;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->phones_size()); i < n; i++) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessageToArray(
        3, this->phones(static_cast<int>(i)), target);
  }

  // repeated .YellowPages.Url urls = 4;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->urls_size()); i < n; i++) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessageToArray(
        4, this->urls(static_cast<int>(i)), target);
  }

  // .YellowPages.WorkingTime working_time = 6;
  if (this->has_working_time()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessageToArray(
        6, _Internal::working_time(this), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:YellowPages.Company)
  return target;
}

size_t Company::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:YellowPages.Company)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .YellowPages.Name names = 2;
  {
    unsigned int count = static_cast<unsigned int>(this->names_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          this->names(static_cast<int>(i)));
    }
  }

  // repeated .YellowPages.Phone phones = 3;
  {
    unsigned int count = static_cast<unsigned int>(this->phones_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          this->phones(static_cast<int>(i)));
    }
  }

  // repeated .YellowPages.Url urls = 4;
  {
    unsigned int count = static_cast<unsigned int>(this->urls_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          this->urls(static_cast<int>(i)));
    }
  }

  // .YellowPages.Address address = 1;
  if (this->has_address()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *address_);
  }

  // .YellowPages.WorkingTime working_time = 6;
  if (this->has_working_time()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *working_time_);
  }

  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Company::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:YellowPages.Company)
  GOOGLE_DCHECK_NE(&from, this);
  const Company* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Company>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:YellowPages.Company)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:YellowPages.Company)
    MergeFrom(*source);
  }
}

void Company::MergeFrom(const Company& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:YellowPages.Company)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  names_.MergeFrom(from.names_);
  phones_.MergeFrom(from.phones_);
  urls_.MergeFrom(from.urls_);
  if (from.has_address()) {
    mutable_address()->::YellowPages::Address::MergeFrom(from.address());
  }
  if (from.has_working_time()) {
    mutable_working_time()->::YellowPages::WorkingTime::MergeFrom(from.working_time());
  }
}

void Company::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:YellowPages.Company)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Company::CopyFrom(const Company& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:YellowPages.Company)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Company::IsInitialized() const {
  return true;
}

void Company::InternalSwap(Company* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  CastToBase(&names_)->InternalSwap(CastToBase(&other->names_));
  CastToBase(&phones_)->InternalSwap(CastToBase(&other->phones_));
  CastToBase(&urls_)->InternalSwap(CastToBase(&other->urls_));
  swap(address_, other->address_);
  swap(working_time_, other->working_time_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Company::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace YellowPages
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::YellowPages::Company* Arena::CreateMaybeMessage< ::YellowPages::Company >(Arena* arena) {
  return Arena::CreateInternal< ::YellowPages::Company >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
