#pragma once

#ifndef _MT_DEFINE_H_
#define _MT_DEFINE_H_

//��releaseģʽ��ʹ��assert
#if 1
#ifdef NDEBUG  //debug����
#undef NDEBUG
#endif
#else
#ifndef NDEBUG //�ٶ�����
#define NDEBUG
#endif
#endif

#define MAXVALUE 100000000
#define MY_EPS 0.000001
#define PI 3.141592653
typedef unsigned char BYTE;
// 32λ��ÿ������ռ�õ��ֽ���
#define BPP32_PER_PIXEL_BYTE 3

enum MT_COLOR
{
	MT_RED = 0,
	MT_GREEN,
	MT_BLUE,
	MT_ALPHA
};

#ifndef MIN
#define MIN(a,b)  ((a) > (b) ? (b) : (a))
#endif

#ifndef MAX
#define MAX(a,b)  ((a) < (b) ? (b) : (a))
#endif

#undef SAFE_DELETE
#define SAFE_DELETE(x) if((x)!=NULL){delete (x); (x)=NULL;}

#undef SAFE_DELETE_ARRAY
#define SAFE_DELETE_ARRAY(x) if((x)!=NULL){delete [] (x); (x)=NULL;}

#endif
