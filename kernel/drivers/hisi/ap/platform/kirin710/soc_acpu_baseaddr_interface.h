#ifndef __SOC_ACPU_BASEADDR_INTERFACE_H__
#define __SOC_ACPU_BASEADDR_INTERFACE_H__ 
#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif
#define SOC_ACPU_BOOTROM_remap_BASE_ADDR (0xFFFF0000)
#define SOC_ACPU_BOOTROM_BASE_ADDR (0xFFFE0000)
#define SOC_ACPU_DMSS_BASE_ADDR (0xFFFC0000)
#define SOC_ACPU_DMSS_TZMP2_BASE_ADDR (0xFFFB0000)
#define SOC_ACPU_LPMCU_RAM_BASE_ADDR (0xFFF62000)
#define SOC_ACPU_LP_RAM_BASE_ADDR (0xFFF50000)
#define SOC_ACPU_LP_CONFIG_BASE_ADDR (0xFFF3F000)
#define SOC_ACPU_LP_TIMER_BASE_ADDR (0xFFF3E000)
#define SOC_ACPU_LP_WDG_BASE_ADDR (0xFFF3D000)
#define SOC_ACPU_PMU_SSI1_BASE_ADDR (0xFFF36000)
#define SOC_ACPU_PERI_CRG_BASE_ADDR (0xFFF35000)
#define SOC_ACPU_PMU_SSI0_BASE_ADDR (0xFFF34000)
#define SOC_ACPU_UART6_BASE_ADDR (0xFFF32000)
#define SOC_ACPU_PMC_BASE_ADDR (0xFFF31000)
#define SOC_ACPU_TSENSORC_BASE_ADDR (0xFFF30000)
#define SOC_ACPU_GPIO19_BASE_ADDR (0xFFF29000)
#define SOC_ACPU_GPIO18_BASE_ADDR (0xFFF28000)
#define SOC_ACPU_SPMI_BASE_ADDR (0xFFF24000)
#define SOC_ACPU_AO_IPC_NS_BASE_ADDR (0xFFF22000)
#define SOC_ACPU_AO_IPC_S_BASE_ADDR (0xFFF21000)
#define SOC_ACPU_AO_TZPC_BASE_ADDR (0xFFF20000)
#define SOC_ACPU_AO_LoadMonitor_BASE_ADDR (0xFFF1F000)
#define SOC_ACPU_GPIO1_SE_BASE_ADDR (0xFFF1E000)
#define SOC_ACPU_GPIO28_BASE_ADDR (0xFFF1D000)
#define SOC_ACPU_TIMER8_BASE_ADDR (0xFFF1C000)
#define SOC_ACPU_TIMER7_BASE_ADDR (0xFFF1B000)
#define SOC_ACPU_TIMER6_BASE_ADDR (0xFFF1A000)
#define SOC_ACPU_TIMER5_BASE_ADDR (0xFFF19000)
#define SOC_ACPU_TIMER4_BASE_ADDR (0xFFF18000)
#define SOC_ACPU_TIMER3_BASE_ADDR (0xFFF17000)
#define SOC_ACPU_TIMER2_BASE_ADDR (0xFFF16000)
#define SOC_ACPU_TIMER1_BASE_ADDR (0xFFF15000)
#define SOC_ACPU_TIMER0_BASE_ADDR (0xFFF14000)
#define SOC_ACPU_BB_DRX_BASE_ADDR (0xFFF12000)
#define SOC_ACPU_AO_IOC_BASE_ADDR (0xFFF11000)
#define SOC_ACPU_GPIO27_BASE_ADDR (0xFFF10000)
#define SOC_ACPU_GPIO26_BASE_ADDR (0xFFF0F000)
#define SOC_ACPU_GPIO25_BASE_ADDR (0xFFF0E000)
#define SOC_ACPU_GPIO24_BASE_ADDR (0xFFF0D000)
#define SOC_ACPU_GPIO23_BASE_ADDR (0xFFF0C000)
#define SOC_ACPU_GPIO22_BASE_ADDR (0xFFF0B000)
#define SOC_ACPU_SCTRL_BASE_ADDR (0xFFF0A000)
#define SOC_ACPU_SYS_CNT_BASE_ADDR (0xFFF08000)
#define SOC_ACPU_SCI1_BASE_ADDR (0xFFF07000)
#define SOC_ACPU_SCI0_BASE_ADDR (0xFFF06000)
#define SOC_ACPU_RTC1_BASE_ADDR (0xFFF05000)
#define SOC_ACPU_RTC0_BASE_ADDR (0xFFF04000)
#define SOC_ACPU_EFUSEC_BASE_ADDR (0xFFF03000)
#define SOC_ACPU_IOMCU_RTC_BASE_ADDR (0xFFD7F000)
#define SOC_ACPU_IOMCU_CONFIG_BASE_ADDR (0xFFD7E000)
#define SOC_ACPU_IOMCU_TIMER_BASE_ADDR (0xFFD7D000)
#define SOC_ACPU_IOMCU_WDG_BASE_ADDR (0xFFD7C000)
#define SOC_ACPU_IOMCU_GPIO3_BASE_ADDR (0xFFD7B000)
#define SOC_ACPU_IOMCU_GPIO2_BASE_ADDR (0xFFD7A000)
#define SOC_ACPU_IOMCU_GPIO1_BASE_ADDR (0xFFD79000)
#define SOC_ACPU_IOMCU_GPIO0_BASE_ADDR (0xFFD78000)
#define SOC_ACPU_IOMCU_DMAC_BASE_ADDR (0xFFD77000)
#define SOC_ACPU_IOMCU_UART7_BASE_ADDR (0xFFD76000)
#define SOC_ACPU_IOMCU_BLPWM_BASE_ADDR (0xFFD75000)
#define SOC_ACPU_IOMCU_UART3_BASE_ADDR (0xFFD74000)
#define SOC_ACPU_IOMCU_I2C2_BASE_ADDR (0xFFD73000)
#define SOC_ACPU_IOMCU_I2C1_BASE_ADDR (0xFFD72000)
#define SOC_ACPU_IOMCU_I2C0_BASE_ADDR (0xFFD71000)
#define SOC_ACPU_IOMCU_SPI0_BASE_ADDR (0xFFD70000)
#define SOC_ACPU_DTCM1Remap_BASE_ADDR (0xFFD6F000)
#define SOC_ACPU_DTCM0Remap_BASE_ADDR (0xFFD6E000)
#define SOC_ACPU_ITCMRemap_BASE_ADDR (0xFFD6C000)
#define SOC_ACPU_RemapCtrl_BASE_ADDR (0xFFD6B000)
#define SOC_ACPU_IOMCU_I2C3_BASE_ADDR (0xFFD6A000)
#define SOC_ACPU_IOMCU_UART8_BASE_ADDR (0xFFD69000)
#define SOC_ACPU_IOMCU_SPI2_BASE_ADDR (0xFFD68000)
#define SOC_ACPU_IOMCU_DMMU_BASE_ADDR (0xFFD67000)
#define SOC_ACPU_IOMCU_TIMER2_BASE_ADDR (0xFFD66000)
#define SOC_ACPU_IOMCU_I3C_BASE_ADDR (0xFFD65000)
#define SOC_ACPU_IOMCU_TCP_RAM_BASE_ADDR (0xFFD51000)
#define SOC_ACPU_IOMCU_TCP_CFG_BASE_ADDR (0xFFD50000)
#define SOC_ACPU_EMMC_CFG_BASE_ADDR (0xFF3E6000)
#define SOC_ACPU_EMMC_GPIO1_BASE_ADDR (0xFF3E4000)
#define SOC_ACPU_EMMC_GPIO0_BASE_ADDR (0xFF3E3000)
#define SOC_ACPU_EMMC_SYS_CTRL_BASE_ADDR (0xFF3E2000)
#define SOC_ACPU_EMMC_PHY_CTRL_BASE_ADDR (0xFF3E1000)
#define SOC_ACPU_UFS_SYS_CTRL_BASE_ADDR (0xFF3E0000)
#define SOC_ACPU_UFS_CFG_BASE_ADDR (0xFF3C0000)
#define SOC_ACPU_SD3_BASE_ADDR (0xFF37F000)
#define SOC_ACPU_IOC_MMC0_BASE_ADDR (0xFF37E000)
#define SOC_ACPU_USB2OTG_BC_BASE_ADDR (0xFF200000)
#define SOC_ACPU_USB2OTG_BASE_ADDR (0xFF100000)
#define SOC_ACPU_SOCP_BASE_ADDR (0xFF060000)
#define SOC_ACPU_IPF_PSAM_BASE_ADDR (0xFF040000)
#define SOC_ACPU_IPF_BASE_ADDR (0xFF038000)
#define SOC_ACPU_IPC_MDM_NS_BASE_ADDR (0xFF011000)
#define SOC_ACPU_IPC_MDM_S_BASE_ADDR (0xFF010000)
#define SOC_ACPU_CS_STM_BASE_ADDR (0xFE000000)
#define SOC_ACPU_PERI_DMAC_BASE_ADDR (0xFDF30000)
#define SOC_ACPU_PERF_STAT_BASE_ADDR (0xFDF10000)
#define SOC_ACPU_SECENG_S_BASE_ADDR (0xFDF0F000)
#define SOC_ACPU_I2C4_BASE_ADDR (0xFDF0D000)
#define SOC_ACPU_I2C3_BASE_ADDR (0xFDF0C000)
#define SOC_ACPU_I2C7_BASE_ADDR (0xFDF0B000)
#define SOC_ACPU_SPI1_BASE_ADDR (0xFDF08000)
#define SOC_ACPU_SPI4_BASE_ADDR (0xFDF06000)
#define SOC_ACPU_UART5_BASE_ADDR (0xFDF05000)
#define SOC_ACPU_UART2_BASE_ADDR (0xFDF03000)
#define SOC_ACPU_UART0_BASE_ADDR (0xFDF02000)
#define SOC_ACPU_UART4_BASE_ADDR (0xFDF01000)
#define SOC_ACPU_UART1_BASE_ADDR (0xFDF00000)
#define SOC_ACPU_SDIO0_BASE_ADDR (0xFC183000)
#define SOC_ACPU_IOC_MMC1_BASE_ADDR (0xFC182000)
#define SOC_ACPU_HISEE_IPC_BASE_ADDR (0xF0E30000)
#define SOC_ACPU_HISEE_MAILBOX_BASE_ADDR (0xF0E20000)
#define SOC_ACPU_IOMCU_TCM_BASE_ADDR (0xF0000000)
#define SOC_ACPU_CSSYS_APB_BASE_ADDR (0xEC000000)
#define SOC_ACPU_DMCPACK1_BASE_ADDR (0xEA920000)
#define SOC_ACPU_DMCPACK0_BASE_ADDR (0xEA900000)
#define SOC_ACPU_UFS_EMMC_NOC_Service_Target_BASE_ADDR (0xE98A0000)
#define SOC_ACPU_MMC0_NOC_Service_Target_BASE_ADDR (0xE9890000)
#define SOC_ACPU_MMC1_NOC_Service_Target_BASE_ADDR (0xE9880000)
#define SOC_ACPU_AOBUS_Service_Target_BASE_ADDR (0xE9870000)
#define SOC_ACPU_DMA_NOC_Service_Target_BASE_ADDR (0xE9860000)
#define SOC_ACPU_SYS_BUS_Service_Target_BASE_ADDR (0xE9840000)
#define SOC_ACPU_ASP_Service_Target_BASE_ADDR (0xE9830000)
#define SOC_ACPU_Modem_Service_Target_BASE_ADDR (0xE9820000)
#define SOC_ACPU_CFGBUS_Service_Target_BASE_ADDR (0xE9800000)
#define SOC_ACPU_IVP32_SMMU_BASE_ADDR (0xE8DC0000)
#define SOC_ACPU_IVP32_TIMER1_BASE_ADDR (0xE8D83000)
#define SOC_ACPU_IVP32_TIMER0_BASE_ADDR (0xE8D82000)
#define SOC_ACPU_IVP32_WDG_BASE_ADDR (0xE8D81000)
#define SOC_ACPU_IVP32_CFG_BASE_ADDR (0xE8D80000)
#define SOC_ACPU_IVP32_IRAM_BASE_ADDR (0xE8D00000)
#define SOC_ACPU_IVP32_DRAM1_BASE_ADDR (0xE8C80000)
#define SOC_ACPU_IVP32_DRAM0_BASE_ADDR (0xE8C00000)
#define SOC_ACPU_LoadMonitor1_BASE_ADDR (0xE8A23000)
#define SOC_ACPU_ATGC_BASE_ADDR (0xE8A22000)
#define SOC_ACPU_TZPC_BASE_ADDR (0xE8A21000)
#define SOC_ACPU_GPIO21_BASE_ADDR (0xE8A20000)
#define SOC_ACPU_GPIO20_BASE_ADDR (0xE8A1F000)
#define SOC_ACPU_GPIO17_BASE_ADDR (0xE8A1C000)
#define SOC_ACPU_GPIO16_BASE_ADDR (0xE8A1B000)
#define SOC_ACPU_GPIO15_BASE_ADDR (0xE8A1A000)
#define SOC_ACPU_GPIO14_BASE_ADDR (0xE8A19000)
#define SOC_ACPU_GPIO13_BASE_ADDR (0xE8A18000)
#define SOC_ACPU_GPIO12_BASE_ADDR (0xE8A17000)
#define SOC_ACPU_GPIO11_BASE_ADDR (0xE8A16000)
#define SOC_ACPU_GPIO10_BASE_ADDR (0xE8A15000)
#define SOC_ACPU_GPIO9_BASE_ADDR (0xE8A14000)
#define SOC_ACPU_GPIO8_BASE_ADDR (0xE8A13000)
#define SOC_ACPU_GPIO7_BASE_ADDR (0xE8A12000)
#define SOC_ACPU_GPIO6_BASE_ADDR (0xE8A11000)
#define SOC_ACPU_GPIO5_BASE_ADDR (0xE8A10000)
#define SOC_ACPU_GPIO4_BASE_ADDR (0xE8A0F000)
#define SOC_ACPU_GPIO3_BASE_ADDR (0xE8A0E000)
#define SOC_ACPU_GPIO2_BASE_ADDR (0xE8A0D000)
#define SOC_ACPU_GPIO1_BASE_ADDR (0xE8A0C000)
#define SOC_ACPU_GPIO0_BASE_ADDR (0xE8A0B000)
#define SOC_ACPU_GPIO0_SE_BASE_ADDR (0xE8A0A000)
#define SOC_ACPU_PCTRL_BASE_ADDR (0xE8A09000)
#define SOC_ACPU_LoadMonitor0_BASE_ADDR (0xE8A08000)
#define SOC_ACPU_WD1_BASE_ADDR (0xE8A07000)
#define SOC_ACPU_WD0_BASE_ADDR (0xE8A06000)
#define SOC_ACPU_CTF_BASE_ADDR (0xE8A05000)
#define SOC_ACPU_PWM_BASE_ADDR (0xE8A04000)
#define SOC_ACPU_TIMER12_BASE_ADDR (0xE8A03000)
#define SOC_ACPU_TIMER11_BASE_ADDR (0xE8A02000)
#define SOC_ACPU_TIMER10_BASE_ADDR (0xE8A01000)
#define SOC_ACPU_TIMER9_BASE_ADDR (0xE8A00000)
#define SOC_ACPU_IOC_BASE_ADDR (0xE896C000)
#define SOC_ACPU_IPC_NS_BASE_ADDR (0xE896B000)
#define SOC_ACPU_IPC_BASE_ADDR (0xE896A000)
#define SOC_ACPU_NOC_VENC_Service_Target_BASE_ADDR (0xE8940000)
#define SOC_ACPU_NOC_VDEC_Service_Target_BASE_ADDR (0xE8930000)
#define SOC_ACPU_NOC_VCODECBUS_Service_Target_BASE_ADDR (0xE8920000)
#define SOC_ACPU_MEDIA2_CRG_BASE_ADDR (0xE8900000)
#define SOC_ACPU_VENC_BASE_ADDR (0xE8880000)
#define SOC_ACPU_VDEC_BASE_ADDR (0xE8800000)
#define SOC_ACPU_MEDIA1_CRG_BASE_ADDR (0xE87FF000)
#define SOC_ACPU_NOC_VIVO_Service_Target_BASE_ADDR (0xE86F0000)
#define SOC_ACPU_NOC_IVP32_Service_Target_BASE_ADDR (0xE86E0000)
#define SOC_ACPU_NOC_ISP_Service_Target_BASE_ADDR (0xE86D0000)
#define SOC_ACPU_NOC_DSS_Service_Target_BASE_ADDR (0xE86C0000)
#define SOC_ACPU_DSS_PROTECTED_BASE_ADDR (0xE8690000)
#define SOC_ACPU_DBCU0_SMMU_BASE_ADDR (0xE8680000)
#define SOC_ACPU_LDI0_BASE_ADDR (0xE867D000)
#define SOC_ACPU_DPP_BASE_ADDR (0xE8670000)
#define SOC_ACPU_DPE_BASE_ADDR (0xE866F000)
#define SOC_ACPU_DBUF0_BASE_ADDR (0xE866D000)
#define SOC_ACPU_SCF_BASE_ADDR (0xE8664000)
#define SOC_ACPU_OV2_BASE_ADDR (0xE8660800)
#define SOC_ACPU_OV0_BASE_ADDR (0xE8660000)
#define SOC_ACPU_WCH0_BASE_ADDR (0xE865A000)
#define SOC_ACPU_RCH_D1_BASE_ADDR (0xE8653000)
#define SOC_ACPU_RCH_D0_BASE_ADDR (0xE8652000)
#define SOC_ACPU_RCH_D3_BASE_ADDR (0xE8651000)
#define SOC_ACPU_RCH_D2_BASE_ADDR (0xE8650000)
#define SOC_ACPU_RCH_G1_BASE_ADDR (0xE8640000)
#define SOC_ACPU_RCH_V1_BASE_ADDR (0xE8628000)
#define SOC_ACPU_GLB_BASE_ADDR (0xE8612000)
#define SOC_ACPU_DBUG_BASE_ADDR (0xE8611000)
#define SOC_ACPU_MCTL_MUTEX_BASE_ADDR (0xE8610800)
#define SOC_ACPU_MCTL_SYS_BASE_ADDR (0xE8610000)
#define SOC_ACPU_DBCU0_MIF_BASE_ADDR (0xE860A000)
#define SOC_ACPU_DBCU1_AIF_BASE_ADDR (0xE8609000)
#define SOC_ACPU_DBCU0_AIF_BASE_ADDR (0xE8607000)
#define SOC_ACPU_CMD_BASE_ADDR (0xE8602000)
#define SOC_ACPU_ASC0_BASE_ADDR (0xE8601800)
#define SOC_ACPU_DSI0_BASE_ADDR (0xE8601000)
#define SOC_ACPU_MMBUF_CFG_BASE_ADDR (0xE8600000)
#define SOC_ACPU_ISP_R8_DTCM_BASE_ADDR (0xE85D0000)
#define SOC_ACPU_ISP_R8_ITCM_BASE_ADDR (0xE85C0000)
#define SOC_ACPU_SMMUv500_CFG_BASE_ADDR (0xE85B0000)
#define SOC_ACPU_ISP_R8_PERI_BASE_BASE_ADDR (0xE8590000)
#define SOC_ACPU_ISP_SUB_CTRL_BASE_ADDR (0xE8583000)
#define SOC_ACPU_ISP_IPC_BASE_ADDR (0xE8582000)
#define SOC_ACPU_ISP_TIMER_BASE_ADDR (0xE8581000)
#define SOC_ACPU_ISP_WDT_BASE_ADDR (0xE8580000)
#define SOC_ACPU_ISP_SMMU_BASE_ADDR (0xE8560000)
#define SOC_ACPU_ISP_Core_CFG_BASE_ADDR (0xE8400000)
#define SOC_ACPU_G3D_BASE_ADDR (0xE82C0000)
#define SOC_ACPU_CODEC_SSI_BASE_ADDR (0xE82B9000)
#define SOC_ACPU_GIC400_BASE_ADDR (0xE82B0000)
#define SOC_ACPU_CCI_CFG_BASE_ADDR (0xE8100000)
#define SOC_ACPU_DSP_ITCM_BASE_ADDR (0xE8080000)
#define SOC_ACPU_DSP_DTCM_BASE_ADDR (0xE8058000)
#define SOC_ACPU_CODEC_BASE_ADDR (0xE8052000)
#define SOC_ACPU_SLIMBUS_BASE_ADDR (0xE8050000)
#define SOC_ACPU_DSD_BASE_ADDR (0xE804FC00)
#define SOC_ACPU_ASP_CFG_BASE_ADDR (0xE804E000)
#define SOC_ACPU_ASP_WD_BASE_ADDR (0xE804D000)
#define SOC_ACPU_ASP_IPC_BASE_ADDR (0xE804C000)
#define SOC_ACPU_ASP_DMAC_BASE_ADDR (0xE804B000)
#define SOC_ACPU_ASP_TIMER1_BASE_ADDR (0xE804A000)
#define SOC_ACPU_ASP_TIMER0_BASE_ADDR (0xE8049000)
#define SOC_ACPU_ASP_GPIO_BASE_ADDR (0xE8048000)
#define SOC_ACPU_ASP_DMMU_BASE_ADDR (0xE8047000)
#define SOC_ACPU_SECRAM0_BASE_ADDR (0xE8000000)
#define SOC_ACPU_DSP0_L2C_BASE_ADDR (0xE3A02000)
#define SOC_ACPU_DSP0_L2MEM_BASE_ADDR (0xE3700000)
#define SOC_ACPU_DSP0_IMEM_BASE_ADDR (0xE3500000)
#define SOC_ACPU_DSP0_DMEM_BASE_ADDR (0xE3400000)
#define SOC_ACPU_GUTL_BBP_BASE_ADDR (0xE1000000)
#define SOC_ACPU_CCPU_LOCAL_MEM_BASE_ADDR (0xE0800000)
#define SOC_ACPU_CCPU0_DTCM_BASE_ADDR (0xE0720000)
#define SOC_ACPU_CCPU0_ITCM_BASE_ADDR (0xE0700000)
#define SOC_ACPU_AMON_MDM_BASE_ADDR (0xE0520000)
#define SOC_ACPU_NOC_SERVICE_BASE_ADDR (0xE0500000)
#define SOC_ACPU_DFC_BASE_ADDR (0xE0458000)
#define SOC_ACPU_UPACC_BASE_ADDR (0xE0453000)
#define SOC_ACPU_CIPHER_BASE_ADDR (0xE0452000)
#define SOC_ACPU_RSR_ACC_BASE_ADDR (0xE0444000)
#define SOC_ACPU_HDLC_BASE_ADDR (0xE0442000)
#define SOC_ACPU_IPCM_BASE_ADDR (0xE0441000)
#define SOC_ACPU_CICOM0_BASE_ADDR (0xE0440000)
#define SOC_ACPU_DW_AXI_MDM_CCPU_BASE_ADDR (0xE0223000)
#define SOC_ACPU_DW_AXI_MDM_MST_BASE_ADDR (0xE0222000)
#define SOC_ACPU_SYSCNT_MDM_BASE_ADDR (0xE0220000)
#define SOC_ACPU_MDM_RTC_BASE_ADDR (0xE0217000)
#define SOC_ACPU_WDT_DSP0_BASE_ADDR (0xE0212000)
#define SOC_ACPU_EDMA1_MDM_BASE_ADDR (0xE0210000)
#define SOC_ACPU_TIMER9_MDM_BASE_ADDR (0xE020F000)
#define SOC_ACPU_TIMER8_MDM_BASE_ADDR (0xE020E000)
#define SOC_ACPU_TIMER7_MDM_BASE_ADDR (0xE020D000)
#define SOC_ACPU_TIMER6_MDM_BASE_ADDR (0xE020C000)
#define SOC_ACPU_TIMER5_MDM_BASE_ADDR (0xE020B000)
#define SOC_ACPU_TIMER4_MDM_BASE_ADDR (0xE020A000)
#define SOC_ACPU_TIMER3_MDM_BASE_ADDR (0xE0209000)
#define SOC_ACPU_TIMER2_MDM_BASE_ADDR (0xE0208000)
#define SOC_ACPU_TIMER1_MDM_BASE_ADDR (0xE0207000)
#define SOC_ACPU_TIMER0_MDM_BASE_ADDR (0xE0206000)
#define SOC_ACPU_UART1_MDM_BASE_ADDR (0xE0205000)
#define SOC_ACPU_EDMA0_MDM_BASE_ADDR (0xE0204000)
#define SOC_ACPU_UART0_MDM_BASE_ADDR (0xE0203000)
#define SOC_ACPU_WDT_CCPU0_BASE_ADDR (0xE0201000)
#define SOC_ACPU_SYSCTRL_MDM_BASE_ADDR (0xE0200000)
#define SOC_ACPU_CCPU_PRIVATE_BASE_ADDR (0xE0100000)
#define SOC_ACPU_CCPU_L2C_BASE_ADDR (0xE0000000)
#define SOC_ACPU_DRAM_BASE_ADDR (0x00000000)
#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif
#endif