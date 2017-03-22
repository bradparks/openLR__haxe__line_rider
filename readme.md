# openLR, an open source alternative desktop app for Line Rider.

### Original game by Boštjan "fšk" Čadež

### Build by Kaelan "Kevans" Evans

### The language used is Haxe: http://haxe.org/ (Running Haxe 3.4.2)

## Haxelibs used:
	
	
	openFL 4.9.1: http://www.openfl.org/
	lime 4.0.2
	
	(If possible, openLR will always use the latest update for Haxe, openFL, and Lime)
	
## How to compile (Instructions may not work as is):
	
Install Haxe from http://haxe.org/
	
Run in terminal the following commands:
	
	haxelib install openfl
	
	haxelib run openfl setup
	(Running this command will install the latest version of lime for you, and othe haxelibs necesary)

Run the command 'openfl' to verify it was installed correctly.

Change terminal directory to root openLR folder.

Run the command:
	
	openfl build mac/linux/windows
	
Project will be compiled into bin folder. Be aware that you can compile to other platforms regardless of the platform you are on,
However, it will not be a native C++ build and can take performance hits and or not function correctly. Please compile natively
to your platform for best perfomance.

If possible, on windows platform you can download Haxe Develop and use that as an IDE. OpenFL (and other libraries) will still need to be installed.
