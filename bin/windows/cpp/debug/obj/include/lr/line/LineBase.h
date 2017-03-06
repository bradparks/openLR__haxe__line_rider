// Generated by Haxe 3.4.0
#ifndef INCLUDED_lr_line_LineBase
#define INCLUDED_lr_line_LineBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
HX_DECLARE_CLASS2(lr,line,LineBase)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,MovieClip)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Point)

namespace lr{
namespace line{


class HXCPP_CLASS_ATTRIBUTES LineBase_obj : public  ::openfl::display::MovieClip_obj
{
	public:
		typedef  ::openfl::display::MovieClip_obj super;
		typedef LineBase_obj OBJ_;
		LineBase_obj();

	public:
		enum { _hx_ClassId = 0x7d38c33f };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="lr.line.LineBase")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"lr.line.LineBase"); }
		static hx::ObjectPtr< LineBase_obj > __new();
		static hx::ObjectPtr< LineBase_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~LineBase_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("LineBase","\x45","\xf2","\xeb","\x57"); }

		 ::openfl::geom::Point a;
		 ::openfl::geom::Point b;
		 ::openfl::geom::Point d;
		Float C;
		Float invSqrDis;
		Float dst;
		Float invDst;
		 ::openfl::geom::Point n;
		Float LIM;
		Float _lim;
		Float _lim1;
		Float _lim2;
		bool inv;
		int type;
		int ID;
		void calculateConstants();
		::Dynamic calculateConstants_dyn();

		void set_lim(int input);
		::Dynamic set_lim_dyn();

};

} // end namespace lr
} // end namespace line

#endif /* INCLUDED_lr_line_LineBase */ 
