package global;

import openfl.display.MovieClip;
import openfl.display.Stage;
import openfl.geom.Point;
import ui.tool.ToolBase;

import lr.Track;

/**
 * ...
 * @author Kaelan Evans
 */
class Common
{

	public function new() 
	{
		
	}
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//variables
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	public static var version:String = "0.0.0";
	public static var gStage:Stage;
	public static var gCode:Main;
	public static var gTrack:Track;
	public static var gVisContainer:MovieClip;
	public static var gToolBase:ToolBase;
	public static var gToolCurrent:Any;
	
	public static var cvar_icon_hit_display:Bool = false;
	
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//functions
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	public static function get_angle_radians(_a:Point, _b:Point):Float
	{
		var _locAngle = Math.atan2(_b.y - _a.y, _b.x - _a.x);
		return (_locAngle);
	}
	public static function get_angle_degrees(_a:Point, _b:Point):Float
	{
		var _locAngle = Math.atan2(_b.y - _a.y, _b.x - _a.x) * 180 / Math.PI;
		return (_locAngle);
	}
	public static function get_point_vector(_dis:Int, _ang:Float):Point
	{
		var _loc1:Point = new Point((_dis * -1) * Math.cos(_ang), (_dis * -1) * Math.sin(_ang));
		return(_loc1);
	}
	public static function get_distance(_a:Point, _b:Point):Float 
	{
		return(Math.sqrt(Math.pow(_b.y - _a.y, 2) + Math.pow(_b.x - _a.x, 2)));
	}
}