// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_global_Common
#include <global/Common.h>
#endif
#ifndef INCLUDED_lr_Track
#include <lr/Track.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_MouseEvent
#include <openfl/events/MouseEvent.h>
#endif
#ifndef INCLUDED_ui_tool_icon_IconBase
#include <ui/tool/icon/IconBase.h>
#endif
#ifndef INCLUDED_ui_tool_icon_IconPlay
#include <ui/tool/icon/IconPlay.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7b9f1804fe4aba46_20_new,"ui.tool.icon.IconPlay","new",0x3d600bf8,"ui.tool.icon.IconPlay.new","ui/tool/icon/IconPlay.hx",20,0xfdcd2477)
HX_LOCAL_STACK_FRAME(_hx_pos_7b9f1804fe4aba46_26_down,"ui.tool.icon.IconPlay","down",0x7015e1ca,"ui.tool.icon.IconPlay.down","ui/tool/icon/IconPlay.hx",26,0xfdcd2477)
namespace ui{
namespace tool{
namespace icon{

void IconPlay_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_7b9f1804fe4aba46_20_new)
HXLINE(  21)		super::__construct();
HXLINE(  22)		this->icon =  ::openfl::display::Bitmap_obj::__alloc( HX_CTX ,::openfl::Assets_obj::getBitmapData(HX_("icon/play.png",c5,8d,b4,67),null()),null(),null());
HXLINE(  23)		this->addChild(this->icon);
            	}

Dynamic IconPlay_obj::__CreateEmpty() { return new IconPlay_obj; }

void *IconPlay_obj::_hx_vtable = 0;

Dynamic IconPlay_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< IconPlay_obj > _hx_result = new IconPlay_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool IconPlay_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x185adfd2) {
		if (inClassId<=(int)0x0f1199ef) {
			if (inClassId<=(int)0x0ddfced7) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0ddfced7;
			} else {
				return inClassId==(int)0x0f1199ef;
			}
		} else {
			return inClassId==(int)0x17120186 || inClassId==(int)0x185adfd2;
		}
	} else {
		if (inClassId<=(int)0x21e31f0e) {
			if (inClassId<=(int)0x1b123bf8) {
				return inClassId==(int)0x19c29573 || inClassId==(int)0x1b123bf8;
			} else {
				return inClassId==(int)0x21e31f0e;
			}
		} else {
			return inClassId==(int)0x3f2b00af;
		}
	}
}

void IconPlay_obj::down( ::openfl::events::MouseEvent e){
            	HX_STACKFRAME(&_hx_pos_7b9f1804fe4aba46_26_down)
HXLINE(  26)		::global::Common_obj::gTrack->update_render();
            	}



hx::ObjectPtr< IconPlay_obj > IconPlay_obj::__new() {
	hx::ObjectPtr< IconPlay_obj > __this = new IconPlay_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< IconPlay_obj > IconPlay_obj::__alloc(hx::Ctx *_hx_ctx) {
	IconPlay_obj *__this = (IconPlay_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(IconPlay_obj), true, "ui.tool.icon.IconPlay"));
	*(void **)__this = IconPlay_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

IconPlay_obj::IconPlay_obj()
{
}

hx::Val IconPlay_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"down") ) { return hx::Val( down_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *IconPlay_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *IconPlay_obj_sStaticStorageInfo = 0;
#endif

static ::String IconPlay_obj_sMemberFields[] = {
	HX_HCSTRING("down","\x62","\xf8","\x6d","\x42"),
	::String(null()) };

static void IconPlay_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IconPlay_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void IconPlay_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IconPlay_obj::__mClass,"__mClass");
};

#endif

hx::Class IconPlay_obj::__mClass;

void IconPlay_obj::__register()
{
	hx::Object *dummy = new IconPlay_obj;
	IconPlay_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("ui.tool.icon.IconPlay","\x06","\xf0","\x04","\xad");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = IconPlay_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(IconPlay_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< IconPlay_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = IconPlay_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = IconPlay_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = IconPlay_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace ui
} // end namespace tool
} // end namespace icon