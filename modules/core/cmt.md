根据《OpenCV3编程入门》中的描述, `core`核心功能模块，包含如下内容：
- Opencv基本数据结构
- 动态数据结构
- 绘图函数
- 数组操作相关函数
- 辅助功能与系统函数和宏
- 与 Opengl的互操作

参照`modules\core\include\opencv2\core.hpp`中分类：

## core: Core functionality 0.核心功能（总览介绍）

- core_basic: Basic structures           1.基本结构, 包括：一些基本的数据结构如Mat，并且实现了std中的string
- core_c C structures and operations     2.结构与操作
  - core_c_glue Connections with C++      2.1与c++的连接
- core_array Operations on arrays       3.对数组的操作
                    包括：LDA（Linear Discriminant Analysis 线性判别分析）、PCA（Principal Component Analysis 主成分分析）
                          RNG(Random Number Generator 随机数发生器)、SVD（Single Value Decomposition 奇异值分解）等类
                          以及一些乱七八糟/很多的函数（最大最小、求和、比较、退化、随机数种子……）
- core_async Asynchronous API           4.异步API
- core_xml XML/YAML Persistence         5.数据持久化（xmal/yaml/json）
- core_cluster Clustering               6.聚类
- core_utils Utility and system functions and macros 7.工具及系统函数和宏
  - core_logging Logging facilities           7.1 日志
  - core_utils_sse SSE utilities              7.2 SSE指令集工具
  - core_utils_neon NEON utilities            7.3 NEON(ARM)指令集工具（Cortex-A系列处理器的一种128位SIMD）
  - core_utils_vsx VSX utilities              7.4 VSX指令集工具（VSX(Power7) for PowerPC (big-endian)）
  - core_utils_softfloat Softfloat support    7.5 softfloat支持（用软件模拟出float，用位运算来模拟浮点运算）
  - core_utils_samples Utility functions for OpenCV samples   7.6 OpenCV示例代码的工具函数
- core_opengl OpenGL interoperability    8.OpenGL交互
- core_ipp Intel IPP Asynchronous C/C++ Converters  9.英特尔 IPP 异步 C/C++ 转换器
- core_optim Optimization Algorithms    10.优化算法
- core_directx DirectX interoperability 11.DirectX交互
- core_eigen Eigen support              12.Eigen线性代数算法库
- core_opencl OpenCL support            13.OpenCL（open computing language）支持
- core_va_intel Intel VA-API/OpenCL (CL-VA) interoperability    14.英特尔 VA-API/OpenCL (CL-VA) 交互
- core_hal Hardware Acceleration Layer  15.硬件加速层
  - core_hal_functions Functions  15.1 硬件加速函数
  - core_hal_interface Interface  15.2 硬件加速接口
  - core_hal_intrin Universal intrinsics  15.3 硬件加速通用功能/内部函数
    - core_hal_intrin_impl Private implementation helpers   15.3.1 通用功能/内部函数的私有实现

