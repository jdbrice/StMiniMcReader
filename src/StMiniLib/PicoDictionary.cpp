// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME srcdIStMiniLibdIPicoDictionary

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;

// Header files passed as explicit arguments
#include "StContamPair.h"
#include "StMiniMcEvent.h"
#include "StMiniMcPair.h"
#include "StTinyMcTrack.h"
#include "StTinyRcTrack.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_StMiniMcEvent(void *p = 0);
   static void *newArray_StMiniMcEvent(Long_t size, void *p);
   static void delete_StMiniMcEvent(void *p);
   static void deleteArray_StMiniMcEvent(void *p);
   static void destruct_StMiniMcEvent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::StMiniMcEvent*)
   {
      ::StMiniMcEvent *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::StMiniMcEvent >(0);
      static ::ROOT::TGenericClassInfo 
         instance("StMiniMcEvent", ::StMiniMcEvent::Class_Version(), "StMiniMcEvent.h", 26,
                  typeid(::StMiniMcEvent), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::StMiniMcEvent::Dictionary, isa_proxy, 4,
                  sizeof(::StMiniMcEvent) );
      instance.SetNew(&new_StMiniMcEvent);
      instance.SetNewArray(&newArray_StMiniMcEvent);
      instance.SetDelete(&delete_StMiniMcEvent);
      instance.SetDeleteArray(&deleteArray_StMiniMcEvent);
      instance.SetDestructor(&destruct_StMiniMcEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::StMiniMcEvent*)
   {
      return GenerateInitInstanceLocal((::StMiniMcEvent*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::StMiniMcEvent*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_StContamPair(void *p = 0);
   static void *newArray_StContamPair(Long_t size, void *p);
   static void delete_StContamPair(void *p);
   static void deleteArray_StContamPair(void *p);
   static void destruct_StContamPair(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::StContamPair*)
   {
      ::StContamPair *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::StContamPair >(0);
      static ::ROOT::TGenericClassInfo 
         instance("StContamPair", ::StContamPair::Class_Version(), "StContamPair.h", 18,
                  typeid(::StContamPair), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::StContamPair::Dictionary, isa_proxy, 4,
                  sizeof(::StContamPair) );
      instance.SetNew(&new_StContamPair);
      instance.SetNewArray(&newArray_StContamPair);
      instance.SetDelete(&delete_StContamPair);
      instance.SetDeleteArray(&deleteArray_StContamPair);
      instance.SetDestructor(&destruct_StContamPair);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::StContamPair*)
   {
      return GenerateInitInstanceLocal((::StContamPair*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::StContamPair*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_StMiniMcPair(void *p = 0);
   static void *newArray_StMiniMcPair(Long_t size, void *p);
   static void delete_StMiniMcPair(void *p);
   static void deleteArray_StMiniMcPair(void *p);
   static void destruct_StMiniMcPair(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::StMiniMcPair*)
   {
      ::StMiniMcPair *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::StMiniMcPair >(0);
      static ::ROOT::TGenericClassInfo 
         instance("StMiniMcPair", ::StMiniMcPair::Class_Version(), "StMiniMcPair.h", 17,
                  typeid(::StMiniMcPair), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::StMiniMcPair::Dictionary, isa_proxy, 4,
                  sizeof(::StMiniMcPair) );
      instance.SetNew(&new_StMiniMcPair);
      instance.SetNewArray(&newArray_StMiniMcPair);
      instance.SetDelete(&delete_StMiniMcPair);
      instance.SetDeleteArray(&deleteArray_StMiniMcPair);
      instance.SetDestructor(&destruct_StMiniMcPair);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::StMiniMcPair*)
   {
      return GenerateInitInstanceLocal((::StMiniMcPair*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::StMiniMcPair*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_StTinyMcTrack(void *p = 0);
   static void *newArray_StTinyMcTrack(Long_t size, void *p);
   static void delete_StTinyMcTrack(void *p);
   static void deleteArray_StTinyMcTrack(void *p);
   static void destruct_StTinyMcTrack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::StTinyMcTrack*)
   {
      ::StTinyMcTrack *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::StTinyMcTrack >(0);
      static ::ROOT::TGenericClassInfo 
         instance("StTinyMcTrack", ::StTinyMcTrack::Class_Version(), "StTinyMcTrack.h", 19,
                  typeid(::StTinyMcTrack), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::StTinyMcTrack::Dictionary, isa_proxy, 4,
                  sizeof(::StTinyMcTrack) );
      instance.SetNew(&new_StTinyMcTrack);
      instance.SetNewArray(&newArray_StTinyMcTrack);
      instance.SetDelete(&delete_StTinyMcTrack);
      instance.SetDeleteArray(&deleteArray_StTinyMcTrack);
      instance.SetDestructor(&destruct_StTinyMcTrack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::StTinyMcTrack*)
   {
      return GenerateInitInstanceLocal((::StTinyMcTrack*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::StTinyMcTrack*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_StTinyRcTrack(void *p = 0);
   static void *newArray_StTinyRcTrack(Long_t size, void *p);
   static void delete_StTinyRcTrack(void *p);
   static void deleteArray_StTinyRcTrack(void *p);
   static void destruct_StTinyRcTrack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::StTinyRcTrack*)
   {
      ::StTinyRcTrack *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::StTinyRcTrack >(0);
      static ::ROOT::TGenericClassInfo 
         instance("StTinyRcTrack", ::StTinyRcTrack::Class_Version(), "StTinyRcTrack.h", 22,
                  typeid(::StTinyRcTrack), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::StTinyRcTrack::Dictionary, isa_proxy, 4,
                  sizeof(::StTinyRcTrack) );
      instance.SetNew(&new_StTinyRcTrack);
      instance.SetNewArray(&newArray_StTinyRcTrack);
      instance.SetDelete(&delete_StTinyRcTrack);
      instance.SetDeleteArray(&deleteArray_StTinyRcTrack);
      instance.SetDestructor(&destruct_StTinyRcTrack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::StTinyRcTrack*)
   {
      return GenerateInitInstanceLocal((::StTinyRcTrack*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::StTinyRcTrack*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr StMiniMcEvent::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *StMiniMcEvent::Class_Name()
{
   return "StMiniMcEvent";
}

//______________________________________________________________________________
const char *StMiniMcEvent::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::StMiniMcEvent*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int StMiniMcEvent::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::StMiniMcEvent*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *StMiniMcEvent::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::StMiniMcEvent*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *StMiniMcEvent::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::StMiniMcEvent*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr StContamPair::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *StContamPair::Class_Name()
{
   return "StContamPair";
}

//______________________________________________________________________________
const char *StContamPair::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::StContamPair*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int StContamPair::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::StContamPair*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *StContamPair::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::StContamPair*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *StContamPair::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::StContamPair*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr StMiniMcPair::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *StMiniMcPair::Class_Name()
{
   return "StMiniMcPair";
}

//______________________________________________________________________________
const char *StMiniMcPair::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::StMiniMcPair*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int StMiniMcPair::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::StMiniMcPair*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *StMiniMcPair::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::StMiniMcPair*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *StMiniMcPair::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::StMiniMcPair*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr StTinyMcTrack::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *StTinyMcTrack::Class_Name()
{
   return "StTinyMcTrack";
}

//______________________________________________________________________________
const char *StTinyMcTrack::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::StTinyMcTrack*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int StTinyMcTrack::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::StTinyMcTrack*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *StTinyMcTrack::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::StTinyMcTrack*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *StTinyMcTrack::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::StTinyMcTrack*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr StTinyRcTrack::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *StTinyRcTrack::Class_Name()
{
   return "StTinyRcTrack";
}

//______________________________________________________________________________
const char *StTinyRcTrack::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::StTinyRcTrack*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int StTinyRcTrack::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::StTinyRcTrack*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *StTinyRcTrack::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::StTinyRcTrack*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *StTinyRcTrack::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::StTinyRcTrack*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void StMiniMcEvent::Streamer(TBuffer &R__b)
{
   // Stream an object of class StMiniMcEvent.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(StMiniMcEvent::Class(),this);
   } else {
      R__b.WriteClassBuffer(StMiniMcEvent::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_StMiniMcEvent(void *p) {
      return  p ? new(p) ::StMiniMcEvent : new ::StMiniMcEvent;
   }
   static void *newArray_StMiniMcEvent(Long_t nElements, void *p) {
      return p ? new(p) ::StMiniMcEvent[nElements] : new ::StMiniMcEvent[nElements];
   }
   // Wrapper around operator delete
   static void delete_StMiniMcEvent(void *p) {
      delete ((::StMiniMcEvent*)p);
   }
   static void deleteArray_StMiniMcEvent(void *p) {
      delete [] ((::StMiniMcEvent*)p);
   }
   static void destruct_StMiniMcEvent(void *p) {
      typedef ::StMiniMcEvent current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::StMiniMcEvent

//______________________________________________________________________________
void StContamPair::Streamer(TBuffer &R__b)
{
   // Stream an object of class StContamPair.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(StContamPair::Class(),this);
   } else {
      R__b.WriteClassBuffer(StContamPair::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_StContamPair(void *p) {
      return  p ? new(p) ::StContamPair : new ::StContamPair;
   }
   static void *newArray_StContamPair(Long_t nElements, void *p) {
      return p ? new(p) ::StContamPair[nElements] : new ::StContamPair[nElements];
   }
   // Wrapper around operator delete
   static void delete_StContamPair(void *p) {
      delete ((::StContamPair*)p);
   }
   static void deleteArray_StContamPair(void *p) {
      delete [] ((::StContamPair*)p);
   }
   static void destruct_StContamPair(void *p) {
      typedef ::StContamPair current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::StContamPair

//______________________________________________________________________________
void StMiniMcPair::Streamer(TBuffer &R__b)
{
   // Stream an object of class StMiniMcPair.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(StMiniMcPair::Class(),this);
   } else {
      R__b.WriteClassBuffer(StMiniMcPair::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_StMiniMcPair(void *p) {
      return  p ? new(p) ::StMiniMcPair : new ::StMiniMcPair;
   }
   static void *newArray_StMiniMcPair(Long_t nElements, void *p) {
      return p ? new(p) ::StMiniMcPair[nElements] : new ::StMiniMcPair[nElements];
   }
   // Wrapper around operator delete
   static void delete_StMiniMcPair(void *p) {
      delete ((::StMiniMcPair*)p);
   }
   static void deleteArray_StMiniMcPair(void *p) {
      delete [] ((::StMiniMcPair*)p);
   }
   static void destruct_StMiniMcPair(void *p) {
      typedef ::StMiniMcPair current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::StMiniMcPair

//______________________________________________________________________________
void StTinyMcTrack::Streamer(TBuffer &R__b)
{
   // Stream an object of class StTinyMcTrack.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(StTinyMcTrack::Class(),this);
   } else {
      R__b.WriteClassBuffer(StTinyMcTrack::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_StTinyMcTrack(void *p) {
      return  p ? new(p) ::StTinyMcTrack : new ::StTinyMcTrack;
   }
   static void *newArray_StTinyMcTrack(Long_t nElements, void *p) {
      return p ? new(p) ::StTinyMcTrack[nElements] : new ::StTinyMcTrack[nElements];
   }
   // Wrapper around operator delete
   static void delete_StTinyMcTrack(void *p) {
      delete ((::StTinyMcTrack*)p);
   }
   static void deleteArray_StTinyMcTrack(void *p) {
      delete [] ((::StTinyMcTrack*)p);
   }
   static void destruct_StTinyMcTrack(void *p) {
      typedef ::StTinyMcTrack current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::StTinyMcTrack

//______________________________________________________________________________
void StTinyRcTrack::Streamer(TBuffer &R__b)
{
   // Stream an object of class StTinyRcTrack.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(StTinyRcTrack::Class(),this);
   } else {
      R__b.WriteClassBuffer(StTinyRcTrack::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_StTinyRcTrack(void *p) {
      return  p ? new(p) ::StTinyRcTrack : new ::StTinyRcTrack;
   }
   static void *newArray_StTinyRcTrack(Long_t nElements, void *p) {
      return p ? new(p) ::StTinyRcTrack[nElements] : new ::StTinyRcTrack[nElements];
   }
   // Wrapper around operator delete
   static void delete_StTinyRcTrack(void *p) {
      delete ((::StTinyRcTrack*)p);
   }
   static void deleteArray_StTinyRcTrack(void *p) {
      delete [] ((::StTinyRcTrack*)p);
   }
   static void destruct_StTinyRcTrack(void *p) {
      typedef ::StTinyRcTrack current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::StTinyRcTrack

namespace {
  void TriggerDictionaryInitialization_PicoDictionary_Impl() {
    static const char* headers[] = {
"StContamPair.h",
"StMiniMcEvent.h",
"StMiniMcPair.h",
"StTinyMcTrack.h",
"StTinyRcTrack.h",
0
    };
    static const char* includePaths[] = {
"/Users/danielbrandenburg/bnl/local/work/StMiniMcReader/include/StMiniLib",
"/Users/danielbrandenburg/bnl/local/work/StMiniMcReader/include/StMiniLib_Linkdef.h",
"/Users/danielbrandenburg/bnl/local/work/StMiniMcReader/include/StMiniMcAnalyzer.h",
"/Users/danielbrandenburg/bnl/local/work/StMiniMcReader/include/StMiniMcReader",
"/Users/danielbrandenburg/bnl/local/work/StMiniMcReader/include/",
"/Users/danielbrandenburg/bnl/vendor/root-6.06.04/include",
"/Users/danielbrandenburg/bnl/local/work/StMiniMcReader/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "PicoDictionary dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$StMiniMcEvent.h")))  StMiniMcEvent;
class __attribute__((annotate("$clingAutoload$StContamPair.h")))  StContamPair;
class __attribute__((annotate("$clingAutoload$StContamPair.h")))  StMiniMcPair;
class __attribute__((annotate("$clingAutoload$StContamPair.h")))  StTinyMcTrack;
class __attribute__((annotate("$clingAutoload$StContamPair.h")))  StTinyRcTrack;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "PicoDictionary dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "StContamPair.h"
#include "StMiniMcEvent.h"
#include "StMiniMcPair.h"
#include "StTinyMcTrack.h"
#include "StTinyRcTrack.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"StContamPair", payloadCode, "@",
"StMiniMcEvent", payloadCode, "@",
"StMiniMcPair", payloadCode, "@",
"StTinyMcTrack", payloadCode, "@",
"StTinyRcTrack", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("PicoDictionary",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_PicoDictionary_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_PicoDictionary_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_PicoDictionary() {
  TriggerDictionaryInitialization_PicoDictionary_Impl();
}
