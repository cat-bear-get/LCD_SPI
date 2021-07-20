#ifndef __Text_H__
#define __Text_H__	 

#include "font.h"
#include "Text.h"
#include "string.h"

//////////////////////////////////////////////////////////////////////////////////	 

/******************************************************************************/		 
 					     
void Get_HzMat(uint8_t *code,uint8_t *mat,uint8_t size,uint8_t Font);			//�õ����ֵĵ�����

void Show_Font(uint16_t x,uint16_t y,uint8_t *font,uint8_t size,uint16_t color,uint8_t mode);					//��ָ��λ����ʾһ������

void Show_Str(uint16_t x,uint16_t y,uint16_t width,uint16_t height,uint8_t*str,uint8_t size, uint16_t color, uint8_t mode);	//��ָ��λ����ʾһ���ַ��� 

void Draw_Font16B(uint16_t x,uint16_t y, uint16_t color, uint8_t*str);//��ָ��λ��--��ʾ 16x16 ��С�ĵ����ַ���

void Draw_Font24B(uint16_t x,uint16_t y, uint16_t color, uint8_t*str);//��ָ��λ��--��ʾ 24x24 ��С�ĵ����ַ���


#endif
