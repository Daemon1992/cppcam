This repository holds a port of pycam to C++/Qt. The project was then renamed to cppcam, and the git repository was lost and recreated.


Currently, the following has been ported from python to C++:


Geometry: 
	Point, Edge/Line, Triangle/Plane, Model
	intersection

Cutter:
	BaseCutter, SphericalCutter, CylindricalCutter

Importers:
	STLImporter

Exporters:
	STLExporter


The following has been rewritten:

PathProcessor:
	StraightSegmentDetector, StepUpDetector, StepDownDetector

PathGenerator:
	SimpleCutter: parallellized

Exporters:
	GCodeExporter: basic functionality, configurable output

GUI:
	The gui is rudimentary, but functional. Tool paths for routers (3 axis) and lathes (4 axis) can be created without significant effort.

