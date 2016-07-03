/*
 * I) ��˴ؤ�����
 */

#ifndef RULEDEF_H
#define RULEDEF_H

/* �ԥ�ť�ʤ�: �Ĥ�ä��Ȥ��ϡ��ԥ�դ��Ĥ��ʤ� */
extern int RL_NOPINTUMO;

/* �֥ɥ�ʤ�: �֥ɥ�ϡ��ɥ鰷���ˤ��ʤ� */
extern int RL_NOAKADORA;

/* �ʤ�����ʤ�: �ʤ������ϥ���䥪���Ĥ��ʤ� */
extern int RL_NONAKITAN;

/* ���󥦥�ʤ�: ����ɥ�ϣ���Τ� */
extern int RL_NOKANURA;

/*
 * II) �����౿�Ӥ˴ؤ�����
 */

extern int tonpu;

/* �ȤӤʤ�: �Ǹ�ޤǥ�����򤹤� (���������ʤ�/Ȣ���׻��⤢��) */
extern int RL_NOFLY;

/* Ȣ���׻�����: 0 ���ʲ���ʬ�� 0 �������ˤ����׻����� */
extern int RL_UNDER;

/* �����೫�ϻ��λ����� */
extern int RL_STARTPOINT;       /* 25000 */

/* Ƭ�ϥͤ���(���֥��ʤ�) */
extern int RL_ATAMAHANE;

/* �����¤ʤ���Ƭ�ϥͤʤ��ξ��ϥȥ��󤢤��*/
extern int RL_NOSANCYAHO;

/* �Ҥ� 7700/�Ƥ�11600 �ϡ����Ӱ��� */
extern int RL_77MANGAN;

/* �����ؤ��ʤ�: ���ä��Ȥ������ä��פȶ����ؤ��ˤʤ��פ��ڤ�ʤ� */
extern int RL_NOKUIKAE;

/* ��ʥѥ��ˤ���: �绰������ʹ����ꤵ�������Ǥʧ�� */
extern int RL_PAO;

/*
 * III) ��˵�(���å�)�˴ؤ�����
 */


/* ������˵������  */
extern int RLC_YAKUMAN;         /* 2 */

/* ��ȯ��˵������  */
extern int RLC_IPPATU;          /* 1 */

/* ����ɥ��˵������  */
extern int RLC_URADORA;         /* 1 */

/* �֥ɥ��˵������ */
extern int RLC_AKADORA;         /* 1 */

/* �֥ɥ�������Τ�: �ʤ������ϸ�˵����Ĥ��ʤ� */
extern int RLC_NONAKIAKA;

/* �����륹�����ʤ�: �֥ɥ���罸�᤿�Ȥ��θ�˵�(2��)�ʤ� */
extern int RLC_NOALLSTARS;

/*
 * IV) ����(�����) �˴ؤ�����
 */

typedef int uma_t[12];

/* ���ޤʤ� */
static uma_t RLU_NONE = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

/* ���åȡ� */
static uma_t RLU_5_10 = { 10, 5, -5, -10, 10, 5, -5, -10, 10, 5, -5, -10 };

/* ���ġ� */
static uma_t RLU_10_20 =
  { 20, 10, -10, -20, 20, 10, -10, -20, 20, 10, -10, -20 };
/* ��󥹥꡼ */
static uma_t RLU_10_30 =
  { 30, 10, -10, -30, 30, 10, -10, -30, 30, 10, -10, -30 };
/* ���������� */
static uma_t RLU_7_5_3 = { 15, -3, -5, -7, 10, 5, -5, -10, 7, 5, 3, -15 };

/* ���ߥ��� */
static uma_t RLU_UNDER =
  { 30, -10, -10, -10, 20, 0, -10, -10, 10, 0, 0, -10 };

extern uma_t uma;

#endif
