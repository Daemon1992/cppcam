/* -*- coding: utf-8 -*-

Copyright 2014 Lode Leroy

This file is part of PyCAM.

PyCAM is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

PyCAM is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with PyCAM.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef __GCODEEXPORTER_H
#define __GCODEEXPORTER_H

#include <QString>
#include <string>
#include "Path.h"
#include "Stock.h"
#include "Model.h"
#include "runs.h"



class GCodeExporter
{
public:
    GCodeExporter();
    bool ExportPath(const std::vector<Path*> paths, QString filename);
    void replace(QString *s, Point pt, double a);
    double safez;
    double feedspeed;
    double plungespeed;
    bool bEnableArcs;
    Stock* stk;
    Model* mdl;
    bool m_radial=false;

private:
    double cutter_radius;
    QString cutter_type;

};

#endif
