根据《OpenCV3编程入门》中的描述, `features2d`2d特征功能框架，包含如下内容:
- 特征检测和描述
- 特征检测器( Feature Detectors)通用接口
- 描述符提取器( Descriptor Extractors)通用接口
- 描述符匹配器( Descriptor Matchers)通用接口
- 通用描述符( Generic Descriptor)匹配器通用接口
- 关键点绘制函数和匹配功能绘制函数

参照`modules\features2d\include\opencv2\features2d.hpp`中分类：

## features2d: 2D Features Framework
- features2d_main Feature Detection and Description         1.特征检测与描述
- features2d_match Descriptor Matchers                      2.描述匹配
- features2d_draw Drawing Function of Keypoints and Matches 3.关键点和匹配的绘制功能
- features2d_category Object Categorization                 4.对象分类
- feature2d_hal Hardware Acceleration Layer                 5.硬件加速层
  - features2d_hal_interface Interface                        5.1 接口
