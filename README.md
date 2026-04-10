# VibeSense —— 低成本工业设备振动诊断系统

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)

## 📌 项目简介

VibeSense 是一个基于 ESP32-S3 和 MPU6050 的边缘 AI 振动诊断系统，成本低于 **50 元**，能实时检测旋转设备（如风扇、电机）的不平衡故障。

**核心特性**：
- 1000Hz 实时振动数据采集
- 片上 FFT 频谱分析
- 轻量级随机森林模型（50棵树，11个特征）
- Wi-Fi 远程报警（MQTT）
- 准确率 100%（模拟数据集）

## 🛠️ 物料清单

| 名称 | 型号 | 参考价格 | 备注 |
|:---|:---|:---|:---|
| 主控 | ESP32-S3 N8R8 | ¥20 | 必须带 PSRAM |
| 传感器 | MPU6050 | ¥10 | 六轴加速度计 |
| 连接线 | 母对母杜邦线 ×4 | ¥2 | |
| USB线 | Micro USB 数据线 | ¥5 | 必须能传数据 |
| 被测设备 | USB小风扇 | ¥10 | 或任何旋转设备 |
| **总成本** | | **≈ ¥47** | |

## 📁 项目结构
```
VibeSense/
├── README.md              # 本文件
├── hardware/              # 硬件设计
│   └── wiring.jpg         # 接线图
├── firmware/              # ESP32 固件
│   ├── vibesense_basic/   # 基础数据采集+FFT
│   └── vibesense_ai/      # 集成AI模型的完整版
├── model/                 # AI 模型
│   ├── train_model.py     # 训练脚本
│   ├── exported_c_model.h # 导出的C代码
│   └── vibration_model.pkl
├── docs/                  # 文档
│   └── user_manual.md
└── LICENSE
```
## 🚀 快速开始

### 1. 硬件接线
将 MPU6050 与 ESP32-S3 连接：
- VCC → 3.3V
- GND → GND
- SCL → GPIO 22
- SDA → GPIO 21

将传感器固定在风扇外壳上。

### 2. 软件环境
- Arduino IDE 2.x
- ESP32 开发板包（by Espressif）
- 库：`MPU6050`、`arduinoFFT`

### 3. 烧录固件
1. 打开 `firmware/vibesense_ai/vibesense_ai.ino`
2. 选择开发板 `ESP32S3 Dev Module`，PSRAM 设为 `OPI PSRAM`
3. 上传代码

### 4. 观察结果
打开串口监视器（115200 波特率），正常状态输出 `✅ 正常`，当在扇叶上贴胶带制造不平衡故障时，输出 `⚠️ 报警`。

## 📊 效果演示
[待插入视频链接]

## 🤝 贡献指南
欢迎提 Issue 和 PR！如果你想：
- 增加新的故障类型检测（如轴承磨损、不对中）
- 适配其他传感器（如 ADXL345、IEPE）
- 优化模型精度

请先阅读 `docs/` 下的开发文档。

## 📝 开源协议
MIT License - 详见 [LICENSE](LICENSE) 文件。
