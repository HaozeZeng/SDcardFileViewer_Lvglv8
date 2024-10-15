#ifndef _iic_H
#define _iic_H

#include "system.h"

/*  IIC_SCLʱ�Ӷ˿ڡ����Ŷ��� */
#define IIC_SCL_PORT 			GPIOB   
#define IIC_SCL_PIN 			(GPIO_PIN_6)
#define IIC_SCL_PORT_RCC		__HAL_RCC_GPIOB_CLK_ENABLE()

/*  IIC_SDAʱ�Ӷ˿ڡ����Ŷ��� */
#define IIC_SDA_PORT 			GPIOB  
#define IIC_SDA_PIN 			(GPIO_PIN_7)
#define IIC_SDA_PORT_RCC		__HAL_RCC_GPIOB_CLK_ENABLE()


//IO��������	 
#define IIC_SCL    PBout(6) //SCL
#define IIC_SDA    PBout(7) //SDA	 
#define READ_SDA   PBin(7)  //����SDA

//IIC���в�������
void IIC_Init(void);                //��ʼ��IIC��IO��				 
void IIC_Start(void);				//����IIC��ʼ�ź�
void IIC_Stop(void);	  			//����IICֹͣ�ź�
void IIC_Send_Byte(u8 txd);			//IIC����һ���ֽ�
u8 IIC_Read_Byte(u8 ack);//IIC��ȡһ���ֽ�
u8 IIC_Wait_Ack(void); 				//IIC�ȴ�ACK�ź�
void IIC_Ack(void);					//IIC����ACK�ź�
void IIC_NAck(void);				//IIC������ACK�ź�


#endif