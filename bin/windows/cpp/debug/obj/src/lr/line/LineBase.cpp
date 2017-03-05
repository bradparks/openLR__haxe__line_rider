// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_global_Common
#include <global/Common.h>
#endif
#ifndef INCLUDED_lr_line_LineBase
#include <lr/line/LineBase.h>
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
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_75467877f4d5b1ca_13_new,"lr.line.LineBase","new",0x08208a89,"lr.line.LineBase.new","lr/line/LineBase.hx",13,0x0e3518a7)
HX_LOCAL_STACK_FRAME(_hx_pos_75467877f4d5b1ca_36_calculateConstants,"lr.line.LineBase","calculateConstants",0x5b500040,"lr.line.LineBase.calculateConstants","lr/line/LineBase.hx",36,0x0e3518a7)
HX_LOCAL_STACK_FRAME(_hx_pos_75467877f4d5b1ca_47_set_lim,"lr.line.LineBase","set_lim",0x1ae82b9c,"lr.line.LineBase.set_lim","lr/line/LineBase.hx",47,0x0e3518a7)
namespace lr{
namespace line{

void LineBase_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_75467877f4d5b1ca_13_new)
HXLINE(  28)		this->type = (int)-1;
HXLINE(  27)		this->inv = false;
HXLINE(  32)		super::__construct();
            	}

Dynamic LineBase_obj::__CreateEmpty() { return new LineBase_obj; }

void *LineBase_obj::_hx_vtable = 0;

Dynamic LineBase_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< LineBase_obj > _hx_result = new LineBase_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool LineBase_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1b123bf8) {
		if (inClassId<=(int)0x17120186) {
			if (inClassId<=(int)0x0ddfced7) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0ddfced7;
			} else {
				return inClassId==(int)0x17120186;
			}
		} else {
			return inClassId==(int)0x19c29573 || inClassId==(int)0x1b123bf8;
		}
	} else {
		if (inClassId<=(int)0x3f2b00af) {
			return inClassId==(int)0x21e31f0e || inClassId==(int)0x3f2b00af;
		} else {
			return inClassId==(int)0x7d38c33f;
		}
	}
}

void LineBase_obj::calculateConstants(){
            	HX_GC_STACKFRAME(&_hx_pos_75467877f4d5b1ca_36_calculateConstants)
HXLINE(  37)		this->d = ::global::Common_obj::get_distance_point(this->a,this->b);
HXLINE(  38)		Float _hx_tmp = (this->d->y * this->a->x);
HXDLIN(  38)		this->C = (_hx_tmp - (this->d->x * this->a->y));
HXLINE(  39)		Float sqrDis = (this->d->x * this->d->x);
HXDLIN(  39)		Float sqrDis1 = (sqrDis + (this->d->y * this->d->y));
HXLINE(  40)		this->invSqrDis = ((Float)(int)1 / (Float)sqrDis1);
HXLINE(  41)		this->dst = ::Math_obj::sqrt(sqrDis1);
HXLINE(  42)		this->invDst = ((Float)(int)1 / (Float)this->dst);
HXLINE(  43)		int _hx_tmp1;
HXDLIN(  43)		if (this->inv) {
HXLINE(  43)			_hx_tmp1 = (int)1;
            		}
            		else {
HXLINE(  43)			_hx_tmp1 = (int)-1;
            		}
HXDLIN(  43)		Float _hx_tmp2 = ((this->d->y * this->invDst) * _hx_tmp1);
HXDLIN(  43)		int _hx_tmp3;
HXDLIN(  43)		if (this->inv) {
HXLINE(  43)			_hx_tmp3 = (int)-1;
            		}
            		else {
HXLINE(  43)			_hx_tmp3 = (int)1;
            		}
HXDLIN(  43)		this->n =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,_hx_tmp2,((this->d->x * this->invDst) * _hx_tmp3));
HXLINE(  44)		this->LIM = ::Math_obj::min(((Float)0.25),((Float)(int)10 / (Float)this->dst));
            	}


HX_DEFINE_DYNAMIC_FUNC0(LineBase_obj,calculateConstants,(void))

void LineBase_obj::set_lim(int input){
            	HX_STACKFRAME(&_hx_pos_75467877f4d5b1ca_47_set_lim)
HXLINE(  48)		switch((int)(input)){
            			case (int)0: {
HXLINE(  52)				this->_lim1 = (int)0;
HXLINE(  53)				this->_lim2 = (int)1;
            			}
            			break;
            			case (int)1: {
HXLINE(  57)				this->_lim1 = -(this->LIM);
HXLINE(  58)				this->_lim2 = (int)1;
            			}
            			break;
            			case (int)2: {
HXLINE(  62)				this->_lim1 = (int)0;
HXLINE(  63)				this->_lim2 = ((int)1 + this->LIM);
            			}
            			break;
            			case (int)3: {
HXLINE(  67)				this->_lim1 = -(this->LIM);
HXLINE(  68)				this->_lim2 = ((int)1 + this->LIM);
            			}
            			break;
            		}
HXLINE(  71)		this->_lim = input;
            	}


