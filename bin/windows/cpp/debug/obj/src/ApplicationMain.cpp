// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_ApplicationMain
#include <ApplicationMain.h>
#endif
#ifndef INCLUDED_DefaultAssetLibrary
#include <DefaultAssetLibrary.h>
#endif
#ifndef INCLUDED_DocumentClass
#include <DocumentClass.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_lime_app_Application
#include <lime/app/Application.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app_Module
#include <lime/app/Module.h>
#endif
#ifndef INCLUDED_lime_app_Preloader
#include <lime/app/Preloader.h>
#endif
#ifndef INCLUDED_lime_app__Event_Void_Void
#include <lime/app/_Event_Void_Void.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
#ifndef INCLUDED_lime_utils_AssetLibrary
#include <lime/utils/AssetLibrary.h>
#endif
#ifndef INCLUDED_lime_utils_Assets
#include <lime/utils/Assets.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_Application
#include <openfl/display/Application.h>
#endif
#ifndef INCLUDED_openfl_display_DefaultPreloader
#include <openfl/display/DefaultPreloader.h>
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
#ifndef INCLUDED_openfl_display_Preloader
#include <openfl/display/Preloader.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_events_ActivityEvent
#include <openfl/events/ActivityEvent.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_FullScreenEvent
#include <openfl/events/FullScreenEvent.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_6fcf922b66429816_27_main,"ApplicationMain","main",0x93d2f73e,"ApplicationMain.main","ApplicationMain.hx",27,0x0780ded5)
HX_LOCAL_STACK_FRAME(_hx_pos_6fcf922b66429816_86_create,"ApplicationMain","create",0x2f7db141,"ApplicationMain.create","ApplicationMain.hx",86,0x0780ded5)
HX_LOCAL_STACK_FRAME(_hx_pos_6fcf922b66429816_189_start,"ApplicationMain","start",0x45b5d9bd,"ApplicationMain.start","ApplicationMain.hx",189,0x0780ded5)

void ApplicationMain_obj::__construct() { }

Dynamic ApplicationMain_obj::__CreateEmpty() { return new ApplicationMain_obj; }

void *ApplicationMain_obj::_hx_vtable = 0;

Dynamic ApplicationMain_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ApplicationMain_obj > _hx_result = new ApplicationMain_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ApplicationMain_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4a39ff89;
}

 ::Dynamic ApplicationMain_obj::config;

 ::openfl::display::Preloader ApplicationMain_obj::preloader;

void ApplicationMain_obj::main(){
            	HX_STACKFRAME(&_hx_pos_6fcf922b66429816_27_main)
HXLINE(  29)		::ApplicationMain_obj::config =  ::Dynamic(hx::Anon_obj::Create(9)
            			->setFixed(0,HX_("company",3d,15,69,83),HX_("Kaelan Evans",1f,58,46,51))
            			->setFixed(1,HX_("build",2e,db,ea,ba),HX_("57",62,2e,00,00))
            			->setFixed(2,HX_("windows",83,de,74,e8),::Array_obj< ::Dynamic>::__new(1)->init(0, ::Dynamic(hx::Anon_obj::Create(20)
            				->setFixed(0,HX_("resizable",6b,37,50,a9),true)
            				->setFixed(1,HX_("allowHighDPI",92,07,a2,b4),false)
            				->setFixed(2,HX_("display",42,2a,4a,bb),(int)0)
            				->setFixed(3,HX_("width",06,b6,62,ca),(int)1280)
            				->setFixed(4,HX_("fullscreen",3b,3a,b4,f9),false)
            				->setFixed(5,HX_("maximized",18,0e,e1,fe),null())
            				->setFixed(6,HX_("x",78,00,00,00),null())
            				->setFixed(7,HX_("y",79,00,00,00),null())
            				->setFixed(8,HX_("height",e7,07,4c,02),(int)720)
            				->setFixed(9,HX_("title",98,15,3b,10),HX_("openLR Alpha 0.0.2",84,db,ff,e5))
            				->setFixed(10,HX_("borderless",45,46,71,17),false)
            				->setFixed(11,HX_("background",ee,93,1d,26),(int)13421772)
            				->setFixed(12,HX_("minimized",86,fb,9d,28),null())
            				->setFixed(13,HX_("stencilBuffer",1c,94,39,31),true)
            				->setFixed(14,HX_("vsync",d1,2d,a8,3d),false)
            				->setFixed(15,HX_("antialiasing",f4,16,b3,48),(int)0)
            				->setFixed(16,HX_("hidden",6a,ff,95,4c),null())
            				->setFixed(17,HX_("parameters",aa,be,7e,51),HX_("{}",a2,6b,00,00))
            				->setFixed(18,HX_("depthBuffer",63,46,9e,52),false)
            				->setFixed(19,HX_("hardware",a8,e2,d3,75),true))))
            			->setFixed(3,HX_("orientation",d0,ee,fe,fd),HX_("landscape",3b,78,ad,fc))
            			->setFixed(4,HX_("fps",e9,c7,4d,00),(int)60)
            			->setFixed(5,HX_("packageName",f1,04,ad,04),HX_("openLR",d0,4c,94,21))
            			->setFixed(6,HX_("file",7c,ce,bb,43),HX_("openLR",d0,4c,94,21))
            			->setFixed(7,HX_("name",4b,72,ff,48),HX_("openLR Alpha 0.0.2",84,db,ff,e5))
            			->setFixed(8,HX_("version",18,e7,f1,7c),HX_("0.0.1",35,3d,c8,c1)));
HXLINE(  80)		::ApplicationMain_obj::create();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ApplicationMain_obj,main,(void))

