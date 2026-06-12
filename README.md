# VibeSense —— 工业设备智能协同平台

[![License](https://img.shields.io/badge/License-Apache%202.0-blue.svg)](LICENSE)
[![Platform](https://img.shields.io/badge/Platform-ESP32--S3-green.svg)]()

## 🎯 项目定位

VibeSense 是一个**边缘AI多模态工业设备健康监测平台**。我们不是在做一个简单的监测工具，而是在构建一个让工业设备“活过来”、能自主感知、预警、对话和进化的智能生态系统。

- **低成本硬件 (< ¥50)**: 基于ESP32-S3，采用非接触式传感器，让每一台设备都装得起。
- **设备社交网络**: 让设备与设备、设备与人之间进行数据共享和协同诊断。
- **子母模型进化**: 云端“母模型”持续学习，边缘“子模型”自动更新，越用越聪明。
- **普适化微定制**: 一套核心框架，通过简单配置就能适应不同工业场景。

## 🚀 快速开始

- **硬件**: ESP32-S3, MPU6050 (振动), MLX90614 (温度), SCT-013 (电流)
- **固件**: 参考 `firmware/` 目录下的代码
- **平台**: 参考 `platform/` 目录下的云端代码
- **详细文档**: 请访问我们的 [Wiki]

## 📚 核心文档

- **[行业洞察: 工业设备社交网络](./docs/vision.md)** - **强烈推荐阅读**，了解我们项目的核心理念和未来愿景。

## 🤝 贡献与许可

本项目代码采用 [Apache 2.0](LICENSE) 协议开源。我们欢迎任何形式的社区贡献！但请注意：
- **核心模型参数**和**联邦学习算法**属于商业机密，**不会开源**。
- 欢迎通过 Issue 和 PR 参与通用框架、文档、示例的共建。
- 商业合作或定制化需求，请联系: 1662284539@qq.com

## 📄 学术成果

本项目核心技术已发表为EI会议论文:
- **Y S Deng**, "Low-Cost Edge AI Fault Diagnosis System for Rotating Machinery Based on ESP32-S3," *2026 International Conference on Machine Learning and Embedded Systems (MLES 2026)*, SPIE, 2026. (EI Compendex, Scopus收录)

## 📧 联系方式

- **作者**: Y S Deng (邓一淞)
- **学校**: Sichuan Technology and Business University
- **邮箱**: 1662284539@qq.com
- **GitHub**: [vibe-zhang](https://github.com/vibe-zhang)