HX_DEFINE_DYNAMIC_FUNC1(LineBase_obj,set_lim,(void))


hx::ObjectPtr< LineBase_obj > LineBase_obj::__new() {
	hx::ObjectPtr< LineBase_obj > __this = new LineBase_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< LineBase_obj > LineBase_obj::__alloc(hx::Ctx *_hx_ctx) {
	LineBase_obj *__this = (LineBase_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(LineBase_obj), true, "lr.line.LineBase"));
	*(void **)__this = LineBase_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

LineBase_obj::LineBase_obj()
{
}

void LineBase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LineBase);
	HX_MARK_MEMBER_NAME(a,"a");
	HX_MARK_MEMBER_NAME(b,"b");
	HX_MARK_MEMBER_NAME(d,"d");
	HX_MARK_MEMBER_NAME(C,"C");
	HX_MARK_MEMBER_NAME(invSqrDis,"invSqrDis");
	HX_MARK_MEMBER_NAME(dst,"dst");
	HX_MARK_MEMBER_NAME(invDst,"invDst");
	HX_MARK_MEMBER_NAME(n,"n");
	HX_MARK_MEMBER_NAME(LIM,"LIM");
	HX_MARK_MEMBER_NAME(_lim,"_lim");
	HX_MARK_MEMBER_NAME(_lim1,"_lim1");
	HX_MARK_MEMBER_NAME(_lim2,"_lim2");
	HX_MARK_MEMBER_NAME(inv,"inv");
	HX_MARK_MEMBER_NAME(type,"type");
	 ::openfl::display::MovieClip_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void LineBase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(a,"a");
	HX_VISIT_MEMBER_NAME(b,"b");
	HX_VISIT_MEMBER_NAME(d,"d");
	HX_VISIT_MEMBER_NAME(C,"C");
	HX_VISIT_MEMBER_NAME(invSqrDis,"invSqrDis");
	HX_VISIT_MEMBER_NAME(dst,"dst");
	HX_VISIT_MEMBER_NAME(invDst,"invDst");
	HX_VISIT_MEMBER_NAME(n,"n");
	HX_VISIT_MEMBER_NAME(LIM,"LIM");
	HX_VISIT_MEMBER_NAME(_lim,"_lim");
	HX_VISIT_MEMBER_NAME(_lim1,"_lim1");
	HX_VISIT_MEMBER_NAME(_lim2,"_lim2");
	HX_VISIT_MEMBER_NAME(inv,"inv");
	HX_VISIT_MEMBER_NAME(type,"type");
	 ::openfl::display::MovieClip_obj::__Visit(HX_VISIT_ARG);
}