void ApplicationMain_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_6fcf922b66429816_86_create)
HXLINE(  88)		 ::openfl::display::Application app =  ::openfl::display::Application_obj::__alloc( HX_CTX );
HXLINE(  89)		app->create(::ApplicationMain_obj::config);
HXLINE(  91)		 ::DefaultAssetLibrary library =  ::DefaultAssetLibrary_obj::__alloc( HX_CTX );
HXLINE(  92)		::lime::utils::Assets_obj::registerLibrary(HX_("default",c1,d8,c3,9b),library);
HXLINE(  94)		::ApplicationMain_obj::preloader =  ::openfl::display::Preloader_obj::__alloc( HX_CTX , ::openfl::display::DefaultPreloader_obj::__alloc( HX_CTX ));
HXLINE(  95)		app->setPreloader(::ApplicationMain_obj::preloader);
HXLINE(  96)		::ApplicationMain_obj::preloader->create(::ApplicationMain_obj::config);
HXLINE(  97)		::ApplicationMain_obj::preloader->onComplete->add(::ApplicationMain_obj::start_dyn(),null(),null());
HXLINE(  98)		::ApplicationMain_obj::preloader->addLibrary(library);
HXLINE( 100)		::ApplicationMain_obj::preloader->load();
HXLINE( 102)		int result = app->exec();
HXLINE( 105)		::lime::_hx_system::System_obj::exit(result);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ApplicationMain_obj,create,(void))

void ApplicationMain_obj::start(){
            	HX_GC_STACKFRAME(&_hx_pos_6fcf922b66429816_189_start)
HXLINE( 197)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 249)			 ::DocumentClass_obj::__alloc( HX_CTX );
            		}
            		catch( ::Dynamic _hx_e){
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic e = _hx_e;
HXLINE( 203)				::openfl::Lib_obj::current->stage->_hx___handleError(e);
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 207)		 ::openfl::display::Stage _hx_tmp = ::openfl::Lib_obj::current->stage;
HXDLIN( 207)		_hx_tmp->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("resize",f4,59,7b,08),false,false));
HXLINE( 209)		if (::openfl::Lib_obj::current->stage->window->_hx___fullscreen) {
HXLINE( 211)			 ::openfl::display::Stage _hx_tmp1 = ::openfl::Lib_obj::current->stage;
HXDLIN( 211)			_hx_tmp1->dispatchEvent( ::openfl::events::FullScreenEvent_obj::__alloc( HX_CTX ,HX_("fullScreen",5b,ae,48,2e),false,false,true,true));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ApplicationMain_obj,start,(void))


ApplicationMain_obj::ApplicationMain_obj()
{
}

bool ApplicationMain_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"main") ) { outValue = main_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { outValue = start_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"config") ) { outValue = config; return true; }
		if (HX_FIELD_EQ(inName,"create") ) { outValue = create_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"preloader") ) { outValue = preloader; return true; }
	}
	return false;
}

bool ApplicationMain_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"config") ) { config=ioValue.Cast<  ::Dynamic >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"preloader") ) { preloader=ioValue.Cast<  ::openfl::display::Preloader >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *ApplicationMain_obj_sMemberStorageInfo = 0;
static hx::StaticInfo ApplicationMain_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &ApplicationMain_obj::config,HX_HCSTRING("config","\xc2","\x56","\xd2","\xc7")},
	{hx::fsObject /*::openfl::display::Preloader*/ ,(void *) &ApplicationMain_obj::preloader,HX_HCSTRING("preloader","\x76","\xe4","\x7b","\x82")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void ApplicationMain_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ApplicationMain_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ApplicationMain_obj::config,"config");
	HX_MARK_MEMBER_NAME(ApplicationMain_obj::preloader,"preloader");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ApplicationMain_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ApplicationMain_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ApplicationMain_obj::config,"config");
	HX_VISIT_MEMBER_NAME(ApplicationMain_obj::preloader,"preloader");
};

#endif

hx::Class ApplicationMain_obj::__mClass;

static ::String ApplicationMain_obj_sStaticFields[] = {
	HX_HCSTRING("config","\xc2","\x56","\xd2","\xc7"),
	HX_HCSTRING("preloader","\x76","\xe4","\x7b","\x82"),
	HX_HCSTRING("main","\x39","\x38","\x56","\x48"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("start","\x62","\x74","\x0b","\x84"),
	::String(null())
};

void ApplicationMain_obj::__register()
{
	hx::Object *dummy = new ApplicationMain_obj;
	ApplicationMain_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("ApplicationMain","\x89","\xff","\x39","\x4a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ApplicationMain_obj::__GetStatic;
	__mClass->mSetStaticField = &ApplicationMain_obj::__SetStatic;
	__mClass->mMarkFunc = ApplicationMain_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(ApplicationMain_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ApplicationMain_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ApplicationMain_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ApplicationMain_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ApplicationMain_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

