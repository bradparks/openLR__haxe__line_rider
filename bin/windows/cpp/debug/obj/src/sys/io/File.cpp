// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

namespace sys{
namespace io{

void File_obj::__construct() { }

Dynamic File_obj::__CreateEmpty() { return new File_obj; }

void *File_obj::_hx_vtable = 0;

Dynamic File_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< File_obj > _hx_result = new File_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool File_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x01dc4e07;
}


File_obj::File_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *File_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *File_obj_sStaticStorageInfo = 0;
#endif

static void File_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(File_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void File_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(File_obj::__mClass,"__mClass");
};

#endif

hx::Class File_obj::__mClass;

void File_obj::__register()
{
	hx::Object *dummy = new File_obj;
	File_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sys.io.File","\xc3","\xef","\x8d","\xeb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = File_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< File_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = File_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = File_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = File_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace sys
} // end namespace io