package ui.tool.lr;

import lr.line.LineBase;
import lr.line.*;
import openfl.events.MouseEvent;
import openfl.geom.Point;

import global.Common;
import ui.tool.ToolBase;

/**
 * ...
 * @author Kaelan Evans
 */
class ToolPencil extends ToolBase
{
	private var a:Point;
	private var b:Point;
	private var c:Point;
	private var d:Point;
	public function new() 
	{
		super();
	}
	override public function mouseDown(e:MouseEvent) {
		a = new Point(Common.gTrack.mouseX, Common.gTrack.mouseY);
		c = new Point(Common.gStage.mouseX, Common.gStage.mouseY);
		Common.gStage.addEventListener(MouseEvent.MOUSE_MOVE, pencil_move);
	}
	
	private function pencil_move(e:MouseEvent):Void 
	{
		b = new Point(Common.gTrack.mouseX, Common.gTrack.mouseY);
		d = new Point(Common.gStage.mouseX, Common.gStage.mouseY);
		Common.gTrack.render_preview_line(a, b);
		if (Common.get_distance(c, d) >= Common.line_minLength) {
			var _loc1:Dynamic;
			if (Common.line_type == 0) {
				_loc1 = new LineFloor(a, b, this.mod_shift);
				Common.gTrack.add_vis_line(_loc1);
			} else if (Common.line_type == 1) {
				_loc1 = new LineAccel(a, b, this.mod_shift);
				Common.gTrack.add_vis_line(_loc1);
			} else if (Common.line_type == 2) {
				_loc1 = new LineScene(a, b, this.mod_shift);
				Common.gTrack.add_vis_line(_loc1);
			}
			a = new Point(Common.gTrack.mouseX, Common.gTrack.mouseY);
			c = new Point(Common.gStage.mouseX, Common.gStage.mouseY);
		}
	}
	override public function mouseUp(e:MouseEvent) {
		Common.gStage.removeEventListener(MouseEvent.MOUSE_MOVE, pencil_move);
		Common.gTrack.clear_preview();
	}
}