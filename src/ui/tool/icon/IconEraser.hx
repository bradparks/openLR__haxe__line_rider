package ui.tool.icon;

import openfl.display.Bitmap;
import openfl.events.MouseEvent;
import openfl.Lib;
import openfl.Assets;
import openfl.net.URLRequest;
import ui.tool.lr.ToolEraser;

import global.Common;
import ui.tool.Toolbar;

/**
 * ...
 * @author ...
 */
class IconEraser extends IconBase
{

	public function new() 
	{
		super();
		this.icon = new Bitmap(Assets.getBitmapData("icon/eraser.png"));
		this.addChild(this.icon);
	}
	override public function down(e:MouseEvent) {
		Common.gToolBase.disable();
		Toolbar.icon.deselect();
		Toolbar.icon = this;
		this.select();
		Toolbar.tool = new ToolEraser();
		Toolbar.swatch.deselect();
		Common.line_type = -1;
	}
}