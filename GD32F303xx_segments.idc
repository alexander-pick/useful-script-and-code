#define UNLOADED_FILE   1
#include <idc.idc>

static main(void)
{
        Segments();           // segmentation
}

static Segments(void) {
	set_selector(0X1,0);
	add_segm_ex(0X1FFFF800,0X1FFFF80F,0X1,1,1,2,ADDSEG_NOSREG);
	SegRename(0X1FFFF800,"OPTION_BYTES");
	SegClass (0X1FFFF800,"OPTION_BYTES");
	SegDefReg(0x1FFFF800,"T",0x0);
	SegDefReg(0x1FFFF800,"DS",0x1);
	add_segm_ex(0X20000000,0X20017FFF,0,1,1,2,ADDSEG_NOSREG);
	SegRename(0X20000000,"RAM");
	SegClass (0X20000000,"RAM");
	SegDefReg(0x20000000,"T",0x0);
	SegDefReg(0x20000000,"DS",0x0);
	add_segm_ex(0X40000000,0X400003FF,0X1,1,1,2,ADDSEG_NOSREG);
	SegRename(0X40000000,"TIMER1");
	SegClass (0X40000000,"TIMER1");
	SegDefReg(0x40000000,"T",0x0);
	SegDefReg(0x40000000,"DS",0x1);
	add_segm_ex(0X40000400,0X400007FF,0X1,1,1,2,ADDSEG_NOSREG);
	SegRename(0X40000400,"TIMER2");
	SegClass (0X40000400,"TIMER2");
	SegDefReg(0x40000400,"T",0x0);
	SegDefReg(0x40000400,"DS",0x1);
	add_segm_ex(0X40000800,0X40000BFF,0X1,1,1,2,ADDSEG_NOSREG);
	SegRename(0X40000800,"TIMER3");
	SegClass (0X40000800,"TIMER3");
	SegDefReg(0x40000800,"T",0x0);
	SegDefReg(0x40000800,"DS",0x1);
	add_segm_ex(0X40000C00,0X40000FFF,0X1,1,1,2,ADDSEG_NOSREG);
	SegRename(0X40000C00,"TIMER4");
	SegClass (0X40000C00,"TIMER4");
	SegDefReg(0x40000C00,"T",0x0);
	SegDefReg(0x40000C00,"DS",0x1);
	add_segm_ex(0X40001000,0X400013FF,0X1,1,1,2,ADDSEG_NOSREG);
	SegRename(0X40001000,"TIMER5");
	SegClass (0X40001000,"TIMER5");
	SegDefReg(0x40001000,"T",0x0);
	SegDefReg(0x40001000,"DS",0x1);
	add_segm_ex(0X40001400,0X400017FF,0X1,1,1,2,ADDSEG_NOSREG);
	SegRename(0X40001400,"TIMER6");
	SegClass (0X40001400,"TIMER6");
	SegDefReg(0x40001400,"T",0x0);
	SegDefReg(0x40001400,"DS",0x1);
	add_segm_ex(0X40001800,0X40001BFF,0X1,1,1,2,ADDSEG_NOSREG);
	SegRename(0X40001800,"TIMER11");
	SegClass (0X40001800,"TIMER11");
	SegDefReg(0x40001800,"T",0x0);
	SegDefReg(0x40001800,"DS",0x1);
	add_segm_ex(0X40001C00,0X40001FFF,0X1,1,1,2,ADDSEG_NOSREG);
	SegRename(0X40001C00,"TIMER12");
	SegClass (0X40001C00,"TIMER12");
	SegDefReg(0x40001C00,"T",0x0);
	SegDefReg(0x40001C00,"DS",0x1);
	add_segm_ex(0X40002000,0X400023FF,0X1,1,1,2,ADDSEG_NOSREG);
	SegRename(0X40002000,"TIMER13");
	SegClass (0X40002000,"TIMER13");
	SegDefReg(0x40002000,"T",0x0);
	SegDefReg(0x40002000,"DS",0x1);
	add_segm_ex(0X40002800,0X40002BFF,0X1,1,1,2,ADDSEG_NOSREG);
	SegRename(0X40002800,"RTC");
	SegClass (0X40002800,"RTC");
	SegDefReg(0x40002800,"T",0x0);
	SegDefReg(0x40002800,"DS",0x1);
	add_segm_ex(0X40002C00,0X40002FFF,0X1,1,1,2,ADDSEG_NOSREG);
	SegRename(0X40002C00,"WWDGT");
	SegClass (0X40002C00,"WWDGT");
	SegDefReg(0x40002C00,"T",0x0);
	SegDefReg(0x40002C00,"DS",0x1);
	add_segm_ex(0X40003000,0X400033FF,0X1,1,1,2,ADDSEG_NOSREG);
	SegRename(0X40003000,"FWDGT");
	SegClass (0X40003000,"FWDGT");
	SegDefReg(0x40003000,"T",0x0);
	SegDefReg(0x40003000,"DS",0x1);
	add_segm_ex(0X40003800,0X40003BFF,0X1,1,1,2,ADDSEG_NOSREG);
	SegRename(0X40003800,"SPI1_I2S1");
	SegClass (0X40003800,"SPI1_I2S1");
	SegDefReg(0x40003800,"T",0x0);
	SegDefReg(0x40003800,"DS",0x1);
	add_segm_ex(0X40003C00,0X40003FFF,0X1,1,1,2,ADDSEG_NOSREG);
	SegRename(0X40003C00,"SPI2_I2S2");
	SegClass (0X40003C00,"SPI2_I2S2");
	SegDefReg(0x40003C00,"T",0x0);
	SegDefReg(0x40003C00,"DS",0x1);
	add_segm_ex(0X40004400,0X400047FF,0X1,1,1,2,ADDSEG_NOSREG);
	SegRename(0X40004400,"USART1");
	SegClass (0X40004400,"USART1");
	SegDefReg(0x40004400,"T",0x0);
	SegDefReg(0x40004400,"DS",0x1);
	add_segm_ex(0X40004800,0X40004BFF,0X1,1,1,2,ADDSEG_NOSREG);
	SegRename(0X40004800,"USART2");
	SegClass (0X40004800,"USART2");
	SegDefReg(0x40004800,"T",0x0);
	SegDefReg(0x40004800,"DS",0x1);
	add_segm_ex(0X40004C00,0X40004FFF,0X1,1,1,2,ADDSEG_NOSREG);
	SegRename(0X40004C00,"UART3");
	SegClass (0X40004C00,"UART3");
	SegDefReg(0x40004C00,"T",0x0);
	SegDefReg(0x40004C00,"DS",0x1);
	add_segm_ex(0X40005000,0X400053FF,0X1,1,1,2,ADDSEG_NOSREG);
	SegRename(0X40005000,"UART4");
	SegClass (0X40005000,"UART4");
	SegDefReg(0x40005000,"T",0x0);
	SegDefReg(0x40005000,"DS",0x1);
	add_segm_ex(0X40005400,0X400057FF,0X1,1,1,2,ADDSEG_NOSREG);
	SegRename(0X40005400,"I2C0");
	SegClass (0X40005400,"I2C0");
	SegDefReg(0x40005400,"T",0x0);
	SegDefReg(0x40005400,"DS",0x1);
	add_segm_ex(0X40005800,0X40005BFF,0X1,1,1,2,ADDSEG_NOSREG);
	SegRename(0X40005800,"I2C1");
	SegClass (0X40005800,"I2C1");
	SegDefReg(0x40005800,"T",0x0);
	SegDefReg(0x40005800,"DS",0x1);
	add_segm_ex(0X40005C00,0X40005FFF,0X1,1,1,2,ADDSEG_NOSREG);
	SegRename(0X40005C00,"USBD");
	SegClass (0X40005C00,"USBD");
	SegDefReg(0x40005C00,"T",0x0);
	SegDefReg(0x40005C00,"DS",0x1);
	add_segm_ex(0X40006000,0X400063FF,0X1,1,1,2,ADDSEG_NOSREG);
	SegRename(0X40006000,"Shared_USBD_CAN_SRAM");
	SegClass (0X40006000,"Shared_USBD_CAN_SRAM");
	SegDefReg(0x40006000,"T",0x0);
	SegDefReg(0x40006000,"DS",0x1);
	add_segm_ex(0X40006400,0X400067FF,0X1,1,1,2,ADDSEG_NOSREG);
	SegRename(0X40006400,"CAN0");
	SegClass (0X40006400,"CAN0");
	SegDefReg(0x40006400,"T",0x0);
	SegDefReg(0x40006400,"DS",0x1);
	add_segm_ex(0X40006C00,0X40006FFF,0X1,1,1,2,ADDSEG_NOSREG);
	SegRename(0X40006C00,"BKP");
	SegClass (0X40006C00,"BKP");
	SegDefReg(0x40006C00,"T",0x0);
	SegDefReg(0x40006C00,"DS",0x1);
	add_segm_ex(0X40007000,0X400073FF,0X1,1,1,2,ADDSEG_NOSREG);
	SegRename(0X40007000,"PMU");
	SegClass (0X40007000,"PMU");
	SegDefReg(0x40007000,"T",0x0);
	SegDefReg(0x40007000,"DS",0x1);
	add_segm_ex(0X40007400,0X400077FF,0X1,1,1,2,ADDSEG_NOSREG);
	SegRename(0X40007400,"DAC");
	SegClass (0X40007400,"DAC");
	SegDefReg(0x40007400,"T",0x0);
	SegDefReg(0x40007400,"DS",0x1);
	add_segm_ex(0X4000C800,0X4000CBFF,0X1,1,1,2,ADDSEG_NOSREG);
	SegRename(0X4000C800,"CTC");
	SegClass (0X4000C800,"CTC");
	SegDefReg(0x4000C800,"T",0x0);
	SegDefReg(0x4000C800,"DS",0x1);
	add_segm_ex(0X40010000,0X400103FF,0X1,1,1,2,ADDSEG_NOSREG);
	SegRename(0X40010000,"AFIO");
	SegClass (0X40010000,"AFIO");
	SegDefReg(0x40010000,"T",0x0);
	SegDefReg(0x40010000,"DS",0x1);
	add_segm_ex(0X40010400,0X400107FF,0X1,1,1,2,ADDSEG_NOSREG);
	SegRename(0X40010400,"EXTI");
	SegClass (0X40010400,"EXTI");
	SegDefReg(0x40010400,"T",0x0);
	SegDefReg(0x40010400,"DS",0x1);
	add_segm_ex(0X40010800,0X40010BFF,0X1,1,1,2,ADDSEG_NOSREG);
	SegRename(0X40010800,"GPIOA");
	SegClass (0X40010800,"GPIOA");
	SegDefReg(0x40010800,"T",0x0);
	SegDefReg(0x40010800,"DS",0x1);
	add_segm_ex(0X40010C00,0X40010FFF,0X1,1,1,2,ADDSEG_NOSREG);
	SegRename(0X40010C00,"GPIOB");
	SegClass (0X40010C00,"GPIOB");
	SegDefReg(0x40010C00,"T",0x0);
	SegDefReg(0x40010C00,"DS",0x1);
	add_segm_ex(0X40011000,0X400113FF,0X1,1,1,2,ADDSEG_NOSREG);
	SegRename(0X40011000,"GPIOC");
	SegClass (0X40011000,"GPIOC");
	SegDefReg(0x40011000,"T",0x0);
	SegDefReg(0x40011000,"DS",0x1);
	add_segm_ex(0X40011400,0X400117FF,0X1,1,1,2,ADDSEG_NOSREG);
	SegRename(0X40011400,"GPIOD");
	SegClass (0X40011400,"GPIOD");
	SegDefReg(0x40011400,"T",0x0);
	SegDefReg(0x40011400,"DS",0x1);
	add_segm_ex(0X40011800,0X40011BFF,0X1,1,1,2,ADDSEG_NOSREG);
	SegRename(0X40011800,"GPIOE");
	SegClass (0X40011800,"GPIOE");
	SegDefReg(0x40011800,"T",0x0);
	SegDefReg(0x40011800,"DS",0x1);
	add_segm_ex(0X40011C00,0X40011FFF,0X1,1,1,2,ADDSEG_NOSREG);
	SegRename(0X40011C00,"GPIOF");
	SegClass (0X40011C00,"GPIOF");
	SegDefReg(0x40011C00,"T",0x0);
	SegDefReg(0x40011C00,"DS",0x1);
	add_segm_ex(0X40012000,0X400123FF,0X1,1,1,2,ADDSEG_NOSREG);
	SegRename(0X40012000,"GPIOG");
	SegClass (0X40012000,"GPIOG");
	SegDefReg(0x40012000,"T",0x0);
	SegDefReg(0x40012000,"DS",0x1);
	add_segm_ex(0X40012400,0X400127FF,0X1,1,1,2,ADDSEG_NOSREG);
	SegRename(0X40012400,"ADC0");
	SegClass (0X40012400,"ADC0");
	SegDefReg(0x40012400,"T",0x0);
	SegDefReg(0x40012400,"DS",0x1);
	add_segm_ex(0X40012800,0X40012BFF,0X1,1,1,2,ADDSEG_NOSREG);
	SegRename(0X40012800,"ADC1");
	SegClass (0X40012800,"ADC1");
	SegDefReg(0x40012800,"T",0x0);
	SegDefReg(0x40012800,"DS",0x1);
	add_segm_ex(0X40012C00,0X40012FFF,0X1,1,1,2,ADDSEG_NOSREG);
	SegRename(0X40012C00,"TIMER0");
	SegClass (0X40012C00,"TIMER0");
	SegDefReg(0x40012C00,"T",0x0);
	SegDefReg(0x40012C00,"DS",0x1);
	add_segm_ex(0X40013000,0X400133FF,0X1,1,1,2,ADDSEG_NOSREG);
	SegRename(0X40013000,"SPI0");
	SegClass (0X40013000,"SPI0");
	SegDefReg(0x40013000,"T",0x0);
	SegDefReg(0x40013000,"DS",0x1);
	add_segm_ex(0X40013400,0X400137FF,0X1,1,1,2,ADDSEG_NOSREG);
	SegRename(0X40013400,"TIMER7");
	SegClass (0X40013400,"TIMER7");
	SegDefReg(0x40013400,"T",0x0);
	SegDefReg(0x40013400,"DS",0x1);
	add_segm_ex(0X40013800,0X40013BFF,0X1,1,1,2,ADDSEG_NOSREG);
	SegRename(0X40013800,"USART0");
	SegClass (0X40013800,"USART0");
	SegDefReg(0x40013800,"T",0x0);
	SegDefReg(0x40013800,"DS",0x1);
	add_segm_ex(0X40013C00,0X40013FFF,0X1,1,1,2,ADDSEG_NOSREG);
	SegRename(0X40013C00,"ADC2");
	SegClass (0X40013C00,"ADC2");
	SegDefReg(0x40013C00,"T",0x0);
	SegDefReg(0x40013C00,"DS",0x1);
	add_segm_ex(0X40014C00,0X40014FFF,0X1,1,1,2,ADDSEG_NOSREG);
	SegRename(0X40014C00,"TIMER8");
	SegClass (0X40014C00,"TIMER8");
	SegDefReg(0x40014C00,"T",0x0);
	SegDefReg(0x40014C00,"DS",0x1);
	add_segm_ex(0X40015000,0X400153FF,0X1,1,1,2,ADDSEG_NOSREG);
	SegRename(0X40015000,"TIMER9");
	SegClass (0X40015000,"TIMER9");
	SegDefReg(0x40015000,"T",0x0);
	SegDefReg(0x40015000,"DS",0x1);
	add_segm_ex(0X40015400,0X400157FF,0X1,1,1,2,ADDSEG_NOSREG);
	SegRename(0X40015400,"TIMER10");
	SegClass (0X40015400,"TIMER10");
	SegDefReg(0x40015400,"T",0x0);
	SegDefReg(0x40015400,"DS",0x1);
	add_segm_ex(0X40018000,0X400183FF,0X1,1,1,2,ADDSEG_NOSREG);
	SegRename(0X40018000,"SDIO");
	SegClass (0X40018000,"SDIO");
	SegDefReg(0x40018000,"T",0x0);
	SegDefReg(0x40018000,"DS",0x1);
	add_segm_ex(0X40020000,0X400203FF,0X1,1,1,2,ADDSEG_NOSREG);
	SegRename(0X40020000,"DMA0");
	SegClass (0X40020000,"DMA0");
	SegDefReg(0x40020000,"T",0x0);
	SegDefReg(0x40020000,"DS",0x1);
	add_segm_ex(0X40020400,0X400207FF,0X1,1,1,2,ADDSEG_NOSREG);
	SegRename(0X40020400,"DMA1");
	SegClass (0X40020400,"DMA1");
	SegDefReg(0x40020400,"T",0x0);
	SegDefReg(0x40020400,"DS",0x1);
	add_segm_ex(0X40021000,0X400213FF,0X1,1,1,2,ADDSEG_NOSREG);
	SegRename(0X40021000,"RCU");
	SegClass (0X40021000,"RCU");
	SegDefReg(0x40021000,"T",0x0);
	SegDefReg(0x40021000,"DS",0x1);
	add_segm_ex(0X40022000,0X400223FF,0X1,1,1,2,ADDSEG_NOSREG);
	SegRename(0X40022000,"FMC");
	SegClass (0X40022000,"FMC");
	SegDefReg(0x40022000,"T",0x0);
	SegDefReg(0x40022000,"DS",0x1);
	add_segm_ex(0X40023000,0X400233FF,0X1,1,1,2,ADDSEG_NOSREG);
	SegRename(0X40023000,"CRC");
	SegClass (0X40023000,"CRC");
	SegDefReg(0x40023000,"T",0x0);
	SegDefReg(0x40023000,"DS",0x1);
	set_inf_attr(INF_LOW_OFF, 0x8000000);
	set_inf_attr(INF_HIGH_OFF, 0x400233FF);
}

// End of file.
