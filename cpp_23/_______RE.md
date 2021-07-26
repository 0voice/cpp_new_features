<div align=center>
  
# 🔥🔥🔥音视频开发，webrtc,ffimapg。

“技术深度” 与 “技术广度”是对开发者来说最为重要的两个维度，本项目致力于从源码层面，剖析和挖掘音视频行业主流技术的底层实现原理，为广大开发者 “提升技术深度” 提供便利。
    
</div>
<div align=center>
<img src="https://img12.360buyimg.com/ddimg/jfs/t1/192169/2/12820/11155/60ed0f51E6286134a/535d82747007c63e.png">
</div>
<div align=center>

| 音视频开发    | 开源框架      | paper书籍    | 视频         | 项目          |  peper       |文章          |
|:------------:|:------------:|:------------:|:------------:|:------------:|:------------:|:------------:|
| [🔨](#nav_1) | [🌐](#2)     | [🐮](#3)    |[🖧](#4)       |[✈](#5)      |[🖧](#6)      |[🖧](#6)      |

</div>

Write something....

---

<h2 id="nav_1">
  音视频开发
</h2>


### 1 WerRTC方向

#### 1.1 数据结构与算法

##### 1.1.1 面试必聊的排序与KMP

* 插入排序
* 插入排序
* 快速排序
* 希尔排序
* 桶排序
* 基数排序
* 归并排序
* 字符串匹配KMP算法

##### 1.1.2 随处可见的红黑树

* 红黑树的应用场景进程调度cfs
* 内存管理红黑树的数学证明与推导
* 手撕红黑树的左旋与右旋
* 红黑树添加的实现与添加三种情况的证明
* 红黑树删除的实现与删除四种情况的证明
* 红黑树的线程安全的做法
* 分析红黑树工程实用的特点

##### 1.1.3 磁盘存储链式的B树与B+树

* 磁盘结构分析与数据存储原理
* 多叉树的运用以及B树的定义
* 证明B树插入的两种分裂
* B树删除的前后借位与节点合并
* 手撕B树的插入，删除，遍历，查找
* B+树的定义与实现
* B+树叶子节点的前后指针
* B+树的应用场景与实用特点
* B+树的线程安全做法

##### 1.1.4 海量数据去重的Hash与布隆过滤器，bitmap

* hash的原理与hash函数的实现
* hash的应用场景
* 分布式hash的实现原理
* 海量数据去重布隆过滤器
* 布隆过滤的数学推导与证明

##### 1.1.5 图论算法，dijkstra，dfs，bfs，动态规划

* 图的构建与需求应用场景
* dijkstra的实现
* 经典动态规划问题

#### 1.2 设计模式

##### 1.2.1 创建型设计模式

* 单例模式
* 工厂方法模式
* 抽象工厂模式
* 原型模式

##### 1.2.2 单例模式

* 适配器模式
* 代理模式
* 桥接模式
* 组合模式

##### 1.2.3 行为型设计模式

* 策略模式
* 观察者模式
* 责任链模式
* 状态模式

#### 1.3 工程管理

##### 1.3.1 手写: Makefile/cmake/configure

* Makefile的规则与make的工作原理
* 单文件编译与多文件编译
* Makefile的参数传递
* 多目录文件夹递归编译与嵌套执行make
* Makefile的通配符，伪目标，文件搜索
* Makefile的操作函数与特殊语法
* configure生成makefile的原则
* cmake的写法

##### 1.3.2 操作:git/svn与持续集成

* git的工作流程
* 创建操作与基本操作
* 分支管理，查看提交历史
* git服务器搭建

##### 1.3.3 linux系统运行时参数命令

* 进程间通信设施状态 ipcs
* Linux系统运行时长 uptime
* CPU平均负载和磁盘活动iostat
* 监控，收集和汇报系统活动sar
* 监控多处理器使用情况mpstat
* 监控进程的内存使用情况pmap
* 系统管理员调优和基准测量工具 nmon
* 密切关注Linux系统 glances
* 查看系统调用strace
* ftp服务器基本信息 ftptop
* IO监控iotop
* 电量消耗和电源管理powertop
* 监控mysql 的线程和性能 mytop
* 系统运行参数分析htop/top/atop
* Linux网络统计监控工具 netstat
* 显示和修改网络接口控制器ethtool
* 网络数据包分析利刃tcpdump
* 远程登陆服务的标准协议 telnet
* 获取实时网络统计信息 iptraf
* 显示主机上网络接口带宽使用情况iftop

### 2 高性能网络设计专栏

#### 2.1 网络编程

##### 2.1.1 项目:网络io与select，poll, epoll

* socket与文件描述符的关联
* sigio的异步通知
* 多路复用select/poll
* 手撕epoll单线程，多线程，多进程的多种写法
* 代码实现LT/ET的区别


---
<h3 id="1">🔨 文章</h3>
  
<div align=center>

No.|Title|Translation（参考）|Company
:-------: | :---------------: | :------------: | :-------:
1|[《A Declarative Query Language for Data Provenance》](https://github.com/0voice/computer_expert_paper/blob/main/%E6%95%B0%E6%8D%AE%E7%BB%93%E6%9E%84/%E3%80%8AA%20Declarative%20Query%20Language%20for%20Data%20Provenance%E3%80%8B.pdf)|《数据来源的声明式查询语言》|福斯-计算机科学研究所

</div>
