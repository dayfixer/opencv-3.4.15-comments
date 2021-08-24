根据《OpenCV3编程入门》中的描述, `Imgproc`图像处理模块，包含如下内容:

- 线性和非线性的图像滤波
- 图像的几何变换
- 其他( Miscellaneous)图像转换
- 直方图相关
- 结构分析和形状描述
- 运动分析和对象跟踪
- 特征检测
- 目标检测等内容

参照`modules\imgproc\include\opencv2\imgproc.hpp`中分类：

## imgproc: Image Processing 图像处理模块
- imgproc_filter Image Filtering                    1.图像过滤
- imgproc_transform Geometric Image Transformations 2.几何图像变化
- imgproc_misc Miscellaneous Image Transformations  3.其它图像转换转换
- imgproc_draw Drawing Functions                    4.绘图功能
- imgproc_color_conversions Color Space Conversions 5.色彩空间转换
- imgproc_colormap ColorMaps in OpenCV              6.OpenCV中的色彩映射彩映射
- imgproc_subdiv2d Planar Subdivision               7.平面细分
- imgproc_hist Histograms                           8.直方图
- imgproc_shape Structural Analysis and Shape Descriptors 9.结构分析和形状描述符
- imgproc_motion Motion Analysis and Object Tracking 10.运动分析和对象跟踪
- imgproc_feature Feature Detection                 11.特征检测
- imgproc_object Object                             12.目标检测
- imgproc_c C API                                   13.C API
- imgproc_hal Hardware Acceleration Layer           14.硬件加速层
  - imgproc_hal_functions Functions                     14.1 函数
  - imgproc_hal_interface Interface                     14.2 接口

面向cuda的图像处理有专门的模块：`cudaimgproc`: 位于`modules\cudaimgproc\include\opencv2\cudaimgproc.hpp`

## cuda::cudaimgproc: Image Processing

- cudaimgproc_color Color space processing  1.色彩空间转换
- cudaimgproc_hist Histogram Calculation    2.直方图计算
- cudaimgproc_hough Hough Transform         3.霍夫变换
- cudaimgproc_feature Feature Detection     4.特征检测

