netmaj ��ȯ����

���Υɥ�����Ȥϡ�netmaj �ط��� �ץ���� �� ��ȯ���뤿��λ����Ǥ�����
�ޤ���ʬ�ʤ�ΤȤʤäƤ��ʤ����ᡢ�ҥ�����٤ȹͤ��Ƥ���������

I) ����

netmaj �ϼ��Τ褦�ʥ��饤����ȡ������й�¤�ˤʤäƤ��ꡢ
����ԥ塼���ץ쥤�䡼��ޤ�ƥץ쥤�䡼 �ץ����ϡ������������ˤʤä�
���ޤ���

�����Фϡ��ƥץ쥤�䡼���ºݤΥ�����Ǹ������󤷤�����ʤ��褦��
�ʤäƤ��ꡢ����ԥ塼���ץ쥤�䡼���������Ǥ��ʤ��褦�ˤʤäƤ��ޤ���


                        (netmaj �ץ�ȥ���)
 	                   <--------->   ���饤����ȥץ����1
      �����Хץ����     <--------->   ���饤����ȥץ����2
                           <--------->   ���饤����ȥץ����3
                           <--------->   ���饤����ȥץ����4


II) �ץ���๽¤

�ץ���๽¤�ϡ����Τ褦�ˤʤäƤ��ޤ���

    ���̴ؿ�
        global.c 	netmaj �ץ�ȥ��� ������
	mt.c		���δ���
	rv.c		�Ϥδ���
	hand.c		��δ���
	ahand.c		��Υ���ʬ��
	result.c	��Ƚ��
	log.c		����ǽ
	cvt.c		��ǡ��������Ѵ�
	pf.c		�ѡ����ʥ�ե�����(�ѥ�᡼��/����)
	pai_str.c	ʸ�����

    ���饤����ȶ��̴ؿ�
	analize.c	�Τ������򥢥르�ꥺ��

    ������
	server.c	�ᥤ��
	game.c 		������ʹ�

    ����ԥ塼���ץ졼�䡼
	auto.c 		�ᥤ��

III) netmaj �ץ�ȥ���

������/���饤����ȴ֤Υ�å������ˤϡ����Τ�Τ�����ޤ���
(�ºݤΥ�å����������ˤĤ��Ƥϡ�comm.h �򻲾�)

    ������->���饤�����

	��³�ط�
	MSG_CONNECT_DONE	��³����ץ饤  
	MSG_CONNECT_PLAYER	��³����	

	������ʹ�
	MSG_GAME    		Ⱦ�񥹥�����
	MSG_GAMEEND		Ⱦ��λ
	MSG_PLAY		�ɥ�������
	MSG_PLAYEND		�ɽ�λ

	�ǡ�������
	MSG_DORA		�ɥ�������
	MSG_URADORA		����ɥ�������
	MSG_RIVER		�Τ�������(����/�ݥ�/����/��� �������Ԥ�)
	MSG_RIVERIN		�Τ�������(����)
	MSG_HANDI		��������
	MSG_HANDC		��������
	MSG_HANDO		���餷���������
	MSG_RESULT		�ɤη������
	MSG_POINT		Ⱦ��λ������������
	MSG_ASK			�Ĥ�������

	TALK ��ǽ
	MSG_COMMENT2		TALK ��å���������


    ���饤�����->������
	
	MSG_CONNECT		��³�׵�
	MSG_KILL		�����н�λ�׵�
	MSG_ASK			�Τ�������
	MSG_REPL		����/�ݥ�/����/��� ����
	MSG_COMMENT		TALK ��å���������

IV) ����ԥ塼���ץ쥤�䡼�ץ���।�󥿡��ե�����

���δؿ���������뤳�Ȥˤ�ꡢ�����̤Υ���ԥ塼���ץ쥤�䡼
���Ȥ߹��ळ�Ȥ��Ǥ��ޤ���

	analize_init(gp) global_t *gp;
		�����
	analize(gp,p) global_t *gp; int p;
		�Τ�������
	analize_res(gp,howp) global_t *gp; int *howp;
		����/�ݥ�/����/�������

	(global_t �ˤϡ��Τ����� ���ξ��󤹤٤Ƥ��ޤޤ�Ƥ��ޤ�)

V) �桼�����󥿡��ե������ץ���।�󥿡��ե�����

cui.c ��˴ޤޤ�� �ץ���।�󥿡��ե������ˤ������ä��ץ�����
��������С�����饯�����󥿡��ե������ʳ��� �桼�����󥿡��ե�������
���ä��ץ���������Ǥ��ޤ���

	������ʹԾ�ɬ�ܤΤ��
	ui_init(gp)			�����
	ui_term()			��λ����
	ui_draw(gp,flag)		����
	ui_menu(gp,key)			��˥塼�ƽФ�
	ui_res(gp,howp)			����/�ݥ�/����/�������
	ui_choice(gp)			�Τ���/�ĥ�����
	ui_key()			��������
	ui_event_wait(gp,flag)		select ��ǽ

	��å���������(���ؿ��Ǥ�褤)
	ui_message_connecting()
	ui_message_connect()
	ui_message_disconnect()
	ui_message_reach(player)
	ui_message_tumo(player)
	ui_message_ron(player)
	ui_message_player(gp)
	ui_message_gend(gp)
	ui_message_play(gp)
	ui_result(gp)
