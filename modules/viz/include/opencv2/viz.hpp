/*M///////////////////////////////////////////////////////////////////////////////////////
//
//  IMPORTANT: READ BEFORE DOWNLOADING, COPYING, INSTALLING OR USING.
//
//  By downloading, copying, installing or using the software you agree to this license.
//  If you do not agree to this license, do not download, install,
//  copy or use the software.
//
//
//                           License Agreement
//                For Open Source Computer Vision Library
//
// Copyright (C) 2013, OpenCV Foundation, all rights reserved.
// Third party copyrights are property of their respective owners.
//
// Redistribution and use in source and binary forms, with or without modification,
// are permitted provided that the following conditions are met:
//
//   * Redistribution's of source code must retain the above copyright notice,
//     this list of conditions and the following disclaimer.
//
//   * Redistribution's in binary form must reproduce the above copyright notice,
//     this list of conditions and the following disclaimer in the documentation
//     and/or other materials provided with the distribution.
//
//   * The name of the copyright holders may not be used to endorse or promote products
//     derived from this software without specific prior written permission.
//
// This software is provided by the copyright holders and contributors "as is" and
// any express or implied warranties, including, but not limited to, the implied
// warranties of merchantability and fitness for a particular purpose are disclaimed.
// In no event shall the Intel Corporation or contributors be liable for any direct,
// indirect, incidental, special, exemplary, or consequential damages
// (including, but not limited to, procurement of substitute goods or services;
// loss of use, data, or profits; or business interruption) however caused
// and on any theory of liability, whether in contract, strict liability,
// or tort (including negligence or otherwise) arising in any way out of
// the use of this software, even if advised of the possibility of such damage.
//
// Authors:
//  * Ozan Tonkal, ozantonkal@gmail.com
//  * Anatoly Baksheev, Itseez Inc.  myname.mysurname <> mycompany.com
//
//M*/

#ifndef OPENCV_VIZ_HPP
#define OPENCV_VIZ_HPP

#include <opencv2/viz/types.hpp>
#include <opencv2/viz/widgets.hpp>
#include <opencv2/viz/viz3d.hpp>
#include <opencv2/viz/vizcore.hpp>

/**
  @defgroup viz 3D Visualizer

This section describes 3D visualization window as well as classes and methods that are used to
interact with it.
本节介绍 3D 可视化窗口以及用于与之交互的类和方法。

3D visualization window (see Viz3d) is used to display widgets (see Widget), and it provides several
methods to interact with scene and widgets.
3D 可视化窗口（见 Viz3d）用于显示小部件（见小部件），它提供了几种与场景和小部件交互的方法。

  @{
    @defgroup viz_widget Widget

In this section, the widget framework is explained. Widgets represent 2D or 3D objects, varying from
simple ones such as lines to complex ones such as point clouds and meshes.
在本节中，将解释小部件框架。小部件代表 2D 或 3D 对象，从简单的对象（例如线条）到复杂的对象（例如点云和网格）不等。

Widgets are **implicitly shared**. Therefore, one can add a widget to the scene, and modify the
widget without re-adding the widget.
小部件是**隐式共享**。因此，可以在场景中添加一个小部件，并在不重新添加小部件的情况下修改小部件。

@code
// Create a cloud widget
viz::WCloud cw(cloud, viz::Color::red());
// Display it in a window
myWindow.showWidget("CloudWidget1", cw);
// Modify it, and it will be modified in the window.
cw.setColor(viz::Color::yellow());
@endcode

  @}
*/

#endif /* OPENCV_VIZ_HPP */
