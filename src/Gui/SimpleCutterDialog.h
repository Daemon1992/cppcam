/* -*- coding: utf-8 -*-

Copyright 2014 Lode Leroy

This file is part of CppCAM.

CppCAM is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

CppCAM is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with CppCAM.  If not, see <http://www.gnu.org/licenses/>.
*/
#include <QtGui>
#include "Geometry/Geometry.h"

#include "ui_SimpleCutterDialog.h"

class SimpleCutterDialog : 
    public QDialog, public Ui::SimpleCutterDialog
{
    Q_OBJECT
public:
    SimpleCutterDialog(QWidget* parent=0);
    double flag_f;
    double m_xmin;
    double m_ymin;
    double m_zmin;
    double m_xmax;
    double m_ymax;
    double m_zmax;
    int m_smooth;
    double m_comp;
    void showEvent(QShowEvent *event);
    
private slots:

    void on_lineEdit_points_editingFinished();
    void on_lineEdit_lines_editingFinished();
    void on_lineEdit_layers_editingFinished();
    void on_leUseLine_textChanged(const QString &arg1);
    void on_leMargin_editingFinished();
    void on_cbLeaveMargin_stateChanged(int arg1);
};