hx::Val LineBase_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"a") ) { return hx::Val( a); }
		if (HX_FIELD_EQ(inName,"b") ) { return hx::Val( b); }
		if (HX_FIELD_EQ(inName,"d") ) { return hx::Val( d); }
		if (HX_FIELD_EQ(inName,"C") ) { return hx::Val( C); }
		if (HX_FIELD_EQ(inName,"n") ) { return hx::Val( n); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"dst") ) { return hx::Val( dst); }
		if (HX_FIELD_EQ(inName,"LIM") ) { return hx::Val( LIM); }
		if (HX_FIELD_EQ(inName,"inv") ) { return hx::Val( inv); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_lim") ) { return hx::Val( _lim); }
		if (HX_FIELD_EQ(inName,"type") ) { return hx::Val( type); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_lim1") ) { return hx::Val( _lim1); }
		if (HX_FIELD_EQ(inName,"_lim2") ) { return hx::Val( _lim2); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"invDst") ) { return hx::Val( invDst); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"set_lim") ) { return hx::Val( set_lim_dyn()); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"invSqrDis") ) { return hx::Val( invSqrDis); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"calculateConstants") ) { return hx::Val( calculateConstants_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val LineBase_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"a") ) { a=inValue.Cast<  ::openfl::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast<  ::openfl::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"d") ) { d=inValue.Cast<  ::openfl::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"C") ) { C=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"n") ) { n=inValue.Cast<  ::openfl::geom::Point >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"dst") ) { dst=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LIM") ) { LIM=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inv") ) { inv=inValue.Cast< bool >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_lim") ) { _lim=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_lim1") ) { _lim1=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_lim2") ) { _lim2=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"invDst") ) { invDst=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"invSqrDis") ) { invSqrDis=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LineBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("a","\x61","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("b","\x62","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("d","\x64","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("C","\x43","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("invSqrDis","\x6b","\x9f","\x0a","\xcf"));
	outFields->push(HX_HCSTRING("dst","\x05","\x46","\x4c","\x00"));
	outFields->push(HX_HCSTRING("invDst","\x94","\xdd","\xbf","\x9f"));
	outFields->push(HX_HCSTRING("n","\x6e","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("LIM","\x30","\xeb","\x39","\x00"));
	outFields->push(HX_HCSTRING("_lim","\x51","\x94","\x1d","\x3f"));
	outFields->push(HX_HCSTRING("_lim1","\xc0","\x32","\xc4","\xfa"));
	outFields->push(HX_HCSTRING("_lim2","\xc1","\x32","\xc4","\xfa"));
	outFields->push(HX_HCSTRING("inv","\xf1","\x0c","\x50","\x00"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo LineBase_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::geom::Point*/ ,(int)offsetof(LineBase_obj,a),HX_HCSTRING("a","\x61","\x00","\x00","\x00")},
	{hx::fsObject /*::openfl::geom::Point*/ ,(int)offsetof(LineBase_obj,b),HX_HCSTRING("b","\x62","\x00","\x00","\x00")},
	{hx::fsObject /*::openfl::geom::Point*/ ,(int)offsetof(LineBase_obj,d),HX_HCSTRING("d","\x64","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(LineBase_obj,C),HX_HCSTRING("C","\x43","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(LineBase_obj,invSqrDis),HX_HCSTRING("invSqrDis","\x6b","\x9f","\x0a","\xcf")},
	{hx::fsFloat,(int)offsetof(LineBase_obj,dst),HX_HCSTRING("dst","\x05","\x46","\x4c","\x00")},
	{hx::fsFloat,(int)offsetof(LineBase_obj,invDst),HX_HCSTRING("invDst","\x94","\xdd","\xbf","\x9f")},
	{hx::fsObject /*::openfl::geom::Point*/ ,(int)offsetof(LineBase_obj,n),HX_HCSTRING("n","\x6e","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(LineBase_obj,LIM),HX_HCSTRING("LIM","\x30","\xeb","\x39","\x00")},
	{hx::fsFloat,(int)offsetof(LineBase_obj,_lim),HX_HCSTRING("_lim","\x51","\x94","\x1d","\x3f")},
	{hx::fsFloat,(int)offsetof(LineBase_obj,_lim1),HX_HCSTRING("_lim1","\xc0","\x32","\xc4","\xfa")},
	{hx::fsFloat,(int)offsetof(LineBase_obj,_lim2),HX_HCSTRING("_lim2","\xc1","\x32","\xc4","\xfa")},
	{hx::fsBool,(int)offsetof(LineBase_obj,inv),HX_HCSTRING("inv","\xf1","\x0c","\x50","\x00")},
	{hx::fsInt,(int)offsetof(LineBase_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *LineBase_obj_sStaticStorageInfo = 0;
#endif

static ::String LineBase_obj_sMemberFields[] = {
	HX_HCSTRING("a","\x61","\x00","\x00","\x00"),
	HX_HCSTRING("b","\x62","\x00","\x00","\x00"),
	HX_HCSTRING("d","\x64","\x00","\x00","\x00"),
	HX_HCSTRING("C","\x43","\x00","\x00","\x00"),
	HX_HCSTRING("invSqrDis","\x6b","\x9f","\x0a","\xcf"),
	HX_HCSTRING("dst","\x05","\x46","\x4c","\x00"),
	HX_HCSTRING("invDst","\x94","\xdd","\xbf","\x9f"),
	HX_HCSTRING("n","\x6e","\x00","\x00","\x00"),
	HX_HCSTRING("LIM","\x30","\xeb","\x39","\x00"),
	HX_HCSTRING("_lim","\x51","\x94","\x1d","\x3f"),
	HX_HCSTRING("_lim1","\xc0","\x32","\xc4","\xfa"),
	HX_HCSTRING("_lim2","\xc1","\x32","\xc4","\xfa"),
	HX_HCSTRING("inv","\xf1","\x0c","\x50","\x00"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("calculateConstants","\x49","\xe4","\x04","\xd9"),
	HX_HCSTRING("set_lim","\xf3","\xa8","\xc8","\x19"),
	::String(null()) };

static void LineBase_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LineBase_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void LineBase_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LineBase_obj::__mClass,"__mClass");
};

#endif

hx::Class LineBase_obj::__mClass;

void LineBase_obj::__register()
{
	hx::Object *dummy = new LineBase_obj;
	LineBase_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lr.line.LineBase","\x17","\x92","\x7c","\x3c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = LineBase_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(LineBase_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< LineBase_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = LineBase_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LineBase_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LineBase_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lr
} // end namespace line