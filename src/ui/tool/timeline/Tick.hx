package ui.tool.timeline;

import openfl.display.Sprite;

import global.Common;

/**
 * ...
 * @author Kaelan Evans
 */
class Tick extends Sprite
{
	public var frame:Int = 0;
	var color = 0xFFFFFF;
	public function new(_id:Int) 
	{
		super();
		
		this.frame = _id;
		this.graphics.clear();
		this.graphics.lineStyle(4, 0, 1);
		this.graphics.moveTo(0, 0);
		this.graphics.lineTo(0, 20);
	}
	public function update(_id) {
		this.graphics.clear();
		this.frame = _id - 160;
		this.graphics.moveTo(0, 0);
		if (this.frame < 0) {
			this.graphics.lineStyle(4, 0, 0.1);
			this.graphics.lineTo(0, 20);
		} else if (this.frame > Common.sim_max_frames) {
			this.graphics.lineStyle(4, 0, 0.5);
			this.graphics.lineTo(0, 20);
		} else if (this.frame == Common.sim_frames) {
			this.graphics.lineStyle(4, 0x0066FF, 1);
			this.graphics.lineTo(0, 20);
		} else if (this.frame == Common.sim_pause_frame && Common.sim_pause_frame != -1) {
			this.graphics.lineStyle(4, 0x00CC00, 1);
			this.graphics.lineTo(0, 20);
		} else if (this.frame == Common.sim_flagged_frame && Common.sim_flagged_frame != -1) {
			this.graphics.lineStyle(4, 0xCC0000, 1);
			this.graphics.lineTo(0, 20);
		}
		else {
			if (this.frame % 10 == 1) {
				this.graphics.lineStyle(4, 0, 0.8);
			} else { 
				this.graphics.lineStyle(4, 0, 0.4);
			}
			this.graphics.lineTo(0, 20);
		}
	}
}